/*
 * XREFs of ?InvokeInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@@Z @ 0x18022C668
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x18047AD80 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedResize(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2,
        const struct tagRECT *a3)
{
  unsigned int v3; // eax
  __int64 v4; // rcx
  float top; // xmm1_4
  __m128i v6; // xmm0
  int v7; // eax
  __int64 (__fastcall *v8)(__int64, __int64, float *); // rax
  int v9; // eax
  unsigned int v10; // ebx
  float v12[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a3->right - a3->left;
  v4 = *((_QWORD *)this + 9);
  top = (float)a3->top;
  v12[0] = (float)a3->left;
  v6 = _mm_cvtsi32_si128(v3);
  v7 = a3->bottom - a3->top;
  v12[1] = top;
  LODWORD(v12[2]) = _mm_cvtepi32_ps(v6).m128_u32[0];
  *(float *)v6.m128i_i32 = (float)v7;
  v8 = *(__int64 (__fastcall **)(__int64, __int64, float *))(*(_QWORD *)v4 + 96LL);
  v12[3] = *(float *)v6.m128i_i32;
  v9 = v8(v4, a2, v12);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB0,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
