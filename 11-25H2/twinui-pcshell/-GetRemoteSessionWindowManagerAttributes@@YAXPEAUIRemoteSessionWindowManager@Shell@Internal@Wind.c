/*
 * XREFs of ?GetRemoteSessionWindowManagerAttributes@@YAXPEAUIRemoteSessionWindowManager@Shell@Internal@Windows@ABI@@AEAE1AEAPEAUHSTRING__@@@Z @ 0x180686DD0
 * Callers:
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180685C54 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18069558C (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GetRemoteSessionWindowManagerAttributes(
        struct ABI::Windows::Internal::Shell::IRemoteSessionWindowManager *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        HSTRING *a4)
{
  int v8; // eax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 )
  {
    v8 = (*(__int64 (__fastcall **)(struct ABI::Windows::Internal::Shell::IRemoteSessionWindowManager *))(*(_QWORD *)a1 + 56LL))(a1);
    if ( v8 < 0 )
    {
      v9 = 229LL;
LABEL_10:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\utils.h",
        (const char *)(unsigned int)v8);
      return;
    }
    if ( *a2 )
      return;
    v8 = (*(__int64 (__fastcall **)(struct ABI::Windows::Internal::Shell::IRemoteSessionWindowManager *, unsigned __int8 *))(*(_QWORD *)a1 + 48LL))(
           a1,
           a3);
    if ( v8 < 0 )
    {
      v9 = 232LL;
      goto LABEL_10;
    }
    if ( *a3 )
    {
      v8 = (*(__int64 (__fastcall **)(struct ABI::Windows::Internal::Shell::IRemoteSessionWindowManager *, HSTRING *))(*(_QWORD *)a1 + 64LL))(
             a1,
             a4);
      if ( v8 < 0 )
      {
        v9 = 235LL;
        goto LABEL_10;
      }
    }
  }
}
