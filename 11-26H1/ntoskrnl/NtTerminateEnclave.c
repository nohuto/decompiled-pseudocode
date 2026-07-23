/*
 * XREFs of NtTerminateEnclave @ 0x14087D760
 * Callers:
 *     DifNtTerminateEnclaveWrapper @ 0x140693240 (DifNtTerminateEnclaveWrapper.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiTerminateEnclave @ 0x14087D03C (MiTerminateEnclave.c)
 */

NTSTATUS __cdecl NtTerminateEnclave(PVOID BaseAddress, ULONG Flags)
{
  ULONG_PTR v5; // rax
  __int64 v6; // rdi
  NTSTATUS v7; // ebx
  NTSTATUS v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  if ( (Flags & 0xFFFFFFFA) != 0 )
    return -1073741584;
  v5 = MiObtainReferencedVadEx((unsigned __int64)BaseAddress, 0LL, &v8);
  v6 = v5;
  if ( !v5 )
    return v8;
  if ( (MiReadVadFlags(v5) & 0x880000) == 0x880000
    && (PVOID)((*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32)) << 12) == BaseAddress )
  {
    v7 = MiTerminateEnclave((__int64)KeGetCurrentThread()->ApcState.Process, v6, Flags);
  }
  else
  {
    v7 = -1073741800;
  }
  MiUnlockAndDereferenceVad((volatile signed __int32 *)v6);
  return v7;
}
