/*
 * XREFs of VfUtilGetDriverImageSize @ 0x140C21790
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetDriversGetNode @ 0x1403B7A04 (VfTargetDriversGetNode.c)
 */

__int64 __fastcall VfUtilGetDriverImageSize(__int64 a1)
{
  __int64 result; // rax

  result = VfTargetDriversGetNode(a1);
  if ( result )
    return *(_QWORD *)(result + 8);
  return result;
}
