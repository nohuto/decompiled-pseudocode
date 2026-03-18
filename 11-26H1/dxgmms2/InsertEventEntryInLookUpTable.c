/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x14005AD04
 * Callers:
 *     _tlgWriteAgg @ 0x14003BDB4 (_tlgWriteAgg.c)
 * Callees:
 *     CompareEventEntry @ 0x14005A8FC (CompareEventEntry.c)
 *     ComputeEventEntryHash @ 0x14005A988 (ComputeEventEntryHash.c)
 *     CreateNewEventEntry @ 0x14005AA28 (CreateNewEventEntry.c)
 *     DestroyEventEntry @ 0x14005AC7C (DestroyEventEntry.c)
 *     EnableFlushTimer @ 0x14005ACA4 (EnableFlushTimer.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  KIRQL v13; // al
  KIRQL CurrentIrql; // al
  volatile signed __int64 *v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rdi
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r10
  signed __int64 v23; // r9
  __int64 v24; // rax
  int v25; // r11d
  volatile signed __int64 *v26; // rdx
  signed __int64 v27; // rax
  volatile signed __int64 v28; // rtt
  volatile LONG *v29; // rcx
  __int64 v31; // [rsp+40h] [rbp-58h] BYREF
  __int64 v32; // [rsp+48h] [rbp-50h]
  KIRQL OldIrql; // [rsp+A0h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 48);
  v6 = 0;
  v31 = 0LL;
  v32 = v5;
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
  if ( (unsigned int)KeIsExecutingDpc(v11, v10, v12) )
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      v13 = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, v13, 1uLL, 0LL);
    }
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
LABEL_10:
    v6 = 1;
    goto LABEL_11;
  }
  ExAcquirePushLockSharedEx(v5 + 272, 0LL);
LABEL_11:
  v15 = (volatile signed __int64 *)(v5 + 8LL * (v9 & 0x1F));
  while ( 1 )
  {
    if ( !*v15 )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v8 = -1073741789;
        goto LABEL_46;
      }
      if ( !v7 )
      {
        v16 = CreateNewEventEntry(*(_BYTE *)(v5 + 373), a2, a3, a4, a5, v9, &v31);
        v7 = v31;
        v8 = v16;
        if ( !v31 )
        {
          if ( v16 == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_46;
        }
      }
      if ( !_InterlockedCompareExchange64(v15, v7, 0LL) )
      {
        v7 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
          EnableFlushTimer(*(_QWORD *)(v5 + 360), *(_DWORD *)(v5 + 368));
        v20 = *(_DWORD *)(v5 + 256);
        if ( *(_DWORD *)(v5 + 304) < v20 )
          *(_DWORD *)(v5 + 304) = v20;
        goto LABEL_46;
      }
    }
    v17 = *v15;
    v18 = *(_DWORD *)(v17 + 40);
    v19 = v9 == v18 ? CompareEventEntry(a3, a4, v17) : v9 - v18;
    if ( !v19 )
      break;
    if ( v19 >= 0 )
      v15 = (volatile signed __int64 *)(v17 + 32);
    else
      v15 = (volatile signed __int64 *)(v17 + 24);
  }
  if ( v17 && a5 < 0xFEu && a5 != 0 )
  {
    v21 = 32LL;
    v22 = a5;
    do
    {
      v23 = **(_QWORD **)(v21 + a4);
      v24 = *(_QWORD *)(v17 + 16);
      v25 = *(unsigned __int8 *)(v21 + v24 + 13);
      v26 = *(volatile signed __int64 **)(v21 + v24);
      if ( v25 == 113 )
      {
        _InterlockedAdd64(v26, v23);
      }
      else if ( (unsigned int)*(unsigned __int8 *)(v21 + v24 + 13) - 114 <= 1 )
      {
        do
        {
          v27 = *v26;
          if ( v25 == 114 )
          {
            if ( v23 >= v27 )
              break;
          }
          else if ( v23 <= v27 )
          {
            break;
          }
          v28 = *v26;
        }
        while ( v28 != _InterlockedCompareExchange64(v26, v23, v27) );
      }
      v21 += 16LL;
      --v22;
    }
    while ( v22 );
    v5 = v32;
  }
LABEL_46:
  if ( v6 )
  {
    v29 = (volatile LONG *)(v5 + 280);
    if ( OldIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v29);
    else
      ExReleaseSpinLockShared(v29, OldIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v5 + 272, 0LL);
  }
  if ( v7 )
    DestroyEventEntry(v7);
  return v8;
}
