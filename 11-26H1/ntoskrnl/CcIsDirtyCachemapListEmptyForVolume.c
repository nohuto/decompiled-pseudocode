/*
 * XREFs of CcIsDirtyCachemapListEmptyForVolume @ 0x140389CF4
 * Callers:
 *     CcLazyWriteScanVolume @ 0x140388CAC (CcLazyWriteScanVolume.c)
 *     CcReapPrivateVolumeCachemap @ 0x140389DE0 (CcReapPrivateVolumeCachemap.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsDirtyCachemapListEmptyForVolume(__int64 a1)
{
  return *(_QWORD *)(a1 + 640) == a1 + 664 && *(_QWORD *)(a1 + 648) == a1 + 664;
}
