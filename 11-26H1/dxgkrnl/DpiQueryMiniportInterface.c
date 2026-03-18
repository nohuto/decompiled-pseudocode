/*
 * XREFs of DpiQueryMiniportInterface @ 0x140193720
 * Callers:
 *     DpiFdoInitializeMipiDsi @ 0x14006B5B4 (DpiFdoInitializeMipiDsi.c)
 *     ?DpiFdoInitializePanelBufferControl@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x140085E00 (-DpiFdoInitializePanelBufferControl@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFdoInitializeDP @ 0x140086718 (DpiFdoInitializeDP.c)
 *     DpiFdoInitializeDisplayDiagnostics @ 0x140086810 (DpiFdoInitializeDisplayDiagnostics.c)
 *     DpiFdoInitializeFdo @ 0x140243960 (DpiFdoInitializeFdo.c)
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x14024E5E8 (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 *     ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x14024E874 (-DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x14024E9C0 (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFeatureStartDevice @ 0x14024EDAC (DpiFeatureStartDevice.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x14024F640 (DpiFdoHandleQueryThermalInterface.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1404279F8 (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     DpiDxgkDdiQueryInterface @ 0x1403D1B3C (DpiDxgkDdiQueryInterface.c)
 */

__int64 __fastcall DpiQueryMiniportInterface(__int64 a1, __int64 a2, __int16 a3, __int16 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  __int16 v10; // [rsp+28h] [rbp-30h]
  __int16 v11; // [rsp+2Ah] [rbp-2Eh]
  int v12; // [rsp+2Ch] [rbp-2Ch]
  __int64 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+38h] [rbp-20h]
  int v15; // [rsp+40h] [rbp-18h]
  int v16; // [rsp+44h] [rbp-14h]

  v6 = *(_QWORD *)(a1 + 64);
  v7 = -1073741637;
  v12 = 0;
  v16 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(v6 + 40) + 256LL) )
  {
    v10 = a3;
    v13 = a6;
    v9 = a2;
    v11 = a4;
    v14 = 0LL;
    v15 = -1;
    v7 = DpiDxgkDdiQueryInterface(*(_QWORD *)(v6 + 40), *(_QWORD *)(v6 + 48), &v9);
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 2528;
    }
  }
  return (unsigned int)v7;
}
