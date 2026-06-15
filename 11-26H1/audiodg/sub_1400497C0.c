/*
 * XREFs of sub_1400497C0 @ 0x1400497C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void sub_1400497C0()
{
  DeleteCriticalSection(&stru_1400E7CE8);
  if ( hEvent )
    CloseHandle(hEvent);
}
