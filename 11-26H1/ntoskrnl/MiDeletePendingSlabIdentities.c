/*
 * XREFs of MiDeletePendingSlabIdentities @ 0x14049A848
 * Callers:
 *     MiDefragmentAllSlabAllocators @ 0x14049A638 (MiDefragmentAllSlabAllocators.c)
 *     MiCreateSlabIdentity @ 0x14070AD4C (MiCreateSlabIdentity.c)
 *     MiDeletePartitionSlabState @ 0x140881F64 (MiDeletePartitionSlabState.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x14049A754 (MiEnumerateSlabAllocatorsEx.c)
 */

unsigned __int64 __fastcall MiDeletePendingSlabIdentities(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 *v7; // rsi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rdi
  unsigned int v11; // r9d
  unsigned int v12; // r11d
  __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  unsigned int *v15; // r8
  unsigned int v16; // edx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // r10d
  int v20; // edx
  unsigned int v21; // edx
  __int64 v22; // rax
  unsigned __int64 v23; // r8
  _QWORD *v24; // r11
  unsigned __int64 result; // rax
  unsigned int v26; // r9d
  unsigned int *v27; // r8
  unsigned int v28; // edx
  __int64 v29; // rcx
  unsigned int v30; // r10d
  int v31; // edx
  unsigned int v32; // edx
  unsigned __int64 v33; // r11
  unsigned __int64 v34; // r8
  char v35; // al
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v39; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v40; // [rsp+38h] [rbp-18h]

  CurrentThread = 0LL;
  v39 = 0LL;
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
  v40 = 64;
  while ( 1 )
  {
    v12 = *(_DWORD *)(a1 + 22040);
    if ( v12 <= v11 )
      break;
    v13 = *(_QWORD *)(a1 + 22048);
    v14 = v13 + 4 * ((unsigned __int64)(v12 - 1) >> 5);
    v15 = (unsigned int *)(v13 + 4 * ((unsigned __int64)v11 >> 5));
    v16 = *v15 & (-1 << (v11 & 0x1F));
    v17 = v15 + 1;
    while ( !v16 )
    {
      if ( (unsigned __int64)v17 > v14 )
        goto LABEL_30;
      ++v15;
      ++v17;
      v16 = *v15;
    }
    _BitScanForward64((unsigned __int64 *)&v18, v16);
    v19 = v18 + 32 * (((__int64)v15 - v13) >> 2);
    if ( v19 > v12 )
      break;
    v20 = ((1 << v18) - 1) | v16;
    while ( 1 )
    {
      v21 = ~v20;
      if ( v21 )
        break;
      if ( (unsigned __int64)(v15 + 1) > v14 )
      {
        LODWORD(v22) = 32;
        goto LABEL_21;
      }
      v20 = v15[1];
      ++v15;
    }
    _BitScanForward64((unsigned __int64 *)&v22, v21);
LABEL_21:
    v11 = 32 * (((__int64)v15 - v13) >> 2) + v22;
    if ( v11 > v12 )
      v11 = *(_DWORD *)(a1 + 22040);
    if ( v11 == v19 )
      break;
    if ( (unsigned __int8)v19 < (unsigned __int8)v11 )
    {
      v23 = (unsigned __int8)v19;
      v24 = (_QWORD *)(a1 + 21528 + 8LL * (unsigned __int8)v19);
      do
      {
        if ( !*v24 )
          *((_BYTE *)&v39 + (v23 >> 3)) |= 1 << (v19 & 7);
        LOBYTE(v19) = v19 + 1;
        ++v23;
        ++v24;
      }
      while ( (unsigned __int8)v19 < (unsigned __int8)v11 );
    }
  }
LABEL_30:
  if ( (_DWORD)v39 || v40 < 0x40 )
  {
LABEL_36:
    result = MiEnumerateSlabAllocatorsEx(a1, (__int64)MiDeleteSlabEntriesForIdentity, 0LL, 0xFFFFFFFF, 8u);
    v26 = 0;
    while ( v26 < 0x40 )
    {
      v27 = (unsigned int *)&v39 + ((unsigned __int64)v26 >> 5);
      v28 = *v27 & (-1 << (v26 & 0x1F));
      result = (unsigned __int64)(v27 + 1);
      while ( !v28 )
      {
        if ( result > (unsigned __int64)&v39 + 4 )
          goto LABEL_56;
        ++v27;
        result += 4LL;
        v28 = *v27;
      }
      result = v28;
      _BitScanForward64((unsigned __int64 *)&v29, v28);
      v30 = v29 + 32 * (((char *)v27 - (char *)&v39) >> 2);
      if ( v30 > 0x40 )
        break;
      v31 = ((1 << v29) - 1) | v28;
      while ( 1 )
      {
        v32 = ~v31;
        if ( v32 )
          break;
        if ( v27 + 1 > (unsigned int *)&v39 + 1 )
        {
          result = 32LL;
          goto LABEL_49;
        }
        v31 = v27[1];
        ++v27;
      }
      _BitScanForward64(&result, v32);
LABEL_49:
      v26 = 32 * (((char *)v27 - (char *)&v39) >> 2) + result;
      if ( v26 > 0x40 )
        v26 = 64;
      if ( v26 == v30 )
        break;
      if ( (unsigned __int8)v30 < (unsigned __int8)v26 )
      {
        v33 = (unsigned __int8)v30;
        do
        {
          v34 = v33++ >> 3;
          v35 = v30;
          LOBYTE(v30) = v30 + 1;
          result = v35 & 7;
          *(_BYTE *)(v34 + *(_QWORD *)(a1 + 22048)) &= ~(1 << result);
        }
        while ( (unsigned __int8)v30 < (unsigned __int8)v26 );
      }
    }
  }
  else
  {
    for ( result = (unsigned __int64)&v39 + 4; (__int64 *)result != (__int64 *)((char *)&v39 + 4); result += 4LL )
    {
      if ( *(_DWORD *)result )
        goto LABEL_36;
    }
  }
LABEL_56:
  if ( !a2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 22072), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 22072));
    KeAbPostRelease(a1 + 22072);
    result = 1LL;
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      result = (unsigned __int64)&CurrentThread->152;
      if ( *(_QWORD *)result != result )
        return KiCheckForKernelApcDelivery(v37, v36);
    }
  }
  return result;
}
