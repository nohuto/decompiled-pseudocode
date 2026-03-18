/*
 * XREFs of MiGetReadyInPageBlock @ 0x140B3C89C
 * Callers:
 *     MiSwitchToTransition @ 0x1402A2130 (MiSwitchToTransition.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     MiFreeInPageSupportBlock @ 0x14031D5D8 (MiFreeInPageSupportBlock.c)
 *     MiGetInPageSupportBlock @ 0x140396FF0 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x140397270 (MiInitializeInPageSupport.c)
 *     MiLocateLockedVadEvent @ 0x1403BCC30 (MiLocateLockedVadEvent.c)
 */

PSLIST_ENTRY __fastcall MiGetReadyInPageBlock(__int64 a1)
{
  unsigned __int64 LockedVadEvent; // rsi
  PSLIST_ENTRY v2; // rbx
  PSLIST_ENTRY v4; // rdi

  LockedVadEvent = MiLocateLockedVadEvent(a1, 8u);
  v2 = *(PSLIST_ENTRY *)(LockedVadEvent + 24);
  while ( LODWORD(v2[11].Next) != 1 )
  {
    v4 = MiGetInPageSupportBlock(0, 0LL);
    if ( v4 )
    {
      MiFreeInPageSupportBlock(v2);
      *(_QWORD *)(LockedVadEvent + 24) = v4;
      v2 = v4;
      break;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  MiInitializeInPageSupport((struct _LIST_ENTRY *)v2, 0, 0LL);
  return v2;
}
