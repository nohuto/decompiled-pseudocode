/*
 * XREFs of MiTradeForLeafPage @ 0x140293044
 * Callers:
 *     MiTradePageMarkedActive @ 0x140292720 (MiTradePageMarkedActive.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiCopyPage @ 0x140293504 (MiCopyPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReplacePageOfProtoPool @ 0x140443530 (MiReplacePageOfProtoPool.c)
 *     MiMakeProtoPoolReadOnly @ 0x1404BF168 (MiMakeProtoPoolReadOnly.c)
 */

__int64 __fastcall MiTradeForLeafPage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // r14
  unsigned int v5; // edi
  __int64 v6; // rbp
  unsigned int v7; // esi
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 16) & 0x100) == 0 )
  {
    v4 = (__int64 *)(a1 + 264);
    v5 = (*(_DWORD *)(a1 + 16) & 0x1000 | 0x80000u) >> 11;
    if ( *(_BYTE *)(a1 + 156) != 17 )
    {
      v6 = *v4;
      v5 |= 4u;
      v7 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v7 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
          {
            HvlNotifyLongSpinWait(v7);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v6 + 24) < 0 );
      }
    }
    MiCopyPage(*(_QWORD *)(a1 + 248), *(_QWORD *)(a1 + 240), v5);
    if ( (v5 & 4) != 0 )
      _InterlockedAnd64((volatile signed __int64 *)(*v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (*(_DWORD *)(a1 + 16) & 0x20) == 0 && *(_BYTE *)(a1 + 156) != 17 )
      *(_DWORD *)(*(_QWORD *)(a1 + 256) + 32LL) = *(_DWORD *)(*(_QWORD *)(a1 + 256) + 32LL) & 0xFFF8FFFF | 0x50000;
    return 0LL;
  }
  result = MiMakeProtoPoolReadOnly();
  if ( !(_DWORD)result )
  {
    if ( (int)MiReplacePageOfProtoPool(
                *(_QWORD *)(a1 + 176),
                *(_QWORD *)(a1 + 240),
                *(_QWORD *)(a1 + 248),
                *(_QWORD *)(a1 + 136)) < 0 )
    {
      LOBYTE(v9) = 17;
      MiUnlockProtoPoolPage(*(_QWORD *)(a1 + 168), v9);
      return 1LL;
    }
    v10 = *(_QWORD *)(a1 + 256);
    v12 = 0;
    *(_DWORD *)(v10 + 32) = *(_DWORD *)(v10 + 32) & 0xFFF8FFFF | 0x50000;
    *(_QWORD *)(*(_QWORD *)(a1 + 256) + 24LL) = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 24LL) & 0xC000000000000000uLL | 1;
    v11 = *(_QWORD *)(a1 + 264);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v12);
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
    return 0LL;
  }
  return result;
}
