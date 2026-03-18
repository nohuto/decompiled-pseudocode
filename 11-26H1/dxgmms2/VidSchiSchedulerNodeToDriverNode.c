/*
 * XREFs of VidSchiSchedulerNodeToDriverNode @ 0x140038370
 * Callers:
 *     VidSchiPrepareToResetEngine @ 0x1400C0880 (VidSchiPrepareToResetEngine.c)
 *     VidSchiCheckNodeTimeout @ 0x1400C5470 (VidSchiCheckNodeTimeout.c)
 *     VidSchReportAdapter @ 0x140119A10 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x14011D0A0 (VidSchReportDevice.c)
 *     VidSchiSerializeSchedulingLog @ 0x140122E7C (VidSchiSerializeSchedulingLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverNode(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 696);
  if ( a2 < *(_DWORD *)(a1 + 768) )
    v2 += 8LL * a2;
  return *(unsigned __int16 *)(*(_QWORD *)v2 + 8LL);
}
