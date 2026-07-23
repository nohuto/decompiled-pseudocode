/*
 * XREFs of ExpWnfSubscribeWnfStateChange @ 0x1409C46A4
 * Callers:
 *     ExSubscribeWnfStateChange @ 0x1409C4400 (ExSubscribeWnfStateChange.c)
 *     NtSubscribeWnfStateChange @ 0x1409C45C0 (NtSubscribeWnfStateChange.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExpWnfNotifySubscription @ 0x1409C38A8 (ExpWnfNotifySubscription.c)
 *     ExpWnfCheckCallerAccess @ 0x1409C450C (ExpWnfCheckCallerAccess.c)
 *     ExpCaptureWnfStateName @ 0x1409C58F8 (ExpCaptureWnfStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x1409C6D00 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfLookupNameInstance @ 0x1409C7310 (ExpWnfLookupNameInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x1409C8720 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfLookupPermanentName @ 0x1409C8E98 (ExpWnfLookupPermanentName.c)
 *     ExpWnfCreateNameInstance @ 0x1409CB5E8 (ExpWnfCreateNameInstance.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfSubscribeWnfStateChange(
        __int64 a1,
        __int64 a2,
        void *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8)
{
  ACCESS_MASK v8; // r14d
  int NameInstance; // esi
  _KPROCESS *v10; // rbx
  __int64 v11; // r15
  __int64 v12; // r9
  int v13; // r13d
  _KPROCESS *v14; // rax
  int v15; // eax
  int v16; // r13d
  __int64 v17; // rbx
  BOOL v18; // ecx
  int v19; // r8d
  unsigned int v20; // r8d
  _DWORD v22[4]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v23; // [rsp+70h] [rbp-58h] BYREF
  PVOID P; // [rsp+78h] [rbp-50h] BYREF
  _KPROCESS *v25; // [rsp+80h] [rbp-48h]
  int v26[2]; // [rsp+88h] [rbp-40h] BYREF
  struct _EX_RUNDOWN_REF *v27; // [rsp+90h] [rbp-38h] BYREF

  v25 = 0LL;
  v22[0] = 0;
  P = 0LL;
  *(_QWORD *)v26 = 0LL;
  v23 = 0LL;
  v27 = 0LL;
  v8 = 0;
  NameInstance = ExpCaptureWnfStateName(a3);
  v22[2] = NameInstance;
  if ( NameInstance >= 0 )
  {
    if ( (a7 & 0xFFFFFFE0) != 0 )
    {
      NameInstance = -1073741811;
      goto LABEL_24;
    }
    v10 = v25;
    v11 = ((unsigned __int64)v25 >> 4) & 3;
    v12 = ((unsigned __int64)v25 >> 6) & 0xF;
    if ( a8 )
    {
      v13 = 0;
      v8 = (a7 & 0x11) != 0;
      if ( (a7 & 0xFFFFFFEE) != 0 )
        v8 |= 2u;
    }
    else
    {
      v13 = 1;
    }
    v14 = a8 ? KeGetCurrentThread()->ApcState.Process : PsInitialSystemProcess;
    v25 = v14;
    NameInstance = ExpWnfResolveScopeInstance((int)v26, (int)v14, 0, v12, 0LL);
    if ( NameInstance >= 0 )
    {
      v15 = ExpWnfLookupNameInstance(*(_QWORD *)v26, v10, &v23);
      NameInstance = v15;
      if ( v15 != -1073741772 || (_DWORD)v11 == 3 )
      {
        if ( v15 < 0 )
          goto LABEL_24;
        if ( !v13 )
        {
          NameInstance = ExpWnfCheckCallerAccess(*(PSECURITY_DESCRIPTOR *)(v23 + 72), v8);
          if ( NameInstance < 0 )
            goto LABEL_24;
        }
        v16 = (int)v25;
      }
      else
      {
        NameInstance = ExpWnfLookupPermanentName(v10, &P);
        if ( NameInstance < 0 )
          goto LABEL_24;
        if ( !v13 )
        {
          NameInstance = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), v8);
          if ( NameInstance < 0 )
            goto LABEL_24;
        }
        v16 = (int)v25;
        NameInstance = ExpWnfCreateNameInstance(v26[0], (_DWORD)v10, (_DWORD)P, (_DWORD)v25, (__int64)&v23);
        ExFreePoolWithTag(P, 0x20666E57u);
        P = 0LL;
        if ( NameInstance < 0 )
          goto LABEL_24;
      }
      v17 = v23;
      NameInstance = ExpWnfSubscribeNameInstance(v23, v16, a5, a6, a4, a7, a8, a1, a2, (__int64)&v27, (__int64)v22);
      if ( NameInstance >= 0 )
      {
        v18 = 0;
        if ( a4 != *(_DWORD *)(v17 + 96) )
          v18 = *(_QWORD *)(v17 + 88) != 0LL;
        v19 = v18 | 8;
        if ( *(_DWORD *)(v23 + 164) )
          v19 = v18;
        if ( !v22[0] )
        {
          if ( *(_DWORD *)(v23 + 160) )
            v19 |= 2u;
          else
            v19 |= 4u;
        }
        v20 = a7 & ~v22[0] & v19;
        if ( v20 )
          ExpWnfNotifySubscription(v23, (__int64)v27, v20, (struct _KLOCK_ENTRIES *)(a8 != 0));
      }
    }
  }
LABEL_24:
  if ( v27 )
    ExReleaseRundownProtection_0(v27 + 1);
  if ( v23 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v23 + 8));
  if ( *(_QWORD *)v26 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v26 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)NameInstance;
}
