/*
 * XREFs of PnpDereferenceNotify @ 0x1409DD548
 * Callers:
 *     PnpUnregisterPlugPlayNotification @ 0x1404ABEF8 (PnpUnregisterPlugPlayNotification.c)
 *     PipKsrNotifyDrivers @ 0x1407B2EFC (PipKsrNotifyDrivers.c)
 *     PnpNotifyDeviceClassChange @ 0x1409DC660 (PnpNotifyDeviceClassChange.c)
 *     PnpProcessDeferredRegistrations @ 0x1409DD0E8 (PnpProcessDeferredRegistrations.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409DD2BC (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyHwProfileChange @ 0x140B6A1EC (PnpNotifyHwProfileChange.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExDeleteResourceLite @ 0x140474A20 (ExDeleteResourceLite.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDereferenceNotify(PVOID P)
{
  PVOID *v3; // rcx
  PVOID *v4; // rax
  void *v5; // rcx
  void *v6; // rcx

  if ( (*((_WORD *)P + 28))-- == 1 )
  {
    v3 = *(PVOID **)P;
    if ( v3[1] != P || (v4 = (PVOID *)*((_QWORD *)P + 1), *v4 != P) )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = v4;
    ObfDereferenceObject(*((PVOID *)P + 6));
    if ( *((_DWORD *)P + 4) == 3 )
    {
      v5 = (void *)*((_QWORD *)P + 11);
      if ( v5 )
      {
        ObfDereferenceObject(v5);
        *((_QWORD *)P + 11) = 0LL;
      }
    }
    v6 = (void *)*((_QWORD *)P + 3);
    if ( v6 )
    {
      ZwClose(v6);
      *((_QWORD *)P + 3) = 0LL;
    }
    ExDeleteResourceLite(*((PERESOURCE *)P + 9));
    ExFreePoolWithTag(*((PVOID *)P + 9), 0x56706E50u);
    ExFreePoolWithTag(P, 0);
  }
}
