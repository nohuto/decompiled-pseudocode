/*
 * XREFs of ?StartAnimationForMoveResizeTransition@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@AEBUtagRECT@@@Z @ 0x18003FD50
 * Callers:
 *     ?StartAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBW4ShellTransitionType@345@AEBURect@Foundation@Windows@5@@Z @ 0x18003FE24 (-StartAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBW4ShellTr.c)
 * Callees:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::StartAnimationForMoveResizeTransition(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v3; // eax
  int v4; // r10d
  __m128i v5; // xmm1
  unsigned int v6; // eax
  unsigned __int32 v7; // xmm1_4
  __m128i v8; // xmm0
  int v9; // eax
  unsigned __int32 v10; // xmm0_4
  int started; // eax
  unsigned int v12; // ebx
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3[1];
  v4 = a3[3] - v3;
  v5 = _mm_cvtsi32_si128(v3);
  v6 = 0;
  if ( a3[2] - *a3 >= 0 )
    v6 = a3[2] - *a3;
  v7 = _mm_cvtepi32_ps(v5).m128_u32[0];
  *(float *)(a1 + 428) = (float)*a3;
  v8 = _mm_cvtsi32_si128(v6);
  v9 = 0;
  v10 = _mm_cvtepi32_ps(v8).m128_u32[0];
  if ( v4 >= 0 )
    v9 = v4;
  *(_DWORD *)(a1 + 432) = v7;
  *(_DWORD *)(a1 + 436) = v10;
  *(float *)(a1 + 440) = (float)v9;
  started = CTopLevelWindow3D::StartAnimation(a1, a2);
  v12 = started;
  if ( started >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C4,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
    (const char *)(unsigned int)started,
    v14);
  return v12;
}
