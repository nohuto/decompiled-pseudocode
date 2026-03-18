/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x14002BC8C
 * Callers:
 *     _tlgWriteAgg @ 0x14002BB18 (_tlgWriteAgg.c)
 * Callees:
 *     CreateNewEventEntry @ 0x14002AB0C (CreateNewEventEntry.c)
 *     ComputeEventEntryHash @ 0x14002BFCC (ComputeEventEntryHash.c)
 *     CompareEventEntry @ 0x14002C064 (CompareEventEntry.c)
 *     DestroyEventEntry @ 0x14022E9C0 (DestroyEventEntry.c)
 *     AggregateField @ 0x1402F2A4C (AggregateField.c)
 *     EnableFlushTimer @ 0x1402F2A8C (EnableFlushTimer.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(
        __int64 a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  char v6; // r15
  signed __int64 v7; // rdi
  unsigned int v8; // ebp
  int v9; // r12d
  __int64 v10; // rcx
  volatile signed __int64 *i; // rsi
  volatile signed __int64 v12; // rsi
  int v13; // eax
  unsigned __int8 v14; // r10
  char v15; // r10
  unsigned int v16; // r11d
  unsigned int NewEventEntry; // eax
  KIRQL v19; // al
  KIRQL CurrentIrql; // al
  unsigned int v21; // eax
  volatile LONG *v22; // rcx
  signed __int64 v23[11]; // [rsp+40h] [rbp-58h] BYREF
  KIRQL OldIrql; // [rsp+A0h] [rbp+8h]
  __int128 *v25; // [rsp+A8h] [rbp+10h]

  v25 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = 0;
  LOBYTE(a2) = a3;
  LOBYTE(a1) = a5;
  v23[0] = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = ComputeEventEntryHash(a1, a2, a4);
  OldIrql = KeGetCurrentIrql();
  if ( OldIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      CurrentIrql = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, CurrentIrql, 1uLL, 0LL);
    }
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
    goto LABEL_31;
  }
  if ( (unsigned int)KeIsExecutingDpc() )
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      v19 = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, v19, 1uLL, 0LL);
    }
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
LABEL_31:
    v6 = 1;
    goto LABEL_4;
  }
  ExAcquirePushLockSharedEx(v5 + 272, 0LL);
LABEL_4:
  for ( i = (volatile signed __int64 *)(v5 + 8LL * (v9 & 0x1F));
        ;
        i = (volatile signed __int64 *)((((__int64)v13 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v12 + 32) )
  {
    if ( *i )
      goto LABEL_6;
    if ( *(_DWORD *)(v5 + 256) >= 0x400u )
    {
      ++*(_DWORD *)(v5 + 316);
      v8 = -1073741789;
      goto LABEL_12;
    }
    if ( !v7 )
    {
      LOBYTE(v10) = *(_BYTE *)(v5 + 373);
      NewEventEntry = CreateNewEventEntry(v10, v25, a3, a4, a5, v9, v23);
      v7 = v23[0];
      v8 = NewEventEntry;
      if ( !v23[0] )
      {
        if ( NewEventEntry == -1073741801 )
          ++*(_DWORD *)(v5 + 320);
        else
          ++*(_DWORD *)(v5 + 324);
        goto LABEL_12;
      }
    }
    if ( !_InterlockedCompareExchange64(i, v7, 0LL) )
      break;
    v7 = v23[0];
LABEL_6:
    v12 = *i;
    v10 = *(unsigned int *)(v12 + 40);
    if ( v9 == (_DWORD)v10 )
    {
      LOBYTE(v10) = a3;
      v13 = CompareEventEntry(v10, a4, v12);
    }
    else
    {
      v13 = v9 - v10;
    }
    if ( !v13 )
    {
      if ( v12 )
      {
        v14 = 2;
        if ( a5 )
        {
          do
          {
            AggregateField(
              *(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL * v14),
              **(_QWORD **)(a4 + 16LL * v14),
              *(unsigned __int8 *)(*(_QWORD *)(v12 + 16) + 16LL * v14 + 13));
            v14 = v15 + 1;
          }
          while ( v14 < v16 );
        }
      }
      goto LABEL_12;
    }
  }
  v23[0] = 0LL;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
    EnableFlushTimer(*(_QWORD *)(v5 + 360), *(unsigned int *)(v5 + 368));
  v21 = *(_DWORD *)(v5 + 256);
  v7 = v23[0];
  if ( *(_DWORD *)(v5 + 304) < v21 )
    *(_DWORD *)(v5 + 304) = v21;
LABEL_12:
  if ( v6 )
  {
    v22 = (volatile LONG *)(v5 + 280);
    if ( OldIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v22);
    else
      ExReleaseSpinLockShared(v22, OldIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v5 + 272, 0LL);
  }
  if ( v7 )
    DestroyEventEntry(v7);
  return v8;
}
