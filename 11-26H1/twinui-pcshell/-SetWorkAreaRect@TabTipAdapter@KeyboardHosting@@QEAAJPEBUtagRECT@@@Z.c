/*
 * XREFs of ?SetWorkAreaRect@TabTipAdapter@KeyboardHosting@@QEAAJPEBUtagRECT@@@Z @ 0x1801F7BC4
 * Callers:
 *     ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x18022A380 (-WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800BBBDC (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::SetWorkAreaRect(RTL_SRWLOCK *this, const struct tagRECT *a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  PVOID Ptr; // rcx
  int v6; // eax
  __int64 (__fastcall *v7)(PVOID, int *, int *); // rax
  int v8; // ebx
  __int64 v9; // rdx
  int v11[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = _mm_cvtsi32_si128(a2->left);
  v3 = _mm_cvtsi32_si128(a2->top);
  Ptr = this[16].Ptr;
  v13 = 0;
  v11[0] = _mm_cvtepi32_ps(v2).m128_u32[0];
  v11[1] = _mm_cvtepi32_ps(v3).m128_u32[0];
  v6 = a2->bottom - a2->top;
  *(float *)&v11[2] = (float)(a2->right - a2->left);
  *(float *)v2.m128i_i32 = (float)v6;
  v7 = *(__int64 (__fastcall **)(PVOID, int *, int *))(*(_QWORD *)Ptr + 64LL);
  v11[3] = v2.m128i_i32[0];
  v8 = v7(Ptr, v11, &v13);
  if ( v8 < 0 )
  {
    v9 = 2344LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  if ( v13 == 3 )
  {
    v8 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(this);
    if ( v8 < 0 )
    {
      v9 = 2348LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
