/*
 * XREFs of HalpErrataInitSystem @ 0x140BF11F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpUsbLegacyScanBusForHandoff @ 0x14059CBB8 (HalpUsbLegacyScanBusForHandoff.c)
 *     HalpErrataApplyPerProcessor @ 0x140C12DD0 (HalpErrataApplyPerProcessor.c)
 *     HalpErrataInitDiscard @ 0x140CB52CC (HalpErrataInitDiscard.c)
 *     HalpInitChipHacks @ 0x140CB9C48 (HalpInitChipHacks.c)
 */

__int64 __fastcall HalpErrataInitSystem(int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  switch ( a1 )
  {
    case 2:
      HalpMaxPciBus = *(_DWORD *)(*(_QWORD *)(a3 + 240) + 3488LL);
      return v3;
    case 7:
      HalpErrataInitDiscard();
      return v3;
    case 17:
      IommuInterfaceStateChangeCallbackPushLock.WaitListEntry.Blink = &IommuInterfaceStateChangeCallbackPushLock.WaitListEntry;
      IommuInterfaceStateChangeCallbackPushLock.WaitListEntry.Flink = &IommuInterfaceStateChangeCallbackPushLock.WaitListEntry;
      HalpUsbLegacyScanBusForHandoff();
      goto LABEL_8;
    case 19:
LABEL_8:
      HalpErrataApplyPerProcessor();
      return v3;
    case 27:
      return (unsigned int)HalpInitChipHacks();
  }
  return v3;
}
