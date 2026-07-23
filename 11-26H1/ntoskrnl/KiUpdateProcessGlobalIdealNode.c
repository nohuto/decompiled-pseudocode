/*
 * XREFs of KiUpdateProcessGlobalIdealNode @ 0x1405F75D4
 * Callers:
 *     KeSetAffinityProcess @ 0x140505754 (KeSetAffinityProcess.c)
 *     KiUpdateProcessAvailableCpuState @ 0x1405E8528 (KiUpdateProcessAvailableCpuState.c)
 * Callees:
 *     KeSelectNodeForAffinityAndPartition @ 0x1405F1434 (KeSelectNodeForAffinityAndPartition.c)
 *     KiDoesNodeIntersectAffinity @ 0x1405F215C (KiDoesNodeIntersectAffinity.c)
 */

char __fastcall KiUpdateProcessGlobalIdealNode(__int64 a1, _WORD *a2)
{
  _WORD *v4; // rax

  LOBYTE(v4) = KiDoesNodeIntersectAffinity(KeNodeBlock[*(unsigned __int16 *)(a1 + 260)], a2);
  if ( !(_BYTE)v4 )
  {
    v4 = (_WORD *)KeSelectNodeForAffinityAndPartition((__int64)a2, *(_QWORD *)(a1 + 1880));
    *(_WORD *)(a1 + 260) = *v4;
  }
  return (char)v4;
}
