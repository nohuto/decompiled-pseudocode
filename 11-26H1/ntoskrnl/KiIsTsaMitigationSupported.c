/*
 * XREFs of KiIsTsaMitigationSupported @ 0x1405F23BC
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405F2470 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiDetectKvaLeakage @ 0x1405F7100 (KiDetectKvaLeakage.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404E63D0 (HviIsAnyHypervisorPresent.c)
 *     SpcIsHyperVCr3RspErrataPresent @ 0x14071E2B0 (SpcIsHyperVCr3RspErrataPresent.c)
 */

_BOOL8 __fastcall KiIsTsaMitigationSupported(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !(unsigned int)SpcIsHyperVCr3RspErrataPresent() )
  {
    if ( _bittest64((const signed __int64 *)&KeFeatureBits2, 0x2Cu) )
      return 1LL;
    if ( !HviIsAnyHypervisorPresent() )
    {
      while ( v2 < 0xF )
      {
        if ( *((_DWORD *)&KiVerwClearErrataVersions + 4 * v2) == *(_DWORD *)(a1 + 1800) )
          return *(_QWORD *)(a1 + 36840) >= *((_QWORD *)&KiVerwClearErrataVersions + 2 * v2 + 1);
        ++v2;
      }
    }
  }
  return 0LL;
}
