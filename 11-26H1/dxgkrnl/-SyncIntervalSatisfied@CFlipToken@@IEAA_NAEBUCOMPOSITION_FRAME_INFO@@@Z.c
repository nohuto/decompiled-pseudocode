/*
 * XREFs of ?SyncIntervalSatisfied@CFlipToken@@IEAA_NAEBUCOMPOSITION_FRAME_INFO@@@Z @ 0x1400A27E8
 * Callers:
 *     ?CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z @ 0x140067210 (-CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

char __fastcall CFlipToken::SyncIntervalSatisfied(CFlipToken *this, const struct COMPOSITION_FRAME_INFO *a2)
{
  _QWORD *v2; // rsi
  CPushLock *v5; // rbp
  unsigned __int64 v6; // rsi
  __int64 v8; // rax

  v2 = (_QWORD *)*((_QWORD *)this + 6);
  KeEnterCriticalRegion();
  v5 = (CPushLock *)(v2 + 6);
  ExAcquirePushLockSharedEx(v2 + 6, 0LL);
  if ( v2[24] )
    v6 = 0LL;
  else
    v6 = v2[21];
  CPushLock::ReleaseLock(v5);
  if ( *((_DWORD *)this + 32) && *((_QWORD *)this + 14) < v6 )
  {
    *((_QWORD *)this + 14) = v6 + (*(_QWORD *)((char *)a2 + (*((_BYTE *)this + 576) != 0 ? 0x48 : 0) + 16) >> 1);
    return 0;
  }
  else
  {
    if ( *((_BYTE *)this + 576) )
      v8 = *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 12);
    else
      v8 = *((_QWORD *)a2 + 2) + *((_QWORD *)a2 + 3);
    *((_QWORD *)this + 14) = v8;
    return 1;
  }
}
