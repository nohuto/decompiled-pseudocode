/*
 * XREFs of ??$_Fnv1a_append_value@_J@std@@YA_K_KAEB_J@Z @ 0x18007869C
 * Callers:
 *     ??$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z @ 0x18007868C (--$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Fnv1a_append_value<__int64>(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 i; // r8
  __int64 v4; // rax

  v2 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v4 = *(unsigned __int8 *)(a2 + i);
    v2 = 0x100000001B3LL * (v4 ^ v2);
  }
  return v2;
}
