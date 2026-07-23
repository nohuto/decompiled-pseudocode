/*
 * XREFs of MiTradePageReleaseLocks @ 0x140468FDC
 * Callers:
 *     MiTradePageMarkedActive @ 0x140292720 (MiTradePageMarkedActive.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiClearPfnReuseFields @ 0x14031C280 (MiClearPfnReuseFields.c)
 *     MiClearPfnImageVerified @ 0x1404691E4 (MiClearPfnImageVerified.c)
 */

__int64 __fastcall MiTradePageReleaseLocks(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 *v5; // rdi
  _DWORD *v6; // rcx
  __int64 v7; // rsi
  unsigned int v8; // edi
  __int64 v9; // r8
  signed __int64 v10; // rdx
  signed __int64 v11; // rax
  signed __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_DWORD *)(a1 + 16);
  if ( (v3 & 0x100) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 264) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 256) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(a2) = 17;
    MiUnlockProtoPoolPage(*(_QWORD *)(a1 + 168), a2, a3);
    *(_BYTE *)(a1 + 156) = 17;
  }
  else if ( (v3 & 0x50) == 0x10 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 264) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( ((*(_QWORD *)(*(_QWORD *)(a1 + 256) + 40LL) >> 60) & 7) == 3 )
  {
    v14 = 72LL;
    if ( *(_BYTE *)(a1 + 156) != 17 )
      v14 = 12LL;
    MiClearPfnImageVerified(*(_QWORD *)(a1 + 256), v14);
    v5 = (__int64 *)(a1 + 256);
  }
  else
  {
    v5 = (__int64 *)(a1 + 256);
  }
  if ( *(_DWORD *)(a1 + 56) == 2 )
  {
    v6 = (_DWORD *)(*(_QWORD *)(a1 + 232) + 200LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
LABEL_7:
      *v6 = 0;
      goto LABEL_8;
    }
    if ( PopHibernateInProgress )
    {
      v5 = (__int64 *)(a1 + 256);
      goto LABEL_7;
    }
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6, retaddr);
  }
LABEL_8:
  if ( *(_BYTE *)(a1 + 156) == 17 )
  {
    v7 = *(_QWORD *)(a1 + 256);
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v8);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    v5 = (__int64 *)(a1 + 256);
  }
  v9 = *(_QWORD *)(a1 + 256);
  v10 = *(_QWORD *)(v9 + 40);
  v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 40), v10 & 0x8FFFFFFFFFFFFFFFuLL, v10);
  if ( v10 != v11 )
  {
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 40), v11 & 0x8FFFFFFFFFFFFFFFuLL, v11);
    }
    while ( v12 != v11 );
    v5 = (__int64 *)(a1 + 256);
  }
  MiClearPfnReuseFields(*(_QWORD *)(a1 + 256));
  *(_DWORD *)(*v5 + 32) &= 0xFFFF0000;
  *(_QWORD *)(*v5 + 24) &= 0xC000000000000000uLL;
  result = *v5;
  _InterlockedAnd64((volatile signed __int64 *)(*v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
