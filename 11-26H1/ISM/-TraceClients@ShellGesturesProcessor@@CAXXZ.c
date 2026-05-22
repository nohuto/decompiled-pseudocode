/*
 * XREFs of ?TraceClients@ShellGesturesProcessor@@CAXXZ @ 0x180095760
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180085720 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ?ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z @ 0x18015D158 (-ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800165E0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ @ 0x18002A150 (-GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18002D8AC (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18006FBB4 (-GetInstance@KernelContextProvider@@SAPEAV1@XZ.c)
 *     ?IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z @ 0x1800759E0 (-IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z.c)
 *     ?IsDetachedFromTree@ShellGesturesClientProxy@@QEAA_NXZ @ 0x18007C7F0 (-IsDetachedFromTree@ShellGesturesClientProxy@@QEAA_NXZ.c)
 *     ?GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ @ 0x18007D750 (-GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ.c)
 *     ??D?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@QEBAAEAPEAVShellGesturesClientProxy@@XZ @ 0x1800961C0 (--D-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@PEAVShellGesturesClientProxy.c)
 *     ?IsTestSigningEnabled@KernelContextProvider@@SA_NXZ @ 0x18010C6F4 (-IsTestSigningEnabled@KernelContextProvider@@SA_NXZ.c)
 *     ??$IsShellClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x18015C1C4 (--$IsShellClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z.c)
 *     ?Client@ShellGestures@InputTraceLogging@@SAXK_N000K00@Z @ 0x18015C7E8 (-Client@ShellGestures@InputTraceLogging@@SAXK_N000K00@Z.c)
 *     ?GetTouchpadSupportedGestures@BamoShellGesturesClientProxy@@UEAA?AW4TouchpadGlobalGestureKinds@Input@Internal@UI@Windows@@XZ @ 0x18015CE40 (-GetTouchpadSupportedGestures@BamoShellGesturesClientProxy@@UEAA-AW4TouchpadGlobalGestureKinds@I.c)
 */

void ShellGesturesProcessor::TraceClients(void)
{
  const struct _tlgProvider_t *v0; // rax
  KernelContextProvider *Instance; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // r13
  bool IsTestSigningEnabled; // r12
  char IsDesktopAllowed; // r15
  unsigned int TouchpadSupportedGestures; // r14d
  bool GesturesEnabled; // bp
  bool TouchEnabled; // si
  char v10; // di
  char IsDetachedFromTree; // bl
  unsigned int ProcessId; // eax
  _QWORD v13[9]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v14; // [rsp+90h] [rbp+8h]
  __int64 v15; // [rsp+98h] [rbp+10h]
  KernelContextProvider *v16; // [rsp+A0h] [rbp+18h]

  v0 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v0 && tlgKeywordOn((__int64)v0, 512LL) )
  {
    Instance = KernelContextProvider::GetInstance();
    v16 = Instance;
    v13[0] = &ShellGesturesProcessor::s_clients;
    v2 = qword_180253FE8;
    v3 = qword_180253FE8 + qword_180253FF0;
    v15 = qword_180253FE8 + qword_180253FF0;
    while ( 1 )
    {
      v13[1] = v2;
      v14 = v2;
      if ( v2 == v3 )
        break;
      v4 = *(_QWORD **)std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>::operator*(v13);
      IsTestSigningEnabled = KernelContextProvider::IsTestSigningEnabled();
      IsDesktopAllowed = KernelContextProvider::IsDesktopAllowed(Instance, v4[22]);
      TouchpadSupportedGestures = BamoShellGesturesClientProxy::GetTouchpadSupportedGestures(v4 + 1);
      GesturesEnabled = BamoMagnifierControllerProxy::GetGesturesEnabled((BamoMagnifierControllerProxy *)(v4 + 1));
      TouchEnabled = BamoShellGesturesClientProxy::GetTouchEnabled((BamoShellGesturesClientProxy *)(v4 + 1));
      v10 = IsShellClient<ShellGesturesClientProxy>(v4);
      IsDetachedFromTree = ShellGesturesClientProxy::IsDetachedFromTree((ShellGesturesClientProxy *)v4);
      ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(v4[4] + 16LL));
      InputTraceLogging::ShellGestures::Client(
        ProcessId,
        IsDetachedFromTree,
        v10,
        TouchEnabled,
        GesturesEnabled,
        TouchpadSupportedGestures,
        IsDesktopAllowed,
        IsTestSigningEnabled);
      v3 = v15;
      v2 = v14 + 1;
      Instance = v16;
    }
  }
}
