/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x140A9CE8C
 * Callers:
 *     PpmHeteroHgsUpdateWorker @ 0x1404F7B10 (PpmHeteroHgsUpdateWorker.c)
 *     PpmPerfClearBootOverrides @ 0x1404FE288 (PpmPerfClearBootOverrides.c)
 *     PpmRegisterPerfStates @ 0x1407CE358 (PpmRegisterPerfStates.c)
 *     PpmInitializePepWpsSupport @ 0x1407E3250 (PpmInitializePepWpsSupport.c)
 *     PpmEnableProfile @ 0x140A9C6CC (PpmEnableProfile.c)
 *     PpmHvEnableQosEnlightenment @ 0x140A9CE18 (PpmHvEnableQosEnlightenment.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x140A9D088 (PpmReapplyPerfPolicy.c)
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
