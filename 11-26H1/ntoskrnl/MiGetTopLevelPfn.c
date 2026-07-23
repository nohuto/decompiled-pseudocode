/*
 * XREFs of MiGetTopLevelPfn @ 0x1403FD790
 * Callers:
 *     MiIdentifyPfn @ 0x1402D2F70 (MiIdentifyPfn.c)
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiRecheckCombineVm @ 0x1403FD34C (MiRecheckCombineVm.c)
 *     MiPfnToOwningProcess @ 0x1403FD420 (MiPfnToOwningProcess.c)
 *     MiStoreCheckCandidatePage @ 0x1403FD488 (MiStoreCheckCandidatePage.c)
 *     MiLockStealUserVm @ 0x140458690 (MiLockStealUserVm.c)
 *     MiCapturePfnVm @ 0x14050D140 (MiCapturePfnVm.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070F118 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
