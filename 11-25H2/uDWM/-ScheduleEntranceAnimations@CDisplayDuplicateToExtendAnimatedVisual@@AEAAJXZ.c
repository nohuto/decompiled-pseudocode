/*
 * XREFs of ?ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B0D68
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B0CF0 (-OnGlobalTimeUpdatedImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180023854 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800238A4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x180037424 (-SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x18006DD50 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180094954 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?CreateGaussianBlurEffectProxy@CCompositor@@QEAAJPEAPEAVCGaussianBlurEffectProxy@@@Z @ 0x1800A9ED8 (-CreateGaussianBlurEffectProxy@CCompositor@@QEAAJPEAPEAVCGaussianBlurEffectProxy@@@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800AF8A8 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?TransposeRectAroundCenter@@YA?AUtagRECT@@AEBU1@@Z @ 0x1800B14CC (-TransposeRectAroundCenter@@YA-AUtagRECT@@AEBU1@@Z.c)
 *     ?Update@CGaussianBlurEffectProxy@@QEAAJMII@Z @ 0x1800B60B0 (-Update@CGaussianBlurEffectProxy@@QEAAJMII@Z.c)
 */

__int64 __fastcall CDisplayDuplicateToExtendAnimatedVisual::ScheduleEntranceAnimations(
        CDisplayDuplicateToExtendAnimatedVisual *this)
{
  _DWORD *v2; // rax
  int v3; // r8d
  int v4; // edx
  int v5; // edi
  __int64 v6; // rdx
  CGaussianBlurEffectProxy **v8; // rdi
  __int64 v9; // rcx
  int GaussianBlurEffectProxy; // esi
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  __int64 v13; // rdx
  bool v14; // zf
  struct tagRECT v15; // xmm6
  int v16; // r8d
  int v17; // r9d
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  unsigned int v21; // ebx
  struct tagRECT v22; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v23; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  CAnimatedTransitionVisual::SetBeginRect(
    *((struct tagPOINT **)this + 51),
    (const struct tagRECT *)(*((_QWORD *)this + 49) + 56LL));
  CAnimatedTransitionVisual::SetEndRect(
    *((CAnimatedTransitionVisual **)this + 51),
    (const struct tagRECT *)(*((_QWORD *)this + 49) + 56LL));
  v2 = (_DWORD *)*((_QWORD *)this + 49);
  v3 = 0;
  if ( v2[17] - v2[15] >= 0 )
    v3 = v2[17] - v2[15];
  v4 = 0;
  if ( v2[16] - v2[14] >= 0 )
    v4 = v2[16] - v2[14];
  CVisual::SetSize((CVisual *)(*((_QWORD *)this + 51) + 8LL), v4, v3);
  v5 = CDisplayAnimatedVisual::ScheduleAnimation(
         (CDisplayDuplicateToExtendAnimatedVisual *)((char *)this + 240),
         *((struct CAnimatedTransitionVisual **)this + 51),
         (struct IAnimationListener *)(((unsigned __int64)this + 240) & -(__int64)(this != 0LL)),
         *((_DWORD *)this + 76),
         *((_DWORD *)this + 77),
         (unsigned int *)this + 117);
  if ( v5 < 0 )
  {
    v6 = 363LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = (CGaussianBlurEffectProxy **)((char *)this + 448);
  if ( !*((_QWORD *)this + 56) )
  {
    v9 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    *v8 = 0LL;
    GaussianBlurEffectProxy = CCompositor::CreateGaussianBlurEffectProxy(v9, (CBaseObject **)this + 56);
    if ( GaussianBlurEffectProxy < 0 )
    {
      v13 = 370LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
        (const char *)(unsigned int)GaussianBlurEffectProxy);
      return (unsigned int)GaussianBlurEffectProxy;
    }
    GaussianBlurEffectProxy = CGaussianBlurEffectProxy::Update(*v8, 25.0, v11, v12);
    if ( GaussianBlurEffectProxy < 0 )
    {
      v13 = 374LL;
      goto LABEL_11;
    }
  }
  v5 = CVisualProxy::SetEffect(*(CVisualProxy **)(*((_QWORD *)this + 55) + 24LL), *v8);
  if ( v5 < 0 )
  {
    v6 = 377LL;
    goto LABEL_7;
  }
  v14 = *((_BYTE *)this + 488) == 0;
  v15 = *(struct tagRECT *)(*((_QWORD *)this + 50) + 56LL);
  v23 = v15;
  if ( !v14 )
  {
    v15 = *TransposeRectAroundCenter(&v22, &v23);
    v23 = v15;
  }
  CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)this + 55), &v23);
  CAnimatedTransitionVisual::SetEndRect(*((CAnimatedTransitionVisual **)this + 55), &v23);
  v16 = 0;
  v17 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v15, 8)) - _mm_cvtsi128_si32((__m128i)v15);
  v18 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v15, 12)) - _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v15, 4));
  if ( v18 >= 0 )
    v16 = v18;
  v19 = 0;
  if ( v17 >= 0 )
    v19 = v17;
  CVisual::SetSize((CVisual *)(*((_QWORD *)this + 55) + 8LL), v19, v16);
  v5 = CDisplayAnimatedVisual::ScheduleAnimation(
         (CDisplayAnimatedVisual *)*((unsigned int *)this + 77),
         *((struct CAnimatedTransitionVisual **)this + 55),
         (struct IAnimationListener *)(((unsigned __int64)this + 240) & -(__int64)(this != 0LL)),
         *((_DWORD *)this + 76),
         *((_DWORD *)this + 77),
         (unsigned int *)this + 119);
  if ( v5 < 0 )
  {
    v6 = 395LL;
    goto LABEL_7;
  }
  v20 = CDisplayAnimatedVisual::ScheduleAnimation(
          (CAnimatedTransitionVisual *)*((unsigned int *)this + 77),
          (CAnimatedTransitionVisual ***)this + 52,
          (struct IAnimationListener *)(((unsigned __int64)this + 240) & -(__int64)(this != 0LL)),
          *((_DWORD *)this + 76),
          *((_DWORD *)this + 77),
          (unsigned int *)this + 121);
  v21 = v20;
  if ( v20 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x193,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
    (const char *)(unsigned int)v20);
  return v21;
}
