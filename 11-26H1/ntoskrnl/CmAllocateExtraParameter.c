/*
 * XREFs of CmAllocateExtraParameter @ 0x140977AA4
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1408A5A98 (VrpPostOpenOrCreate.c)
 *     VrpPreOpenOrCreate @ 0x140975760 (VrpPreOpenOrCreate.c)
 * Callees:
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 */

__int64 CmAllocateExtraParameter()
{
  __int64 result; // rax

  result = CmpAllocatePool(0x100uLL);
  if ( result )
  {
    *(_QWORD *)(result + 40) = 32LL;
    *(_QWORD *)(result + 32) = VrpOriginalKeyNameParameterCleanup;
    *(_OWORD *)(result + 16) = VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID;
    result += 48LL;
  }
  return result;
}
