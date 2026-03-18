/*
 * XREFs of PsIumGetOnDemandDebugChallenge @ 0x140B0ADD8
 * Callers:
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     VslGetOnDemandDebugChallenge @ 0x140B0AE88 (VslGetOnDemandDebugChallenge.c)
 */

__int64 __fastcall PsIumGetOnDemandDebugChallenge(ULONG_PTR a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v7; // ebx
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  Object[0] = 0LL;
  v7 = ObpReferenceObjectByHandleWithTag(
         a1,
         4096LL,
         PsProcessType,
         KeGetCurrentThread()->PreviousMode,
         0x79517350u,
         Object,
         0LL,
         0LL);
  if ( v7 >= 0 )
  {
    v7 = VslGetOnDemandDebugChallenge(Object[0], a2, a3, a4);
    ObfDereferenceObjectWithTag(Object[0], 0x79517350u);
  }
  return (unsigned int)v7;
}
