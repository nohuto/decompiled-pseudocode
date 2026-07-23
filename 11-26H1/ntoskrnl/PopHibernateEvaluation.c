/*
 * XREFs of PopHibernateEvaluation @ 0x1409BEDDC
 * Callers:
 *     PoInitHiberServices @ 0x1407CB3D0 (PoInitHiberServices.c)
 *     PopWnfHibernatePolicyCallback @ 0x1407D3E80 (PopWnfHibernatePolicyCallback.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     PopEnableHiberFile @ 0x1409BEEB4 (PopEnableHiberFile.c)
 */

__int64 __fastcall PopHibernateEvaluation(char a1, char a2, bool *a3)
{
  bool v4; // r10
  __int64 v5; // rcx
  PVOID *p_SparePtr; // rdx
  __int64 v7; // r10
  bool v8; // zf

  if ( PopHiberEnabledReg == -1 )
    v4 = (unsigned int)(PopHiberEnabledDefaultReg - 1) > 0xFFFFFFFD;
  else
    v4 = PopHiberEnabledReg == 0;
  v5 = v4;
  if ( !PopAllowHibernateReg )
    v5 = 1LL;
  if ( a1 )
  {
    v5 = (unsigned __int8)v5;
    if ( PopBootFromVHD )
      v5 = 1LL;
  }
  if ( a2 )
  {
    p_SparePtr = &stru_140FC11F0.WaitBlock[1].SparePtr;
    v7 = 2LL;
    do
    {
      v8 = *(_DWORD *)p_SparePtr == 0;
      p_SparePtr = (PVOID *)((char *)p_SparePtr + 4);
      v5 = (unsigned __int8)v5;
      if ( !v8 )
        v5 = 1LL;
      --v7;
    }
    while ( v7 );
  }
  if ( a3 )
    *a3 = (_BYTE)v5 == 0;
  LOBYTE(v5) = (_BYTE)v5 == 0;
  return PopEnableHiberFile(v5);
}
