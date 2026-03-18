/*
 * XREFs of PpmIdleIsStateDisabled @ 0x1404ECBDC
 * Callers:
 *     PpmInstallNewIdleStates @ 0x140602D60 (PpmInstallNewIdleStates.c)
 *     PpmInstallCoordinatedIdleStates @ 0x1407C9BE0 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140AF2FD0 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     <none>
 */

bool __fastcall PpmIdleIsStateDisabled(char a1, unsigned int a2)
{
  char v2; // r8
  char v4; // cl
  char v5; // cl
  bool v6; // zf

  v2 = 0;
  if ( !a1 )
  {
    if ( (_BYTE)PpmIdleDisableStatesAtBoot != 3 )
      return (unsigned __int8)(PpmIdleDisableStatesAtBoot - 1) <= 1u;
    v5 = 15;
    if ( a2 < 0xF )
      v5 = a2;
    v6 = (HIWORD(PpmIdleDisableStatesAtBoot) & (unsigned __int16)(1 << v5)) == 0;
    return !v6;
  }
  if ( a2 )
  {
    if ( (_BYTE)PpmIdleDisableStatesAtBoot != 3 )
      return (_BYTE)PpmIdleDisableStatesAtBoot == 2;
    v4 = 7;
    if ( a2 < 7 )
      v4 = a2;
    v6 = (BYTE1(PpmIdleDisableStatesAtBoot) & (unsigned __int8)(1 << v4)) == 0;
    return !v6;
  }
  return v2;
}
