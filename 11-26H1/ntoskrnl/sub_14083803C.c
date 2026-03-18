/*
 * XREFs of sub_14083803C @ 0x14083803C
 * Callers:
 *     sub_1406CD530 @ 0x1406CD530 (sub_1406CD530.c)
 *     sub_140838310 @ 0x140838310 (sub_140838310.c)
 *     ExpGenuinePolicyPostProcess @ 0x1408386E0 (ExpGenuinePolicyPostProcess.c)
 *     sub_140839300 @ 0x140839300 (sub_140839300.c)
 *     sub_140839380 @ 0x140839380 (sub_140839380.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14083803C(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 4;
  if ( a3 < 4 )
    return 3221225507LL;
  if ( a1 )
    *a1 = 4;
  if ( a2 )
    *a2 = a5;
  return result;
}
