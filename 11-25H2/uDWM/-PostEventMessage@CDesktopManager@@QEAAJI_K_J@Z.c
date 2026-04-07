/*
 * XREFs of ?PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z @ 0x1800AD460
 * Callers:
 *     ?PostFlickFeedback@CDesktopManager@@QEAAJ_NI@Z @ 0x1800AD548 (-PostFlickFeedback@CDesktopManager@@QEAAJ_NI@Z.c)
 *     ?PostKeystateFeedback@CDesktopManager@@QEAAJ_NK@Z @ 0x1800AD5F8 (-PostKeystateFeedback@CDesktopManager@@QEAAJ_NK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDesktopManager::PostEventMessage(HANDLE *this, UINT a2, WPARAM a3, LPARAM a4)
{
  signed int v8; // ebx
  DWORD ThreadId; // eax
  signed int LastError; // eax

  if ( this[141] )
  {
    SetLastError(0);
    ThreadId = GetThreadId(this[141]);
    if ( PostThreadMessageW(ThreadId, a2, a3, a4) )
    {
      return 0;
    }
    else
    {
      LastError = GetLastError();
      v8 = LastError;
      if ( LastError > 0 )
        v8 = (unsigned __int16)LastError | 0x80070000;
      if ( v8 >= 0 )
        v8 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800FD9E0, 1LL, v8, 0xA6Au, 0LL);
    }
  }
  else
  {
    v8 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800FD9E0, 1LL, -2147467259, 0xA67u, 0LL);
  }
  return (unsigned int)v8;
}
