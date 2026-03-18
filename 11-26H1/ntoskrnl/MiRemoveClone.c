/*
 * XREFs of MiRemoveClone @ 0x1404AFC88
 * Callers:
 *     MiDeleteCloneDescriptor @ 0x1404AFC48 (MiDeleteCloneDescriptor.c)
 *     MiCloneTreeUpdate @ 0x1404F4EBC (MiCloneTreeUpdate.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14030C5E0 (RtlAvlRemoveNode.c)
 */

char __fastcall MiRemoveClone(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 1040);
  --*(_QWORD *)(v2 + 1232);
  *(_QWORD *)(v2 + 1240) -= *(_QWORD *)(a2 + 64);
  return RtlAvlRemoveNode((unsigned __int64 *)(a1 + 640), a2);
}
