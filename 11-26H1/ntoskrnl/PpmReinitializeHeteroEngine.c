/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x140AD89F8
 * Callers:
 *     PpmHeteroHgsUpdateWorker @ 0x1404F1120 (PpmHeteroHgsUpdateWorker.c)
 *     PpmPerfClearBootOverrides @ 0x1404F77C8 (PpmPerfClearBootOverrides.c)
 *     PpmRegisterPerfStates @ 0x1407D13F8 (PpmRegisterPerfStates.c)
 *     PpmInitializePepWpsSupport @ 0x1407E82E0 (PpmInitializePepWpsSupport.c)
 *     PpmEnableProfile @ 0x140AD850C (PpmEnableProfile.c)
 *     PpmHvEnableQosEnlightenment @ 0x140AEBAB8 (PpmHvEnableQosEnlightenment.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x140AD8B10 (PpmReapplyPerfPolicy.c)
 */

__int64 __fastcall PpmReinitializeHeteroEngine(char a1, char a2, char a3)
{
  int v3; // eax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
    v3 = 2048;
  else
    v3 = 4096;
  v5 = v3;
  if ( a2 )
  {
    v3 |= 0x4000u;
    v5 = v3;
  }
  if ( a3 )
    v5 = v3 | 0x8000;
  return PpmReapplyPerfPolicy(&v5);
}
