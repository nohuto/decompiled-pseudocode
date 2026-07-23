/*
 * XREFs of PiUEventDequeuePendingEventWorker @ 0x1409A764C
 * Callers:
 *     PiUEventNotifyClient @ 0x14095B248 (PiUEventNotifyClient.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1409A8FAC (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventHandleVetoEvent @ 0x140B269C4 (PiUEventHandleVetoEvent.c)
 * Callees:
 *     McTemplateK0qqzqqtjqzjzttx_EtwWriteTransfer @ 0x1405DD3E0 (McTemplateK0qqzqqtjqzjzttx_EtwWriteTransfer.c)
 *     PiUEventDereferenceEventEntry @ 0x1409A801C (PiUEventDereferenceEventEntry.c)
 *     PiUEventGatherEventData @ 0x140ADE7B0 (PiUEventGatherEventData.c)
 *     PiUEventGetProcessImagePath @ 0x140B0E020 (PiUEventGetProcessImagePath.c)
 *     PiUEventFreeProcessImagePath @ 0x140B412EC (PiUEventFreeProcessImagePath.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventDequeuePendingEventWorker(__int64 a1, void *a2, char a3, char a4)
{
  void **v6; // rcx
  __int64 v9; // r12
  const wchar_t *v10; // r14
  void **v11; // rax
  __int64 v12; // r10
  __int64 v13; // r15
  const wchar_t *v14; // r13
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  wchar_t *v19; // rbx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // r8
  const wchar_t *v24; // [rsp+98h] [rbp+7h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+Fh] BYREF
  const wchar_t *v26; // [rsp+A8h] [rbp+17h] BYREF
  PVOID P; // [rsp+100h] [rbp+6Fh] BYREF
  char v28; // [rsp+108h] [rbp+77h]
  unsigned __int8 v29; // [rsp+110h] [rbp+7Fh]

  v29 = a4;
  v28 = a3;
  v6 = *(void ***)a2;
  v26 = 0LL;
  v9 = 0LL;
  v25 = 0LL;
  v10 = 0LL;
  v24 = 0LL;
  P = 0LL;
  if ( v6[1] != a2 || (v11 = (void **)*((_QWORD *)a2 + 1), *v11 != a2) )
    __fastfail(3u);
  *v11 = v6;
  v6[1] = v11;
  if ( !a3 )
    --*(_DWORD *)(a1 + 128);
  if ( byte_140EF412C < 0 || (byte_140EF412C & 2) != 0 )
  {
    v12 = *((_QWORD *)a2 + 3);
    v13 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)a2 + 2)) / 10000LL;
    if ( !*(_BYTE *)(v12 + 76) )
    {
      if ( v13 <= (unsigned __int16)PiUEventPendingQueueTimeMs )
        goto LABEL_9;
      v14 = &word_140B8A320;
      v15 = *(_DWORD *)(v12 + 96);
      if ( *(_QWORD *)(v12 + 64) )
        v14 = *(const wchar_t **)(v12 + 64);
      if ( v15 == 7 )
      {
        v9 = v12 + 128;
        goto LABEL_21;
      }
      if ( v15 > 7 )
      {
        v21 = v15 - 8;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            if ( (unsigned int)(v22 - 1) > 1 )
              goto LABEL_21;
          }
        }
      }
      else
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( !v17 )
          {
            v9 = v12 + 128;
            v10 = (const wchar_t *)(v12 + 144);
            goto LABEL_21;
          }
          v18 = v17 - 1;
          if ( !v18 )
          {
            v10 = (const wchar_t *)(v12 + 136);
LABEL_21:
            PiUEventGetProcessImagePath(*(_QWORD *)(a1 + 48), &P);
            v19 = (wchar_t *)P;
            if ( byte_140EF412C < 0 )
              McTemplateK0qqzqqtjqzjzttx_EtwWriteTransfer(
                *(unsigned __int8 *)(*((_QWORD *)a2 + 3) + 76LL),
                (const EVENT_DESCRIPTOR *)KMPnPEvt_UEvent_DequeueOldAsyncEvent,
                v29,
                *(_DWORD *)(a1 + 132),
                *(_DWORD *)(a1 + 48),
                (const wchar_t *)P,
                *(_DWORD *)(a1 + 128),
                *(_DWORD *)(a1 + 136),
                v29,
                *((_QWORD *)a2 + 3) + 80LL,
                *(_DWORD *)(*((_QWORD *)a2 + 3) + 96LL),
                v14,
                v9,
                v10,
                *(_BYTE *)(*((_QWORD *)a2 + 3) + 76LL),
                v28,
                v13);
            if ( v19 && v19 != L"unknown" )
              ExFreePoolWithTag(v19, 0x59706E50u);
            goto LABEL_9;
          }
          v20 = v18 - 1;
          if ( v20 )
          {
            if ( v20 == 2 )
              v10 = (const wchar_t *)(v12 + 132);
            goto LABEL_21;
          }
        }
      }
      v10 = (const wchar_t *)(v12 + 128);
      goto LABEL_21;
    }
    if ( v13 > (unsigned __int16)PiUEventSyncEventTimeMs )
    {
      PiUEventGatherEventData(*((_QWORD *)a2 + 3), &v26, &v25, &v24);
      PiUEventGetProcessImagePath(*(_QWORD *)(a1 + 48), &P);
      if ( (byte_140EF412C & 2) != 0 )
        McTemplateK0qqzqqtjqzjzttx_EtwWriteTransfer(
          *(unsigned __int8 *)(*((_QWORD *)a2 + 3) + 76LL),
          (const EVENT_DESCRIPTOR *)KMPnPEvt_UEvent_DequeueOldSyncEvent,
          v23,
          *(_DWORD *)(a1 + 132),
          *(_DWORD *)(a1 + 48),
          (const wchar_t *)P,
          *(_DWORD *)(a1 + 128),
          *(_DWORD *)(a1 + 136),
          a4,
          *((_QWORD *)a2 + 3) + 80LL,
          *(_DWORD *)(*((_QWORD *)a2 + 3) + 96LL),
          v26,
          v25,
          v24,
          *(_BYTE *)(*((_QWORD *)a2 + 3) + 76LL),
          a3,
          v13);
      PiUEventFreeProcessImagePath(&P);
    }
  }
LABEL_9:
  PiUEventDereferenceEventEntry(*((PVOID *)a2 + 3));
  ExFreePoolWithTag(a2, 0x59706E50u);
}
