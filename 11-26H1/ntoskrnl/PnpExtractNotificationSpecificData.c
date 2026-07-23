/*
 * XREFs of PnpExtractNotificationSpecificData @ 0x1407A4810
 * Callers:
 *     PnpNotifyDriverCallback @ 0x140A1A8A4 (PnpNotifyDriverCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall PnpExtractNotificationSpecificData(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  bool v4; // cf
  _QWORD *v5; // r10
  __int64 v6; // rax
  __int64 v7; // rax

  v4 = *(_WORD *)(a1 + 2) < 0x30u;
  v5 = (_QWORD *)(a1 + 4);
  *a2 = a1 + 4;
  *a3 = 0LL;
  *a4 = 0LL;
  if ( !v4 )
  {
    v6 = *v5 - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
    if ( *v5 == *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 )
      v6 = *(_QWORD *)(a1 + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
    if ( !v6 )
      goto LABEL_8;
    v7 = *v5 - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
    if ( *v5 == *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1 )
      v7 = *(_QWORD *)(a1 + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
    if ( !v7 )
    {
LABEL_8:
      *a3 = a1 + 20;
      *a4 = *(_QWORD *)(a1 + 40);
    }
  }
}
