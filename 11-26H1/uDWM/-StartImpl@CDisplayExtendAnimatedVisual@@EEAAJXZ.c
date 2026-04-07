/*
 * XREFs of ?StartImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800B15A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ @ 0x180070FDC (-RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180088754 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CaptureAndScheduleExitAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800B0FDC (-CaptureAndScheduleExitAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayExtendAnimatedVisual::StartImpl(CDisplayExtendAnimatedVisual *this)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 result; // rax
  const char *v5; // r9
  __int64 v6; // rax
  __int128 v7; // xmm0
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CDisplayExtendAnimatedVisual::CaptureAndScheduleExitAnimations(this);
  if ( v2 < 0 )
  {
    v3 = 54LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = CDisplayAnimatedVisual::RegisterGlobalTimeChangeNotification(this);
  if ( v2 < 0 )
  {
    v3 = 56LL;
    goto LABEL_3;
  }
  v6 = *((_QWORD *)this + 31);
  if ( v6 == *((_QWORD *)this + 32) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3C,
      (int)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
      v5);
  v7 = *(_OWORD *)(*(_QWORD *)v6 + 56LL);
  result = 0LL;
  *((_OWORD *)this + 27) = v7;
  return result;
}
