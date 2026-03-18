/*
 * XREFs of ?EndDeferReport@QualityOfService@@YAXXZ @ 0x1401A8030
 * Callers:
 *     <none>
 * Callees:
 *     ?EndDeferral@CQoSReport@@QEAAXXZ @ 0x1401A8070 (-EndDeferral@CQoSReport@@QEAAXXZ.c)
 */

void __fastcall QualityOfService::EndDeferReport(QualityOfService *this)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(this);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  CQoSReport::EndDeferral(*(CQoSReport **)(*(_QWORD *)(CurrentProcessWin32Process + 1208) + 41344LL));
}
