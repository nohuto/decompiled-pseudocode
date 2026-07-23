/*
 * XREFs of ExpApplyPriorityBoost @ 0x1402057EC
 * Callers:
 *     ExpApplyPrewaitBoost @ 0x140205768 (ExpApplyPrewaitBoost.c)
 *     ExpConvertExclusiveToSharedLite @ 0x14041EB0C (ExpConvertExclusiveToSharedLite.c)
 *     ExpApplyRewaitBoost @ 0x1404E4968 (ExpApplyRewaitBoost.c)
 * Callees:
 *     PsBoostThreadIoQoS @ 0x1402055E0 (PsBoostThreadIoQoS.c)
 *     IoBoostThreadIoPriority @ 0x140205BAC (IoBoostThreadIoPriority.c)
 *     PsGetBaseIoPriorityThread @ 0x14026C7A0 (PsGetBaseIoPriorityThread.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x1402D2680 (PsBoostThreadOutstandingIoQoS.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     PsBoostThreadIo @ 0x1403053C0 (PsBoostThreadIo.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 *     KeSetPriorityBoost @ 0x14037D350 (KeSetPriorityBoost.c)
 */

void __fastcall ExpApplyPriorityBoost(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // al
  __int16 v6; // r13
  int IoPriorityThread; // r12d
  int v9; // r14d
  int v10; // r15d
  int v11; // r13d
  int v12; // esi
  __int64 v13; // rdx
  struct _SINGLE_LIST_ENTRY *v14; // r9
  char v15; // al
  unsigned int v16; // r8d
  int v17; // ebx
  unsigned __int64 v18; // rdi
  __int64 v19; // r14
  unsigned int v20; // r15d
  unsigned int i; // r12d
  int v22; // ebx
  unsigned __int64 v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // rax
  unsigned int BaseIoPriorityThread; // eax
  char v27; // cl
  int v28; // [rsp+20h] [rbp-58h]
  unsigned int v29; // [rsp+24h] [rbp-54h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  int v31; // [rsp+80h] [rbp+8h]
  int v32; // [rsp+80h] [rbp+8h]
  int v33; // [rsp+98h] [rbp+20h]

  v5 = *(_BYTE *)(a1 + 26);
  v6 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (v5 & 8) != 0 )
    return;
  IoPriorityThread = PsGetIoPriorityThread(a3, a2, a3, a4);
  if ( IoPriorityThread <= 2 )
    IoPriorityThread = 2;
  v9 = v6 & 0xFF00;
  v10 = v6 & 4;
  v28 = v9;
  v33 = v10;
  v11 = v6 & 2;
  v29 = IoPriorityThread;
  v12 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
  v15 = *(_BYTE *)(a1 + 26);
  if ( v10 )
    v15 |= 4u;
  v16 = 2;
  if ( v11 )
    v15 |= 2u;
  *(_BYTE *)(a1 + 26) = v15;
  if ( v9 )
  {
    v13 = *(unsigned __int8 *)(a3 + 195);
    if ( (char)v13 > (int)*(unsigned __int8 *)(a1 + 27) )
    {
      v27 = 15;
      if ( (unsigned __int8)v13 < 0xFu )
        v27 = *(_BYTE *)(a3 + 195);
      *(_BYTE *)(a1 + 27) = v27;
    }
  }
  v17 = *(_DWORD *)(a1 + 56);
  v31 = v17;
  v18 = *(_QWORD *)(a1 + 48);
  if ( (v17 & 2) != 0 )
  {
    v18 &= 0xFFFFFFFFFFFFFFFCuLL;
LABEL_40:
    if ( v18 )
    {
      if ( v10 )
      {
        if ( (v17 & 1) == 0 )
        {
          BaseIoPriorityThread = PsGetBaseIoPriorityThread(v18, v13);
          if ( BaseIoPriorityThread < v16 )
          {
            v12 = 4;
            PsBoostThreadIo((LegacyAutoBoost *)v18);
            v17 |= 1u;
            v16 = 2;
            v31 = v17;
          }
        }
      }
      if ( v11 && (v17 & 4) == 0 )
      {
        v12 |= v16;
        PsBoostThreadIoQoS((AutoBoost *)v18, 0LL, v16, v14);
        v31 = v17 | 4;
      }
      if ( v9 && *(unsigned __int8 *)(a1 + 27) > *(char *)(v18 + 195) )
        v12 |= 0xFF00u;
      if ( v12 )
      {
        *(_DWORD *)(a1 + 56) = v31;
        ObfReferenceObjectWithTag((PVOID)v18, 0x746C6644u);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( (v12 & 4) != 0 )
        {
          ++ExpResourceIoBoosted;
          IoBoostThreadIoPriority(v18, (unsigned int)IoPriorityThread, 0LL);
        }
        if ( (v12 & 2) != 0 )
          PsBoostThreadOutstandingIoQoS(v18);
        if ( (v12 & 0xFF00) != 0 )
        {
          __incgsdword(0x9128u);
          KeSetPriorityBoost(v18, *(unsigned __int8 *)(a1 + 27));
        }
        v12 = 0;
        ObDereferenceObjectDeferDeleteWithTag((PVOID)v18, 0x746C6644u);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
      }
      v16 = 2;
    }
    goto LABEL_11;
  }
  if ( (v18 & 3) == 0 )
    goto LABEL_40;
LABEL_11:
  if ( *(char *)(a1 + 26) >= 0 )
  {
    v19 = *(_QWORD *)(a1 + 16);
    if ( v19 )
    {
      v20 = *(_DWORD *)(v19 + 8);
      for ( i = 1; i < v20; ++i )
      {
        v19 += 16LL;
        v22 = *(_DWORD *)(v19 + 8);
        v32 = v22;
        v23 = *(_QWORD *)v19;
        if ( (v22 & 2) != 0 )
        {
          v23 &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        else if ( (v23 & 3) != 0 )
        {
          continue;
        }
        if ( v23 )
        {
          if ( v33 )
          {
            if ( (v22 & 1) == 0 )
            {
              v24 = PsGetBaseIoPriorityThread(v23, v13);
              if ( v24 < v16 )
              {
                v12 |= 4u;
                PsBoostThreadIo((LegacyAutoBoost *)v23);
                v22 |= 1u;
                v16 = 2;
                v32 = v22;
              }
            }
          }
          if ( v11 && (v22 & 4) == 0 )
          {
            v12 |= v16;
            PsBoostThreadIoQoS((AutoBoost *)v23, 0LL, v16, v14);
            v32 = v22 | 4;
          }
          if ( v28 && *(unsigned __int8 *)(a1 + 27) > *(char *)(v23 + 195) )
            v12 |= 0xFF00u;
          if ( v12 )
          {
            *(_DWORD *)(v19 + 8) = v32;
            ObfReferenceObjectWithTag((PVOID)v23, 0x746C6644u);
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            if ( (v12 & 4) != 0 )
            {
              ++ExpResourceIoBoostedShared;
              IoBoostThreadIoPriority(v23, v29, 0LL);
            }
            if ( (v12 & 2) != 0 )
              PsBoostThreadOutstandingIoQoS(v23);
            if ( (v12 & 0xFF00) != 0 )
            {
              __incgsdword(0x912Cu);
              KeSetPriorityBoost(v23, *(unsigned __int8 *)(a1 + 27));
            }
            ObDereferenceObjectDeferDeleteWithTag((PVOID)v23, 0x746C6644u);
            v12 = 0;
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
            v25 = *(_QWORD *)(a1 + 16);
            if ( !v25 || *(_DWORD *)(v25 + 8) != v20 )
              break;
          }
          v16 = 2;
        }
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
