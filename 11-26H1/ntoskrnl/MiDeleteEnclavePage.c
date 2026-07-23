/*
 * XREFs of MiDeleteEnclavePage @ 0x140342680
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140342EB4 (MiDecommitHardwareEnclavePages.c)
 *     MiDecommitRemoveEnclavePageForce @ 0x140343E60 (MiDecommitRemoveEnclavePageForce.c)
 *     MiDeleteEnclavePages @ 0x140C07CE8 (MiDeleteEnclavePages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUpdateAwePageTable @ 0x140342494 (MiUpdateAwePageTable.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDeleteEnclavePage(unsigned __int64 a1, __int64 a2)
{
  int v2; // esi
  ULONG_PTR v3; // rdi
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // si
  int v6; // r10d
  __int64 result; // rax
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  v3 = (*(_QWORD *)a1 >> 12) & 0xFFFFFFFFFFLL;
  *(_QWORD *)a1 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( (_DWORD)a2 )
    MiUpdateAwePageTable((__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), -1LL, -1);
  v4 = 48 * v3 - 0x220000000000LL;
  if ( v2 )
  {
    CurrentIrql = 17;
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v8);
      while ( *(__int64 *)(v4 + 24) < 0 );
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
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v8);
      while ( *(__int64 *)(v4 + 24) < 0 );
    }
  }
  *(_QWORD *)(v4 + 24) |= 0x4000000000000000uLL;
  v6 = *(_DWORD *)(v4 + 32);
  if ( (v6 & 0x80000) != 0
    && (unsigned int)MiCanPfnOriginalPteBeLost(48 * v3 - 0x220000000000LL)
    && (v6 & 0x100000) == 0
    && (*(_DWORD *)(v4 + 16) & 8) != 0 )
  {
    *(_QWORD *)(v4 + 16) &= ~8uLL;
  }
  *(_DWORD *)(v4 + 32) = v6 & 0xFFEFFFFF;
  *(_QWORD *)(v4 + 24) = (*(_QWORD *)(v4 + 24) - 1LL) ^ (*(_QWORD *)(v4 + 24) ^ (*(_QWORD *)(v4 + 24) - 1LL)) & 0xC000000000000000uLL;
  *(_DWORD *)(v4 + 32) &= 0xFFFF0000;
  MiInsertPageInFreeOrZeroedList(v3);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
