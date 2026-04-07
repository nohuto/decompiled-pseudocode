/*
 * XREFs of ?GetMaximizeSnapStartRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x18006D244
 * Callers:
 *     ?GetMaximizeSnapStartRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x18006D1E0 (-GetMaximizeSnapStartRect@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@win.c)
 * Callees:
 *     ?GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x18000B470 (-GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURec.c)
 *     ?HasTaggedWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x18006D2DC (-HasTaggedWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::GetMaximizeSnapStartRect(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *a1,
        __int64 a2)
{
  bool HasTaggedWindowRect; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r9d
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __m128i v11; // xmm1
  int v12; // eax
  unsigned __int32 v13; // xmm1_4

  HasTaggedWindowRect = winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::HasTaggedWindowRect(a1);
  v6 = 0;
  if ( HasTaggedWindowRect )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 232LL);
    v9 = *(_QWORD *)(v8 + 836);
    v10 = *(_QWORD *)(v8 + 828);
    v11 = _mm_cvtsi32_si128(HIDWORD(v10));
    v12 = 0;
    *(float *)a2 = (float)(int)v10;
    if ( (int)v9 - (int)v10 >= 0 )
      v12 = v9 - v10;
    v13 = _mm_cvtepi32_ps(v11).m128_u32[0];
    if ( HIDWORD(v9) - HIDWORD(v10) >= 0 )
      v6 = HIDWORD(v9) - HIDWORD(v10);
    *(_DWORD *)(a2 + 4) = v13;
    *(float *)(a2 + 8) = (float)v12;
    *(float *)(a2 + 12) = (float)v6;
  }
  else
  {
    winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::GetAbsoluteWindowRect(v5, v4);
  }
  return a2;
}
