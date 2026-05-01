/*
 * XREFs of ?FireInputPaneShowingEvent@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@0@Z @ 0x180479330
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x18047AD80 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::FireInputPaneShowingEvent(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  unsigned int v4; // eax
  __int64 v5; // rcx
  float top; // xmm1_4
  __m128i v7; // xmm0
  unsigned int v8; // eax
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  unsigned int v11; // eax
  __int128 v12; // xmm2
  __m128i v13; // xmm0
  int v14; // eax
  __int64 (__fastcall *v15)(__int64, __int64, __int128 *, __int128 *); // rax
  __int128 v16; // xmm1
  int v17; // eax
  int v19; // [rsp+20h] [rbp-30h]
  __int128 v20; // [rsp+30h] [rbp-20h] BYREF
  __int128 v21; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v4 = a4->right - a4->left;
  v5 = *((_QWORD *)this + 9);
  top = (float)a4->top;
  *(float *)&v20 = (float)a4->left;
  v7 = _mm_cvtsi32_si128(v4);
  v8 = a4->bottom - a4->top;
  *((float *)&v20 + 1) = top;
  v9 = _mm_cvtsi32_si128(a3->top);
  DWORD2(v20) = _mm_cvtepi32_ps(v7).m128_u32[0];
  v10 = _mm_cvtsi32_si128(v8);
  v11 = a3->right - a3->left;
  HIDWORD(v20) = _mm_cvtepi32_ps(v10).m128_u32[0];
  v12 = v20;
  *(float *)v10.m128i_i32 = (float)a3->left;
  DWORD1(v20) = _mm_cvtepi32_ps(v9).m128_u32[0];
  LODWORD(v20) = v10.m128i_i32[0];
  v13 = _mm_cvtsi32_si128(v11);
  v14 = a3->bottom - a3->top;
  DWORD2(v20) = _mm_cvtepi32_ps(v13).m128_u32[0];
  *(float *)v13.m128i_i32 = (float)v14;
  v15 = *(__int64 (__fastcall **)(__int64, __int64, __int128 *, __int128 *))(*(_QWORD *)v5 + 120LL);
  HIDWORD(v20) = v13.m128i_i32[0];
  v16 = v20;
  v20 = v12;
  v21 = v16;
  v17 = v15(v5, a2, &v21, &v20);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE8,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v17,
      v19);
  return 0LL;
}
