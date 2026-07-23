/*
 * XREFs of HvlpConfigureGhcbGuestOsId @ 0x1405C23C4
 * Callers:
 *     HvlPhase1Initialize @ 0x1405BB23C (HvlPhase1Initialize.c)
 * Callees:
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 *     HvlSevVmgExit @ 0x140727DC0 (HvlSevVmgExit.c)
 */

__int64 HvlpConfigureGhcbGuestOsId()
{
  _QWORD *Ghcb; // rbx
  __int64 v1; // rcx
  __int64 result; // rax

  Ghcb = KeGetCurrentPrcb()->Ghcb;
  v1 = (unsigned __int16)NtBuildNumber | ((BYTE1(CmNtCSDVersion) | 0x40A0000u) << 16);
  Ghcb[98] = ((unsigned __int16)NtBuildNumber | ((BYTE1(CmNtCSDVersion) | 0x1040A0000uLL) << 16)) >> 32;
  *((_DWORD *)Ghcb + 1023) = 0;
  Ghcb[126] = 0x8000000000000000uLL;
  Ghcb[127] = 0x1C000600000000LL;
  Ghcb[97] = 0x40000000LL;
  Ghcb[63] = v1;
  Ghcb[114] = 124LL;
  Ghcb[115] = 1LL;
  Ghcb[116] = 0LL;
  HvlSevVmgExit();
  result = Ghcb[115];
  if ( result )
    KeBugCheck(0x31u);
  *((_DWORD *)Ghcb + 1023) = -1;
  return result;
}
