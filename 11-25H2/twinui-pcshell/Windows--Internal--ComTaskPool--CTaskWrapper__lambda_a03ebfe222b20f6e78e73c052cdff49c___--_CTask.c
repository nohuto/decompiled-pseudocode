/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a03ebfe222b20f6e78e73c052cdff49c___::_CTaskWrapper__lambda_a03ebfe222b20f6e78e73c052cdff49c___ @ 0x180311954
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a03ebfe222b20f6e78e73c052cdff49c___::_scalar_deleting_destructor_ @ 0x180311C00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a03ebfe222b20f6e78e73c052cdff49c___--_scala.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006A1F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellC.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a03ebfe222b20f6e78e73c052cdff49c___::_CTaskWrapper__lambda_a03ebfe222b20f6e78e73c052cdff49c___(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(
               v3,
               a2);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
