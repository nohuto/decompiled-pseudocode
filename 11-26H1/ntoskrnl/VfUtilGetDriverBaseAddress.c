/*
 * XREFs of VfUtilGetDriverBaseAddress @ 0x140C27750
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetDriversGetNode @ 0x1403C1904 (VfTargetDriversGetNode.c)
 */

__int64 __fastcall VfUtilGetDriverBaseAddress(__int64 a1)
{
  __int64 result; // rax

  result = VfTargetDriversGetNode(a1);
  if ( result )
    return *(_QWORD *)result;
  return result;
}
