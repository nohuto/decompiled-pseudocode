/*
 * XREFs of PiUEventMovePendingEventToSynchronousQueue @ 0x140775AE8
 * Callers:
 *     PiUEventHandleGetEvent @ 0x1409A7900 (PiUEventHandleGetEvent.c)
 * Callees:
 *     McTemplateK0qqzqqjqzjztx_EtwWriteTransfer @ 0x1405DD228 (McTemplateK0qqzqqjqzjztx_EtwWriteTransfer.c)
 *     PiUEventGatherEventData @ 0x140ADE7B0 (PiUEventGatherEventData.c)
 *     PiUEventGetProcessImagePath @ 0x140B0E020 (PiUEventGetProcessImagePath.c)
 *     PiUEventFreeProcessImagePath @ 0x140B412EC (PiUEventFreeProcessImagePath.c)
 */

__int64 __fastcall PiUEventMovePendingEventToSynchronousQueue(__int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 **v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 result; // rax
  __int64 **v9; // rcx
  const wchar_t *v10; // [rsp+80h] [rbp+37h] BYREF
  const wchar_t *v11; // [rsp+B8h] [rbp+6Fh] BYREF
  const wchar_t *v12; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v13; // [rsp+C8h] [rbp+7Fh] BYREF

  v3 = *a2;
  v10 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  if ( *(__int64 **)(v3 + 8) != a2 )
    goto LABEL_10;
  v5 = (__int64 **)a2[1];
  if ( *v5 != a2 )
    goto LABEL_10;
  *v5 = (__int64 *)v3;
  *(_QWORD *)(v3 + 8) = v5;
  --*(_DWORD *)(a1 + 128);
  if ( (byte_140EF412D & 1) != 0 )
  {
    v6 = (MEMORY[0xFFFFF78000000014] - a2[2]) / 10000;
    if ( v6 > (unsigned __int16)PiUEventPendingQueueTimeMs )
    {
      PiUEventGatherEventData(a2[3], &v10, &v13, &v12);
      PiUEventGetProcessImagePath(*(_QWORD *)(a1 + 48), &v11);
      if ( (byte_140EF412D & 1) != 0 )
        McTemplateK0qqzqqjqzjztx_EtwWriteTransfer(
          a2[3],
          (const EVENT_DESCRIPTOR *)KMPnPEvt_UEvent_EventPendingLongTime,
          v7,
          *(_DWORD *)(a1 + 132),
          *(_DWORD *)(a1 + 48),
          v11,
          *(_DWORD *)(a1 + 128),
          *(_DWORD *)(a1 + 136),
          a2[3] + 80,
          *(_DWORD *)(a2[3] + 96),
          v10,
          v13,
          v12,
          *(_BYTE *)(a2[3] + 76),
          v6);
      PiUEventFreeProcessImagePath(&v11);
    }
  }
  result = a1 + 96;
  v9 = *(__int64 ***)(a1 + 104);
  if ( *v9 != (__int64 *)(a1 + 96) )
LABEL_10:
    __fastfail(3u);
  *a2 = result;
  a2[1] = (__int64)v9;
  *v9 = a2;
  *(_QWORD *)(a1 + 104) = a2;
  return result;
}
