/*
 * XREFs of ?GetViewRect@TabTipAdapter@KeyboardHosting@@AEAAJIPEAUtagRECT@@@Z @ 0x18047A10C
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1800278A0 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x18047AD80 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::GetViewRect(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2,
        struct tagRECT *a3)
{
  __int64 v3; // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int64 result; // rax
  LONG v8; // r8d
  LONG v9; // edx
  float v10; // xmm0_4
  int v11[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *((_QWORD *)this + 9);
  *(_OWORD *)v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v3 + 144LL))(v3, a2, v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = (int)*(float *)&v11[1];
    v9 = (int)(float)(*(float *)&v11[2] + *(float *)v11);
    v10 = *(float *)&v11[3] + *(float *)&v11[1];
    a3->left = (int)*(float *)v11;
    result = 0LL;
    a3->top = v8;
    a3->right = v9;
    a3->bottom = (int)v10;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  return result;
}
