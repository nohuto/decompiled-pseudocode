/*
 * XREFs of KiLogControlProtectionKernelModeReturnMismatch @ 0x1405FD6F4
 * Callers:
 *     KiProcessControlProtectionFromKernelMode @ 0x14052ACCC (KiProcessControlProtectionFromKernelMode.c)
 * Callees:
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x1406CA7F4 (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 */

void __fastcall KiLogControlProtectionKernelModeReturnMismatch(unsigned int a1, __int64 a2)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  if ( (_BYTE)KiKernelCetLogging )
  {
    _InterlockedAdd(&dword_140FC231C, 1u);
    if ( *(_DWORD *)(a2 + 28) )
      _InterlockedAdd(&dword_140FC2324, 1u);
    if ( !KeGetPcr()->Prcb.CombinedNmiMceActive && KeGetCurrentIrql() < 0xFu )
    {
      if ( *(_DWORD *)(a2 + 28) && !_InterlockedCompareExchange(&dword_140FC2320, 1, 0) )
      {
LABEL_11:
        EtwTimLogControlProtectionKernelModeReturnMismatch(a1);
      }
      else
      {
        v2 = dword_140FC2314;
        while ( v2 < dword_140FC2318 )
        {
          v3 = v2;
          v2 = _InterlockedCompareExchange(&dword_140FC2314, v2 + 1, v2);
          if ( v3 == v2 )
            goto LABEL_11;
        }
      }
    }
  }
}
