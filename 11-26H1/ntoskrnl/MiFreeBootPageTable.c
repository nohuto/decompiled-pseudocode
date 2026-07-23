/*
 * XREFs of MiFreeBootPageTable @ 0x140CF8EB0
 * Callers:
 *     MxZeroBootMappings @ 0x140CFA5AC (MxZeroBootMappings.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiLockAndInsertPageInFreeList @ 0x1402925F8 (MiLockAndInsertPageInFreeList.c)
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 *     MiReturnMdlCharges @ 0x1404FB278 (MiReturnMdlCharges.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFreeBootPageTable(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rbx
  int v2; // eax
  ULONG_PTR v3; // r9
  int v4; // edx
  unsigned __int8 CurrentIrql; // di
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v2 = *(_DWORD *)(v1 + 32);
  if ( (_WORD)v2 )
  {
    v3 = *(_QWORD *)(v1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (_WORD)v2 != 2 || v3 != 1 )
      KeBugCheckEx(0x1Au, 0x303030FuLL, BugCheckParameter2, v3, (unsigned __int16)v2);
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL, 0x200uLL, 0);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v4) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v4);
    }
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v7);
      while ( *(__int64 *)(v1 + 24) < 0 );
    }
    *(_DWORD *)(v1 + 32) &= 0xFFFF0000;
    *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
    *(_DWORD *)(v1 + 32) = *(_DWORD *)(v1 + 32) & 0xFFF8FFFF | 0x50000;
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    MiReturnMdlCharges((__int64)&MiSystemPartition, 1uLL, 0);
  }
  else
  {
    *(_QWORD *)(v1 + 40) |= 0x40000000000000uLL;
    *(_QWORD *)(v1 + 8) = 0LL;
  }
  return MiLockAndInsertPageInFreeList(v1);
}
