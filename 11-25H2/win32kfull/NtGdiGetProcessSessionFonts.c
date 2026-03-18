/*
 * XREFs of NtGdiGetProcessSessionFonts @ 0x1401FEE80
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1401FF2A4 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 */

__int64 __fastcall NtGdiGetProcessSessionFonts(void *a1, void *a2, void *a3, void *a4, void *a5)
{
  PVOID v6; // r13
  void **Pool2; // rsi
  unsigned __int16 *v8; // r15
  bool v9; // r14
  int CurrentServiceSessionId; // ebx
  void *v11; // rdx
  char v12; // al
  int v13; // ebx
  int ProcessSessionFonts; // eax
  __int64 i; // r14
  ULONG v17; // eax
  char v18; // [rsp+40h] [rbp-78h]
  unsigned int v19; // [rsp+44h] [rbp-74h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-70h] BYREF
  unsigned int v21; // [rsp+4Ch] [rbp-6Ch] BYREF
  unsigned int v22; // [rsp+50h] [rbp-68h] BYREF
  PVOID P; // [rsp+58h] [rbp-60h]
  void **v24; // [rsp+60h] [rbp-58h]
  unsigned __int16 *v25; // [rsp+68h] [rbp-50h]
  PVOID Object; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-40h]

  v21 = 0;
  v22 = 0;
  v20 = 0;
  v19 = 0;
  v6 = 0LL;
  P = 0LL;
  Pool2 = 0LL;
  v24 = 0LL;
  v8 = 0LL;
  v25 = 0LL;
  v9 = 0;
  CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
  if ( (unsigned int)W32GetCurrentWin32kSessionId() != CurrentServiceSessionId )
    return 0LL;
  GreProbeAndReadFromUntrustedVa(&v20, 4uLL, a3, 4uLL, 4uLL);
  GreProbeAndReadFromUntrustedVa(&v19, 4uLL, a5, 4uLL, 4uLL);
  v11 = (void *)(8LL * v20);
  Object = v11;
  if ( (unsigned __int64)v11 > 0xFFFFFFFF || (v27 = 2LL * v19, v27 > 0xFFFFFFFF) )
    ExRaiseStatus(-1073741675);
  if ( v20 )
  {
    v12 = 0;
    v18 = 0;
  }
  else
  {
    v12 = 1;
    v18 = 1;
    if ( a2 || a4 || v19 )
    {
      v13 = -1073741811;
      goto LABEL_34;
    }
  }
  if ( v12
    || (Pool2 = (void **)ExAllocatePool2(256LL, v11, 1886221383LL), (v24 = Pool2) != 0LL)
    && (v8 = (unsigned __int16 *)ExAllocatePool2(258LL, 2LL * v19, 1886221383LL), (v25 = v8) != 0LL) )
  {
    Object = 0LL;
    v13 = ObReferenceObjectByHandle(a1, 0x40u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v6 = Object;
    P = Object;
    if ( v13 >= 0 )
    {
      ProcessSessionFonts = GetProcessSessionFonts((PRKPROCESS)Object, v20, v19, &v21, &v22, Pool2, v8);
      v13 = ProcessSessionFonts;
      if ( ProcessSessionFonts >= 0 )
        v9 = v18 == 0;
      if ( (int)(ProcessSessionFonts + 0x80000000) < 0 || ProcessSessionFonts == -1073741789 )
      {
        GreProbeAndWriteToUntrustedVa(a3, 4uLL, &v21, 4uLL, 4uLL);
        GreProbeAndWriteToUntrustedVa(a5, 4uLL, &v22, 4uLL, 4uLL);
      }
      if ( v13 >= 0 && !v18 )
      {
        GreProbeAndWriteToUntrustedVa(a2, 8LL * v20, Pool2, 8LL * v21, 4uLL);
        GreProbeAndWriteToUntrustedVa(a4, 2LL * v19, v8, 2LL * v22, 4uLL);
      }
    }
    if ( v13 >= 0 )
      goto LABEL_20;
  }
  else
  {
    v13 = -1073741801;
  }
LABEL_34:
  if ( v9 )
  {
    for ( i = 0LL; (unsigned int)i < v21; i = (unsigned int)(i + 1) )
      NtClose(Pool2[i]);
  }
LABEL_20:
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x706D7447u);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x706D7447u);
  if ( v13 < 0 )
  {
    v17 = RtlNtStatusToDosErrorNoTeb(v13);
    EngSetLastError(v17);
  }
  return (unsigned int)v13;
}
