/*
 * XREFs of PnpSetPlugPlayEvent @ 0x1409ABCFC
 * Callers:
 *     PiInitializeDevice @ 0x1407B6748 (PiInitializeDevice.c)
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PnpCreateDeviceEventEntry @ 0x1409AB1EC (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x1409AB21C (PnpInsertEventInQueue.c)
 */

__int64 __fastcall PnpSetPlugPlayEvent(__int128 *a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 *v3; // rsi
  __int64 v5; // rbp
  int v6; // r14d
  __int64 v7; // rbx
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  result = (unsigned int)PnpShutdownEvent.Header.SignalState;
  v3 = a2;
  if ( !PnpShutdownEvent.Header.SignalState )
  {
    result = a2[39];
    v5 = *(_QWORD *)(result + 40);
    if ( v5 )
    {
      v6 = *(unsigned __int16 *)(v5 + 40) + 80;
      result = PnpCreateDeviceEventEntry();
      v7 = result;
      if ( result )
      {
        v8 = *a1;
        *(_DWORD *)(result + 156) = v6;
        *(_OWORD *)(result + 120) = v8;
        v9 = *(_QWORD *)a1 - *(_QWORD *)&GUID_DEVICE_ENUMERATED.Data1;
        if ( *(_QWORD *)a1 == *(_QWORD *)&GUID_DEVICE_ENUMERATED.Data1 )
          v9 = *((_QWORD *)a1 + 1) - *(_QWORD *)GUID_DEVICE_ENUMERATED.Data4;
        if ( v9 )
          *(_DWORD *)(v7 + 136) = 1;
        else
          *(_DWORD *)(v7 + 136) = 4;
        memmove((void *)(v7 + 168), *(const void **)(v5 + 48), *(unsigned __int16 *)(v5 + 40));
        *(_WORD *)(v7 + 2 * ((unsigned __int64)*(unsigned __int16 *)(v5 + 40) >> 1) + 168) = 0;
        v10 = *(_QWORD *)a1 - *(_QWORD *)&GUID_DEVICE_ENUMERATED.Data1;
        if ( *(_QWORD *)a1 == *(_QWORD *)&GUID_DEVICE_ENUMERATED.Data1 )
          v10 = *((_QWORD *)a1 + 1) - *(_QWORD *)GUID_DEVICE_ENUMERATED.Data4;
        if ( !v10 )
          goto LABEL_11;
        v11 = *(_QWORD *)a1 - *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1;
        if ( *(_QWORD *)a1 == *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1 )
          v11 = *((_QWORD *)a1 + 1) - *(_QWORD *)GUID_DEVICE_ARRIVAL.Data4;
        if ( v11 )
          ObfReferenceObjectWithTag(v3, 0x56706E50u);
        else
LABEL_11:
          v3 = 0LL;
        *(_QWORD *)(v7 + 160) = v3;
        return PnpInsertEventInQueue(v7);
      }
    }
  }
  return result;
}
