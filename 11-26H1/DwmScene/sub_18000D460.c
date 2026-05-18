/*
 * XREFs of sub_18000D460 @ 0x18000D460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_18000D460()
{
  DeleteCriticalSection(&CriticalSection);
  if ( hHandle )
    CloseHandle(hHandle);
}
