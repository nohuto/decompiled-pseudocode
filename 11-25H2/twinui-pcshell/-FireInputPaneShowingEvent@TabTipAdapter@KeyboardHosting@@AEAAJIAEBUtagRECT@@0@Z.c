/*
 * XREFs of ?FireInputPaneShowingEvent@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@0@Z @ 0x18046BC30
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x18046CC40 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::FireInputPaneShowingEvent(
        KeyboardHosting::TabTipAdapter *this,
        unsigned int a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  __int64 v5; // rcx
  __m128i v6; // xmm1
  int v7; // edx
  __int64 (__fastcall *v8)(__int64, _QWORD, __int128 *, __int128 *); // r10
  unsigned int v9; // eax
  __m128i v10; // xmm0
  unsigned int v11; // eax
  __m128i v12; // xmm1
  __m128i v13; // xmm0
  int v14; // eax
  __int128 v15; // xmm2
  __m128i v16; // xmm0
  __int128 v17; // xmm1
  int v18; // eax
  int v20; // [rsp+20h] [rbp-30h]
  __int128 v21; // [rsp+30h] [rbp-20h] BYREF
  __int128 v22; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v5 = *((_QWORD *)this + 9);
  v6 = _mm_cvtsi32_si128(a4->top);
  v7 = a3->bottom - a3->top;
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, __int128 *))(*(_QWORD *)v5 + 120LL);
  v9 = a4->right - a4->left;
  *(float *)&v21 = (float)a4->left;
  v10 = _mm_cvtsi32_si128(v9);
  v11 = a4->bottom - a4->top;
  DWORD1(v21) = _mm_cvtepi32_ps(v6).m128_u32[0];
  v12 = _mm_cvtsi32_si128(a3->top);
  DWORD2(v21) = _mm_cvtepi32_ps(v10).m128_u32[0];
  v13 = _mm_cvtsi32_si128(v11);
  v14 = a3->right - a3->left;
  HIDWORD(v21) = _mm_cvtepi32_ps(v13).m128_u32[0];
  v15 = v21;
  v16 = _mm_cvtsi32_si128(a3->left);
  DWORD1(v21) = _mm_cvtepi32_ps(v12).m128_u32[0];
  LODWORD(v21) = _mm_cvtepi32_ps(v16).m128_u32[0];
  *((float *)&v21 + 2) = (float)v14;
  *((float *)&v21 + 3) = (float)v7;
  v17 = v21;
  v21 = v15;
  v22 = v17;
  v18 = v8(v5, a2, &v22, &v21);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE5,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v18,
      v20);
  return 0LL;
}
