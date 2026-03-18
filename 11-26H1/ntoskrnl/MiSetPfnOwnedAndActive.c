/*
 * XREFs of MiSetPfnOwnedAndActive @ 0x14033B05C
 * Callers:
 *     MiFindContiguousPagesFinish @ 0x1404F702C (MiFindContiguousPagesFinish.c)
 *     MiInitializeFoundLargeNodePage @ 0x1406EACFC (MiInitializeFoundLargeNodePage.c)
 *     MiRemoveMdlPages @ 0x1408681C4 (MiRemoveMdlPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x14028B2D0 (MiMakeDemandZeroPte.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiChangePageAttribute @ 0x1402D8660 (MiChangePageAttribute.c)
 *     MiSetPfnContainingFrame @ 0x14033BC10 (MiSetPfnContainingFrame.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiSetPfnOwnedAndActive(__int64 a1, char a2, __int64 a3, unsigned int a4, unsigned __int16 a5)
{
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v10; // ebp
  __int64 result; // rax
  int v12; // [rsp+58h] [rbp+10h] BYREF

  v8 = a1;
  if ( (a2 & 4) != 0 )
  {
    CurrentIrql = 17;
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
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
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v12);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
  }
  *(_QWORD *)(v8 + 40) &= ~0x8000000000000000uLL;
  *(_QWORD *)v8 = 0LL;
  if ( ((*(_DWORD *)(v8 + 32) >> 22) & 3) != a4 )
    MiChangePageAttribute(v8, a4);
  *(_QWORD *)(v8 + 24) = *(_QWORD *)(v8 + 24) & 0xC000000000000000uLL | 1;
  if ( a5 )
    *(_DWORD *)(v8 + 32) = a5 | *(_DWORD *)(v8 + 32) & 0xFFFF0000;
  *(_QWORD *)(v8 + 8) = a3;
  result = *(_DWORD *)(v8 + 32) & 0xFFF8FFFF | 0x60000;
  *(_DWORD *)(v8 + 32) = result;
  if ( (a2 & 3) != 0 )
  {
    MiSetPfnContainingFrame(v8, 0x3FFFFFFFFELL);
    if ( (a2 & 8) == 0 )
      *(_QWORD *)(v8 + 16) = MiMakeDemandZeroPte(4);
    *(_QWORD *)(v8 + 8) = 0xFFFFF68000000000uLL;
    result = *(_QWORD *)(v8 + 24) | 0x4000000000000000LL;
    *(_QWORD *)(v8 + 24) = result;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql <= 1u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
