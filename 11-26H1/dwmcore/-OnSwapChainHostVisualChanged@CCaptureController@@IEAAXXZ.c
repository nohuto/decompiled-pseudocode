/*
 * XREFs of ?OnSwapChainHostVisualChanged@CCaptureController@@IEAAXXZ @ 0x18021CA00
 * Callers:
 *     ?NotifyOnChanged@CCaptureController@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801CD7C0 (-NotifyOnChanged@CCaptureController@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetSwapChainHostVisual@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVCVisualReference@@@Z @ 0x18021C9B0 (-SetSwapChainHostVisual@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJP.c)
 * Callees:
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCaptureController::OnSwapChainHostVisualChanged(CCaptureController *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 i; // rbx

  v2 = 0LL;
  v3 = *((_QWORD *)this + 16);
  if ( v3 )
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 192LL))(v3);
  v4 = *((_QWORD *)this + 21);
  for ( i = *((_QWORD *)this + 20); i != v4; i += 8LL )
    wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)(*(_QWORD *)i + 2624LL), v2);
}
