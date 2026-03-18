/*
 * XREFs of ?CreateAndStartKeyframeAnimation@CInteractionTracker2@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x180272D50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW45KeyframeAnimationDelayBehavior@@MW45KeyframeAnimationDirection@@MW45KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801E1D08 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EX.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?4VCScrollScaleKeyframeAnimation@@@?$ComPtr@VCScrollKeyframeAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCScrollScaleKeyframeAnimation@@@Z @ 0x18020EF4C (--$-4VCScrollScaleKeyframeAnimation@@@-$ComPtr@VCScrollKeyframeAnimation@@@WRL@Microsoft@@QEAAAE.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ??0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTrackerBase@@@Z @ 0x180289AC4 (--0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTrackerBase@@@Z.c)
 *     ??0CScrollKeyframeAnimation@@IEAA@PEAVCComposition@@PEAVCInteractionTrackerBase@@@Z @ 0x18028BF74 (--0CScrollKeyframeAnimation@@IEAA@PEAVCComposition@@PEAVCInteractionTrackerBase@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker2::CreateAndStartKeyframeAnimation(
        struct CComposition **a1,
        int a2,
        unsigned int a3,
        const char *a4,
        int a5,
        unsigned __int64 *a6)
{
  CScrollKeyframeAnimation *v10; // rcx
  _QWORD *v11; // rcx
  CScrollPositionKeyframeAnimation *v12; // rax
  unsigned __int64 v13; // rbx
  __int64 result; // rax
  __int128 v15; // xmm0
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // [rsp+20h] [rbp-B9h]
  __int64 v19; // [rsp+28h] [rbp-B1h]
  __int64 v20; // [rsp+30h] [rbp-A9h]
  __int64 v21; // [rsp+38h] [rbp-A1h]
  __int64 v22; // [rsp+40h] [rbp-99h]
  __int64 v23; // [rsp+50h] [rbp-89h]
  __int64 v24; // [rsp+60h] [rbp-79h]
  __int64 v25; // [rsp+68h] [rbp-71h]
  __int64 v26[2]; // [rsp+80h] [rbp-59h] BYREF
  _DWORD v27[20]; // [rsp+90h] [rbp-49h] BYREF
  __int128 v28; // [rsp+E0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+4Fh]

  v26[0] = 0LL;
  if ( a2 == 66 )
  {
    v12 = (CScrollPositionKeyframeAnimation *)DefaultHeap::AllocClear(0x288uLL);
    if ( v12 )
      v12 = CScrollPositionKeyframeAnimation::CScrollPositionKeyframeAnimation(
              v12,
              a1[3],
              (struct CInteractionTrackerBase *)a1);
    Microsoft::WRL::ComPtr<CScrollKeyframeAnimation>::operator=<CScrollScaleKeyframeAnimation>(v26, (__int64)v12);
  }
  else
  {
    if ( a2 != 69 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1739,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker2.cpp",
        a4);
    v10 = (CScrollKeyframeAnimation *)DefaultHeap::AllocClear(0x280uLL);
    if ( v10 )
    {
      CScrollKeyframeAnimation::CScrollKeyframeAnimation(v10, a1[3], (struct CInteractionTrackerBase *)a1);
      *v11 = &CScrollScaleKeyframeAnimation::`vftable';
    }
    else
    {
      v11 = 0LL;
    }
    Microsoft::WRL::ComPtr<CScrollKeyframeAnimation>::operator=<CScrollScaleKeyframeAnimation>(v26, (__int64)v11);
  }
  v13 = v26[0];
  if ( v26[0] )
  {
    memset_0(v27, 0, 0x60uLL);
    v27[12] = a5;
    v15 = *(_OWORD *)a4;
    v27[1] = 65543;
    v27[13] = 65543;
    v28 = v15;
    v27[0] = 0;
    v27[2] = 1065353216;
    v27[6] = 3;
    v27[14] = 1065353216;
    v27[18] = 1;
    v16 = CKeyframeAnimation::Initialize(
            v13,
            (volatile signed __int64 *)a1,
            a2,
            a3,
            v18,
            v19,
            v20,
            v21,
            v22,
            1.0,
            v23,
            0,
            v24,
            v25,
            (__int64)v27);
    v17 = v16;
    if ( v16 >= 0 )
    {
      (*((void (__fastcall **)(struct CComposition **, unsigned __int64))*a1 + 68))(a1, v13);
      result = 0LL;
      *a6 = v13;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1760,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker2.cpp",
        (const char *)(unsigned int)v16);
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 16LL))(v13);
      return v17;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x173D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker2.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
