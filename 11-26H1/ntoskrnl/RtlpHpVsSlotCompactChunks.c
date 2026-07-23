/*
 * XREFs of RtlpHpVsSlotCompactChunks @ 0x1404135D0
 * Callers:
 *     RtlpHpVsContextCompact @ 0x140349C64 (RtlpHpVsContextCompact.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14027C8A0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlpHpVsChunkFree @ 0x140355330 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsSubsegmentFree @ 0x140355D68 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsFreeChunkRemove @ 0x14037AAF0 (RtlpHpVsFreeChunkRemove.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 */

ULONG_PTR *__fastcall RtlpHpVsSlotCompactChunks(
        unsigned __int64 a1,
        _RTL_RB_TREE *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v6; // rbx
  volatile LONG *v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rdi
  _RTL_BALANCED_NODE *Min; // rdx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  char v16; // dl
  __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdi
  int v20; // ecx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned int v25; // r9d
  unsigned int v26; // edx
  unsigned __int64 v27; // r15
  ULONG_PTR *v28; // rax
  ULONG_PTR *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  _RTL_BALANCED_NODE *v32; // rcx
  unsigned int v33; // r8d
  unsigned __int64 v34; // r9
  int v35; // edx
  unsigned int v36; // ecx
  unsigned __int64 v37; // rax
  _RTL_BALANCED_NODE *v38; // rdx
  unsigned __int64 v39; // rax
  char v40; // dl
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  bool v46; // zf
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  ULONG_PTR v49; // rdx
  ULONG_PTR *result; // rax
  __int64 v51; // rax
  ULONG_PTR v52; // [rsp+30h] [rbp-58h] BYREF
  ULONG_PTR *v53; // [rsp+38h] [rbp-50h]
  __int128 v54; // [rsp+40h] [rbp-48h] BYREF
  __int64 v55; // [rsp+50h] [rbp-38h]

  v46 = (*(_BYTE *)(a1 + 5) & 1) == 0;
  v54 = 0LL;
  v55 = 0LL;
  v53 = &v52;
  v52 = (ULONG_PTR)&v52;
  if ( v46 )
  {
    v46 = *(_BYTE *)(a1 + 3) == 0;
    v6 = (unsigned __int64 *)&a2->8;
    *((_QWORD *)&v54 + 1) = &a2->8;
    v7 = (volatile LONG *)&a2->8;
    if ( v46 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v9 = (AutoBoost *)KeAbPreAcquire((__int64)v7, 0LL, 0LL, a4);
      v11 = v9;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
        ExfAcquirePushLockExclusiveEx(v6, v9, (__int64)v6);
      if ( v11 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v11, v10);
        else
          *((_BYTE *)v11 + 10) = 1;
      }
    }
    else
    {
      v55 = ExAcquireSpinLockExclusive(v7);
    }
  }
  Min = a2[1].Min;
  v13 = (unsigned __int64)&a2[1];
  v14 = 0LL;
  if ( ((unsigned __int8)Min & 1) != 0 )
  {
    if ( !*(_QWORD *)v13 )
      goto LABEL_100;
    v15 = *(_QWORD *)v13 ^ v13;
  }
  else
  {
    v15 = *(_QWORD *)v13;
  }
  if ( v15 )
  {
    v16 = (unsigned __int8)Min & 1;
    do
    {
      v17 = *(_QWORD *)(v15 + 8);
      v14 = v15;
      if ( v16 && v17 )
        v15 ^= v17;
      else
        v15 = *(_QWORD *)(v15 + 8);
    }
    while ( v15 );
  }
  if ( v14 )
  {
    while ( 1 )
    {
      v18 = v14 - 8;
      v19 = v14 - 8;
      if ( BYTE2(PspTlsContext.Timer.Period) ^ (unsigned __int8)(HIWORD(*(_QWORD *)(v14 - 8)) ^ ((v14 - 8) >> 48)) )
      {
        v20 = (unsigned __int8)(LOBYTE(PspTlsContext.Timer.Processor) ^ *(_BYTE *)v14 ^ v18);
      }
      else
      {
        if ( !(LOWORD(PspTlsContext.Timer.Period) ^ (unsigned __int16)(HIDWORD(*(_QWORD *)v18) ^ WORD2(v18))) )
          goto LABEL_29;
        v19 -= 16
             * (LOWORD(PspTlsContext.Timer.Period) ^ (unsigned __int16)WORD2(*(_QWORD *)v18) ^ (unsigned __int64)WORD2(v18));
        if ( BYTE2(PspTlsContext.Timer.Period) ^ (unsigned __int8)(BYTE6(v19) ^ HIWORD(*(_QWORD *)v19)) )
        {
          v20 = (unsigned __int8)(LOBYTE(PspTlsContext.Timer.Processor) ^ *(_BYTE *)(v19 + 8) ^ v19);
        }
        else
        {
          if ( !(LOWORD(PspTlsContext.Timer.Period) ^ (unsigned __int16)(HIDWORD(*(_QWORD *)v19) ^ WORD2(v19))) )
          {
LABEL_29:
            v20 = 0;
            goto LABEL_30;
          }
          v19 -= 16
               * (LOWORD(PspTlsContext.Timer.Period) ^ WORD2(v19) ^ (unsigned __int64)(unsigned __int16)WORD2(*(_QWORD *)v19));
          v20 = (unsigned __int8)(LOBYTE(PspTlsContext.Timer.Processor) ^ *(_BYTE *)(v19 + 8) ^ v19);
        }
      }
LABEL_30:
      v21 = (v19 - (unsigned int)(v20 << 12)) & 0xFFFFFFFFFFFFF000uLL;
      v22 = v18 ^ *(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)v18;
      v23 = HIWORD(v22);
      v24 = v22 >> 16;
      if ( (_BYTE)v23 || (((unsigned __int16)(*(_WORD *)(v21 + 32) ^ *(_WORD *)(v21 + 36)) ^ 0x2BED) & 0x7FFF) != 0 )
      {
        RtlpLogHeapFailure(18, *(_DWORD *)(a1 + 8) ^ a1, v21, v14 - 8, 0LL, 0LL);
        break;
      }
      if ( 16 * (unsigned int)(unsigned __int16)v24 < 0x1000 )
        break;
      v25 = (v18 - v21 + 4127) & 0xFFFFF000;
      v26 = (v18 + 16 * (WORD1(v18) ^ *(unsigned __int16 *)&PspTlsContext.Timer.TimerType ^ WORD1(*(_QWORD *)v18)) - v21) & 0xFFFFF000;
      if ( v25 >= v26
        || ((-1LL << (v25 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63 - (unsigned __int8)((unsigned __int64)(v26 - 1) >> 12))) & *(_QWORD *)(v21 + 16)) == 0 )
      {
        v42 = v14;
        if ( *(_QWORD *)v14 )
        {
          v43 = v14 ^ *(_QWORD *)v14;
          v14 = *(_QWORD *)v14;
          if ( (*(_BYTE *)(a1 + 5) & 1) != 0 )
            v14 = v43;
          while ( *(_QWORD *)(v14 + 8) )
          {
            v44 = *(_QWORD *)(v14 + 8);
            if ( (*(_BYTE *)(a1 + 5) & 1) != 0 && v44 )
              v14 ^= v44;
            else
              v14 = *(_QWORD *)(v14 + 8);
          }
        }
        else
        {
          v45 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (*(_BYTE *)(a1 + 5) & 1) != 0 && v45 )
            v14 ^= v45;
          else
            v14 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          v46 = v14 == 0;
          if ( !v14 )
            goto LABEL_97;
          do
          {
            v47 = *(_QWORD *)(v14 + 8);
            if ( (*(_BYTE *)(a1 + 5) & 1) != 0 && v47 )
              v47 ^= v14;
            if ( v47 == v42 )
              break;
            v42 = v14;
            v48 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( (*(_BYTE *)(a1 + 5) & 1) != 0 && v48 )
              v14 ^= v48;
            else
              v14 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          }
          while ( v14 );
        }
        goto LABEL_96;
      }
      v27 = v18 ^ *(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)v18;
      RtlpHpVsFreeChunkRemove(a1, a2, v21, v14 - 8);
      *(_BYTE *)(v18 + 6) = BYTE2(PspTlsContext.Timer.Period) ^ BYTE6(v18) ^ 1;
      *(_DWORD *)v14 = (unsigned __int8)(LOBYTE(PspTlsContext.Timer.Processor) ^ v18 ^ ((unsigned int)(v18 - v21) >> 12));
      v28 = (ULONG_PTR *)RtlpHpVsChunkFree(a1, (__int64)a2, v21, v14 - 8, 1, (__int64)&v54);
      if ( v28 )
      {
        v29 = v53;
        if ( (ULONG_PTR *)*v53 != &v52 )
          __fastfail(3u);
        v28[1] = (ULONG_PTR)v53;
        *v28 = (ULONG_PTR)&v52;
        *v29 = (ULONG_PTR)v28;
        v53 = v28;
      }
      v30 = *(__int16 *)(a1 + 6);
      if ( (_WORD)v30 )
        v31 = *(_QWORD *)(v30 + a1 + 32);
      else
        v31 = *(_QWORD *)(a1 + 96);
      if ( !v31 )
        break;
      v32 = a2[1].Min;
      v33 = v27 + 1;
      if ( ((unsigned __int8)v32 & 1) == 0 )
      {
        v14 = *(_QWORD *)v13;
LABEL_48:
        v34 = 0LL;
        v35 = (unsigned __int8)v32 & 1;
        while ( v14 )
        {
          v36 = *(_DWORD *)&PspTlsContext.Timer.Processor ^ (v14 - 8) ^ *(_QWORD *)(v14 - 8);
          if ( v33 < v36 )
          {
            v37 = *(_QWORD *)v14;
            v34 = v14;
          }
          else
          {
            if ( v33 <= v36 )
              goto LABEL_59;
            v37 = *(_QWORD *)(v14 + 8);
          }
          if ( v35 && v37 )
            v14 ^= v37;
          else
            v14 = v37;
        }
        goto LABEL_58;
      }
      if ( *(_QWORD *)v13 )
      {
        v14 = *(_QWORD *)v13 ^ v13;
        goto LABEL_48;
      }
      v34 = 0LL;
LABEL_58:
      v14 = v34;
LABEL_59:
      if ( !v14 )
      {
        v38 = a2[1].Min;
        v14 = 0LL;
        if ( ((unsigned __int8)v38 & 1) == 0 )
        {
          v39 = *(_QWORD *)v13;
LABEL_64:
          if ( v39 )
          {
            v40 = (unsigned __int8)v38 & 1;
            do
            {
              v41 = *(_QWORD *)(v39 + 8);
              v14 = v39;
              if ( v40 && v41 )
                v39 ^= v41;
              else
                v39 = *(_QWORD *)(v39 + 8);
            }
            while ( v39 );
          }
          goto LABEL_96;
        }
        if ( *(_QWORD *)v13 )
        {
          v39 = *(_QWORD *)v13 ^ v13;
          goto LABEL_64;
        }
LABEL_96:
        v46 = v14 == 0;
LABEL_97:
        if ( v46 )
          break;
      }
    }
  }
LABEL_100:
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    RtlpHpReleaseQueuedLockExclusive(*(unsigned __int8 *)(a1 + 3), (__int64)&v54);
  while ( 1 )
  {
    v49 = v52;
    result = &v52;
    if ( (ULONG_PTR *)v52 == &v52 )
      break;
    if ( *(ULONG_PTR **)(v52 + 8) != &v52 || (v51 = *(_QWORD *)v52, *(_QWORD *)(*(_QWORD *)v52 + 8LL) != v52) )
      __fastfail(3u);
    v52 = *(_QWORD *)v52;
    *(_QWORD *)(v51 + 8) = &v52;
    RtlpHpVsSubsegmentFree(a1, v49);
  }
  return result;
}
