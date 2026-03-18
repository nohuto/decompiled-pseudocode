/*
 * XREFs of MiDoubleUnlockMdlPage @ 0x14047C1F4
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x14095D148 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402E8BF0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDoubleUnlockMdlPage(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned int v4; // esi
  __int64 result; // rax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  if ( (_DWORD)a2 )
  {
    CurrentIrql = 17;
    v4 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v4);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v2 + 24) < 0 );
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, a2);
    }
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v6);
      while ( *(__int64 *)(v2 + 24) < 0 );
    }
  }
  MiRemoveLockedPageChargeAndDecRef(v2);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
