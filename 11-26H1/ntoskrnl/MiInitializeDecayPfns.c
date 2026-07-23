/*
 * XREFs of MiInitializeDecayPfns @ 0x140D07C7C
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     KcsanMarkAddressIgnored @ 0x1404F1570 (KcsanMarkAddressIgnored.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY MiInitializeDecayPfns()
{
  __int64 v0; // rdi
  _SLIST_ENTRY *v1; // rbx
  PSLIST_ENTRY result; // rax

  v0 = 2048LL;
  dword_140E34958 = 2048;
  qword_140E34960 = (__int64)&qword_140E34968;
  KcsanMarkAddressIgnored((ULONG_PTR)&qword_140E34968, 0x100uLL);
  if ( ((unsigned __int8)&stru_140E34940 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  stru_140E34940 = 0LL;
  v1 = (_SLIST_ENTRY *)(48 * qword_140E34930 - 0x21FFFFFE8030LL);
  MiSetPfnContainingFrame((__int64)v1, 1LL);
  do
  {
    result = RtlpInterlockedPushEntrySList(&stru_140E34940, v1);
    v1 -= 3;
    --v0;
  }
  while ( v0 );
  return result;
}
