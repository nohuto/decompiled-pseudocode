/*
 * XREFs of ?PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z @ 0x1800AC4F8
 * Callers:
 *     ?PostFlickFeedback@CDesktopManager@@QEAAJ_NI@Z @ 0x1800AC5E8 (-PostFlickFeedback@CDesktopManager@@QEAAJ_NI@Z.c)
 *     ?PostKeystateFeedback@CDesktopManager@@QEAAJ_NK@Z @ 0x1800AC698 (-PostKeystateFeedback@CDesktopManager@@QEAAJ_NK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDesktopManager::PostEventMessage(HANDLE *this, UINT a2, WPARAM a3, LPARAM a4)
{
  signed int v8; // ebx
  DWORD ThreadId; // eax
  signed int LastError; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]

  if ( this[142] )
  {
    SetLastError(0);
    ThreadId = GetThreadId(this[142]);
    if ( PostThreadMessageW(ThreadId, a2, a3, a4) )
      return 0;
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    v12 = 2655;
    if ( v8 >= 0 )
      v8 = -2003304445;
  }
  else
  {
    v8 = -2147467259;
    v12 = 2652;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F8D50, 1LL, v8, v12, 0LL);
  return (unsigned int)v8;
}
