/*
 * XREFs of HashpVerifyPkcs1Signature @ 0x1408B2320
 * Callers:
 *     MinCryptVerifySignedHash2 @ 0x1408A68C0 (MinCryptVerifySignedHash2.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     SymCryptLoadMsbFirstUint64 @ 0x140558898 (SymCryptLoadMsbFirstUint64.c)
 *     SymCryptRsakeyCreate @ 0x14055C5E0 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeySetValue @ 0x14055C8C0 (SymCryptRsakeySetValue.c)
 *     SymCryptRsakeySizeofModulus @ 0x14055D0CC (SymCryptRsakeySizeofModulus.c)
 *     SymCryptRsakeyWipe @ 0x14055D0E0 (SymCryptRsakeyWipe.c)
 *     SymCryptDigitsFromBits @ 0x14055E5B8 (SymCryptDigitsFromBits.c)
 *     SymCryptIntBitsizeOfValue @ 0x14055E660 (SymCryptIntBitsizeOfValue.c)
 *     SymCryptIntCreate @ 0x14055E6D8 (SymCryptIntCreate.c)
 *     SymCryptIntSetValue @ 0x14055E89C (SymCryptIntSetValue.c)
 *     SymCryptIntWipe @ 0x14055E9BC (SymCryptIntWipe.c)
 *     SymCryptRsaPkcs1Verify @ 0x1405611D4 (SymCryptRsaPkcs1Verify.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HashpVerifyPkcs1Signature(
        int a1,
        const void *a2,
        size_t a3,
        _BYTE *a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned __int64 a9,
        char a10)
{
  __int64 Pool2; // rax
  void *v13; // rdi
  unsigned int v14; // ebx
  char *v15; // r15
  __int64 v16; // rbp
  unsigned int v17; // r14d
  _DWORD *v18; // rsi
  int v19; // ecx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  __int64 *v24; // rax
  char v26; // [rsp+50h] [rbp-78h]
  __int64 v27; // [rsp+58h] [rbp-70h] BYREF
  __int64 v28; // [rsp+60h] [rbp-68h]
  size_t v29; // [rsp+68h] [rbp-60h]
  const void *v30; // [rsp+70h] [rbp-58h]
  __int128 v31; // [rsp+78h] [rbp-50h] BYREF

  v28 = a8;
  v29 = a3;
  v30 = a2;
  v27 = 0LL;
  v26 = byte_140EF00E0;
  v31 = 0LL;
  if ( byte_140EF00E0 )
    Pool2 = (__int64)ExAllocateFromNPagedLookasideList(&stru_140E65A40);
  else
    Pool2 = ExAllocatePool2(0x102uLL);
  v13 = (void *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  if ( a5 > 8 )
    goto LABEL_7;
  v15 = (char *)(Pool2 - ((Pool2 + 31) & 0xFFFFFFFFFFFFFFE0uLL));
  SymCryptDigitsFromBits();
  v16 = SymCryptIntCreate();
  if ( !v16
    || (SymCryptIntSetValue(), v17 = SymCryptIntBitsizeOfValue(), SymCryptIntWipe(v16), v17 < 0x400)
    || (DWORD1(v31) = v17,
        LODWORD(v31) = 1,
        *((_QWORD *)&v31 + 1) = 0x100000000LL,
        (v18 = (_DWORD *)SymCryptRsakeyCreate(
                           ((unsigned __int64)v13 + 31) & 0xFFFFFFFFFFFFFFE0uLL,
                           (unsigned __int64)(v15 + 2592),
                           (unsigned int *)&v31)) == 0LL) )
  {
LABEL_7:
    v14 = -1073740760;
    goto LABEL_29;
  }
  if ( !(unsigned int)SymCryptLoadMsbFirstUint64(a4, a5, &v27)
    && !(unsigned int)SymCryptRsakeySetValue(a6, a7, (int)&v27, 1, 0LL, 0LL, 0, 2, 4096, (__int64)v18)
    && a9 == (unsigned int)SymCryptRsakeySizeofModulus((__int64)v18) )
  {
    v19 = 0;
    if ( (a10 & 1) != 0 )
      v19 = 2;
    v20 = a1 - 32771;
    if ( !v20 )
    {
      v24 = &SymCryptMd5OidList;
      goto LABEL_27;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
      v24 = &SymCryptSha1OidList;
      goto LABEL_27;
    }
    v22 = v21 - 8;
    if ( !v22 )
    {
      v24 = &SymCryptSha256OidList;
      goto LABEL_27;
    }
    v23 = v22 - 1;
    if ( !v23 )
    {
      v24 = &SymCryptSha384OidList;
      goto LABEL_27;
    }
    if ( v23 == 1 )
    {
      v24 = &SymCryptSha512OidList;
LABEL_27:
      v14 = (unsigned int)SymCryptRsaPkcs1Verify(v18, v30, v29, v28, a9, 2, (__int64)v24, 2uLL, v19) != 0
          ? 0xC0000428
          : 0;
      goto LABEL_28;
    }
  }
  v14 = -1073740760;
LABEL_28:
  SymCryptRsakeyWipe((__int64)v18);
LABEL_29:
  if ( v26 )
    ExFreeToNPagedLookasideList(&stru_140E65A40, v13);
  else
    ExFreePoolWithTag(v13, 0x72634943u);
  return v14;
}
