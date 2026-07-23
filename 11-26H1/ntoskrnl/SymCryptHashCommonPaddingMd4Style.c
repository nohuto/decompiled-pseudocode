/*
 * XREFs of SymCryptHashCommonPaddingMd4Style @ 0x14056747C
 * Callers:
 *     SymCryptMd5Result @ 0x1405648A0 (SymCryptMd5Result.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140727520 (_guard_dispatch_icall_nop.c)
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
    SymCryptWipe((__int64)a2 + v6 + 32, 64 - v6);
    (*v3)((char *)a2 + *v5, a2 + 8, 64LL, &v8);
    v6 = 0LL;
  }
  SymCryptWipe((__int64)a2 + v6 + 32, 64 - v6);
  *((_QWORD *)a2 + 11) = 8LL * *((_QWORD *)a2 + 2);
  return ((__int64 (__fastcall *)(char *, unsigned int *, __int64, __int64 *))*v3)((char *)a2 + *v5, a2 + 8, 64LL, &v8);
}
