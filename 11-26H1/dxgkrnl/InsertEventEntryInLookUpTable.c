/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1400572EC
 * Callers:
 *     _tlgWriteAgg @ 0x140057178 (_tlgWriteAgg.c)
 * Callees:
 *     ComputeEventEntryHash @ 0x140057670 (ComputeEventEntryHash.c)
 *     CompareEventEntry @ 0x140057714 (CompareEventEntry.c)
 *     CreateNewEventEntry @ 0x1400A0B38 (CreateNewEventEntry.c)
 *     DestroyEventEntry @ 0x1400A0D8C (DestroyEventEntry.c)
 *     EnableFlushTimer @ 0x1400A0DB4 (EnableFlushTimer.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // rbx
  char v6; // r13
  signed __int64 v7; // rsi
  unsigned int v8; // r12d
  int v9; // r15d
  __int64 v10; // rcx
  int v11; // r8d
  volatile signed __int64 *v12; // rdi
  volatile signed __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r10
  signed __int64 v18; // r9
  __int64 v19; // rax
  int v20; // r11d
  volatile signed __int64 *v21; // rdx
  signed __int64 v22; // rax
  KIRQL CurrentIrql; // al
  KIRQL v24; // al
  unsigned int NewEventEntry; // eax
  unsigned int v26; // eax
  volatile signed __int64 v27; // rtt
  volatile LONG *v28; // rcx
  signed __int64 v29; // [rsp+40h] [rbp-58h] BYREF
  __int64 v30; // [rsp+48h] [rbp-50h]
  KIRQL OldIrql; // [rsp+A0h] [rbp+8h]
  int v32; // [rsp+A8h] [rbp+10h]

  v32 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = 0;
  LOBYTE(a2) = a3;
  LOBYTE(a1) = a5;
  v29 = 0LL;
  v30 = v5;
  v7 = 0LL;
  v8 = 0;
  v9 = ComputeEventEntryHash(a1, a2, a4);
  OldIrql = KeGetCurrentIrql();
  if ( OldIrql < 2u )
  {
    if ( !(unsigned int)KeIsExecutingDpc() )
    {
      ExAcquirePushLockSharedEx(v5 + 272, 0LL);
      goto LABEL_5;
    }
    if ( *(_BYTE *)(v5 + 373) )
    {
      CurrentIrql = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, CurrentIrql, 1uLL, 0LL);
    }
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
  }
  else
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      v24 = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, v24, 1uLL, 0LL);
    }
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
  }
  v6 = 1;
LABEL_5:
  v12 = (volatile signed __int64 *)(v5 + 8LL * (v9 & 0x1F));
  while ( 1 )
  {
    if ( !*v12 )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v8 = -1073741789;
        goto LABEL_9;
      }
      if ( !v7 )
      {
        LOBYTE(v11) = a3;
        LOBYTE(v10) = *(_BYTE *)(v5 + 373);
        NewEventEntry = CreateNewEventEntry(v10, v32, v11, a4, a5, v9, (__int64)&v29);
        v7 = v29;
        v8 = NewEventEntry;
        if ( !v29 )
        {
          if ( NewEventEntry == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_9;
        }
      }
      if ( !_InterlockedCompareExchange64(v12, v7, 0LL) )
      {
        v7 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
          EnableFlushTimer(*(_QWORD *)(v5 + 360), *(unsigned int *)(v5 + 368));
        v26 = *(_DWORD *)(v5 + 256);
        if ( *(_DWORD *)(v5 + 304) < v26 )
          *(_DWORD *)(v5 + 304) = v26;
        goto LABEL_9;
      }
    }
    v14 = *v12;
    v10 = *(unsigned int *)(v14 + 40);
    if ( v9 == (_DWORD)v10 )
    {
      LOBYTE(v10) = a3;
      v15 = CompareEventEntry(v10, a4, v14);
    }
    else
    {
      v15 = v9 - v10;
    }
    if ( !v15 )
      break;
    if ( v15 >= 0 )
      v12 = (volatile signed __int64 *)(v14 + 32);
    else
      v12 = (volatile signed __int64 *)(v14 + 24);
  }
  if ( v14 && a5 < 0xFEu && a5 != 0 )
  {
    v16 = 32LL;
    v17 = a5;
    do
    {
      v18 = **(_QWORD **)(v16 + a4);
      v19 = *(_QWORD *)(v14 + 16);
      v20 = *(unsigned __int8 *)(v16 + v19 + 13);
      v21 = *(volatile signed __int64 **)(v16 + v19);
      if ( v20 == 113 )
      {
        _InterlockedAdd64(v21, v18);
      }
      else if ( (unsigned int)*(unsigned __int8 *)(v16 + v19 + 13) - 114 <= 1 )
      {
        do
        {
          v22 = *v21;
          if ( v20 == 114 )
          {
            if ( v18 >= v22 )
              break;
          }
          else if ( v18 <= v22 )
          {
            break;
          }
          v27 = *v21;
        }
        while ( v27 != _InterlockedCompareExchange64(v21, v18, v22) );
      }
      v16 += 16LL;
      --v17;
    }
    while ( v17 );
    v5 = v30;
  }
LABEL_9:
  if ( v6 )
  {
    v28 = (volatile LONG *)(v5 + 280);
    if ( OldIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v28);
    else
      ExReleaseSpinLockShared(v28, OldIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v5 + 272, 0LL);
  }
  if ( v7 )
    DestroyEventEntry(v7);
  return v8;
}
