/*
 * XREFs of EtwpGetCrimsonStackKey @ 0x1404FF248
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     EtwpDereferenceStackEntry @ 0x14032ECD0 (EtwpDereferenceStackEntry.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x140332C98 (KxTryToAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

char __fastcall EtwpGetCrimsonStackKey(__int64 a1, __int64 a2, KSPIN_LOCK *a3)
{
  char v3; // di
  _SLIST_ENTRY *v6; // r15
  _SLIST_HEADER *v7; // r12
  unsigned int v8; // ebp
  unsigned int v9; // r13d
  unsigned int v10; // r9d
  unsigned __int64 v11; // r8
  __int64 v12; // r10
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rdx
  int v16; // ebx
  KSPIN_LOCK *v17; // r14
  __int64 CurrentIrql; // rcx
  KSPIN_LOCK i; // rsi
  unsigned int v20; // ecx
  KSPIN_LOCK j; // r13
  unsigned int v22; // edx
  KSPIN_LOCK v23; // rcx
  KSPIN_LOCK *v24; // rax
  KSPIN_LOCK v25; // rax
  KSPIN_LOCK **v26; // rax
  unsigned int v27; // ebx
  _SLIST_HEADER *v28; // rax
  PSLIST_ENTRY v29; // r14
  PSLIST_ENTRY v30; // rax
  PSLIST_ENTRY v31; // r13
  unsigned int v32; // r12d
  KSPIN_LOCK v33; // rbx
  KSPIN_LOCK **v34; // rax
  _SLIST_HEADER *v35; // [rsp+28h] [rbp-70h]
  unsigned int v36; // [rsp+30h] [rbp-68h]
  KIRQL NewIrql; // [rsp+38h] [rbp-60h]
  _SLIST_ENTRY *ListEntry; // [rsp+40h] [rbp-58h]
  KSPIN_LOCK *v39; // [rsp+48h] [rbp-50h]
  unsigned int v40; // [rsp+A0h] [rbp+8h]
  _SLIST_HEADER *v41; // [rsp+A0h] [rbp+8h]
  unsigned int v44; // [rsp+B8h] [rbp+20h]

  v3 = 0;
  *a3 = 0LL;
  if ( (*(_DWORD *)(a1 + 820) & 1) == 0 )
    return 0;
  v6 = 0LL;
  v7 = *(_SLIST_HEADER **)(a1 + 1056);
  v8 = ((unsigned int)*(unsigned __int16 *)(a2 + 6) - 8) >> 3;
  v9 = 0;
  v10 = 0;
  v11 = 4LL * v8;
  v35 = v7;
  ListEntry = 0LL;
  v36 = 0;
  if ( v11 )
  {
    v12 = 0LL;
    do
    {
      v13 = v10 + 1;
      v10 += 2;
      v14 = *(unsigned __int16 *)(a2 + 2 * v12 + 16) ^ *(unsigned __int16 *)(a2 + 2 * v13 + 16);
      v12 = v10;
      v9 += v14;
    }
    while ( v10 < v11 );
    v36 = v9;
  }
  v15 = v9 % *((_DWORD *)&v7->HeaderX64 + 2);
  v16 = 0;
  v17 = &v7[v15 + 2].Alignment + v15;
  v39 = v17;
  NewIrql = KeGetCurrentIrql();
  if ( !NewIrql || NewIrql == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (_BYTE)CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v15) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v15);
    }
    goto LABEL_16;
  }
  if ( NewIrql == 2 )
  {
LABEL_16:
    KxAcquireSpinLock(v17 + 2);
LABEL_17:
    for ( i = *v17; (KSPIN_LOCK *)i != v17; i = *(_QWORD *)i )
    {
      ++v16;
      if ( *(_DWORD *)(i + 28) == v9 && *(_DWORD *)(i + 32) == v8 )
      {
        v20 = 0;
        for ( j = i; ; j = *(_QWORD *)(j + 16) )
        {
          v40 = v20;
          if ( !j )
            break;
          v22 = 32;
          if ( *(_DWORD *)(j + 32) < 0x20u )
            v22 = *(_DWORD *)(j + 32);
          v44 = v22;
          if ( RtlCompareMemory((const void *)(j + 40), (const void *)(a2 + 16 + 8LL * v20), 8LL * v22) != 8LL * v22 )
          {
            v9 = v36;
            goto LABEL_28;
          }
          v20 = v44 + v40;
        }
        _InterlockedIncrement((volatile signed __int32 *)(i + 24));
        v23 = *(_QWORD *)i;
        if ( *(_QWORD *)(*(_QWORD *)i + 8LL) == i )
        {
          v24 = *(KSPIN_LOCK **)(i + 8);
          if ( *v24 == i )
          {
            *v24 = v23;
            *(_QWORD *)(v23 + 8) = v24;
            v25 = *v17;
            if ( *(KSPIN_LOCK **)(*v17 + 8) == v17 )
            {
              *(_QWORD *)i = v25;
              *(_QWORD *)(i + 8) = v17;
              *(_QWORD *)(v25 + 8) = i;
              *v17 = i;
              KeReleaseSpinLock(v17 + 2, NewIrql);
              goto LABEL_59;
            }
          }
        }
LABEL_56:
        __fastfail(3u);
      }
LABEL_28:
      ;
    }
    if ( v16 == 4 )
    {
      v6 = (_SLIST_ENTRY *)v17[1];
      ListEntry = v6;
      if ( (KSPIN_LOCK *)v6->Next != v17 )
        goto LABEL_56;
      v26 = (KSPIN_LOCK **)*((_QWORD *)&v6->Next + 1);
      if ( *v26 != (KSPIN_LOCK *)v6 )
        goto LABEL_56;
      v17[1] = (KSPIN_LOCK)v26;
      *v26 = v17;
    }
    i = 0LL;
    v27 = 0;
    if ( v8 )
    {
      v28 = v7 + 1;
      v41 = v7 + 1;
      v29 = 0LL;
      do
      {
        v30 = RtlpInterlockedPopEntrySList(v28);
        v31 = v30;
        if ( !v30 )
          break;
        if ( v27 + 32 >= v8 )
          v32 = v8 - v27;
        else
          v32 = 32;
        memmove(&v30[2].Next + 1, (const void *)(a2 + 8 * (v27 + 2LL)), 8LL * v32);
        if ( v27 )
          LODWORD(v31[2].Next) = v32;
        else
          i = (KSPIN_LOCK)v31;
        if ( v29 )
          v29[1].Next = v31;
        v28 = v41;
        v27 += v32;
        v31[1].Next = 0LL;
        v29 = v31;
      }
      while ( v27 < v8 );
      v17 = v39;
      v6 = ListEntry;
      if ( v27 < v8 )
      {
        KeReleaseSpinLock(v39 + 2, NewIrql);
        if ( i )
        {
          do
          {
            v33 = *(_QWORD *)(i + 16);
            RtlpInterlockedPushEntrySList(v35 + 1, (PSLIST_ENTRY)i);
            i = v33;
          }
          while ( v33 );
        }
        if ( ListEntry )
          EtwpDereferenceStackEntry(ListEntry, v35);
        return v3;
      }
      v7 = v35;
      v9 = v36;
    }
    *(_DWORD *)(i + 28) = v9;
    *(_DWORD *)(i + 32) = v8;
    *(_DWORD *)(i + 24) = 2;
    v34 = (KSPIN_LOCK **)v17[1];
    if ( *v34 != v17 )
      goto LABEL_56;
    *(_QWORD *)i = v17;
    *(_QWORD *)(i + 8) = v34;
    *v34 = (KSPIN_LOCK *)i;
    v17[1] = i;
    KeReleaseSpinLock(v17 + 2, NewIrql);
    if ( v6 )
      EtwpDereferenceStackEntry(v6, v7);
LABEL_59:
    v3 = 1;
    *a3 = i;
    return v3;
  }
  if ( KxTryToAcquireSpinLock((volatile signed __int32 *)v17 + 4) )
    goto LABEL_17;
  return v3;
}
