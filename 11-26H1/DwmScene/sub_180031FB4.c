/*
 * XREFs of sub_180031FB4 @ 0x180031FB4
 * Callers:
 *     sub_18003696C @ 0x18003696C (sub_18003696C.c)
 *     sub_180055168 @ 0x180055168 (sub_180055168.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180031FB4(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm1
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 8) )
  {
    o_abort();
    __debugbreak();
  }
  v2 = *a2;
  result = a1;
  *a2 = 0LL;
  *(_OWORD *)a1 = v2;
  return result;
}
