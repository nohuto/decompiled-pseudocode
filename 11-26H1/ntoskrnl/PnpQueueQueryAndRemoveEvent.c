/*
 * XREFs of PnpQueueQueryAndRemoveEvent @ 0x1409B5DE4
 * Callers:
 *     PnpRequestDeviceEjectExWorker @ 0x1407A50D0 (PnpRequestDeviceEjectExWorker.c)
 *     PiCMQueryRemove @ 0x140B2F2FC (PiCMQueryRemove.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PnpDiagnosticTraceObject @ 0x14048D5DC (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x14048D77C (PnpDiagnosticTraceDeviceOperation.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PnpRemoveEventFromQueue @ 0x1407B094C (PnpRemoveEventFromQueue.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpInsertEventInQueue @ 0x1409AB21C (PnpInsertEventInQueue.c)
 *     PnpAllocateCriticalMemory @ 0x1409B4B74 (PnpAllocateCriticalMemory.c)
 *     PnpInitializeTargetDeviceRemoveEvent @ 0x1409B6214 (PnpInitializeTargetDeviceRemoveEvent.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpQueueQueryAndRemoveEvent(unsigned __int16 *a1, char *a2, _WORD *a3, _WORD *a4, char a5, int a6)
{
  char *v7; // r15
  unsigned __int16 *v8; // rbp
  char *v9; // r13
  unsigned __int16 *v10; // rsi
  char v11; // r12
  _QWORD *v12; // rax
  PVOID v13; // rcx
  int v14; // ebx
  int v15; // r15d
  int v16; // r12d
  __int64 CriticalMemory; // rdi
  int inserted; // ebx
  unsigned int v19; // ecx
  _WORD *v20; // rdi
  PVOID v21; // rcx
  __int64 v23; // rbx
  char *Pool2; // rax
  int v25; // ecx
  _WORD *i; // rax
  char v27; // [rsp+70h] [rbp-78h]
  int v28; // [rsp+74h] [rbp-74h] BYREF
  BOOL v29; // [rsp+78h] [rbp-70h]
  _DWORD Size[3]; // [rsp+7Ch] [rbp-6Ch]
  PVOID P; // [rsp+88h] [rbp-60h]
  struct _KEVENT Event; // [rsp+90h] [rbp-58h] BYREF

  v28 = 0;
  Event.Header.WaitListHead.Blink = 0LL;
  P = 0LL;
  v27 = 0;
  v7 = a2;
  *(_DWORD *)a2 = 0;
  v8 = a1;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  *(_OWORD *)&Event.Header.Lock = 0LL;
  if ( (a5 & 8) != 0 )
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEject_Start, a1);
  v12 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)v8, 0x43706E50u);
  *(_QWORD *)&Size[1] = v12;
  if ( !v12 )
  {
    inserted = -1073741810;
    goto LABEL_31;
  }
  v13 = *(PVOID *)(v12[39] + 40LL);
  if ( !v13 )
  {
    inserted = -1073741810;
    goto LABEL_28;
  }
  if ( v13 == IopRootDeviceNode )
  {
    inserted = -1073741790;
    goto LABEL_28;
  }
  if ( *(_DWORD *)a4 )
  {
    v23 = *(unsigned int *)a4;
    Pool2 = (char *)ExAllocatePool2(0x100uLL);
    v9 = Pool2;
    if ( !Pool2 )
    {
      inserted = -1073741670;
      goto LABEL_28;
    }
    memset_0(Pool2, 0, v23 + 20);
    v10 = (unsigned __int16 *)(v9 + 4);
    *((_WORD *)v9 + 2) = 0;
    *(_QWORD *)(v9 + 12) = v9 + 20;
    v14 = 0;
    *((_WORD *)v9 + 3) = *a4;
    v27 = 1;
  }
  else
  {
    v14 = 1;
  }
  if ( (a5 & 8) != 0 && a6 )
    v14 = 1;
  v29 = (a5 & 0xB) != 0;
  if ( (a5 & 2) != 0 )
  {
    v15 = 22;
  }
  else
  {
    if ( (a5 & 8) != 0 )
    {
      v15 = 47;
      v16 = 1;
      goto LABEL_12;
    }
    v15 = 21;
  }
  v16 = 0;
LABEL_12:
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v28 = 259;
  if ( PnpShutdownEvent.Header.SignalState
    && !_InterlockedCompareExchange64((volatile signed __int64 *)&PnpDeviceActionThread, 0LL, 0LL) )
  {
    inserted = -1073741431;
  }
  else
  {
    Size[0] = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&Size[1] + 312LL) + 40LL) + 40LL) + 202;
    CriticalMemory = PnpAllocateCriticalMemory(0, 0x100uLL);
    if ( CriticalMemory )
    {
      PnpInitializeTargetDeviceRemoveEvent(
        (void *)CriticalMemory,
        Size[0],
        *(PVOID *)&Size[1],
        v29,
        v16,
        v14,
        v15,
        0,
        (__int64)&Event,
        (__int64)&v28,
        (__int64)v9,
        (__int64)v10);
      ++*(_DWORD *)(CriticalMemory + 64);
      v11 = 0;
      *(_QWORD *)(CriticalMemory + 32) = 0LL;
      *(_QWORD *)(CriticalMemory + 40) = 0LL;
      P = (PVOID)CriticalMemory;
      inserted = PnpInsertEventInQueue(CriticalMemory);
      if ( inserted >= 0 )
      {
        inserted = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
        if ( inserted != 257 )
        {
LABEL_17:
          v7 = a2;
          if ( inserted >= 0 )
            inserted = v28;
          if ( v9 )
            *(_DWORD *)a2 = *(_DWORD *)v9;
          if ( v10 )
          {
            v19 = *v10;
            if ( (_WORD)v19 )
            {
              if ( v19 >= *(_DWORD *)a4 )
              {
                LOWORD(v19) = *a4 - 2;
                *v10 = v19;
              }
              v20 = a3;
              memmove(a3, *((const void **)v10 + 1), (unsigned __int16)v19);
              a3[(unsigned __int64)*v10 >> 1] = 0;
            }
            else
            {
              v20 = a3;
            }
            *(_DWORD *)a4 = *v10;
          }
          else
          {
            v20 = a3;
          }
          if ( *(_DWORD *)a2 == 6 && *(_DWORD *)a4 >= 2u )
          {
            v25 = 0;
            for ( i = v20; *i; ++i )
            {
              if ( *i == 92 && ++v25 == 3 )
              {
                *i = 0;
                *(_DWORD *)a4 = (unsigned __int16)((_WORD)i - (_WORD)v20);
                goto LABEL_26;
              }
            }
          }
          goto LABEL_26;
        }
        if ( !(unsigned int)PnpRemoveEventFromQueue((PVOID)CriticalMemory) )
        {
          if ( !_InterlockedExchange((volatile __int32 *)(CriticalMemory + 68), 1) )
          {
            v7 = a2;
            *(_BYTE *)(CriticalMemory + 72) = 1;
            inserted = -1073741536;
            _InterlockedExchange((volatile __int32 *)(CriticalMemory + 68), 0);
            goto LABEL_27;
          }
          inserted = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          goto LABEL_17;
        }
        inserted = -1073741536;
      }
    }
    else
    {
      inserted = -1073741670;
    }
  }
  v7 = a2;
LABEL_26:
  v11 = v27;
LABEL_27:
  v8 = a1;
LABEL_28:
  ObfDereferenceObjectWithTag(*(PVOID *)&Size[1], 0x43706E50u);
  v21 = P;
  if ( P && _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(v21, 0x4B706E50u);
LABEL_31:
  if ( (a5 & 8) != 0 )
    PnpDiagnosticTraceDeviceOperation(&KMPnPEvt_DeviceEject_Stop, v8, inserted, (__int64)v10, *v7);
  if ( v11 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)inserted;
}
