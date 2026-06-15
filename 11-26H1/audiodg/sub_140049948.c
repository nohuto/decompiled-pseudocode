/*
 * XREFs of sub_140049948 @ 0x140049948
 * Callers:
 *     sub_140049894 @ 0x140049894 (sub_140049894.c)
 * Callees:
 *     <none>
 */

void sub_140049948()
{
  if ( qword_1400E7D10 )
  {
    sub_1400B6010(&unk_1400E7CD8);
  }
  else
  {
    LeaveCriticalSection(&stru_1400E7CE8);
    WaitForSingleObjectEx(hEvent, 0x64u, 0);
    EnterCriticalSection(&stru_1400E7CE8);
  }
}
