/*
 * XREFs of PiSendTargetDeviceRemoveCanceledNotification @ 0x1407BB8E4
 * Callers:
 *     PiProcessQueryAndCancelRemoval @ 0x1409B568C (PiProcessQueryAndCancelRemoval.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x140B3FCBC (PipSendTargetDeviceQueryRemoveNotification.c)
 * Callees:
 *     PnpNotifyTargetDeviceChange @ 0x140A1A56C (PnpNotifyTargetDeviceChange.c)
 */

void __fastcall PiSendTargetDeviceRemoveCanceledNotification(__int64 a1, unsigned int a2)
{
  unsigned int i; // ebx
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  int v7; // eax

  if ( a2 )
  {
    for ( i = 0; i < a2; ++i )
    {
      v5 = *(_QWORD **)(a1 + 8LL * (a2 - i - 1));
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5[39] + 40LL);
        if ( v6 )
        {
          v7 = *(_DWORD *)(v6 + 300);
          if ( v7 == 788 || (unsigned int)(v7 - 769) <= 3 )
            continue;
        }
      }
      PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_REMOVE_CANCELLED, v5);
    }
  }
}
