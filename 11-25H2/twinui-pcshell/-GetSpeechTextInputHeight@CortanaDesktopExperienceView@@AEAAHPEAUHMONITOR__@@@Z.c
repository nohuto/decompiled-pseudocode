/*
 * XREFs of ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x1803C9930
 * Callers:
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1803C8D38 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803CA5E0 (-NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_2b94c938c284b16eb776d16960094630_@@QEAA@PEAV?$shared_ptr@VPinRequestContext@@@std@@AEAV?$shared_ptr@VPinOperationContext@@@2@AEA_N@Z @ 0x1802961C4 (--0_lambda_2b94c938c284b16eb776d16960094630_@@QEAA@PEAV-$shared_ptr@VPinRequestContext@@@std@@AE.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1802B34F0 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     _lambda_60a0ae77abf5d33950a2a612d3af1eb1_::operator() @ 0x1803C7098 (_lambda_60a0ae77abf5d33950a2a612d3af1eb1_--operator().c)
 */

__int64 __fastcall CortanaDesktopExperienceView::GetSpeechTextInputHeight(
        CortanaDesktopExperienceView *this,
        ExperienceManagerUtils *a2,
        HMONITOR a3)
{
  _QWORD *v4; // rax
  int v5; // eax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  ExperienceManagerUtils *v9; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v10; // [rsp+60h] [rbp+18h] BYREF

  v9 = a2;
  v10 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x28, a2, a3);
  v4 = _lambda_2b94c938c284b16eb776d16960094630_::_lambda_2b94c938c284b16eb776d16960094630_(
         v7,
         (__int64)this,
         (__int64)&v9,
         (__int64)&v10);
  v5 = lambda_60a0ae77abf5d33950a2a612d3af1eb1_::operator()((__int64)v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8FD,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v5);
  return v10;
}
