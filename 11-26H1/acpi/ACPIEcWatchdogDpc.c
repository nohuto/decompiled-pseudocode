/*
 * XREFs of ACPIEcWatchdogDpc @ 0x14004DD70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIEcServiceDevice @ 0x14001F19C (ACPIEcServiceDevice.c)
 *     ACPIEcLogAction @ 0x14001F2C0 (ACPIEcLogAction.c)
 *     ACPIEcLogError @ 0x140055894 (ACPIEcLogError.c)
 */

void __fastcall ACPIEcWatchdogDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  char v5; // al
  char v6; // bp
  KIRQL v7; // bl
  char v8; // al
  KIRQL v9; // al
  KIRQL v10; // bl
  KIRQL v11; // bl
  KIRQL v12; // al

  v5 = __inbyte(*((_QWORD *)DeferredContext + 4));
  v6 = v5;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeferredContext + 11);
  ACPIEcLogAction((__int64)DeferredContext, 0x10u, v6, 0LL);
  KeReleaseSpinLock((PKSPIN_LOCK)DeferredContext + 11, v7);
  v8 = DeferredContext[512];
  if ( v8 != -1 )
    DeferredContext[512] = ++v8;
  if ( (unsigned __int8)v8 <= 5u )
    ACPIEcLogError(DeferredContext, 3221553165LL);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeferredContext + 11);
  v10 = v9;
  if ( DeferredContext[465] )
  {
    KeSetTimer((PKTIMER)(DeferredContext + 528), ACPIEcWatchdogTimeout, (PKDPC)(DeferredContext + 592));
    KeReleaseSpinLock((PKSPIN_LOCK)DeferredContext + 11, v10);
    return;
  }
  DeferredContext[465] = 1;
  KeReleaseSpinLock((PKSPIN_LOCK)DeferredContext + 11, v9);
  switch ( DeferredContext[496] )
  {
    case 1:
      goto LABEL_18;
    case 2:
      if ( (v6 & 1) == 0 )
        DeferredContext[496] = 0;
      break;
    case 3:
LABEL_18:
      if ( (v6 & 1) == 0 )
      {
        if ( DeferredContext[496] != 1 )
        {
LABEL_21:
          DeferredContext[496] = 5;
          break;
        }
LABEL_20:
        --*((_QWORD *)DeferredContext + 63);
        --DeferredContext[499];
        ++*((_WORD *)DeferredContext + 251);
        goto LABEL_21;
      }
      break;
    case 4:
      goto LABEL_20;
    case 5:
      if ( (v6 & 2) != 0 )
      {
        v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeferredContext + 11);
        ACPIEcLogAction((__int64)DeferredContext, 0x30u, 131, 0LL);
        KeReleaseSpinLock((PKSPIN_LOCK)DeferredContext + 11, v11);
        __outbyte(*((_QWORD *)DeferredContext + 5), 0x83u);
      }
      break;
    case 6:
      goto LABEL_20;
  }
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeferredContext + 11);
  DeferredContext[465] = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)DeferredContext + 11, v12);
  KeSetTimer((PKTIMER)(DeferredContext + 528), ACPIEcWatchdogTimeout, (PKDPC)(DeferredContext + 592));
  ACPIEcServiceDevice((__int64)DeferredContext);
}
