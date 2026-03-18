/*
 * XREFs of MiDeletePendingSlabIdentities @ 0x1404A0CF8
 * Callers:
 *     MiDefragmentAllSlabAllocators @ 0x1404A0AE8 (MiDefragmentAllSlabAllocators.c)
 *     MiCreateSlabIdentity @ 0x14070607C (MiCreateSlabIdentity.c)
 *     MiDeletePartitionSlabState @ 0x14087BB64 (MiDeletePartitionSlabState.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x1404A0C04 (MiEnumerateSlabAllocatorsEx.c)
 */

void __fastcall MiDeletePendingSlabIdentities(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 *v7; // rsi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rdi
  unsigned int v11; // r9d
  unsigned int v12; // r11d
  __int64 v13; // r12
  int v14; // edi
  unsigned __int64 v15; // rsi
  unsigned int *v16; // r8
  unsigned int v17; // edx
  _DWORD *v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // r10d
  int v21; // edx
  unsigned int v22; // edx
  __int64 v23; // rax
  unsigned __int64 v24; // r8
  _QWORD *v25; // r11
  _QWORD *i; // rax
  unsigned int v27; // r9d
  int v28; // r11d
  unsigned int *v29; // r8
  unsigned int v30; // edx
  _DWORD *v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // r10d
  int v34; // edx
  unsigned int v35; // edx
  __int64 v36; // rax
  unsigned __int64 v37; // r11
  unsigned __int64 v38; // r8
  char v39; // al
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v43; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v44; // [rsp+38h] [rbp-18h]

  CurrentThread = 0LL;
  v43 = 0LL;
  if ( !a2 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = (unsigned __int64 *)(a1 + 22072);
    --CurrentThread->SpecialApcDisable;
    v8 = (AutoBoost *)KeAbPreAcquire(a1 + 22072, 0LL, 0LL, a4);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v9);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
  }
  v11 = 0;
  v44 = 64;
  while ( 1 )
  {
    v12 = *(_DWORD *)(a1 + 22040);
    if ( v12 <= v11 )
      break;
    v13 = *(_QWORD *)(a1 + 22048);
    v14 = 0;
    v15 = v13 + 4 * ((unsigned __int64)(v12 - 1) >> 5);
    v16 = (unsigned int *)(v13 + 4 * ((unsigned __int64)v11 >> 5));
    v17 = *v16 & (-1 << (v11 & 0x1F));
    v18 = v16 + 1;
    while ( !v17 )
    {
      if ( (unsigned __int64)v18 > v15 )
        goto LABEL_30;
      ++v16;
      ++v18;
      v17 = *v16;
    }
    _BitScanForward64((unsigned __int64 *)&v19, v17);
    v20 = v19 + 32 * (((__int64)v16 - v13) >> 2);
    if ( v20 > v12 )
      break;
    v21 = ((1 << v19) - 1) | v17;
    while ( 1 )
    {
      v22 = ~v21;
      if ( v22 )
        break;
      v14 += 32;
      if ( (unsigned __int64)(v16 + 1) > v15 )
      {
        LODWORD(v23) = 32;
        goto LABEL_21;
      }
      v21 = v16[1];
      ++v16;
    }
    _BitScanForward64((unsigned __int64 *)&v23, v22);
LABEL_21:
    v11 = 32 * (((__int64)v16 - v13) >> 2) + v23;
    if ( v11 > v12 )
      v11 = *(_DWORD *)(a1 + 22040);
    if ( v11 == v20 )
      break;
    if ( (unsigned __int8)v20 < (unsigned __int8)v11 )
    {
      v24 = (unsigned __int8)v20;
      v25 = (_QWORD *)(a1 + 21528 + 8LL * (unsigned __int8)v20);
      do
      {
        if ( !*v25 )
          *((_BYTE *)&v43 + (v24 >> 3)) |= 1 << (v20 & 7);
        LOBYTE(v20) = v20 + 1;
        ++v24;
        ++v25;
      }
      while ( (unsigned __int8)v20 < (unsigned __int8)v11 );
    }
  }
LABEL_30:
  if ( (_DWORD)v43 || v44 < 0x40 )
  {
LABEL_36:
    MiEnumerateSlabAllocatorsEx(a1, (__int64)MiDeleteSlabEntriesForIdentity, 0LL, 0xFFFFFFFF, 8u);
    v27 = 0;
    while ( v27 < 0x40 )
    {
      v28 = 0;
      v29 = (unsigned int *)&v43 + ((unsigned __int64)v27 >> 5);
      v30 = *v29 & (-1 << (v27 & 0x1F));
      v31 = v29 + 1;
      while ( !v30 )
      {
        if ( v31 > (_DWORD *)&v43 + 1 )
          goto LABEL_56;
        ++v29;
        ++v31;
        v30 = *v29;
      }
      _BitScanForward64((unsigned __int64 *)&v32, v30);
      v33 = v32 + 32 * (((char *)v29 - (char *)&v43) >> 2);
      if ( v33 > 0x40 )
        break;
      v34 = ((1 << v32) - 1) | v30;
      while ( 1 )
      {
        v35 = ~v34;
        if ( v35 )
          break;
        v28 += 32;
        if ( v29 + 1 > (unsigned int *)&v43 + 1 )
        {
          LODWORD(v36) = 32;
          goto LABEL_49;
        }
        v34 = v29[1];
        ++v29;
      }
      _BitScanForward64((unsigned __int64 *)&v36, v35);
LABEL_49:
      v27 = 32 * (((char *)v29 - (char *)&v43) >> 2) + v36;
      if ( v27 > 0x40 )
        v27 = 64;
      if ( v27 == v33 )
        break;
      if ( (unsigned __int8)v33 < (unsigned __int8)v27 )
      {
        v37 = (unsigned __int8)v33;
        do
        {
          v38 = v37++ >> 3;
          v39 = v33;
          LOBYTE(v33) = v33 + 1;
          *(_BYTE *)(v38 + *(_QWORD *)(a1 + 22048)) &= ~(1 << (v39 & 7));
        }
        while ( (unsigned __int8)v33 < (unsigned __int8)v27 );
      }
    }
  }
  else
  {
    for ( i = (__int64 *)((char *)&v43 + 4); i != (__int64 *)((char *)&v43 + 4); i = (_QWORD *)((char *)i + 4) )
    {
      if ( *(_DWORD *)i )
        goto LABEL_36;
    }
  }
LABEL_56:
  if ( !a2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 22072), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 22072));
    KeAbPostRelease(a1 + 22072);
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(v41, v40);
    }
  }
}
