/*
 * XREFs of StorNotificationCompletePendingIrps @ 0x14005C084
 * Callers:
 *     StorFreeEventNotificationResources @ 0x14005C204 (StorFreeEventNotificationResources.c)
 *     StorCancelStorageNotificationIrp @ 0x1401AF900 (StorCancelStorageNotificationIrp.c)
 *     StorDeleteStorageNotification @ 0x1401AF9BC (StorDeleteStorageNotification.c)
 *     StorDisableStorageNotification @ 0x1401AFAA4 (StorDisableStorageNotification.c)
 * Callees:
 *     <none>
 */

void __fastcall StorNotificationCompletePendingIrps(__int64 a1, int a2)
{
  struct _IO_CSQ *v3; // rbx
  PIRP v4; // rax

  if ( a1 && *(__int16 *)(a1 + 36) > 0 )
  {
    v3 = (struct _IO_CSQ *)(a1 + 80);
    while ( 1 )
    {
      v4 = IoCsqRemoveNextIrp(v3, 0LL);
      if ( !v4 )
        break;
      v4->IoStatus.Status = a2;
      v4->IoStatus.Information = 0LL;
      IofCompleteRequest(v4, 0);
    }
  }
}
