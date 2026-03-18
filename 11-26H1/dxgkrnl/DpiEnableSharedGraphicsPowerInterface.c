/*
 * XREFs of DpiEnableSharedGraphicsPowerInterface @ 0x140238824
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042EA78 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiEnableSharedGraphicsPowerInterface(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(v1 + 5816) )
  {
    if ( IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 5800), 1u) < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 4388;
    }
  }
}
