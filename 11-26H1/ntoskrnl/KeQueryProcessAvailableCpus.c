/*
 * XREFs of KeQueryProcessAvailableCpus @ 0x1405E57A0
 * Callers:
 *     PspQueryInformationProcessAvailableCpus @ 0x14052CCA8 (PspQueryInformationProcessAvailableCpus.c)
 *     PsQueryProcessAvailableCpus @ 0x140532BB0 (PsQueryProcessAvailableCpus.c)
 *     PsQueryProcessAvailableCpusCount @ 0x140615540 (PsQueryProcessAvailableCpusCount.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     RtlCountSetBitsAffinityEx @ 0x140251920 (RtlCountSetBitsAffinityEx.c)
 *     RtlBeginReadTickLock @ 0x140447880 (RtlBeginReadTickLock.c)
 *     KiUpdateProcessAvailableCpuState @ 0x1405E5BB8 (KiUpdateProcessAvailableCpuState.c)
 */

__int64 __fastcall KeQueryProcessAvailableCpus(
        __int64 a1,
        struct _KAFFINITY_EX *a2,
        _QWORD *a3,
        __int64 *a4,
        _DWORD *a5)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 TickLock; // rsi
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 448);
  v6 = 0;
  TickLock = *(_QWORD *)v5;
  if ( *(_OWORD *)(v5 + 8) == __PAIR128__(
                                (unsigned __int64)KiSupervisorXStateFeaturesLock.WaitBlock[0].Thread,
                                KiCpuSetSequence) )
  {
    if ( a3 && *a3 == TickLock )
    {
      v6 = -2147483598;
      goto LABEL_11;
    }
  }
  else
  {
    KiUpdateProcessAvailableCpuState(a1, 0LL);
  }
  do
  {
    TickLock = RtlBeginReadTickLock((__int64 *)v5);
    if ( a2 )
      RtlpCopyAffinityEx(a2, a2->Size, *(struct _KAFFINITY_EX **)(v5 + 24));
    if ( a5 )
      *a5 = RtlCountSetBitsAffinityEx(*(unsigned __int16 **)(v5 + 24));
  }
  while ( *(_QWORD *)v5 != TickLock );
LABEL_11:
  result = v6;
  *a4 = TickLock;
  return result;
}
