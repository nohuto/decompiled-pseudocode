/*
 * XREFs of ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x14000EB0C
 * Callers:
 *     ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x140075818 (-RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x14018EE28 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1401B81E0 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1401E7AC0 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1401E8610 (DxgkPresentMultiPlaneOverlay2.c)
 *     DxgkUnlock2Internal @ 0x14028DB00 (DxgkUnlock2Internal.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x14029CB18 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x14029E57C (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1402BBB04 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     DxgkSetDisplayMode @ 0x1402D1030 (DxgkSetDisplayMode.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1402EBEC0 (DxgkPresentMultiPlaneOverlay3.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1403211B8 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x14035CE20 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x14037C5A4 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     ?SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1403A039C (-SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1403A9C48 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404348A4 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

bool __fastcall ADAPTER_DISPLAY::IsVidPnSourceOwner(ADAPTER_DISPLAY *this, const struct DXGDEVICE *a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 v6; // rdi
  int v8; // edx
  int v9; // r8d
  int v10; // edx
  int v11; // r8d

  v4 = *((_QWORD *)this + 2);
  v6 = a3;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v4 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6430;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          6430,
          v8,
          v9,
          0LL,
          2,
          -1,
          (__int64)L"IsCoreResourceSharedOwner()",
          6430LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( (unsigned int)v6 < *((_DWORD *)this + 24) )
    return a2 == *(const struct DXGDEVICE **)(4024 * v6 + *((_QWORD *)this + 16) + 728);
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 6431;
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        6431,
        v10,
        v11,
        0LL,
        2,
        -1,
        (__int64)L"VidPnSourceId < m_NumVidPnSources",
        6431LL,
        0LL,
        0LL,
        0LL,
        0LL);
  }
  return (unsigned int)v6 < *((_DWORD *)this + 24)
      && a2 == *(const struct DXGDEVICE **)(4024 * v6 + *((_QWORD *)this + 16) + 728);
}
