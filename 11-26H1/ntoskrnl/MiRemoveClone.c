/*
 * XREFs of MiRemoveClone @ 0x1404A9318
 * Callers:
 *     MiDeleteCloneDescriptor @ 0x1404A92D8 (MiDeleteCloneDescriptor.c)
 *     MiCloneTreeUpdate @ 0x1404EE49C (MiCloneTreeUpdate.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 */

char __fastcall MiRemoveClone(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 1040);
  --*(_QWORD *)(v2 + 1232);
  *(_QWORD *)(v2 + 1240) -= *(_QWORD *)(a2 + 64);
  return RtlAvlRemoveNode((unsigned __int64 *)(a1 + 640), a2);
}
