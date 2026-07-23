/*
 * XREFs of PspValidateCreateProcessProtection @ 0x140B1DB84
 * Callers:
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     Feature_ID51912085__private_IsEnabledPreCheck @ 0x14048E9D0 (Feature_ID51912085__private_IsEnabledPreCheck.c)
 *     RtlTestProtectedAccess @ 0x140A85B14 (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PspValidateCreateProcessProtection(__int64 a1, __int64 a2, char a3, char a4, PS_PROTECTION Source)
{
  unsigned __int64 v5; // rbx
  unsigned int v6; // edi

  v5 = *(unsigned __int8 *)(a1 + 1530);
  v6 = 0;
  if ( (a4 & 4) != 0 )
  {
    if ( a3 )
    {
      if ( (*(_DWORD *)(a2 + 8) & 0x800LL) == 0 )
      {
        Feature_ID51912085__private_IsEnabledPreCheck();
        if ( (dword_140BE0F54[3 * (v5 >> 4)] & 0x40) != 0 && !RtlTestProtectedAccess(Source, (PS_PROTECTION)v5) )
          return (unsigned int)-1073741811;
      }
    }
  }
  return v6;
}
