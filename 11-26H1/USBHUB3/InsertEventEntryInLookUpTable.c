/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1400460D4
 * Callers:
 *     _tlgWriteAgg @ 0x1400465A4 (_tlgWriteAgg.c)
 * Callees:
 *     CreateNewEventEntry @ 0x140045C78 (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x140045F40 (EnableFlushTimer.c)
 *     memcmp @ 0x1400470E0 (memcmp.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(
        __int64 a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // r13
  signed __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // r14
  unsigned int v9; // r9d
  unsigned __int8 v10; // bp
  unsigned __int64 i; // r8
  int v12; // eax
  unsigned __int8 v13; // cl
  __int64 v14; // rdx
  __int64 v15; // r11
  unsigned __int64 j; // r8
  int v17; // eax
  int v18; // r12d
  __int64 v19; // rsi
  KIRQL v20; // al
  KIRQL CurrentIrql; // al
  volatile signed __int64 *k; // rsi
  const void *v23; // rax
  unsigned int NewEventEntry; // eax
  volatile signed __int64 v25; // rdi
  int v26; // ecx
  int v27; // eax
  __int64 v28; // r14
  unsigned int m; // edi
  __int64 v30; // rcx
  volatile signed __int64 v31; // rdi
  unsigned int v32; // edi
  unsigned int v33; // eax
  __int64 v34; // r8
  __int64 v35; // r11
  signed __int64 v36; // r9
  __int64 v37; // rax
  int v38; // r10d
  volatile signed __int64 *v39; // rdx
  signed __int64 v40; // rax
  volatile signed __int64 v41; // rtt
  volatile LONG *v42; // rcx
  unsigned int v44; // [rsp+40h] [rbp-58h]
  signed __int64 v45[10]; // [rsp+48h] [rbp-50h] BYREF
  KIRQL OldIrql; // [rsp+A0h] [rbp+8h]
  char v50; // [rsp+C0h] [rbp+28h]

  v5 = a5;
  v6 = 0LL;
  v7 = qword_14006D300;
  v8 = a4;
  v45[0] = 0LL;
  v9 = 0;
  v44 = 0;
  v10 = a3;
  for ( i = 0LL; i < 8; ++i )
  {
    v12 = *(unsigned __int8 *)(i + v8 + 16);
    v9 = (1025 * (v9 + v12)) ^ ((1025 * (v9 + v12)) >> 6);
  }
  v13 = a5 + 2;
  if ( (unsigned __int8)(a5 + 2) < v10 )
  {
    v14 = v8 + 16LL * v13;
    v15 = (unsigned __int8)(v10 - v13);
    do
    {
      for ( j = 0LL; j < *(unsigned int *)(v14 + 8); v9 = (1025 * (v9 + v17)) ^ ((1025 * (v9 + v17)) >> 6) )
      {
        v17 = *(unsigned __int8 *)(j + *(_QWORD *)v14);
        ++j;
      }
      v14 += 16LL;
      --v15;
    }
    while ( v15 );
  }
  v18 = 32769 * ((9 * v9) ^ ((9 * v9) >> 11));
  v19 = ((unsigned __int8)(9 * v9) ^ (unsigned __int8)((9 * v9) >> 11)) & 0x1F;
  OldIrql = KeGetCurrentIrql();
  if ( OldIrql >= 2u )
  {
    if ( *(_BYTE *)(v7 + 373) )
    {
      CurrentIrql = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v7 + 280, CurrentIrql, 1uLL, 0LL);
    }
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v7 + 280));
    goto LABEL_17;
  }
  if ( (unsigned int)KeIsExecutingDpc() )
  {
    if ( *(_BYTE *)(v7 + 373) )
    {
      v20 = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v7 + 280, v20, 1uLL, 0LL);
    }
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v7 + 280));
LABEL_17:
    v50 = 1;
    goto LABEL_18;
  }
  ExAcquirePushLockSharedEx(v7 + 272, 0LL);
  v50 = 0;
LABEL_18:
  for ( k = (volatile signed __int64 *)(v7 + 8 * v19);
        ;
        k = (volatile signed __int64 *)(v31 + (((__int64)v27 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + 32) )
  {
    v23 = (const void *)(v8 + 16);
    if ( !*k )
    {
      if ( *(_DWORD *)(v7 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v7 + 316);
        v32 = -1073741789;
        goto LABEL_60;
      }
      if ( !v6 )
      {
        NewEventEntry = CreateNewEventEntry(*(_BYTE *)(v7 + 373), a2, v10, v8, v5, v18, v45);
        v6 = v45[0];
        v44 = NewEventEntry;
        if ( !v45[0] )
        {
          v32 = NewEventEntry;
          if ( NewEventEntry == -1073741801 )
            ++*(_DWORD *)(v7 + 320);
          else
            ++*(_DWORD *)(v7 + 324);
          goto LABEL_60;
        }
      }
      if ( !_InterlockedCompareExchange64(k, v6, 0LL) )
      {
        v6 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v7 + 256)) == 1 )
          EnableFlushTimer(*(_QWORD *)(v7 + 360), *(_DWORD *)(v7 + 368));
        v33 = *(_DWORD *)(v7 + 256);
        v32 = v44;
        if ( *(_DWORD *)(v7 + 304) < v33 )
          *(_DWORD *)(v7 + 304) = v33;
        goto LABEL_60;
      }
      v23 = (const void *)(v8 + 16);
    }
    v25 = *k;
    v26 = *(_DWORD *)(*k + 40);
    if ( v18 == v26 )
    {
      v28 = *(_QWORD *)(v25 + 16);
      v27 = memcmp(v23, (const void *)(v28 + 16), 8uLL);
      if ( !v27 )
      {
        for ( m = *(unsigned __int8 *)(v25 + 45) + 2; m < v10; ++m )
        {
          v30 = 16LL * m;
          v27 = *(_DWORD *)(v30 + a4 + 8) - *(_DWORD *)(v30 + v28 + 8);
          if ( v27 )
            goto LABEL_34;
          v27 = memcmp(*(const void **)(v30 + a4), *(const void **)(v30 + v28), *(unsigned int *)(v30 + a4 + 8));
          if ( v27 )
            goto LABEL_34;
        }
        v27 = 0;
LABEL_34:
        v10 = a3;
      }
      v8 = a4;
    }
    else
    {
      v27 = v18 - v26;
    }
    v31 = *k;
    if ( !v27 )
      break;
  }
  if ( v31 && (unsigned __int8)v5 < 0xFEu && (_BYTE)v5 != 0 )
  {
    v34 = 32LL;
    v35 = v5;
    do
    {
      v36 = **(_QWORD **)(v34 + v8);
      v37 = *(_QWORD *)(v31 + 16);
      v38 = *(unsigned __int8 *)(v37 + v34 + 13);
      v39 = *(volatile signed __int64 **)(v37 + v34);
      if ( v38 == 113 )
      {
        _InterlockedAdd64(v39, v36);
      }
      else if ( (unsigned int)*(unsigned __int8 *)(v37 + v34 + 13) - 114 <= 1 )
      {
        do
        {
          v40 = *v39;
          if ( v38 == 114 )
          {
            if ( v36 >= v40 )
              break;
          }
          else if ( v36 <= v40 )
          {
            break;
          }
          v41 = *v39;
        }
        while ( v41 != _InterlockedCompareExchange64(v39, v36, v40) );
      }
      v34 += 16LL;
      --v35;
    }
    while ( v35 );
  }
  v32 = v44;
LABEL_60:
  if ( v50 )
  {
    v42 = (volatile LONG *)(v7 + 280);
    if ( OldIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v42);
    else
      ExReleaseSpinLockShared(v42, OldIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v7 + 272, 0LL);
  }
  if ( v6 )
    ExFreePoolWithTag(*(PVOID *)(v6 + 16), 0);
  return v32;
}
