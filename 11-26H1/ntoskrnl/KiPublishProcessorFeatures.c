/*
 * XREFs of KiPublishProcessorFeatures @ 0x140CD1A84
 * Callers:
 *     KiSetProcessorSignature @ 0x1405F9644 (KiSetProcessorSignature.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiPublishProcessorFeatures(__int64 a1)
{
  int v1; // r8d
  __int64 result; // rax

  v1 = KeFeatureBits2;
  stru_140FC11F0.AutoBoostThreadState = &stru_140FC11F0.IptSaveArea;
  *(_OWORD *)&stru_140FC11F0.IptSaveArea = 0LL;
  stru_140FC11F0.SchedulerSharedSwappablePage = (_KSWAPPABLE_PAGE *)128;
  *(_BYTE *)(MmWriteableSharedUserData + 661) = (KeFeatureBits2 & 2) != 0;
  if ( !_bittest((const signed __int32 *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 132LL), 0xDu) )
  {
    if ( (v1 & 0x2000) != 0 )
      *(_BYTE *)(MmWriteableSharedUserData + 663) = 1;
    if ( (*(_QWORD *)&v1 & 0x800000LL) != 0 )
      *((_BYTE *)stru_140FC11F0.AutoBoostThreadState + 3) |= 2u;
  }
  result = KeLoaderBlock_0;
  if ( (*(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 132LL) & 0x8000) == 0 )
  {
    result = (*(_QWORD *)(a1 + 36832) >> 33) & 1LL;
    KeSmapEnabled = (*(_QWORD *)(a1 + 36832) >> 33) & 1;
  }
  return result;
}
