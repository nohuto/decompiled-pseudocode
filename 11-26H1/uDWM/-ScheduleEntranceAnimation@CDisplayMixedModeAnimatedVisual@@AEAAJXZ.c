/*
 * XREFs of ?ScheduleEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x18007B13C
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ @ 0x1800B26B0 (-OnGlobalTimeUpdatedImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040100 (--1-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x180084740 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x18008DB74 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@PEAPEAVCAnimatedTransitionVisua.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800AE69C (--$_Emplace_reallocate@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayMixedModeAnimatedVisual::ScheduleEntranceAnimation(CDisplayMixedModeAnimatedVisual *this)
{
  const struct tagRECT *v2; // rdi
  const struct tagRECT *v3; // rbp
  int v4; // eax
  unsigned int v5; // esi
  struct CAnimatedTransitionVisual **v6; // rdx
  struct CAnimatedTransitionVisual *v7; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+20h] [rbp-28h]
  int v16; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CAnimatedTransitionVisual *v18; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  v19 = 0LL;
  GetDesktopID(1LL, &v19);
  v2 = (const struct tagRECT *)*((_QWORD *)this + 51);
  v3 = (const struct tagRECT *)*((_QWORD *)this + 52);
  while ( 1 )
  {
    if ( v2 == v3 )
    {
      v9 = CDisplayAnimatedVisual::ScheduleAnimation(
             (char *)this + 448,
             (char *)this + 384,
             ((unsigned __int64)this + 208) & -(__int64)(this != 0LL),
             *((unsigned int *)this + 68),
             *((_DWORD *)this + 69),
             (char *)this + 448);
      v11 = v9;
      if ( v9 >= 0 )
      {
        v12 = CDisplayAnimatedVisual::ScheduleAnimation(
                v10,
                (char *)this + 360,
                (char *)this + 208,
                *((unsigned int *)this + 68),
                *((_DWORD *)this + 69),
                (char *)this + 444);
        v13 = v12;
        if ( v12 >= 0 )
        {
          return 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x12A,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
            (const char *)(unsigned int)v12,
            v16);
          return v13;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x122,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
          (const char *)(unsigned int)v9,
          v15);
        return v11;
      }
    }
    v18 = 0LL;
    v4 = CDisplayAnimatedVisual::CaptureAndAddVisual(this, v19, v2, &v18);
    v5 = v4;
    if ( v4 < 0 )
      break;
    v6 = (struct CAnimatedTransitionVisual **)*((_QWORD *)this + 49);
    if ( v6 == *((struct CAnimatedTransitionVisual ***)this + 50) )
    {
      std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>(
        (char *)this + 384,
        v6,
        &v18);
    }
    else
    {
      v7 = v18;
      v18 = 0LL;
      *v6 = v7;
      *((_QWORD *)this + 49) += 8LL;
    }
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v18);
    ++v2;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x118,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
    (const char *)(unsigned int)v4,
    v14);
  if ( v18 )
    CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v18 + 8));
  return v5;
}
