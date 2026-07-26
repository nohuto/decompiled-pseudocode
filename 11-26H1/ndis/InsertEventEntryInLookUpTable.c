/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1400E8E58
 * Callers:
 *     TlgAggregateAbsorbEvent @ 0x1400E91CC (TlgAggregateAbsorbEvent.c)
 * Callees:
 *     CompareEventEntry @ 0x1400E891C (CompareEventEntry.c)
 *     ComputeEventEntryHash @ 0x1400E89A8 (ComputeEventEntryHash.c)
 *     CreateNewEventEntry @ 0x1400E8A48 (CreateNewEventEntry.c)
 *     DestroyEventEntry @ 0x1400E8C9C (DestroyEventEntry.c)
 *     EnableFlushTimer @ 0x1400E8CC4 (EnableFlushTimer.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(
        __int64 a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  char v6; // r13
  signed __int64 v7; // rsi
  unsigned int v8; // r12d
  int v9; // r15d
  KIRQL v10; // al
  KIRQL CurrentIrql; // al
  volatile signed __int64 *v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rdi
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r10
  signed __int64 v20; // r9
  __int64 v21; // rax
  int v22; // r11d
  volatile signed __int64 *v23; // rdx
  signed __int64 v24; // rax
  volatile signed __int64 v25; // rtt
  volatile LONG *v26; // rcx
  __int64 v28; // [rsp+40h] [rbp-58h] BYREF
  __int64 v29; // [rsp+48h] [rbp-50h]
  KIRQL OldIrql; // [rsp+A0h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 48);
  v6 = 0;
  v28 = 0LL;
  v29 = v5;
  v7 = 0LL;
  v8 = 0;
  v9 = ComputeEventEntryHash(a5, a3, a4);
  OldIrql = KeGetCurrentIrql();
  if ( OldIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      CurrentIrql = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, CurrentIrql, 1uLL, 0LL);
    }
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
    goto LABEL_10;
  }
  if ( (unsigned int)KeIsExecutingDpc() )
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      v10 = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, v10, 1uLL, 0LL);
    }
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
LABEL_10:
    v6 = 1;
    goto LABEL_11;
  }
  ExAcquirePushLockSharedEx(v5 + 272, 0LL);
LABEL_11:
  v12 = (volatile signed __int64 *)(v5 + 8LL * (v9 & 0x1F));
  while ( 1 )
  {
    if ( !*v12 )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v8 = -1073741789;
        goto LABEL_46;
      }
      if ( !v7 )
      {
        v13 = CreateNewEventEntry(*(_BYTE *)(v5 + 373), a2, a3, a4, a5, v9, &v28);
        v7 = v28;
        v8 = v13;
        if ( !v28 )
        {
          if ( v13 == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_46;
        }
      }
      if ( !_InterlockedCompareExchange64(v12, v7, 0LL) )
      {
        v7 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
          EnableFlushTimer(*(_QWORD *)(v5 + 360), *(_DWORD *)(v5 + 368));
        v17 = *(_DWORD *)(v5 + 256);
        if ( *(_DWORD *)(v5 + 304) < v17 )
          *(_DWORD *)(v5 + 304) = v17;
        goto LABEL_46;
      }
    }
    v14 = *v12;
    v15 = *(_DWORD *)(v14 + 40);
    v16 = v9 == v15 ? CompareEventEntry(a3, a4, v14) : v9 - v15;
    if ( !v16 )
      break;
    if ( v16 >= 0 )
      v12 = (volatile signed __int64 *)(v14 + 32);
    else
      v12 = (volatile signed __int64 *)(v14 + 24);
  }
  if ( v14 && a5 < 0xFEu && a5 != 0 )
  {
    v18 = 32LL;
    v19 = a5;
    do
    {
      v20 = **(_QWORD **)(v18 + a4);
      v21 = *(_QWORD *)(v14 + 16);
      v22 = *(unsigned __int8 *)(v18 + v21 + 13);
      v23 = *(volatile signed __int64 **)(v18 + v21);
      if ( v22 == 113 )
      {
        _InterlockedAdd64(v23, v20);
      }
      else if ( (unsigned int)*(unsigned __int8 *)(v18 + v21 + 13) - 114 <= 1 )
      {
        do
        {
          v24 = *v23;
          if ( v22 == 114 )
          {
            if ( v20 >= v24 )
              break;
          }
          else if ( v20 <= v24 )
          {
            break;
          }
          v25 = *v23;
        }
        while ( v25 != _InterlockedCompareExchange64(v23, v20, v24) );
      }
      v18 += 16LL;
      --v19;
    }
    while ( v19 );
    v5 = v29;
  }
LABEL_46:
  if ( v6 )
  {
    v26 = (volatile LONG *)(v5 + 280);
    if ( OldIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v26);
    else
      ExReleaseSpinLockShared(v26, OldIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v5 + 272, 0LL);
  }
  if ( v7 )
    DestroyEventEntry(v7);
  return v8;
}
