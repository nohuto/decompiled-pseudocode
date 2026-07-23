/*
 * XREFs of HalpInterruptGetIrtInfo @ 0x1407840A8
 * Callers:
 *     HalpQueryAcpiResourceRequirements @ 0x1407886E4 (HalpQueryAcpiResourceRequirements.c)
 *     HaliQuerySystemInformation @ 0x140BF38E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x1404362A0 (HalQueryMaximumProcessorCount.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404B2BBC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpHvCpuid @ 0x1404F920C (HalpHvCpuid.c)
 */

__int64 __fastcall HalpInterruptGetIrtInfo(__int64 a1)
{
  int v1; // eax
  unsigned int v3; // ebx
  unsigned int MaximumProcessorCount; // eax
  int v5; // edi
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v1 = HalpPciMcfgTableSegments;
  if ( !HalpPciMcfgTableSegments )
    v1 = 1;
  *(_DWORD *)a1 = v1;
  v9 = 0LL;
  *(_QWORD *)(a1 + 4) = 150 * (unsigned int)HalQueryMaximumProcessorCount();
  if ( HalpIsMicrosoftCompatibleHvLoaded() )
  {
    HalpHvCpuid(0x40000000u, &v9);
    if ( (unsigned int)v9 >= 0x40000006 )
    {
      HalpHvCpuid(0x40000006u, &v9);
      if ( (v9 & 0x20) != 0 )
      {
        HalpHvCpuid(0x40000005u, &v9);
        v3 = *(_DWORD *)(a1 + 4);
        MaximumProcessorCount = HalQueryMaximumProcessorCount();
        v5 = DWORD2(v9);
        if ( DWORD2(v9) < v3 / MaximumProcessorCount * HalpInterruptProcessorsStarted )
        {
          v6 = DWORD2(v9) / HalpInterruptProcessorsStarted;
          *(_DWORD *)(a1 + 4) = v6 * HalQueryMaximumProcessorCount();
        }
        v7 = *(_DWORD *)(a1 + 4);
        *(_DWORD *)(a1 + 8) = v5 - v7 / (unsigned int)HalQueryMaximumProcessorCount() * HalpInterruptProcessorsStarted;
      }
    }
  }
  return 0LL;
}
