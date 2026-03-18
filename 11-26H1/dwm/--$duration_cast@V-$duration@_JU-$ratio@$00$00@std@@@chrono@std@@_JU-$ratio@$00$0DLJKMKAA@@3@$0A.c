/*
 * XREFs of ??$duration_cast@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@_JU?$ratio@$00$0DLJKMKAA@@3@$0A@@chrono@std@@YA?AV?$duration@_JU?$ratio@$00$00@std@@@01@AEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@01@@Z @ 0x14000DA8C
 * Callers:
 *     ?RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ @ 0x14000EA38 (-RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::chrono::duration_cast<std::chrono::duration<__int64,std::ratio<1,1>>,__int64,std::ratio<1,1000000000>,0>(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned __int64 v2; // rdx
  _QWORD *result; // rax

  v2 = (__int64)((unsigned __int128)(*a2 * (__int128)0x112E0BE826D694B3LL) >> 64) >> 26;
  result = a1;
  *a1 = (v2 >> 63) + v2;
  return result;
}
