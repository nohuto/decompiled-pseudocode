/*
 * XREFs of _anonymous_namespace_::NotifyShellSimplePayload @ 0x14014BAA4
 * Callers:
 *     PostIAMShellHookMessageEx @ 0x1400237D0 (PostIAMShellHookMessageEx.c)
 *     ?ResetArrangement@NotifyShell@@YAXPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@@Z @ 0x14014B688 (-ResetArrangement@NotifyShell@@YAXPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@@Z.c)
 *     ?DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x14014B874 (-DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     _anonymous_namespace_::NotifyPartExit @ 0x14014BA58 (_anonymous_namespace_--NotifyPartExit.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z @ 0x1401D9D38 (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1402593D8 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     _anonymous_namespace_::NotifyPartEnter @ 0x140259630 (_anonymous_namespace_--NotifyPartEnter.c)
 *     ?ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z @ 0x1402C1A38 (-ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z.c)
 *     ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1402C2C9C (-WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x14014BB20 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall anonymous_namespace_::NotifyShellSimplePayload(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v10; // [rsp+20h] [rbp-88h] BYREF
  int v11; // [rsp+28h] [rbp-80h]
  __int64 v12; // [rsp+30h] [rbp-78h]
  __int64 v13; // [rsp+38h] [rbp-70h]

  memset_0(&v10, 0, 0x50uLL);
  v10 = a1;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  return anonymous_namespace_::NotifyIAMWindowManagementEvent(&v10, a5);
}
