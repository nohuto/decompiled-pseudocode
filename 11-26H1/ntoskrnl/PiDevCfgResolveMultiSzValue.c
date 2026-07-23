/*
 * XREFs of PiDevCfgResolveMultiSzValue @ 0x140B461D8
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x140A49C64 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PnpValidateStringData @ 0x1404E663C (PnpValidateStringData.c)
 *     PnpValidateMultiSzData @ 0x1404EE954 (PnpValidateMultiSzData.c)
 *     PnpMultiSzContainsString @ 0x1404F40FC (PnpMultiSzContainsString.c)
 *     PnpValidateRegistryMultiSz @ 0x1405006FC (PnpValidateRegistryMultiSz.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveMultiSzValue(
        int a1,
        unsigned int a2,
        _WORD *a3,
        int a4,
        HANDLE KeyHandle,
        const WCHAR *a6,
        unsigned int *a7,
        _QWORD *a8)
{
  char *Pool2; // r15
  size_t v9; // rbx
  _WORD *v11; // r14
  unsigned int v13; // edi
  char v14; // al
  NTSTATUS RegistryValue; // eax
  unsigned int *v16; // r13
  unsigned int v17; // esi
  unsigned int v18; // eax
  int v19; // r12d
  wchar_t *v20; // r13
  __int64 v21; // rax
  unsigned int v22; // r12d
  const WCHAR *v23; // r12
  int v24; // edi
  bool v25; // zf
  unsigned int v26; // ebx
  unsigned int v27; // eax
  char *v28; // rax
  NTSTATUS v30; // [rsp+20h] [rbp-30h]
  unsigned int v31; // [rsp+20h] [rbp-30h]
  PVOID P; // [rsp+28h] [rbp-28h] BYREF
  void *Src[2]; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  Pool2 = 0LL;
  v9 = a2;
  P = 0LL;
  v11 = a3;
  *a7 = 0;
  DestinationString = 0LL;
  *(_OWORD *)Src = 0LL;
  *a8 = 0LL;
  if ( a1 == 1 || a1 == 2 )
  {
    v14 = PnpValidateStringData((__int64)a3, a2);
  }
  else
  {
    if ( a1 != 7 )
      return (unsigned int)-1073741823;
    v14 = PnpValidateMultiSzData(a3, a2);
  }
  if ( !v14 )
    return (unsigned int)-1073741823;
  RegistryValue = IopGetRegistryValue(KeyHandle, a6, 0, &P);
  v16 = (unsigned int *)P;
  v13 = RegistryValue;
  v30 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( !PnpValidateRegistryMultiSz(P) )
    {
      v13 = -1073741823;
      goto LABEL_56;
    }
    if ( (a4 & 0x40000) != 0 )
    {
      v17 = v16[3];
      Src[0] = (char *)v16 + v16[2];
      if ( !v17 )
        v17 = 2;
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      v18 = 0;
      if ( !Pool2 )
        goto LABEL_15;
      if ( v17 > 2 )
      {
        memmove(Pool2, Src[0], v17);
        v18 = v17 - 2;
      }
      v19 = a4 & 0x20000;
      v31 = v18;
      if ( a1 != 7 )
      {
        if ( v19 || v17 == 2 || !PnpMultiSzContainsString((wchar_t *)Src[0], v11) )
        {
          memmove(&Pool2[v31], v11, v9);
          v17 += v9;
        }
        goto LABEL_53;
      }
      if ( v19 )
      {
        memmove(&Pool2[v18], v11, v9);
        v17 = v17 + v9 - 2;
        goto LABEL_53;
      }
      if ( !*v11 )
        goto LABEL_53;
      v20 = (wchar_t *)Src[0];
      do
      {
        v21 = -1LL;
        do
          ++v21;
        while ( v11[v21] );
        v22 = 2 * v21 + 2;
        if ( !PnpMultiSzContainsString(v20, v11) )
        {
          memmove(&Pool2[v31], v11, v22);
          v31 += v22;
          v17 += v22;
        }
        v11 += (unsigned __int64)v22 >> 1;
      }
      while ( *v11 );
    }
    else
    {
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
      {
LABEL_15:
        v13 = -1073741670;
        goto LABEL_56;
      }
      if ( a1 != 7 )
        RtlInitUnicodeString(&DestinationString, v11);
      v23 = (const WCHAR *)((char *)v16 + v16[2]);
      v17 = 2;
      if ( !*v23 )
        goto LABEL_53;
      v24 = 0;
      do
      {
        RtlInitUnicodeString((PUNICODE_STRING)Src, v23);
        if ( a1 == 7 )
          v25 = PnpMultiSzContainsString(v11, (wchar_t *)Src[1]) == 0LL;
        else
          v25 = RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)Src, 1u) == 0;
        if ( v25 )
        {
          v26 = LOWORD(Src[0]) + 2;
          memmove(&Pool2[v24], Src[1], v26);
          v24 += v26;
          v17 += v26;
        }
        v23 += ((unsigned __int64)LOWORD(Src[0]) >> 1) + 1;
      }
      while ( *v23 );
      v13 = v30;
    }
    v16 = (unsigned int *)P;
    goto LABEL_53;
  }
  if ( RegistryValue != -1073741772 )
    goto LABEL_56;
  v13 = 0;
  if ( (a4 & 0x40000) == 0 )
  {
    v17 = 0;
    goto LABEL_55;
  }
  v27 = v9 + 2;
  if ( a1 == 7 )
    v27 = v9;
  v17 = v27;
  v28 = (char *)ExAllocatePool2(0x100uLL);
  Pool2 = v28;
  if ( !v28 )
    goto LABEL_15;
  memmove(v28, v11, v9);
LABEL_53:
  *(_WORD *)&Pool2[2 * ((unsigned __int64)v17 >> 1) - 2] = 0;
LABEL_55:
  *a7 = v17;
  *a8 = Pool2;
LABEL_56:
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  return v13;
}
