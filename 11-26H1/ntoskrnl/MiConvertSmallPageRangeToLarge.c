/*
 * XREFs of MiConvertSmallPageRangeToLarge @ 0x1403CF990
 * Callers:
 *     MiRebuildLargePage @ 0x14028F484 (MiRebuildLargePage.c)
 *     MiFreeMdlPageRun @ 0x1403CE04C (MiFreeMdlPageRun.c)
 *     MiFreeLargePageMemory @ 0x1403CF1F4 (MiFreeLargePageMemory.c)
 *     MiInitializeMdlBatchPages @ 0x14050888C (MiInitializeMdlBatchPages.c)
 *     MiDeleteSubsectionLargePages @ 0x14050A96C (MiDeleteSubsectionLargePages.c)
 *     MiFindLargePageMemory @ 0x140B64898 (MiFindLargePageMemory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiConvertLockedSmallPageToLarge @ 0x1403CFBF0 (MiConvertLockedSmallPageToLarge.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiConvertSmallPageRangeToLarge(__int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // rbp
  __int64 *v4; // rbx
  BOOL v5; // r12d
  unsigned __int64 v6; // r14
  char v7; // si
  unsigned __int8 CurrentIrql; // r13
  volatile signed __int32 *v9; // rbx
  unsigned int v10; // edi
  __int64 result; // rax
  unsigned __int64 i; // rcx
  __int64 v13; // rdx
  unsigned __int8 v14; // di
  __int64 *v15; // [rsp+60h] [rbp+8h]
  int v16; // [rsp+68h] [rbp+10h] BYREF

  v3 = 48 * a1 - 0x220000000000LL;
  v4 = &MiPageSizes[a2];
  v15 = v4;
  v5 = (*(_BYTE *)(v3 + 34) & 7) != 6;
  v6 = v3 + 48 * *v4;
  v7 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( v3 < v6 )
  {
    v9 = (volatile signed __int32 *)(v3 + 24);
    do
    {
      v10 = 0;
      while ( _interlockedbittestandset64(v9, 0x3FuLL) )
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
        while ( *(__int64 *)v9 < 0 );
      }
      MiConvertLockedSmallPageToLarge(v9 - 6, v3, a2, v5);
      _InterlockedAnd64((volatile signed __int64 *)v9, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v7 & 0xF) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v14 = KeGetCurrentIrql();
        if ( v14 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v13) = 2;
          KiRaiseIrqlProcessIrqlFlags(v14, v13);
        }
        CurrentIrql = v14;
      }
      v9 += 12;
      ++v7;
    }
    while ( (unsigned __int64)(v9 - 6) < v6 );
    v4 = v15;
  }
  v16 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v16);
    while ( *(__int64 *)(v3 + 24) < 0 );
  }
  result = *v4;
  for ( i = v3; i < v3 + 48 * *v4; i += 48LL )
  {
    result = *(_DWORD *)(i + 32) >> 30;
    if ( (*(_DWORD *)(i + 32) & 0x40000000) != 0 )
    {
      result = *(_QWORD *)(v3 + 40) | 0x20000000000LL;
      *(_QWORD *)(v3 + 40) = result;
      break;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
