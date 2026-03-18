/*
 * XREFs of ?WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14005B81C
 * Callers:
 *     _BmlLogDiagnosticsPacket @ 0x1403D43D8 (_BmlLogDiagnosticsPacket.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14000BB9C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 */

__int64 __fastcall VIDPN_MGR::WriteDiagEntry(DXGDIAGNOSTICS **this, struct _DXGK_DIAG_HEADER *a2)
{
  __int64 CurrentProcess; // rax
  __int128 v5; // xmm0
  __int64 v6; // rbx
  __int64 result; // rax

  if ( !a2 || !*((_DWORD *)a2 + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 831;
  }
  if ( a2 && *((_DWORD *)a2 + 1) >= 0x30u )
  {
    CurrentProcess = PsGetCurrentProcess();
    v5 = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
    *((_DWORD *)a2 + 9) &= ~0x80000000;
    *((_OWORD *)a2 + 1) = v5;
    *((_DWORD *)a2 + 9) ^= (PsGetCurrentProcessSessionId() ^ *((_DWORD *)a2 + 9)) & 0x7FFFFFFF;
    *((_DWORD *)a2 + 8) = (unsigned int)PsGetCurrentThreadId();
    v6 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)a2 + 1) = v6 * KeQueryTimeIncrement();
    if ( this[70] )
    {
      if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(this + 5)) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 867;
      }
      return DXGDIAGNOSTICS::WriteDiagnosticEntry(this[70], a2);
    }
    else
    {
      WdLogSingleEntry2(2LL, a2, this);
      result = 3221225860LL;
      WdLogGlobalForLineNumber = 859;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 838;
  }
  return result;
}
