/*
 * XREFs of VmpConvertInvalidateFlagsToMapFlags @ 0x1406C49BC
 * Callers:
 *     VmpProcessInvalidateList @ 0x140512570 (VmpProcessInvalidateList.c)
 *     VmpInvalidateSingleGpaRange @ 0x1406C4FB4 (VmpInvalidateSingleGpaRange.c)
 * Callees:
 *     <none>
 */

int __fastcall VmpConvertInvalidateFlagsToMapFlags(int a1)
{
  int result; // eax

  result = (a1 << 31) + 16842752;
  if ( (a1 & 2) != 0 )
    return result | 0x8000;
  if ( (a1 & 4) != 0 )
    return result | 0x400000;
  return result;
}
