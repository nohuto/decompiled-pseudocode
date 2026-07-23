/*
 * XREFs of RtlInitializeCompression @ 0x14061AE20
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x1404927B0 (ExInitializeNPagedLookasideListInternal.c)
 */

__int64 RtlInitializeCompression()
{
  int v0; // r8d
  __int64 result; // rax

  ExInitializeNPagedLookasideListInternal((__int64)&PspTlsContext.ApcState.Process, 0LL, 0LL, 512, 88, 1667529324, 0, 0);
  v0 = 1;
  _RAX = 1LL;
  __asm { cpuid }
  result = _RCX & 0x200;
  LODWORD(RtlpBootStatHandleLock.StackLimit) = _RCX & 0x200;
  if ( (_RDX & 0x4000000) == 0 || (_RCX & 0x100000) == 0 || (_RCX & 2) == 0 )
    v0 = 0;
  HIDWORD(RtlpBootStatHandleLock.StackLimit) = v0;
  return result;
}
