/*
 * XREFs of KeReadyThread @ 0x140230DB0
 * Callers:
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 * Callees:
 *     KiFastReadyThread @ 0x140230B78 (KiFastReadyThread.c)
 *     KiInSwapSingleProcess @ 0x140312684 (KiInSwapSingleProcess.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeReadyThread(LegacyAutoBoost *this)
{
  LegacyAutoBoost *v1; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di

  v1 = this;
  if ( (*(_DWORD *)(*((_QWORD *)this + 23) + 264LL) & 7) == 0 )
    return KiFastReadyThread((__int64)v1);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(this) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(this, 2LL);
  }
  result = KiInSwapSingleProcess(v1);
  if ( !(_BYTE)result )
    return KiFastReadyThread((__int64)v1);
  return result;
}
