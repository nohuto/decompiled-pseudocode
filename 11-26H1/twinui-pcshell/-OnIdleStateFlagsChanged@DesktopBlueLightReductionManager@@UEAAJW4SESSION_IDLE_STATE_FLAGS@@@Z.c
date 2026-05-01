/*
 * XREFs of ?OnIdleStateFlagsChanged@DesktopBlueLightReductionManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180099410
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$IdleStateFlagsChanged@II@DesktopBlueLightReductionManagerTelemetry@@SAX$$QEAI0@Z @ 0x180099660 (--$IdleStateFlagsChanged@II@DesktopBlueLightReductionManagerTelemetry@@SAX$$QEAI0@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D8840 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1801D8840.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_fde1e3dd508437221a89b1c19fd2671f___ @ 0x180296A18 (Windows--Internal--ComTaskPool--QueueTask__lambda_fde1e3dd508437221a89b1c19fd2671f___.c)
 *     _lambda_fde1e3dd508437221a89b1c19fd2671f_::_lambda_fde1e3dd508437221a89b1c19fd2671f_ @ 0x18030D700 (_lambda_fde1e3dd508437221a89b1c19fd2671f_--_lambda_fde1e3dd508437221a89b1c19fd2671f_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DesktopBlueLightReductionManager::OnIdleStateFlagsChanged(__int64 a1, int a2)
{
  __int64 v4; // rbx
  int v5; // esi
  volatile int *v6; // rdx
  const char *v7; // r9
  __int64 result; // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // edi
  __int64 *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  int v20; // [rsp+20h] [rbp-38h]
  _BYTE v21[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v22; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF
  int v25; // [rsp+68h] [rbp+10h] BYREF

  v4 = a1 - 120;
  v5 = *(_DWORD *)(a1 - 120 + 208) ^ a2;
  v25 = v5;
  LODWORD(v24) = a2;
  DesktopBlueLightReductionManagerTelemetry::IdleStateFlagsChanged<unsigned int,unsigned int>(&v24, &v25);
  try
  {
    if ( v5 )
    {
      *(_DWORD *)(a1 + 88) = a2;
      if ( (v5 & 0xD) != 0 )
      {
        if ( (a2 & 0xD) == 0 )
        {
          if ( !*(_DWORD *)(a1 + 72) )
          {
            v24 = 0LL;
            v9 = *(__int64 **)(a1 + 56);
            v10 = *v9;
            v24 = 0LL;
            v11 = (*(__int64 (__fastcall **)(__int64 *, GUID *, GUID *, __int64 *))(v10 + 24))(
                    v9,
                    &IID_IImmersiveWindowMessageService,
                    &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
                    &v24);
            if ( v11 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x127,
                (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                (const char *)(unsigned int)v11,
                v20);
            v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v24 + 24LL))(
                    v24,
                    30LL,
                    (a1 - 16) & -(__int64)(v4 != 0),
                    a1 + 72);
            if ( v12 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x128,
                (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                (const char *)(unsigned int)v12,
                v20);
            if ( v24 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          v24 = v4;
          if ( v4 )
            Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v4 + 164), v6);
          v13 = lambda_fde1e3dd508437221a89b1c19fd2671f_::_lambda_fde1e3dd508437221a89b1c19fd2671f_(v21, v4, &v24);
          v16 = Windows::Internal::ComTaskPool::QueueTask__lambda_fde1e3dd508437221a89b1c19fd2671f___(
                  v15,
                  v14,
                  *(unsigned int *)(a1 + 84),
                  v13);
          if ( v22 )
            ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release)();
          if ( v16 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x131,
              (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
              (const char *)(unsigned int)v16);
          if ( v4 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v4);
        }
      }
      else if ( *(_DWORD *)(a1 + 72) )
      {
        v24 = 0LL;
        v17 = *(__int64 **)(a1 + 56);
        v18 = *v17;
        v24 = 0LL;
        v19 = (*(__int64 (__fastcall **)(__int64 *, GUID *, GUID *, __int64 *))(v18 + 24))(
                v17,
                &IID_IImmersiveWindowMessageService,
                &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
                &v24);
        if ( v19 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x13A,
            (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
            (const char *)(unsigned int)v19);
        }
        else
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 32LL))(v24, *(unsigned int *)(a1 + 72));
          *(_DWORD *)(a1 + 72) = 0;
        }
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x145,
                           (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           v7);
  }
  return result;
}
