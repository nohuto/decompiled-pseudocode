/*
 * XREFs of MiTradePageReleaseLocks @ 0x14046F85C
 * Callers:
 *     MiTradePageMarkedActive @ 0x1402931C0 (MiTradePageMarkedActive.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiClearPfnReuseFields @ 0x14031A250 (MiClearPfnReuseFields.c)
 *     MiClearPfnImageVerified @ 0x14046FA64 (MiClearPfnImageVerified.c)
 */

__int64 __fastcall MiTradePageReleaseLocks(__int64 a1)
{
  int v1; // eax
  __int64 *v3; // rdi
  _DWORD *v4; // rcx
  __int64 v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // r8
  signed __int64 v8; // rdx
  signed __int64 v9; // rax
  signed __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_DWORD *)(a1 + 16);
  if ( (v1 & 0x100) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 264) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 256) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockProtoPoolPage(*(_QWORD *)(a1 + 168), 0x11u);
    *(_BYTE *)(a1 + 156) = 17;
  }
  else if ( (v1 & 0x50) == 0x10 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 264) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( ((*(_QWORD *)(*(_QWORD *)(a1 + 256) + 40LL) >> 60) & 7) == 3 )
  {
    v12 = 72LL;
    if ( *(_BYTE *)(a1 + 156) != 17 )
      v12 = 12LL;
    MiClearPfnImageVerified(*(_QWORD *)(a1 + 256), v12);
    v3 = (__int64 *)(a1 + 256);
  }
  else
  {
    v3 = (__int64 *)(a1 + 256);
  }
  if ( *(_DWORD *)(a1 + 56) == 2 )
  {
    v4 = (_DWORD *)(*(_QWORD *)(a1 + 232) + 200LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
LABEL_7:
      *v4 = 0;
      goto LABEL_8;
    }
    if ( LODWORD(stru_140F11D08.WaitStatus) )
    {
      v3 = (__int64 *)(a1 + 256);
      goto LABEL_7;
    }
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
  }
LABEL_8:
  if ( *(_BYTE *)(a1 + 156) == 17 )
  {
    v5 = *(_QWORD *)(a1 + 256);
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v5 + 24) < 0 );
    }
    v3 = (__int64 *)(a1 + 256);
  }
  v7 = *(_QWORD *)(a1 + 256);
  v8 = *(_QWORD *)(v7 + 40);
  v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 40), v8 & 0x8FFFFFFFFFFFFFFFuLL, v8);
  if ( v8 != v9 )
  {
    do
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 40), v9 & 0x8FFFFFFFFFFFFFFFuLL, v9);
    }
    while ( v10 != v9 );
    v3 = (__int64 *)(a1 + 256);
  }
  MiClearPfnReuseFields(*(_QWORD *)(a1 + 256));
  *(_DWORD *)(*v3 + 32) &= 0xFFFF0000;
  *(_QWORD *)(*v3 + 24) &= 0xC000000000000000uLL;
  result = *v3;
  _InterlockedAnd64((volatile signed __int64 *)(*v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
