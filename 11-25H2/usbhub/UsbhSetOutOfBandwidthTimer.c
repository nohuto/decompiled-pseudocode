/*
 * XREFs of UsbhSetOutOfBandwidthTimer @ 0x14003E134
 * Callers:
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1400385D0 (UsbhSelectConfigOrInterfaceComplete.c)
 * Callees:
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhSetTimer @ 0x14002EF20 (UsbhSetTimer.c)
 *     UsbhReferenceListAdd @ 0x14002EFD0 (UsbhReferenceListAdd.c)
 */

void __fastcall UsbhSetOutOfBandwidthTimer(__int64 a1, unsigned __int16 a2, int a3, int a4)
{
  __int64 PortData; // rbp
  __int64 Pool2; // rax
  _DWORD *v9; // rsi

  PortData = UsbhGetPortData(a1, a2);
  if ( PortData )
  {
    Pool2 = ExAllocatePool2(64LL, 160LL, 1112885333LL);
    v9 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      if ( (int)UsbhReferenceListAdd(a1, Pool2, 1951875663) < 0
        || (*v9 = 1331118703,
            *((_QWORD *)v9 + 2) = a1,
            *((_QWORD *)v9 + 1) = PortData,
            v9[38] = a3,
            v9[39] = a4,
            KeInitializeTimer((PKTIMER)(v9 + 6)),
            KeInitializeDpc((PRKDPC)(v9 + 22), (PKDEFERRED_ROUTINE)UsbhOutOfBandwidthTimerDpc, v9),
            (UsbhSetTimer(a1, 1000, (struct _KTIMER *)(v9 + 6), (struct _KDPC *)(v9 + 22), 0x6D74626Fu, 1) & 0xC0000000) == 0xC0000000) )
      {
        ExFreePoolWithTag(v9, 0);
      }
      else
      {
        Log(a1, 8, 1869565524, PortData, _InterlockedExchange64((volatile __int64 *)(PortData + 688), (__int64)v9));
      }
    }
  }
}
