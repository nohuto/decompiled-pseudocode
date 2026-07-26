/*
 * XREFs of ?ndisCpuInitializeSubsystemPhase2@@YAJXZ @ 0x14018F23C
 * Callers:
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ?ndisIsHeterogeneousCpuSystem@@YAEXZ @ 0x1400A5864 (-ndisIsHeterogeneousCpuSystem@@YAEXZ.c)
 *     ndisGetProcessorInfo @ 0x14018F81C (ndisGetProcessorInfo.c)
 */

__int64 ndisCpuInitializeSubsystemPhase2(void)
{
  int v0; // edx
  int ProcessorInfo; // ebx

  ndisHeterogeneousCpuSystem = ndisIsHeterogeneousCpuSystem();
  ProcessorInfo = ndisGetProcessorInfo();
  if ( ProcessorInfo >= 0 )
  {
    qsort(
      ndisRssProcessors,
      (unsigned int)ndisRssCpuCount,
      4uLL,
      (int (__cdecl *)(const void *, const void *))ndisCompareProcNumInit);
    qword_14011E7F8 = (__int64)KeRegisterProcessorChangeCallback(
                                 (PPROCESSOR_CALLBACK_FUNCTION)ndisCpuHotAddHandler,
                                 0LL,
                                 0);
    return qword_14011E7F8 == 0 ? 0xC000009A : 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v0) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v0,
        1,
        10,
        (struct _GUID *)&WPP_f25f9dbc16b93b5e0831a25f184c84f2_Traceguids);
    }
    return (unsigned int)ProcessorInfo;
  }
}
