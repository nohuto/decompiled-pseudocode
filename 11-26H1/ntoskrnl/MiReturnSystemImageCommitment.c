/*
 * XREFs of MiReturnSystemImageCommitment @ 0x140AC7F80
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038A9B0 (MiSectionControlArea.c)
 *     MiGetBaseLoaderPortion @ 0x1404F5130 (MiGetBaseLoaderPortion.c)
 *     MiUnmapReturnCharges @ 0x140AC855C (MiUnmapReturnCharges.c)
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
  _InterlockedAdd((volatile signed __int32 *)&stru_140E36558.WaitBlockFill11[16], -*((_DWORD *)v2 + 6));
  return MiUnmapReturnCharges(&MiSystemPartition, v2);
}
