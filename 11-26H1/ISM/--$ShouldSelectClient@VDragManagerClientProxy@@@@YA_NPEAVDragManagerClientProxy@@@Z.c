/*
 * XREFs of ??$ShouldSelectClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z @ 0x18015C20C
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180085720 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ?PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@Z @ 0x18015CF00 (-PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV-$vec.c)
 * Callees:
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18002D8AC (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x180068A98 (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18006FBB4 (-GetInstance@KernelContextProvider@@SAPEAV1@XZ.c)
 *     ?IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z @ 0x1800759E0 (-IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z.c)
 *     ??$IsShellClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z @ 0x180092A70 (--$IsShellClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ?IsTestSigningEnabled@KernelContextProvider@@SA_NXZ @ 0x18010C6F4 (-IsTestSigningEnabled@KernelContextProvider@@SA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TouchpadPublicApis3@@@details@wil@@QEAA_NXZ @ 0x18015DD50 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TouchpadPublicApis3@@@details@wil.c)
 */

bool __fastcall ShouldSelectClient<DragManagerClientProxy>(__int64 a1)
{
  KernelContextProvider *Instance; // rax
  char v3; // di
  int ProcessId; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx

  Instance = KernelContextProvider::GetInstance();
  v3 = 0;
  if ( !KernelContextProvider::IsDesktopAllowed(Instance, *(_QWORD *)(a1 + 152)) )
    return 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TouchpadPublicApis3>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TouchpadPublicApis3>::GetImpl'::`2'::impl) )
  {
    if ( IsShellClient<DragManagerClientProxy>(a1) )
      return 1;
    ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(a1 + 32)
                                                                                              + 16LL));
    if ( ProcessId == *((_DWORD *)ISMStatics::GetForegroundManager() + 56) )
      return 1;
    return v3;
  }
  else
  {
    return IsShellClient<DragManagerClientProxy>(a1) || KernelContextProvider::IsTestSigningEnabled(v7, v6) != 0;
  }
}
