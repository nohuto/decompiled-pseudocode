/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x14000B5E0
 * Callers:
 *     _tlgWriteAgg @ 0x14000B178 (_tlgWriteAgg.c)
 *     EtwTraceEnumDisplaySettings @ 0x14000B268 (EtwTraceEnumDisplaySettings.c)
 *     EtwTraceEnumDisplayMonitors @ 0x14000B3E0 (EtwTraceEnumDisplayMonitors.c)
 * Callees:
 *     CreateNewEventEntry @ 0x14000AA9C (CreateNewEventEntry.c)
 *     ComputeEventEntryHash @ 0x14000B96C (ComputeEventEntryHash.c)
 *     CompareEventEntry @ 0x14000BA0C (CompareEventEntry.c)
 *     EnableFlushTimer @ 0x140196368 (EnableFlushTimer.c)
 *     DestroyEventEntry @ 0x14019C4D4 (DestroyEventEntry.c)
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
  volatile signed __int64 *v10; // rdi
  volatile signed __int64 v11; // rdi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r10
  signed __int64 v16; // r9
  __int64 v17; // rax
  int v18; // r11d
  volatile signed __int64 *v19; // rdx
  unsigned int v21; // eax
  unsigned int v22; // eax
  volatile LONG *v23; // rcx
  KIRQL v24; // al
  KIRQL CurrentIrql; // al
  signed __int64 v26; // rax
  volatile signed __int64 v27; // rtt
  signed __int64 v28; // [rsp+40h] [rbp-58h] BYREF
  __int64 v29; // [rsp+48h] [rbp-50h]
  KIRQL OldIrql; // [rsp+A0h] [rbp+8h]
  __int128 *v31; // [rsp+A8h] [rbp+10h]

  v31 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = 0;
  LOBYTE(a2) = a3;
  LOBYTE(a1) = a5;
  v28 = 0LL;
  v29 = v5;
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
    goto LABEL_43;
  }
  if ( (unsigned int)KeIsExecutingDpc() )
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      v24 = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, v24, 1uLL, 0LL);
    }
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
LABEL_43:
    v6 = 1;
    goto LABEL_4;
  }
  ExAcquirePushLockSharedEx(v5 + 272, 0LL);
LABEL_4:
  v10 = (volatile signed __int64 *)(v5 + 8LL * (v9 & 0x1F));
  while ( 1 )
  {
    if ( !*v10 )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v8 = -1073741789;
        goto LABEL_16;
      }
      if ( !v7 )
      {
        v21 = CreateNewEventEntry(*(_BYTE *)(v5 + 373), v31, a3, a4, a5, v9, &v28);
        v7 = v28;
        v8 = v21;
        if ( !v28 )
        {
          if ( v21 == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_16;
        }
      }
      if ( !_InterlockedCompareExchange64(v10, v7, 0LL) )
      {
        v7 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
          EnableFlushTimer(*(_QWORD *)(v5 + 360), *(unsigned int *)(v5 + 368));
        v22 = *(_DWORD *)(v5 + 256);
        if ( *(_DWORD *)(v5 + 304) < v22 )
          *(_DWORD *)(v5 + 304) = v22;
        goto LABEL_16;
      }
    }
    v11 = *v10;
    v12 = *(unsigned int *)(v11 + 40);
    if ( v9 == (_DWORD)v12 )
    {
      LOBYTE(v12) = a3;
      v13 = CompareEventEntry(v12, a4, v11);
    }
    else
    {
      v13 = v9 - v12;
    }
    if ( !v13 )
      break;
    if ( v13 >= 0 )
      v10 = (volatile signed __int64 *)(v11 + 32);
    else
      v10 = (volatile signed __int64 *)(v11 + 24);
  }
  if ( v11 && a5 < 0xFEu && a5 != 0 )
  {
    v14 = 32LL;
    v15 = a5;
    do
    {
      v16 = **(_QWORD **)(v14 + a4);
      v17 = *(_QWORD *)(v11 + 16);
      v18 = *(unsigned __int8 *)(v14 + v17 + 13);
      v19 = *(volatile signed __int64 **)(v14 + v17);
      if ( v18 == 113 )
      {
        _InterlockedAdd64(v19, v16);
      }
      else if ( (unsigned int)*(unsigned __int8 *)(v14 + v17 + 13) - 114 < 2 )
      {
        do
        {
          v26 = *v19;
          if ( v18 == 114 )
          {
            if ( v16 >= v26 )
              break;
          }
          else if ( v16 <= v26 )
          {
            break;
          }
          v27 = *v19;
        }
        while ( v27 != _InterlockedCompareExchange64(v19, v16, v26) );
      }
      v14 += 16LL;
      --v15;
    }
    while ( v15 );
    v5 = v29;
  }
LABEL_16:
  if ( v6 )
  {
    v23 = (volatile LONG *)(v5 + 280);
    if ( OldIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v23);
    else
      ExReleaseSpinLockShared(v23, OldIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v5 + 272, 0LL);
  }
  if ( v7 )
    DestroyEventEntry(v7);
  return v8;
}
