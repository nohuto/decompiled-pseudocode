/*
 * XREFs of MiGetTopLevelPfn @ 0x140404690
 * Callers:
 *     MiIdentifyPfn @ 0x1402F0EF0 (MiIdentifyPfn.c)
 *     MiRestoreTransitionPte @ 0x1402F8F60 (MiRestoreTransitionPte.c)
 *     MiGetPagePrivilege @ 0x1402F9878 (MiGetPagePrivilege.c)
 *     MiRecheckCombineVm @ 0x14040424C (MiRecheckCombineVm.c)
 *     MiPfnToOwningProcess @ 0x140404320 (MiPfnToOwningProcess.c)
 *     MiStoreCheckCandidatePage @ 0x140404388 (MiStoreCheckCandidatePage.c)
 *     MiLockStealUserVm @ 0x14045EF90 (MiLockStealUserVm.c)
 *     MiCapturePfnVm @ 0x1405136D0 (MiCapturePfnVm.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070A464 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetTopLevelPfn(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  unsigned int v4; // edi
  unsigned int v5; // r14d
  __int64 v6; // rcx
  __int64 *v7; // rcx
  __int64 v8; // rax
  unsigned int v10; // ebp
  _OWORD v11[2]; // [rsp+30h] [rbp-58h] BYREF

  memset(v11, 0, sizeof(v11));
  v1 = BugCheckParameter2;
  v3 = (__int64)(BugCheckParameter2 + 0x220000000000LL) / 48;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = v5;
    if ( (*(_QWORD *)(v1 + 40) & 0xFFFFFFFFFFLL) == v3 )
      break;
    v3 = *(_QWORD *)(v1 + 40) & 0xFFFFFFFFFFLL;
    v1 = 48 * v3 - 0x220000000000LL;
    if ( ++v5 > 4 )
      KeBugCheckEx(0x1Au, 0x9696uLL, BugCheckParameter2, 0LL, 0LL);
    *((_QWORD *)v11 + v6) = v1;
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v1 + 24) < 0 );
    }
  }
  v7 = (__int64 *)v11;
  do
  {
    v8 = *v7;
    if ( !*v7 )
      break;
    if ( v8 != v1 )
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v4;
    ++v7;
  }
  while ( v4 < 4 );
  return v1;
}
