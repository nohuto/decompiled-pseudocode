/*
 * XREFs of MiInitializeRetpoline @ 0x140D00F38
 * Callers:
 *     MiInitializeKernelScp @ 0x140D00EA8 (MiInitializeKernelScp.c)
 * Callees:
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     RtlIsImageFullyRetpolined @ 0x1404F9558 (RtlIsImageFullyRetpolined.c)
 *     MiMarkRetpolineBits @ 0x140B213C8 (MiMarkRetpolineBits.c)
 *     MiCreateRetpolineBitmap @ 0x140D00E08 (MiCreateRetpolineBitmap.c)
 */

__int64 __fastcall MiInitializeRetpoline(_DWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  stru_140E2D2D0.WaitBlock[2].Object = &stru_140E2D2D0.WaitBlockFill11[120];
  stru_140E2D2D0.WaitBlock[2].Thread = (struct _KTHREAD *)&stru_140E2D2D0.WaitBlockFill11[120];
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
  {
    stru_140E2D2D0.WaitBlock[2].WaitListEntry.Flink = (struct _LIST_ENTRY *)MiReservePtes(
                                                                              (__int64)&stru_140E366D8.WaitBlockList,
                                                                              1u,
                                                                              a3,
                                                                              a4);
    if ( !stru_140E2D2D0.WaitBlock[2].WaitListEntry.Flink )
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
    result = MiMarkRetpolineBits((__int64)PsNtosImageBase, PsNtosImageEnd - (_QWORD)PsNtosImageBase, 1);
    if ( (int)result < 0 )
    {
      *a1 = 165;
      return result;
    }
    if ( (unsigned int)RtlIsImageFullyRetpolined((__int64)PsHalImageBase) )
    {
      result = MiMarkRetpolineBits((__int64)PsHalImageBase, PsHalImageEnd - (_QWORD)PsHalImageBase, 1);
      if ( (int)result < 0 )
      {
        *a1 = 166;
        return result;
      }
    }
    retpoline_image_bitmap = v9 - 0x1FFFF0000000LL;
    dword_140E013E8 = *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[76] << 12;
    dword_140E013E4 = LODWORD(stru_140E366D8.QuantumTarget) + HIDWORD(stru_140E366D8.SListFaultAddress);
  }
  return 0LL;
}
