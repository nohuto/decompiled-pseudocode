/*
 * XREFs of PipSendTargetDeviceQueryRemoveNotification @ 0x140B3FCBC
 * Callers:
 *     PiProcessQueryAndCancelRemoval @ 0x1409B568C (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiSendTargetDeviceRemoveCanceledNotification @ 0x1407BB8E4 (PiSendTargetDeviceRemoveCanceledNotification.c)
 *     PnpNotifyTargetDeviceChange @ 0x140A1A56C (PnpNotifyTargetDeviceChange.c)
 */

__int64 __fastcall PipSendTargetDeviceQueryRemoveNotification(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v5; // esi
  unsigned int i; // ebx
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  _WORD *v14; // rdi
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  v16[0] = 0LL;
  for ( i = 0; i < a3; ++i )
  {
    v10 = *(_QWORD **)(a2 + 8LL * i);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10[39] + 40LL);
      if ( v11 )
      {
        v12 = *(_DWORD *)(v11 + 300);
        if ( v12 == 788 || (unsigned int)(v12 - 769) <= 3 )
          continue;
      }
    }
    if ( *(_BYTE *)(a1 + 72) )
    {
      v5 = -1073741536;
LABEL_11:
      v13 = v16[0];
      v14 = (_WORD *)(a4 + 8);
      *(_DWORD *)a4 = 7;
      if ( v13 )
      {
        RtlCopyUnicodeString((PUNICODE_STRING)(a4 + 8), (PCUNICODE_STRING)(v13 + 56));
      }
      else
      {
        memset_0(*(void **)(a4 + 16), 0, (unsigned __int16)*v14);
        *v14 = 0;
      }
      if ( i )
        PiSendTargetDeviceRemoveCanceledNotification(a2, i);
      return (unsigned int)v5;
    }
    v5 = PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_QUERY_REMOVE, v10, 0LL, v16);
    if ( v5 < 0 )
      goto LABEL_11;
  }
  return (unsigned int)v5;
}
