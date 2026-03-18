/*
 * XREFs of MiInitializeDecayPfns @ 0x140D018DC
 * Callers:
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     MiSetPfnContainingFrame @ 0x14033BC10 (MiSetPfnContainingFrame.c)
 *     KcsanMarkAddressIgnored @ 0x1404F7F60 (KcsanMarkAddressIgnored.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY MiInitializeDecayPfns()
{
  __int64 v0; // rdi
  struct _SLIST_ENTRY *v1; // rbx
  PSLIST_ENTRY result; // rax

  v0 = 2048LL;
  dword_140E347D8 = 2048;
  qword_140E347E0 = (__int64)&qword_140E347E8;
  KcsanMarkAddressIgnored((ULONG_PTR)&qword_140E347E8, 0x100uLL);
  if ( ((unsigned __int8)&stru_140E347C0 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  stru_140E347C0 = 0LL;
  v1 = (struct _SLIST_ENTRY *)(48 * qword_140E347B0 - 0x21FFFFFE8030LL);
  MiSetPfnContainingFrame((__int64)v1, 1LL);
  do
  {
    result = RtlpInterlockedPushEntrySList(&stru_140E347C0, v1);
    v1 -= 3;
    --v0;
  }
  while ( v0 );
  return result;
}
