/*
 * XREFs of sub_1407A8E3C @ 0x1407A8E3C
 * Callers:
 *     sub_140649C60 @ 0x140649C60 (sub_140649C60.c)
 *     sub_1407A9100 @ 0x1407A9100 (sub_1407A9100.c)
 *     ExpGenuinePolicyPostProcess @ 0x1407A94D0 (ExpGenuinePolicyPostProcess.c)
 *     sub_1407AA100 @ 0x1407AA100 (sub_1407AA100.c)
 *     sub_1407AA180 @ 0x1407AA180 (sub_1407AA180.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407A8E3C(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
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
