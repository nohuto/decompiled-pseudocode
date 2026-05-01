/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___::CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70_____lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___ @ 0x18054F668
 * Callers:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___ @ 0x18054FF18 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1805510D4 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgRef_ea_1805510D4.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___::CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70_____lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 2,
    a3);
  a1[2] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::`vftable';
  a1[43] = *(_QWORD *)(a3 + 328);
  *a1 = &off_1807556D8;
  result = a1;
  a1[44] = a2;
  return result;
}
