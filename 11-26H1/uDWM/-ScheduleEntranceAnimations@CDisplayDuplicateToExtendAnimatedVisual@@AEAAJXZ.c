/*
 * XREFs of ?ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B062C
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B05B0 (-OnGlobalTimeUpdatedImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800383E8 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x18003DB08 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x180084740 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18008D6F4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?TransposeRectAroundCenter@@YA?AUtagRECT@@AEBU1@@Z @ 0x1800B0E24 (-TransposeRectAroundCenter@@YA-AUtagRECT@@AEBU1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDisplayDuplicateToExtendAnimatedVisual::ScheduleEntranceAnimations(
        CDisplayDuplicateToExtendAnimatedVisual *this)
{
  _DWORD *v2; // rax
  LONG v3; // r8d
  LONG v4; // edx
  int v5; // edi
  __int64 v6; // rdx
  _QWORD *v8; // rsi
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64); // r9
  __int64 v16; // rcx
  struct tagRECT v17; // xmm6
  int v18; // r9d
  int v19; // ecx
  LONG v20; // r8d
  LONG v21; // edx
  CDisplayAnimatedVisual *v22; // rcx
  unsigned __int64 v23; // rcx
  int v24; // eax
  unsigned int v25; // ebx
  struct tagRECT v26; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v27; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  CAnimatedTransitionVisual::SetBeginRect(
    *((CAnimatedTransitionVisual **)this + 47),
    (const struct tagRECT *)(*((_QWORD *)this + 45) + 56LL));
  CAnimatedTransitionVisual::SetEndRect(
    *((CAnimatedTransitionVisual **)this + 47),
    (const struct tagRECT *)(*((_QWORD *)this + 45) + 56LL));
  v2 = (_DWORD *)*((_QWORD *)this + 45);
  v3 = 0;
  if ( v2[17] - v2[15] >= 0 )
    v3 = v2[17] - v2[15];
  v4 = 0;
  if ( v2[16] - v2[14] >= 0 )
    v4 = v2[16] - v2[14];
  CVisual::SetSize((CVisual *)(*((_QWORD *)this + 47) + 8LL), v4, v3);
  v5 = CDisplayAnimatedVisual::ScheduleAnimation(
         (CDisplayDuplicateToExtendAnimatedVisual *)((char *)this + 208),
         *((struct CAnimatedTransitionVisual **)this + 47),
         (struct IAnimationListener *)(((unsigned __int64)this + 208) & -(__int64)(this != 0LL)),
         *((_DWORD *)this + 68),
         *((_DWORD *)this + 69),
         (unsigned int *)this + 109);
  if ( v5 < 0 )
  {
    v6 = 363LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = (_QWORD *)((char *)this + 416);
  if ( !*((_QWORD *)this + 52) )
  {
    *(_QWORD *)&v26.left = 0LL;
    v9 = *(__int64 **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL);
    v10 = *v9;
    *v8 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64 *, char *))(v10 + 376))(v9, (char *)this + 416);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 371LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
        (const char *)(unsigned int)v11);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v26.left);
      return (unsigned int)v5;
    }
    v13 = *(_QWORD *)&v26.left;
    *(_QWORD *)&v26.left = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v26);
    v11 = (**v15)(v15, &GUID_5017dab2_85fa_4446_8f2e_d5e66febb475, v14);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 372LL;
      goto LABEL_22;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v26.left + 40LL))(*(_QWORD *)&v26.left);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 374LL;
      goto LABEL_22;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)&v26.left + 56LL))(*(_QWORD *)&v26.left, 1LL);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 375LL;
      goto LABEL_22;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&v26.left + 48LL))(*(_QWORD *)&v26.left, 0LL);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 376LL;
      goto LABEL_22;
    }
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v26.left);
  }
  v16 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 51) + 24LL) + 32LL);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 80LL))(v16, *v8);
  if ( v5 < 0 )
  {
    v6 = 379LL;
    goto LABEL_7;
  }
  v17 = *(struct tagRECT *)(*((_QWORD *)this + 46) + 56LL);
  v26 = v17;
  if ( *((_BYTE *)this + 456) )
  {
    v17 = *TransposeRectAroundCenter(&v27, &v26);
    v26 = v17;
  }
  CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)this + 51), &v26);
  CAnimatedTransitionVisual::SetEndRect(*((CAnimatedTransitionVisual **)this + 51), &v26);
  v18 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v17, 8)) - _mm_cvtsi128_si32((__m128i)v17);
  v19 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v17, 12)) - _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v17, 4));
  v20 = 0;
  if ( v19 >= 0 )
    v20 = v19;
  v21 = 0;
  if ( v18 >= 0 )
    v21 = v18;
  CVisual::SetSize((CVisual *)(*((_QWORD *)this + 51) + 8LL), v21, v20);
  v5 = CDisplayAnimatedVisual::ScheduleAnimation(
         v22,
         *((struct CAnimatedTransitionVisual **)this + 51),
         (struct IAnimationListener *)(((unsigned __int64)this + 208) & -(__int64)(this != 0LL)),
         *((_DWORD *)this + 68),
         *((_DWORD *)this + 69),
         (unsigned int *)this + 111);
  if ( v5 < 0 )
  {
    v6 = 397LL;
    goto LABEL_7;
  }
  v24 = CDisplayAnimatedVisual::ScheduleAnimation(
          v23,
          (CAnimatedTransitionVisual ***)this + 48,
          (struct IAnimationListener *)(((unsigned __int64)this + 208) & -(__int64)(this != 0LL)),
          *((_DWORD *)this + 68),
          *((_DWORD *)this + 69),
          (unsigned int *)this + 113);
  v25 = v24;
  if ( v24 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x195,
    (int)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
    (const char *)(unsigned int)v24);
  return v25;
}
