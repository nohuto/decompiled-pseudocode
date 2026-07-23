/*
 * XREFs of MiFreeDeferredCrcPages @ 0x1402E9880
 * Callers:
 *     MiSharePagesYield @ 0x1402E9160 (MiSharePagesYield.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFreeDeferredCrcPages(_QWORD *a1)
{
  _QWORD *v1; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  while ( 1 )
  {
    v1 = (_QWORD *)*v1;
    if ( !v1 )
      break;
    v4 = v1[2];
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v6);
      while ( *(__int64 *)(v4 + 24) < 0 );
    }
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(v4 + 32) & 0xFFF8FFFF | 0x60000;
    if ( (*(_BYTE *)(v4 + 34) & 7) != 6 )
      MiBadShareCount(v4);
    v5 = *(_QWORD *)(v4 + 24);
    *(_QWORD *)(v4 + 24) = ((v5 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (v5 ^ ((v5 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0xC000000000000000uLL;
    if ( (v5 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      MiPfnShareCountIsZero(v4, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
