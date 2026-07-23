/*
 * XREFs of DrvDbGetDeviceIdDriverInfMatches @ 0x1409757A0
 * Callers:
 *     DrvDbGetDeviceIdMappedProperty @ 0x140976018 (DrvDbGetDeviceIdMappedProperty.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140454380 (RtlStringCchCopyExW.c)
 *     _RegRtlEnumValue @ 0x140975A14 (_RegRtlEnumValue.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x140975C14 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _PnpCtxRegQueryInfoKey @ 0x140975D5C (_PnpCtxRegQueryInfoKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbGetDeviceIdDriverInfMatches(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        char a6)
{
  _DWORD *v6; // r12
  __int64 v7; // r13
  void *v8; // rsi
  int v9; // ebx
  int v10; // r14d
  char *Pool2; // rdi
  ULONG i; // r15d
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // esi
  int v17; // r13d
  __int64 v18; // rax
  int v20; // eax
  int v21; // ecx
  ULONG v22; // [rsp+40h] [rbp-18h] BYREF
  int v23; // [rsp+44h] [rbp-14h] BYREF
  __int64 v24[2]; // [rsp+48h] [rbp-10h] BYREF
  int v25; // [rsp+A0h] [rbp+48h] BYREF
  int v26; // [rsp+A4h] [rbp+4Ch]
  void *v27; // [rsp+A8h] [rbp+50h]
  __int64 v28; // [rsp+B0h] [rbp+58h]
  unsigned int v29; // [rsp+B8h] [rbp+60h]

  v29 = a4;
  v28 = a3;
  v27 = a2;
  v26 = HIDWORD(a1);
  v6 = (_DWORD *)a5;
  v7 = a3;
  v22 = 0;
  v8 = a2;
  v25 = 0;
  v24[0] = 0LL;
  v23 = 0;
  *(_DWORD *)a5 = 0;
  v9 = PnpCtxRegQueryInfoKey(a1, a2, 0LL, 0LL, &v22, &v25, 0LL);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v10 = v25 + 1;
  if ( !v22 )
    return (unsigned int)-1073741275;
  if ( a6 )
    v10 = v25 + 17;
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  for ( i = 0; ; ++i )
  {
    if ( i >= v22 )
      goto LABEL_25;
    v25 = v10;
    if ( !a6 )
      break;
    LODWORD(a5) = 4;
    v13 = RegRtlEnumValue(v8, i, Pool2, (__int64)v24, &v23, (__int64)&a5);
    if ( v13 < 0 )
    {
      v9 = 0;
      if ( v13 != -2147483622 )
        v9 = v13;
LABEL_25:
      if ( v9 < 0 )
        goto LABEL_30;
      goto LABEL_26;
    }
    if ( !v25 )
      goto LABEL_39;
    if ( LODWORD(v24[0]) == 3 )
    {
      if ( (_DWORD)a5 != 4 )
        goto LABEL_39;
    }
    else
    {
      v23 = 0;
    }
    v9 = DrvDbBuildDeviceIdDriverInfMatch(v14, &v23, &Pool2[2 * v25], (unsigned int)(v10 - v25));
    if ( v9 < 0 )
      goto LABEL_30;
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)&Pool2[2 * v15] );
    v16 = v15 + 1;
LABEL_17:
    if ( v7 )
    {
      v17 = v16 + HIDWORD(v24[0]);
      if ( v16 + HIDWORD(v24[0]) < v29 )
      {
        RtlStringCchCopyExW(
          (NTSTRSAFE_PWSTR)(v28 + 2LL * HIDWORD(v24[0])),
          v29 - HIDWORD(v24[0]),
          (NTSTRSAFE_PCWSTR)Pool2,
          0LL,
          0LL,
          0x900u);
        HIDWORD(v24[0]) = v17;
      }
      v7 = v28;
    }
    *v6 += v16;
    v8 = v27;
  }
  v20 = RegRtlEnumValue(v8, i, Pool2, (__int64)v24, 0LL, 0LL);
  v9 = v20;
  if ( v20 >= 0 )
  {
    v21 = v25;
    if ( !v25 )
    {
LABEL_39:
      v9 = -1073741595;
      goto LABEL_30;
    }
    *(_WORD *)&Pool2[2 * v25] = 0;
    v16 = v21 + 1;
    goto LABEL_17;
  }
  if ( v20 != -2147483622 )
    goto LABEL_30;
  v9 = 0;
LABEL_26:
  v18 = (unsigned int)*v6;
  if ( (_DWORD)v18 )
  {
    *v6 = v18 + 1;
    if ( v7 && (int)v18 + 1 <= v29 )
      *(_WORD *)(v7 + 2 * v18) = 0;
    else
      v9 = -1073741789;
  }
  else
  {
    v9 = -1073741275;
  }
LABEL_30:
  ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v9;
}
