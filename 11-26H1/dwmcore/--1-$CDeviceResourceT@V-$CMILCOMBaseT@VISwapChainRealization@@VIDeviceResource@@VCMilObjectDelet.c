/*
 * XREFs of ??1?$CDeviceResourceT@V?$CMILCOMBaseT@VISwapChainRealization@@VIDeviceResource@@VCMilObjectDeleter@@@@@@MEAA@XZ @ 0x1802AC828
 * Callers:
 *     ??1CSwapChainRealization@@MEAA@XZ @ 0x1802AC8EC (--1CSwapChainRealization@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CDeviceResourceT<CMILCOMBaseT<ISwapChainRealization,IDeviceResource,CMilObjectDeleter>>::~CDeviceResourceT<CMILCOMBaseT<ISwapChainRealization,IDeviceResource,CMilObjectDeleter>>(
        _QWORD *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[4];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (a1[6] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[4] = 0LL;
    a1[5] = 0LL;
    a1[6] = 0LL;
  }
}
