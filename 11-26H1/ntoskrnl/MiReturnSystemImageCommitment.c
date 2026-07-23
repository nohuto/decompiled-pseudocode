/*
 * XREFs of MiReturnSystemImageCommitment @ 0x140AC9B70
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiGetBaseLoaderPortion @ 0x1404EE710 (MiGetBaseLoaderPortion.c)
 *     MiUnmapReturnCharges @ 0x140ACA14C (MiUnmapReturnCharges.c)
 */

__int64 __fastcall MiReturnSystemImageCommitment(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // r9
  __int64 v3; // rax

  if ( (*(_DWORD *)(MiGetBaseLoaderPortion(a1) + 184) & 0x400) == 0 )
  {
    v3 = *(unsigned int *)(*(_QWORD *)MiSectionControlArea(*(_QWORD *)(v1 + 112)) + 8LL);
    v2[3] = v3;
    *v2 = v3;
  }
  _InterlockedAdd((volatile signed __int32 *)&stru_140E366D8.WaitBlockFill11[16], -*((_DWORD *)v2 + 6));
  return MiUnmapReturnCharges(&MiSystemPartition, v2);
}
