/*
 * XREFs of EtwpTrackDecodeGuidForSession @ 0x140AFF290
 * Callers:
 *     EtwpUpdateRegEntryEnableMask @ 0x140912E34 (EtwpUpdateRegEntryEnableMask.c)
 *     AddDecodeGuidToSessions @ 0x140AFF1E0 (AddDecodeGuidToSessions.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

bool __fastcall EtwpTrackDecodeGuidForSession(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r14
  unsigned __int64 *v5; // rdi
  __int64 v6; // r15
  bool v8; // bl
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rbp
  _QWORD *i; // rdx
  __int64 v13; // rcx
  unsigned int v15; // eax
  __int64 Pool2; // rcx
  __int128 v17; // xmm1

  v4 = *(_QWORD *)(a2 + 112);
  v5 = (unsigned __int64 *)(a1 + 688);
  v6 = *(_QWORD *)(a2 + 32);
  v8 = 0;
  v9 = (AutoBoost *)KeAbPreAcquire(a1 + 688, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v9, (__int64)v5);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  for ( i = *(_QWORD **)(a1 + 112); i; i = (_QWORD *)*i )
  {
    v13 = *(_QWORD *)(v4 + 34) - i[1];
    if ( !v13 )
      v13 = *(_QWORD *)(v4 + 42) - i[2];
    if ( !v13 )
    {
      v8 = memcmp((const void *)(v6 + 40), i + 3, 0x10uLL) == 0;
      goto LABEL_13;
    }
  }
  v15 = *(_DWORD *)(a1 + 324) + 2048;
  if ( v15 <= *(_DWORD *)(a1 + 4) && v15 <= 0x10000 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = *(_QWORD *)(a1 + 112);
      *(_OWORD *)(Pool2 + 8) = *(_OWORD *)(v4 + 34);
      v17 = *(_OWORD *)(v6 + 40);
      *(_BYTE *)(Pool2 + 40) = 0;
      *(_OWORD *)(Pool2 + 24) = v17;
      ++*(_DWORD *)(a1 + 120);
      *(_DWORD *)(a1 + 324) += 32;
      *(_QWORD *)(a1 + 112) = Pool2;
      _InterlockedOr((volatile signed __int32 *)(a1 + 824), 0x8C0u);
      v8 = 1;
    }
  }
LABEL_13:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((unsigned __int64)v5);
  return v8;
}
