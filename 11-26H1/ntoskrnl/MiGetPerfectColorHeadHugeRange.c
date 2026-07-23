/*
 * XREFs of MiGetPerfectColorHeadHugeRange @ 0x1406F0910
 * Callers:
 *     MiGetPerfectFreeOrZeroHugeRange @ 0x1406F0B50 (MiGetPerfectFreeOrZeroHugeRange.c)
 *     MiRemoveHugeRangeAnyColor @ 0x1406F24B0 (MiRemoveHugeRangeAnyColor.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiColorGetCache @ 0x140288F60 (MiColorGetCache.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 *     MiUnlinkHugeRangeEx @ 0x140487ED8 (MiUnlinkHugeRangeEx.c)
 *     MiGetColorHeadHugeRangeBase @ 0x1404883BC (MiGetColorHeadHugeRangeBase.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

_QWORD *__fastcall MiGetPerfectColorHeadHugeRange(__int64 a1)
{
  int v1; // esi
  __int64 Cache; // r15
  __int64 v3; // rdx
  int v4; // r10d
  __int64 v5; // r11
  int v6; // edx
  __int64 ColorHeadHugeRangeBase; // r12
  __int64 v8; // rbx
  _QWORD *v9; // r14
  unsigned __int8 CurrentIrql; // bp
  unsigned int v11; // r14d
  __int16 v14; // [rsp+68h] [rbp+10h]
  int v15; // [rsp+70h] [rbp+18h]
  int v16; // [rsp+78h] [rbp+20h] BYREF

  v1 = *(_DWORD *)(a1 + 32);
  v14 = **(_WORD **)(*(_QWORD *)a1 + 13896LL);
  v15 = (**(_DWORD **)(a1 + 16) != 0) + 1;
  Cache = (unsigned int)MiColorGetCache(*(_DWORD *)(a1 + 28));
  ColorHeadHugeRangeBase = MiGetColorHeadHugeRangeBase(v5, v3, v4);
  v8 = (*(_QWORD *)(ColorHeadHugeRangeBase + 8 * Cache) >> 15) & 0x3FFFFFLL;
  if ( ((*(_QWORD *)(ColorHeadHugeRangeBase + 8 * Cache) >> 15) & 0x3FFFFF) == 0 )
    return 0LL;
  while ( !_bittest64(*(const signed __int64 **)&stru_140E2ED08.WaitRegister.Flags, v8) )
  {
LABEL_21:
    v8 = (*(_QWORD *)(ColorHeadHugeRangeBase + 8 * Cache) >> 15) & 0x3FFFFFLL;
    if ( ((*(_QWORD *)(ColorHeadHugeRangeBase + 8 * Cache) >> 15) & 0x3FFFFF) == 0 )
      return 0LL;
  }
  v9 = (_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v8);
  if ( (v1 & 1) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v6) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v6);
    }
  }
  MiLockHugePfnAtDpc((__int64)v9);
  if ( ((*v9 >> 4) & 0x7FFLL) != v14 || (*v9 & 7) != v15 )
  {
    v11 = (((__int64)v9 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFF;
LABEL_17:
    v6 = ~(1 << v11);
    _InterlockedAnd(
      (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber + 4 * ((unsigned __int64)v11 >> 5)),
      v6);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    goto LABEL_21;
  }
  v16 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(ColorHeadHugeRangeBase + 8 * Cache), 3uLL) )
  {
    do
      KeYieldProcessorEx(&v16);
    while ( (*(_QWORD *)(ColorHeadHugeRangeBase + 8 * Cache) & 8) != 0 );
  }
  if ( v8 != ((*(_QWORD *)(ColorHeadHugeRangeBase + 8 * Cache) >> 15) & 0x3FFFFFLL) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(ColorHeadHugeRangeBase + 8 * Cache), 0xFFFFFFFFFFFFFFF7uLL);
    v11 = (((__int64)v9 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFF;
    goto LABEL_17;
  }
  MiUnlinkHugeRangeEx(*(_QWORD *)(*(_QWORD *)a1 + 13896LL), v8, 0);
  _InterlockedAnd64((volatile signed __int64 *)(ColorHeadHugeRangeBase + 8 * Cache), 0xFFFFFFFFFFFFFFF7uLL);
  _InterlockedAnd(
    (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                              + 4
                              * (((((__int64)v9 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
    ~(1 << (((__int64)v9 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v9;
}
