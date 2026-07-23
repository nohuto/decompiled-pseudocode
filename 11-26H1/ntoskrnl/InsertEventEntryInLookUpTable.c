/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x140451644
 * Callers:
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     MiLogBadMapper @ 0x140451340 (MiLogBadMapper.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ComputeEventEntryHash @ 0x140451A50 (ComputeEventEntryHash.c)
 *     EnableFlushTimer @ 0x140451B78 (EnableFlushTimer.c)
 *     CreateNewEventEntry @ 0x140451BB8 (CreateNewEventEntry.c)
 *     DestroyEventEntry @ 0x1404DE690 (DestroyEventEntry.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  unsigned __int8 v6; // r15
  signed __int64 v7; // r14
  struct _KLOCK_ENTRIES *v8; // r9
  int v9; // r13d
  int v10; // r8d
  int v11; // ecx
  volatile signed __int64 *v12; // rsi
  int v13; // ebp
  volatile signed __int64 v14; // rdi
  int v15; // ecx
  __int64 v16; // rbp
  int v17; // eax
  unsigned int i; // edi
  __int64 v19; // rcx
  volatile signed __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r10
  signed __int64 v23; // r9
  __int64 v24; // rax
  int v25; // r11d
  volatile signed __int64 *v26; // rdx
  unsigned int v27; // edi
  LegacyAutoBoost *v29; // rdi
  volatile LONG *v30; // rcx
  unsigned int NewEventEntry; // eax
  unsigned int v32; // eax
  signed __int64 v33; // rax
  volatile signed __int64 v34; // rtt
  unsigned int v35; // [rsp+40h] [rbp-68h]
  signed __int64 v36; // [rsp+48h] [rbp-60h] BYREF
  __int64 v37; // [rsp+50h] [rbp-58h]
  KIRQL OldIrql[80]; // [rsp+58h] [rbp-50h]
  char v39; // [rsp+B0h] [rbp+8h]
  int v40; // [rsp+B8h] [rbp+10h]

  v40 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = a3;
  LOBYTE(a2) = a3;
  v36 = 0LL;
  LOBYTE(a1) = a5;
  v35 = 0;
  v37 = v5;
  v7 = 0LL;
  v9 = ComputeEventEntryHash(a1, a2, a4);
  *(_QWORD *)OldIrql = KeGetCurrentIrql();
  if ( OldIrql[0] < 2u )
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      v29 = (LegacyAutoBoost *)KeAbPreAcquire(v5 + 272, 0LL, 0LL, v8);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 272), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v5 + 272), 0, v29, (struct _KTHREAD *)(v5 + 272));
      v11 = 0;
      if ( v29 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          *((_BYTE *)v29 + 33) |= 2u;
        else
          *((_BYTE *)v29 + 10) = 1;
      }
      v39 = 0;
      goto LABEL_5;
    }
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
  }
  else
  {
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
  }
  v11 = 0;
  v39 = 1;
LABEL_5:
  v12 = (volatile signed __int64 *)(v5 + 8LL * (v9 & 0x1F));
  v13 = a4;
  while ( 1 )
  {
    if ( !*v12 )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v27 = -1073741789;
        goto LABEL_26;
      }
      if ( !v7 )
      {
        LOBYTE(v11) = *(_BYTE *)(v5 + 373);
        LOBYTE(v10) = v6;
        NewEventEntry = CreateNewEventEntry(v11, v40, v10, v13, a5, v9, (__int64)&v36);
        v7 = v36;
        v35 = NewEventEntry;
        v27 = NewEventEntry;
        if ( !v36 )
        {
          if ( NewEventEntry == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_26;
        }
      }
      if ( !_InterlockedCompareExchange64(v12, v7, 0LL) )
      {
        v7 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
          EnableFlushTimer(*(_QWORD *)(v5 + 360), *(unsigned int *)(v5 + 368));
        v32 = *(_DWORD *)(v5 + 256);
        v27 = v35;
        if ( *(_DWORD *)(v5 + 304) < v32 )
          *(_DWORD *)(v5 + 304) = v32;
        goto LABEL_26;
      }
    }
    v14 = *v12;
    v15 = *(_DWORD *)(*v12 + 40);
    if ( v9 == v15 )
    {
      v16 = *(_QWORD *)(v14 + 16);
      v17 = memcmp((const void *)(a4 + 16), (const void *)(v16 + 16), 8uLL);
      if ( !v17 )
      {
        for ( i = *(unsigned __int8 *)(v14 + 45) + 2; i < v6; ++i )
        {
          v19 = 16LL * i;
          v17 = *(_DWORD *)(v19 + a4 + 8) - *(_DWORD *)(v19 + v16 + 8);
          if ( v17 )
            goto LABEL_15;
          v17 = memcmp(*(const void **)(v19 + a4), *(const void **)(v19 + v16), *(unsigned int *)(v19 + a4 + 8));
          if ( v17 )
            goto LABEL_15;
        }
        v17 = 0;
LABEL_15:
        v6 = a3;
      }
      v13 = a4;
    }
    else
    {
      v17 = v9 - v15;
    }
    v20 = *v12;
    v11 = 0;
    if ( !v17 )
      break;
    v12 = (volatile signed __int64 *)(v20 + (((__int64)v17 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + 32);
  }
  if ( v20 && a5 < 0xFEu && a5 != 0 )
  {
    v21 = 32LL;
    v22 = a5;
    do
    {
      v23 = **(_QWORD **)(v21 + a4);
      v24 = *(_QWORD *)(v20 + 16);
      v25 = *(unsigned __int8 *)(v24 + v21 + 13);
      v26 = *(volatile signed __int64 **)(v24 + v21);
      if ( v25 == 113 )
      {
        _InterlockedAdd64(v26, v23);
      }
      else if ( (unsigned int)*(unsigned __int8 *)(v24 + v21 + 13) - 114 < 2 )
      {
        do
        {
          v33 = *v26;
          if ( v25 == 114 )
          {
            if ( v23 >= v33 )
              break;
          }
          else if ( v23 <= v33 )
          {
            break;
          }
          v34 = *v26;
        }
        while ( v34 != _InterlockedCompareExchange64(v26, v23, v33) );
      }
      v21 += 16LL;
      --v22;
    }
    while ( v22 );
    v5 = v37;
  }
  v27 = v35;
LABEL_26:
  if ( v39 )
  {
    v30 = (volatile LONG *)(v5 + 280);
    if ( OldIrql[0] < 2u )
      ExReleaseSpinLockShared(v30, OldIrql[0]);
    else
      ExReleaseSpinLockSharedFromDpcLevel(v30);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 272), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v5 + 272));
    KeAbPostRelease(v5 + 272);
  }
  if ( v7 )
    DestroyEventEntry(v7);
  return v27;
}
