/*
 * XREFs of KeReadyThread @ 0x14022F420
 * Callers:
 *     PspInsertThread @ 0x140A026D0 (PspInsertThread.c)
 * Callees:
 *     KiFastReadyThread @ 0x14022F1E8 (KiFastReadyThread.c)
 *     KiInSwapSingleProcess @ 0x1402C79E4 (KiInSwapSingleProcess.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
