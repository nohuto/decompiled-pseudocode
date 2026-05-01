/*
 * XREFs of ?PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801F3CBC
 * Callers:
 *     ?PushBoundsToAppView@UwpWindowWrapper@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180154BCC (-PushBoundsToAppView@UwpWindowWrapper@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal.c)
 *     ?v_OnWindowCreated@WindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x180423CF0 (-v_OnWindowCreated@WindowWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?v_PushBoundsToAppView@WindowWrapper@@EEAAXXZ @ 0x180423D30 (-v_PushBoundsToAppView@WindowWrapper@@EEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8cb864d560eabf2ff9644d5f66b5c768___ @ 0x18043504C (Windows--Internal--ComTaskPool--QueueTask__lambda_8cb864d560eabf2ff9644d5f66b5c768___.c)
 */

void __fastcall PushWindowTransparencyModeToWindow(HWND a1, int a2, int a3)
{
  void *v3; // rdi
  __int64 v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND v9; // [rsp+48h] [rbp+20h] BYREF

  v3 = (void *)a2;
  if ( a2 != (unsigned int)GetPropW(a1, L"MaterialProperties.WindowTransparencyMode") )
  {
    SetPropW(a1, L"MaterialProperties.WindowTransparencyMode", v3);
    if ( (unsigned int)(a3 - 4) <= 1
      && (int)CoreIsWindowServiceSupported(a1, &GUID_98827327_fd4e_49c6_8d27_34fd1e3b2c54) >= 0 )
    {
      v9 = a1;
      v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_8cb864d560eabf2ff9644d5f66b5c768___(v6, &v9);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x20,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.cpp",
          (const char *)(unsigned int)v7);
    }
  }
}
