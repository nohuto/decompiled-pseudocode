/*
 * XREFs of HalpDmaAcquireBufferMappings @ 0x14035DF88
 * Callers:
 *     HalpDmaFreeMapRegisters @ 0x14035B5C0 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaSyncMapBuffers @ 0x14035DBE0 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaZeroMapBuffers @ 0x14058BC68 (HalpDmaZeroMapBuffers.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1404AECD0 (MmMapLockedPagesWithReservedMapping.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall HalpDmaAcquireBufferMappings(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rsi
  int v6; // ecx
  __int64 v8; // r14
  int v9; // ecx
  _QWORD *v10; // rdx
  __int64 Number; // r10
  __int64 v12; // rbp
  _QWORD *v13; // r8
  __int64 v14; // r9
  PSLIST_ENTRY v15; // rbx
  bool v16; // zf
  char v17; // r15
  PSLIST_ENTRY v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // r9d
  int Blink; // r8d
  struct _LIST_ENTRY **p_Blink; // r11
  struct _LIST_ENTRY *v25; // rax
  int v26; // edx
  int v27; // ecx
  bool v28; // cc
  unsigned int v29; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  result = 0LL;
  v5 = a3;
  v6 = 0;
  v8 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
  {
    while ( (*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      a2 = *(_QWORD *)(a2 + 8);
      if ( ++v6 >= a3 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    if ( v6 == a3 )
    {
      *(_QWORD *)a4 = 0LL;
      return result;
    }
  }
  v9 = 0;
  v10 = (_QWORD *)v8;
  Number = KeGetCurrentPrcb()->Number;
  v12 = *(_QWORD *)(*(_QWORD *)&stru_140E3EAA8.ThreadFlags2 + 8 * Number);
  v13 = (_QWORD *)(v12 + 48);
  if ( (_DWORD)v5 )
  {
    v14 = v5;
    do
    {
      if ( (v10[6] & 0xFFFFFFFFFFFFF000uLL) == 0 )
      {
        ++v9;
        *v13++ = *v10 >> 12;
      }
      v10 = (_QWORD *)v10[1];
      --v14;
    }
    while ( v14 );
  }
  v15 = 0LL;
  v16 = stru_140E3EAA8.WaitBlockFill7[144] == 0;
  v17 = 1;
  *(_QWORD *)(v12 + 32) = 0LL;
  *(_QWORD *)(v12 + 40) = (unsigned int)(v9 << 12);
  if ( !v16 )
  {
    v15 = (PSLIST_ENTRY)*((_QWORD *)&stru_140E3EAA8.QueueListEntry.Flink->Flink + Number);
    goto LABEL_32;
  }
  v18 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&stru_140E3EAA8.WaitBlockFill11[152]);
  if ( v18 )
  {
    v15 = v18;
    *((_DWORD *)&v18[1].Next + 3) = 0;
LABEL_31:
    _InterlockedIncrement((volatile signed __int32 *)&v15[1].Next + 2);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&v15[2], (PKLOCK_QUEUE_HANDLE)(a4 + 24));
LABEL_32:
    result = (__int64)MmMapLockedPagesWithReservedMapping(v15[1].Next, 0x446C6148u, (PMDL)v12, MmCached);
    v19 = result;
    if ( !result )
      KeBugCheckEx(0xACu, 0x1000uLL, 0xEF02uLL, 0LL, 0LL);
    goto LABEL_16;
  }
  result = (__int64)MmMapLockedPagesSpecifyCache((PMDL)v12, 0, MmCached, 0LL, 0, 0x40000020u);
  v19 = result;
  if ( !result )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&stru_140E3EAA8.WaitBlock[2].Object, &LockHandle);
    v22 = 1;
    Blink = (int)stru_140E3EAA8.QueueListEntry.Flink->Flink[1].Blink;
    if ( *(_DWORD *)&stru_140E3EAA8.WaitBlockFill11[148] > 1u )
    {
      p_Blink = &stru_140E3EAA8.QueueListEntry.Flink->Blink;
      do
      {
        v25 = *p_Blink;
        v26 = Blink;
        ++p_Blink;
        v27 = (int)v25[1].Blink;
        v28 = v27 < Blink;
        v29 = v22;
        Blink = v27;
        if ( !v28 )
          v29 = (unsigned int)v15;
        ++v22;
        LODWORD(v15) = v29;
        if ( v27 >= v26 )
          Blink = v26;
      }
      while ( v22 < *(_DWORD *)&stru_140E3EAA8.WaitBlockFill11[148] );
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v15 = (PSLIST_ENTRY)*((_QWORD *)&stru_140E3EAA8.QueueListEntry.Flink->Flink + (unsigned int)v15);
    goto LABEL_31;
  }
  v17 = 0;
LABEL_16:
  v20 = v19;
  if ( (_DWORD)v5 )
  {
    v21 = v5;
    do
    {
      if ( (*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFF000uLL) == 0 )
      {
        result = v20 | *(_DWORD *)(v8 + 48) & 0xFEF | 0x10;
        *(_QWORD *)(v8 + 48) = result;
        v20 += 4096LL;
      }
      v8 = *(_QWORD *)(v8 + 8);
      --v21;
    }
    while ( v21 );
  }
  *(_QWORD *)a4 = v12;
  *(_QWORD *)(a4 + 8) = v19;
  *(_QWORD *)(a4 + 16) = v15;
  *(_BYTE *)(a4 + 48) = v17;
  return result;
}
