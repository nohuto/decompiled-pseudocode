/*
 * XREFs of ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x18003E0D4
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800194C0 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x1800373A0 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x18003CFD0 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 *     ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x18003DF60 (-ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800951A4 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDesktopManager::PostStartAnimations(CDesktopManager *this)
{
  signed int v2; // edi
  signed int LastError; // eax

  v2 = 0;
  *((_BYTE *)this + 19) = 0;
  SetLastError(0);
  if ( !PostThreadMessageW(*((_DWORD *)this + 282), 0x400u, 0LL, 0LL) )
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    if ( v2 >= 0 )
      v2 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x674u, 0LL);
  }
  return (unsigned int)v2;
}
