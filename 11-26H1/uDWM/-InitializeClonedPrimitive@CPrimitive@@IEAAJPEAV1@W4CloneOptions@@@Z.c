/*
 * XREFs of ?InitializeClonedPrimitive@CPrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800BD74C
 * Callers:
 *     ?InitializeClonedPrimitive@CColorPrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800BD66C (-InitializeClonedPrimitive@CColorPrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeClonedPrimitive@CNineGridImagePrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800BD6D0 (-InitializeClonedPrimitive@CNineGridImagePrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetSize@CPrimitive@@QEAAXAEBUtagSIZE@@@Z @ 0x180072CDC (-SetSize@CPrimitive@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParent@CPrimitive@@QEAAXAEBU_MARGINS@@@Z @ 0x18008D658 (-SetInsetFromParent@CPrimitive@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetOffset@CPrimitive@@QEAAXAEBUtagPOINT@@@Z @ 0x1800BD890 (-SetOffset@CPrimitive@@QEAAXAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CPrimitive::InitializeClonedPrimitive(__int64 a1, CPrimitive *a2)
{
  CPrimitive::SetOffset(a2, (const struct tagPOINT *)(a1 + 24));
  CPrimitive::SetSize((struct tagSIZE *)a2, (const struct tagSIZE *)(a1 + 32));
  CPrimitive::SetInsetFromParent(a2, (struct _MARGINS *)(a1 + 40));
  return 0LL;
}
