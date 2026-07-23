/*
 * XREFs of MiRelockProtoPoolPage @ 0x14031E024
 * Callers:
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038D338 (MiWaitForCollidedFaultComplete.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiAddLockedPageCharge @ 0x1402D7DB0 (MiAddLockedPageCharge.c)
 *     MiIsProtoPoolPfnInNonPagedPool @ 0x14031E250 (MiIsProtoPoolPfnInNonPagedPool.c)
 *     MiGetLeafPfnBuddy @ 0x14040AE80 (MiGetLeafPfnBuddy.c)
 *     MiSpinForProtoPoolLock @ 0x14040AEE0 (MiSpinForProtoPoolLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiRelockProtoPoolPage(__int64 a1, unsigned __int8 *a2)
{
  _DWORD *v2; // rbp
  __int64 v4; // rbx
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  volatile signed __int64 *v7; // r8
  signed __int64 i; // rcx
  signed __int64 v9; // rax
  unsigned __int8 CurrentIrql; // di
  __int64 LeafPfnBuddy; // rax
  _QWORD *v13; // rcx
  _DWORD v14[16]; // [rsp+60h] [rbp+0h] BYREF

  v2 = (_DWORD *)((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = a1;
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    *v2 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx((_DWORD *)((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFC0uLL));
      while ( *(__int64 *)(v4 + 24) < 0 );
    }
    *a2 = CurrentIrql;
  }
  else
  {
    *v2 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx((_DWORD *)((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFC0uLL));
      while ( *(__int64 *)(v4 + 24) < 0 );
    }
  }
  if ( !(unsigned int)MiIsProtoPoolPfnInNonPagedPool(v4) )
    MiAddLockedPageCharge(v4, 1, v5, v6);
  memset_0(v2 + 16, 0, 0x40uLL);
  if ( (*(_BYTE *)(v4 + 34) & 0x20) != 0 )
  {
    *(_DWORD *)(((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0;
    LeafPfnBuddy = MiGetLeafPfnBuddy(v4, 1LL);
    if ( LeafPfnBuddy )
    {
      v13 = *(_QWORD **)(LeafPfnBuddy + 8);
      if ( *v13 != LeafPfnBuddy )
        __fastfail(3u);
      *(_QWORD *)(((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v13;
      *(_QWORD *)(((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = LeafPfnBuddy;
      *v13 = v2 + 16;
      *(_QWORD *)(LeafPfnBuddy + 8) = v2 + 16;
    }
    else
    {
      *(_QWORD *)(((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)(((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)v4 = ((unsigned __int64)(v2 + 16) >> 3) ^ (*(_QWORD *)v4 ^ ((unsigned __int64)(v2 + 16) >> 3)) & 0xFFFFF00000000001uLL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiSpinForProtoPoolLock(v2 + 16);
    *v2 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx((_DWORD *)((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFC0uLL));
      while ( *(__int64 *)(v4 + 24) < 0 );
    }
  }
  else
  {
    *(_DWORD *)(v4 + 32) |= 0x200000u;
  }
  if ( (*(_QWORD *)(v4 + 24) & 0x4000000000000000LL) == 0 && !(unsigned int)MiIsProtoPoolPfnInNonPagedPool(v4) )
  {
    v7 = (volatile signed __int64 *)(*(_QWORD *)(v4 + 8) | 0x8000000000000000uLL);
    if ( (*v7 & 0x20) == 0 )
    {
      for ( i = *v7; ; i = v9 )
      {
        if ( (MiFlags & 0x8000000) != 0 )
          _mm_lfence();
        v9 = _InterlockedCompareExchange64(v7, i | 0x20, i);
        if ( i == v9 )
          break;
      }
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v4;
}
