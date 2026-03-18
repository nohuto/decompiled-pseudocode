/*
 * XREFs of ExDestroyHandle @ 0x14092C030
 * Callers:
 *     PspJobDelete @ 0x140615810 (PspJobDelete.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     AlpcpFreeMessageFunction @ 0x140A86940 (AlpcpFreeMessageFunction.c)
 *     PspThreadDelete @ 0x140AA21E0 (PspThreadDelete.c)
 *     RtlpInsertStringAtom @ 0x140AAEF58 (RtlpInsertStringAtom.c)
 *     RtlpFreeHandleForAtom @ 0x140ABFF80 (RtlpFreeHandleForAtom.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     ExpUpdateDebugInfo @ 0x14092C6E0 (ExpUpdateDebugInfo.c)
 *     ExpGetHandleExtraInfo @ 0x14092C97C (ExpGetHandleExtraInfo.c)
 */

__int64 __fastcall ExDestroyHandle(__int64 a1, __int64 a2, _QWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int Number; // ebp
  unsigned int v8; // r14d
  _QWORD *HandleExtraInfo; // rax
  char v10; // si
  unsigned __int64 v11; // rbx
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // rbp
  __int64 v15; // rax
  __int64 v17; // rax
  signed __int32 v18[14]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v19; // [rsp+40h] [rbp+8h]

  if ( *(_QWORD *)(a1 + 96) )
    ExpUpdateDebugInfo(a1, KeGetCurrentThread(), a2, 2LL);
  Number = 0;
  v8 = (unsigned __int16)((unsigned __int64)*(unsigned int *)a3 >> 1);
  *a3 = 0LL;
  _InterlockedOr(v18, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  HIDWORD(v19) = HIDWORD(a2);
  if ( *(_DWORD *)(a1 + 4) )
  {
    LODWORD(v19) = a2 & 0xFFFFFFFC;
    HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(a1, v19);
    if ( HandleExtraInfo )
      *HandleExtraInfo = 0LL;
  }
  a3[1] = 0LL;
  v10 = *(_BYTE *)(a1 + 44) & 1;
  if ( !v10 )
    Number = KeGetPcr()->Prcb.Number;
  v11 = ((Number + 1LL) << 6) + a1;
  v12 = (AutoBoost *)KeAbPreAcquire(v11, 0LL, 0LL, a4);
  v14 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v11, v12, v11);
  if ( v14 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v14, v13);
    else
      *((_BYTE *)v14 + 10) = 1;
  }
  if ( v10 )
  {
    v17 = *(_QWORD *)(v11 + 16);
    if ( v17 )
      *(_QWORD *)(v17 + 8) = a3;
    else
      *(_QWORD *)(v11 + 8) = a3;
    *(_QWORD *)(v11 + 16) = a3;
  }
  else
  {
    v15 = *(_QWORD *)(v11 + 8);
    a3[1] = v15;
    if ( !v15 )
      *(_QWORD *)(v11 + 16) = a3;
    *(_QWORD *)(v11 + 8) = a3;
  }
  --*(_DWORD *)(v11 + 24);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v11);
  KeAbPostRelease(v11);
  return v8;
}
