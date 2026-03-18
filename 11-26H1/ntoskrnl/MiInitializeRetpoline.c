/*
 * XREFs of MiInitializeRetpoline @ 0x140CFABB8
 * Callers:
 *     MiInitializeKernelScp @ 0x140CFAB28 (MiInitializeKernelScp.c)
 * Callees:
 *     MiReservePtes @ 0x14035DE50 (MiReservePtes.c)
 *     RtlIsImageFullyRetpolined @ 0x1404FFD68 (RtlIsImageFullyRetpolined.c)
 *     MiMarkRetpolineBits @ 0x140B1F348 (MiMarkRetpolineBits.c)
 *     MiCreateRetpolineBitmap @ 0x140CFAA88 (MiCreateRetpolineBitmap.c)
 */

__int64 __fastcall MiInitializeRetpoline(_DWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  stru_140E2D150.WaitBlock[2].Object = &stru_140E2D150.WaitBlockFill11[120];
  stru_140E2D150.WaitBlock[2].Thread = (struct _KTHREAD *)&stru_140E2D150.WaitBlockFill11[120];
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
  {
    stru_140E2D150.WaitBlock[2].WaitListEntry.Flink = (struct _LIST_ENTRY *)MiReservePtes(
                                                                              (__int64)&stru_140E36558.WaitBlockList,
                                                                              1u,
                                                                              a3,
                                                                              a4);
    if ( !stru_140E2D150.WaitBlock[2].WaitListEntry.Flink )
    {
      *a1 = 163;
      return 3221225626LL;
    }
    result = MiCreateRetpolineBitmap(&v9, v5, v6, v7);
    if ( (int)result < 0 )
    {
      *a1 = 164;
      return result;
    }
    result = MiMarkRetpolineBits(PsNtosImageBase, PsNtosImageEnd - PsNtosImageBase, 1);
    if ( (int)result < 0 )
    {
      *a1 = 165;
      return result;
    }
    if ( (unsigned int)RtlIsImageFullyRetpolined(PsHalImageBase) )
    {
      result = MiMarkRetpolineBits(PsHalImageBase, PsHalImageEnd - PsHalImageBase, 1);
      if ( (int)result < 0 )
      {
        *a1 = 166;
        return result;
      }
    }
    retpoline_image_bitmap = v9 - 0x1FFFF0000000LL;
    dword_140E013E8 = *(_DWORD *)&stru_140E2D150.WaitBlockFill11[76] << 12;
    dword_140E013E4 = LODWORD(stru_140E36558.QuantumTarget) + HIDWORD(stru_140E36558.SListFaultAddress);
  }
  return 0LL;
}
