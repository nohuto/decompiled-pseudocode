/*
 * XREFs of PiUEventHandleGetEvent @ 0x1409A7900
 * Callers:
 *     PiUEventHandleIoctl @ 0x1409A7840 (PiUEventHandleIoctl.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     McTemplateK0qqzqqtjqzjzttx_EtwWriteTransfer @ 0x1405DD3E0 (McTemplateK0qqzqqtjqzjzttx_EtwWriteTransfer.c)
 *     PiUEventMovePendingEventToSynchronousQueue @ 0x140775AE8 (PiUEventMovePendingEventToSynchronousQueue.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14095D030 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventCopyEventData @ 0x1409A7CA0 (PiUEventCopyEventData.c)
 *     PiUEventDereferenceEventEntry @ 0x1409A801C (PiUEventDereferenceEventEntry.c)
 *     PiUEventGatherEventData @ 0x140ADE7B0 (PiUEventGatherEventData.c)
 *     PiUEventGetProcessImagePath @ 0x140B0E020 (PiUEventGetProcessImagePath.c)
 *     PiUEventFreeProcessImagePath @ 0x140B412EC (PiUEventFreeProcessImagePath.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiUEventHandleGetEvent(__int64 a1, _DWORD *a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // r15
  int v6; // ebp
  unsigned int v9; // edi
  __int64 *v10; // rbx
  __int64 *v11; // r13
  __int64 v12; // rax
  __int64 *v13; // rdi
  __int64 **v14; // rax
  __int64 v15; // r10
  __int64 v16; // rcx
  const wchar_t *v18; // rcx
  int v19; // eax
  const wchar_t *v20; // rax
  const wchar_t *v21; // [rsp+90h] [rbp-78h]
  unsigned int *v22; // [rsp+98h] [rbp-70h]
  __int64 v23; // [rsp+A0h] [rbp-68h]
  char v24; // [rsp+A8h] [rbp-60h]
  const wchar_t *v25; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-50h] BYREF
  const wchar_t *v27; // [rsp+C0h] [rbp-48h] BYREF
  PVOID P; // [rsp+110h] [rbp+8h] BYREF
  unsigned int v29; // [rsp+120h] [rbp+18h]

  v29 = a3;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = 0;
  if ( v5 && a2 && a4 > 4 )
  {
    *a2 = 0;
    v22 = a2 + 1;
    v9 = a4 - 4;
    ExAcquireFastMutex(*(PKGUARDED_MUTEX *)(v5 + 16));
    v10 = *(__int64 **)(v5 + 112);
    while ( v10 != (__int64 *)(v5 + 112) && v6 >= 0 )
    {
      P = v10 + 3;
      v11 = v10;
      v6 = PiUEventCopyEventData(v22, v9, v10[3]);
      if ( v6 < 0 )
      {
        if ( !*a2 )
        {
          *(_QWORD *)(a5 + 8) = 0LL;
          KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 16));
          return (unsigned int)v6;
        }
        break;
      }
      v12 = *v22;
      v29 = v9 - v12;
      if ( (unsigned int)v12 > v9 )
        v6 = -1073741789;
      else
        v22 = (unsigned int *)((char *)v22 + v12);
      ++*a2;
      v13 = (__int64 *)P;
      v10 = (__int64 *)*v10;
      if ( *(_BYTE *)(*(_QWORD *)P + 76LL) )
      {
        PiUEventMovePendingEventToSynchronousQueue(v5, v11);
      }
      else
      {
        v27 = 0LL;
        v23 = 0LL;
        v26 = 0LL;
        v21 = 0LL;
        v25 = 0LL;
        P = 0LL;
        if ( (__int64 *)v10[1] != v11 || (v14 = (__int64 **)v11[1], *v14 != v11) )
          __fastfail(3u);
        *v14 = v10;
        v10[1] = (__int64)v14;
        --*(_DWORD *)(v5 + 128);
        if ( byte_140EF412C < 0 || (byte_140EF412C & 2) != 0 )
        {
          v15 = *v13;
          v16 = (MEMORY[0xFFFFF78000000014] - v11[2]) / 10000;
          v24 = v16;
          if ( *(_BYTE *)(*v13 + 76) )
          {
            if ( v16 > (unsigned __int16)PiUEventSyncEventTimeMs )
            {
              PiUEventGatherEventData(v15, &v27, &v26, &v25);
              PiUEventGetProcessImagePath(*(_QWORD *)(v5 + 48), &P);
              if ( (byte_140EF412C & 2) != 0 )
                McTemplateK0qqzqqtjqzjzttx_EtwWriteTransfer(
                  *v13,
                  (const EVENT_DESCRIPTOR *)KMPnPEvt_UEvent_DequeueOldSyncEvent,
                  0LL,
                  *(_DWORD *)(v5 + 132),
                  *(_DWORD *)(v5 + 48),
                  (const wchar_t *)P,
                  *(_DWORD *)(v5 + 128),
                  *(_DWORD *)(v5 + 136),
                  0,
                  *v13 + 80,
                  *(_DWORD *)(*v13 + 96),
                  v27,
                  v26,
                  v25,
                  *(_BYTE *)(*v13 + 76),
                  0,
                  v24);
              PiUEventFreeProcessImagePath(&P);
            }
          }
          else if ( v16 > (unsigned __int16)PiUEventPendingQueueTimeMs )
          {
            v18 = &word_140B8A320;
            if ( *(_QWORD *)(v15 + 64) )
              v18 = *(const wchar_t **)(v15 + 64);
            v19 = *(_DWORD *)(v15 + 96);
            v27 = v18;
            if ( v19 == 3 )
            {
              v20 = (const wchar_t *)(v15 + 136);
LABEL_33:
              v21 = v20;
            }
            else
            {
              switch ( v19 )
              {
                case 1:
                case 4:
                case 8:
                case 9:
                case 10:
                case 11:
                  v20 = (const wchar_t *)(v15 + 128);
                  goto LABEL_33;
                case 2:
                  v23 = v15 + 128;
                  v20 = (const wchar_t *)(v15 + 144);
                  goto LABEL_33;
                case 6:
                  v20 = (const wchar_t *)(v15 + 132);
                  goto LABEL_33;
                case 7:
                  v23 = v15 + 128;
                  break;
                default:
                  break;
              }
            }
            PiUEventGetProcessImagePath(*(_QWORD *)(v5 + 48), &P);
            if ( byte_140EF412C < 0 )
              McTemplateK0qqzqqtjqzjzttx_EtwWriteTransfer(
                *v13,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_UEvent_DequeueOldAsyncEvent,
                0LL,
                *(_DWORD *)(v5 + 132),
                *(_DWORD *)(v5 + 48),
                (const wchar_t *)P,
                *(_DWORD *)(v5 + 128),
                *(_DWORD *)(v5 + 136),
                0,
                *v13 + 80,
                *(_DWORD *)(*v13 + 96),
                v27,
                v23,
                v21,
                *(_BYTE *)(*v13 + 76),
                0,
                v24);
            if ( P )
            {
              if ( P != L"unknown" )
                ExFreePoolWithTag(P, 0x59706E50u);
            }
          }
        }
        PiUEventDereferenceEventEntry((PVOID)*v13);
        ExFreePoolWithTag(v11, 0x59706E50u);
      }
      v9 = v29;
    }
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 16));
    if ( v6 == -1073741789 )
    {
      v6 = 0;
      PiUEventNotifyClientPendingEvent(v5);
    }
    *(_QWORD *)(a5 + 8) = a4 - v9;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
