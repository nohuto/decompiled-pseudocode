/*
 * XREFs of KiLogControlProtectionKernelModeReturnMismatch @ 0x1405FACD4
 * Callers:
 *     KiProcessControlProtectionFromKernelMode @ 0x14052865C (KiProcessControlProtectionFromKernelMode.c)
 * Callees:
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x1406C6AF4 (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 */

void __fastcall KiLogControlProtectionKernelModeReturnMismatch(unsigned int a1, __int64 a2)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  if ( (_BYTE)KiKernelCetLogging )
  {
    _InterlockedAdd(&dword_140FC131C, 1u);
    if ( *(_DWORD *)(a2 + 28) )
      _InterlockedAdd(&dword_140FC1324, 1u);
    if ( !KeGetPcr()->Prcb.CombinedNmiMceActive && KeGetCurrentIrql() < 0xFu )
    {
      if ( *(_DWORD *)(a2 + 28) && !_InterlockedCompareExchange(&dword_140FC1320, 1, 0) )
      {
LABEL_11:
        EtwTimLogControlProtectionKernelModeReturnMismatch(a1);
      }
      else
      {
        v2 = dword_140FC1314;
        while ( v2 < dword_140FC1318 )
        {
          v3 = v2;
          v2 = _InterlockedCompareExchange(&dword_140FC1314, v2 + 1, v2);
          if ( v3 == v2 )
            goto LABEL_11;
        }
      }
    }
  }
}
