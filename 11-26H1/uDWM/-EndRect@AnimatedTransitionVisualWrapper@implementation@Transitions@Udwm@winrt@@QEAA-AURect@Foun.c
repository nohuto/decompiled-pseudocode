/*
 * XREFs of ?EndRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800D0E28
 * Callers:
 *     ?get_EndRect@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x1800D14B0 (-get_EndRect@-$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U.c)
 * Callees:
 *     ?EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18006F030 (-EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@win.c)
 *     ?GetEndRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z @ 0x1800786E0 (-GetEndRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::EndRect(
        winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *a1,
        __int64 a2)
{
  CAnimatedTransitionVisual *v4; // rcx
  int v5; // r8d
  int v6; // r9d
  int v7; // ecx
  __m128i v8; // xmm1
  unsigned int v9; // eax
  unsigned __int32 v10; // xmm1_4
  __m128i v11; // xmm0
  __int64 result; // rax
  struct tagRECT v13; // [rsp+20h] [rbp-18h] BYREF

  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::EnsureSnapshotVisualIsAlive(a1);
  v4 = (CAnimatedTransitionVisual *)*((_QWORD *)a1 + 5);
  v13 = 0LL;
  CAnimatedTransitionVisual::GetEndRect(v4, &v13);
  v5 = v13.right - v13.left;
  v6 = v13.bottom - v13.top;
  v7 = 0;
  v8 = _mm_cvtsi32_si128(v13.top);
  v9 = 0;
  *(float *)a2 = (float)v13.left;
  if ( v5 >= 0 )
    v9 = v5;
  v10 = _mm_cvtepi32_ps(v8).m128_u32[0];
  if ( v6 >= 0 )
    v7 = v6;
  v11 = _mm_cvtsi32_si128(v9);
  result = a2;
  *(_DWORD *)(a2 + 4) = v10;
  *(_DWORD *)(a2 + 8) = _mm_cvtepi32_ps(v11).m128_u32[0];
  *(float *)(a2 + 12) = (float)v7;
  return result;
}
