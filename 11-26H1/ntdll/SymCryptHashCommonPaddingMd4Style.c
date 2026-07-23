/*
 * XREFs of SymCryptHashCommonPaddingMd4Style @ 0x180022BAC
 * Callers:
 *     SymCryptMd5Result @ 0x180022A30 (SymCryptMd5Result.c)
 *     MD5Final_0 @ 0x180022A90 (MD5Final_0.c)
 *     SymCryptMd4Result @ 0x18015E8D0 (SymCryptMd4Result.c)
 * Callees:
 *     SymCryptWipeAsm @ 0x180137700 (SymCryptWipeAsm.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SymCryptHashCommonPaddingMd4Style(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  void (__fastcall **v3)(char *, unsigned int *, __int64, __int64 *); // rdi
  unsigned int *v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF

  v2 = *a2;
  v3 = (void (__fastcall **)(char *, unsigned int *, __int64, __int64 *))(a1 + 24);
  v8 = 0LL;
  v5 = (unsigned int *)(a1 + 52);
  *((_BYTE *)a2 + v2 + 32) = 0x80;
  v6 = v2 + 1;
  if ( v6 > 0x38 )
  {
    SymCryptWipeAsm((char *)a2 + v6 + 32, 64 - v6);
    (*v3)((char *)a2 + *v5, a2 + 8, 64LL, &v8);
    v6 = 0LL;
  }
  SymCryptWipeAsm((char *)a2 + v6 + 32, 64 - v6);
  *((_QWORD *)a2 + 11) = 8LL * *((_QWORD *)a2 + 2);
  return ((__int64 (__fastcall *)(char *, unsigned int *, __int64, __int64 *))*v3)((char *)a2 + *v5, a2 + 8, 64LL, &v8);
}
