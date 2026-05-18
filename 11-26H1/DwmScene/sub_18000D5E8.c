/*
 * XREFs of sub_18000D5E8 @ 0x18000D5E8
 * Callers:
 *     sub_18000D534 @ 0x18000D534 (sub_18000D534.c)
 * Callees:
 *     <none>
 */

void sub_18000D5E8()
{
  if ( qword_1801C8390 )
  {
    qword_1801C8390(&unk_1801C8358, &CriticalSection, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&CriticalSection);
  }
}
