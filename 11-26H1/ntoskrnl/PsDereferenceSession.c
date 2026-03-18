/*
 * XREFs of PsDereferenceSession @ 0x140AF14D0
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14095B2A4 (MmCleanProcessAddressSpace.c)
 *     PsSessionCreate @ 0x1409638D4 (PsSessionCreate.c)
 *     MiCleanEmbryonicProcess @ 0x140AF1424 (MiCleanEmbryonicProcess.c)
 * Callees:
 *     PspDereferenceSessionFinal @ 0x140B4AB84 (PspDereferenceSessionFinal.c)
 */

__int64 PsDereferenceSession()
{
  _KPROCESS *Process; // rbx
  __int64 result; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)Process[1].CycleTime, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    result = PspDereferenceSessionFinal();
  _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0xFFFEFFFF);
  return result;
}
