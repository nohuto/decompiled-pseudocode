/*
 * XREFs of ?ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z @ 0x1402D04F4
 * Callers:
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x140059DAC (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1402CFF04 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchResumeSchedulerForSource@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140057EC8 (-VidSchResumeSchedulerForSource@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 */

void __fastcall ADAPTER_RENDER::ResumeSchedulerForVidPnSource(ADAPTER_RENDER *this, unsigned int a2)
{
  struct _VIDSCH_GLOBAL *v4; // rdx
  VIDSCH_EXPORT *v5; // rcx

  if ( (*((_DWORD *)this + 189) & a2) != a2 )
  {
    __debugbreak();
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3082;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(m_SourceMaskSchedulerSuspended & SourceMaskResumeScheduler) == SourceMaskResumeScheduler",
      3082LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)this + 93);
  v5 = (VIDSCH_EXPORT *)*((_QWORD *)this + 92);
  *((_DWORD *)this + 189) &= ~a2;
  VIDSCH_EXPORT::VidSchResumeSchedulerForSource(v5, v4, a2);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&ResumeSchedulerForVidPnSource);
}
