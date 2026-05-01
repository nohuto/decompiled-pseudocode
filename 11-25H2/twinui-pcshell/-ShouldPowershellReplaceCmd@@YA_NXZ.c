/*
 * XREFs of ?ShouldPowershellReplaceCmd@@YA_NXZ @ 0x18009E240
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x18009D874 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char ShouldPowershellReplaceCmd(void)
{
  char v0; // bl
  HANDLE CurrentProcess; // rax
  __int16 v3; // [rsp+30h] [rbp+8h] BYREF
  __int16 v4; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  v4 = 0;
  v3 = 0;
  CurrentProcess = GetCurrentProcess();
  if ( (unsigned int)IsWow64Process2(CurrentProcess, &v4, &v3) && (v3 == 332 || v3 == -31132) )
    return 1;
  return v0;
}
