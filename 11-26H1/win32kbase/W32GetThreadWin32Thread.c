/*
 * XREFs of W32GetThreadWin32Thread @ 0x14011A324
 * Callers:
 *     GdiThreadCalloutCleanup @ 0x140119FC0 (GdiThreadCalloutCleanup.c)
 *     GdiThreadCallout @ 0x14011A000 (GdiThreadCallout.c)
 *     UserThreadCallout @ 0x140139A60 (UserThreadCallout.c)
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 *     ?UserGlobalAtomTableCallout_Old@@YAPEAXXZ @ 0x1401D80E8 (-UserGlobalAtomTableCallout_Old@@YAPEAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall W32GetThreadWin32Thread(__int64 a1)
{
  __int64 v1; // rbx
  __int64 ThreadWin32Thread; // rax

  v1 = 0LL;
  ThreadWin32Thread = PsGetThreadWin32Thread(a1);
  if ( ThreadWin32Thread )
    return *(_QWORD *)ThreadWin32Thread;
  return v1;
}
