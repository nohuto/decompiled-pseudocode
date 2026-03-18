/*
 * XREFs of DpiKsrIsSoftBoot @ 0x1402525D8
 * Callers:
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x14021CF60 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 *     DpiKsrGetSavedAdapterState @ 0x1402524F4 (DpiKsrGetSavedAdapterState.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x1402527F8 (DpiKsrRestoreAdapterDriverState.c)
 * Callees:
 *     <none>
 */

bool DpiKsrIsSoftBoot()
{
  bool result; // al

  result = 0;
  if ( qword_140169380 )
    return *(_BYTE *)(qword_140169380 + 28) == 0;
  return result;
}
