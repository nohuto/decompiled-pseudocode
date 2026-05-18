/*
 * XREFs of ?Stop@CKstBase@@QEAAXXZ @ 0x180010B08
 * Callers:
 *     DwmpShutdownWinlogonMouseThread @ 0x18000E010 (DwmpShutdownWinlogonMouseThread.c)
 *     ??1CKstBase@@QEAA@XZ @ 0x18000FF70 (--1CKstBase@@QEAA@XZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180006C48 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SignalReset@DWM@KST@InputTraceLogging@@SAXXZ @ 0x1800108B4 (-SignalReset@DWM@KST@InputTraceLogging@@SAXXZ.c)
 */

void __fastcall CKstBase::Stop(HANDLE *this)
{
  const char *v2; // r9
  HANDLE v3; // rsi
  DWORD LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  InputTraceLogging::KST::DWM::SignalReset();
  if ( this[2] && this[2] != (HANDLE)-1LL )
  {
    if ( !SetEvent(this[4]) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x9D8,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
        v2);
    WaitForSingleObject(this[2], 0xFFFFFFFF);
    v3 = this[2];
    if ( v3 )
    {
      if ( v3 != (HANDLE)-1LL )
      {
        LastError = GetLastError();
        CloseHandle(v3);
        SetLastError(LastError);
      }
    }
    this[2] = 0LL;
  }
}
