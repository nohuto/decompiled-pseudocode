/*
 * XREFs of RtlpHpVsSlotFreeList @ 0x14035501C
 * Callers:
 *     RtlpHpVsContextCompact @ 0x140349C64 (RtlpHpVsContextCompact.c)
 *     RtlpHpVsContextFree @ 0x140354D90 (RtlpHpVsContextFree.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14027C8A0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlpHpVsChunkFree @ 0x140355330 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsSubsegmentFree @ 0x140355D68 (RtlpHpVsSubsegmentFree.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 */

__int64 **__fastcall RtlpHpVsSlotFreeList(__int64 a1, __int64 a2, _QWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  bool v4; // zf
  int v6; // r15d
  unsigned __int64 *v8; // rdi
  volatile LONG *v9; // rcx
  _QWORD *v10; // r10
  _QWORD *v11; // r8
  unsigned int v12; // eax
  int v13; // ecx
  unsigned __int64 v14; // r8
  __int64 ***v15; // rax
  _QWORD *v16; // rcx
  int v17; // ecx
  __int64 *v18; // rdx
  __int64 **result; // rax
  __int64 *v20; // rax
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v22; // rax
  void *v23; // rdx
  AutoBoost *v24; // rsi
  __int64 *v25; // [rsp+30h] [rbp-38h] BYREF
  __int64 **v26; // [rsp+38h] [rbp-30h]
  __int128 v27; // [rsp+40h] [rbp-28h] BYREF
  __int64 v28; // [rsp+50h] [rbp-18h]

  v4 = (*(_BYTE *)(a1 + 5) & 1) == 0;
  v27 = 0LL;
  v28 = 0LL;
  v6 = a2;
  v26 = &v25;
  v25 = (__int64 *)&v25;
  if ( v4 )
  {
    v4 = *(_BYTE *)(a1 + 3) == 0;
    v8 = (unsigned __int64 *)(a2 + 8);
    *((_QWORD *)&v27 + 1) = a2 + 8;
    v9 = (volatile LONG *)(a2 + 8);
    if ( v4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v22 = (AutoBoost *)KeAbPreAcquire((__int64)v9, 0LL, 0LL, a4);
      v24 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
        ExfAcquirePushLockExclusiveEx(v8, v22, (__int64)v8);
      if ( v24 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v24, v23);
        else
          *((_BYTE *)v24 + 10) = 1;
      }
    }
    else
    {
      v28 = ExAcquireSpinLockExclusive(v9);
    }
  }
  do
  {
    v10 = a3 - 2;
    a3 = (_QWORD *)*a3;
    v11 = v10;
    if ( BYTE2(PspTlsContext.Timer.Period) ^ (unsigned __int8)(BYTE6(v10) ^ HIWORD(*v10)) )
    {
      v12 = *((_DWORD *)v10 + 2) ^ (unsigned int)v10;
LABEL_10:
      LOBYTE(v12) = LOBYTE(PspTlsContext.Timer.Processor) ^ v12;
      goto LABEL_11;
    }
    if ( !(WORD2(v10) ^ (unsigned __int16)(LOWORD(PspTlsContext.Timer.Period) ^ HIDWORD(*v10))) )
      goto LABEL_35;
    v11 = &v10[-2
             * (WORD2(v10) ^ (unsigned __int64)(unsigned __int16)((*(_QWORD *)&PspTlsContext.Timer.Processor ^ *v10) >> 32))];
    if ( BYTE2(PspTlsContext.Timer.Period) ^ (unsigned __int8)(BYTE6(v11) ^ HIWORD(*v11)) )
    {
      v12 = *((_DWORD *)v11 + 2) ^ (unsigned int)v11;
      goto LABEL_10;
    }
    if ( WORD2(v11) ^ (unsigned __int16)(LOWORD(PspTlsContext.Timer.Period) ^ HIDWORD(*v11)) )
    {
      v11 -= 2 * (LOWORD(PspTlsContext.Timer.Period) ^ (unsigned __int64)(unsigned __int16)(WORD2(v11) ^ HIDWORD(*v11)));
      v12 = *(_DWORD *)&PspTlsContext.Timer.Processor ^ *((_DWORD *)v11 + 2) ^ (unsigned int)v11;
LABEL_11:
      v13 = (unsigned __int8)v12;
      goto LABEL_12;
    }
LABEL_35:
    v13 = 0;
LABEL_12:
    v14 = ((unsigned __int64)v11 - (unsigned int)(v13 << 12)) & 0xFFFFFFFFFFFFF000uLL;
    if ( (((unsigned __int16)(*(_WORD *)(v14 + 32) ^ *(_WORD *)(v14 + 36)) ^ 0x2BED) & 0x7FFF) != 0 )
    {
      v17 = 18;
      goto LABEL_18;
    }
    if ( !(BYTE2(PspTlsContext.Timer.Period) ^ (unsigned __int8)(BYTE6(v10) ^ HIWORD(*v10))) )
    {
      LODWORD(v14) = (_DWORD)v10;
      v17 = 8;
LABEL_18:
      RtlpLogHeapFailure(v17, *(_DWORD *)(a1 + 8) ^ a1, v14, 0, 0LL, 0LL);
      continue;
    }
    v15 = (__int64 ***)RtlpHpVsChunkFree(a1, v6, v14, (_DWORD)v10, 0, (__int64)&v27);
    if ( v15 )
    {
      v16 = v26;
      if ( *v26 != (__int64 *)&v25 )
LABEL_16:
        __fastfail(3u);
      v15[1] = v26;
      *v15 = &v25;
      *v16 = v15;
      v26 = (__int64 **)v15;
    }
  }
  while ( a3 );
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    RtlpHpReleaseQueuedLockExclusive(*(unsigned __int8 *)(a1 + 3), (__int64)&v27);
  while ( 1 )
  {
    v18 = v25;
    result = &v25;
    if ( v25 == (__int64 *)&v25 )
      return result;
    if ( (__int64 **)v25[1] != &v25 )
      goto LABEL_16;
    v20 = (__int64 *)*v25;
    if ( *(__int64 **)(*v25 + 8) != v25 )
      goto LABEL_16;
    v25 = (__int64 *)*v25;
    v20[1] = (__int64)&v25;
    RtlpHpVsSubsegmentFree(a1, v18);
  }
}
