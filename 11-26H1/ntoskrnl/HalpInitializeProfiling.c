/*
 * XREFs of HalpInitializeProfiling @ 0x140BF3728
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x140BF09A0 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404B2BBC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpHvCpuid @ 0x1404F920C (HalpHvCpuid.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14057F37C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpMmAllocateMemory @ 0x1405801F4 (HalpMmAllocateMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     strncmp @ 0x140741F60 (strncmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HalpLbrInitialize @ 0x140BF5224 (HalpLbrInitialize.c)
 */

__int64 __fastcall HalpInitializeProfiling(unsigned int a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v2; // rbx
  void *Memory; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int128 v17; // [rsp+28h] [rbp-28h] BYREF
  char Str1[16]; // [rsp+38h] [rbp-18h] BYREF

  *(_OWORD *)Str1 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v17 = 0LL;
  LODWORD(CurrentPrcb->HalReserved[3]) = 0;
  if ( a1 )
  {
    v15 = KiProcessorBlock[0];
    v16 = *(_QWORD *)(KiProcessorBlock[0] + 88) + 96LL * a1;
    CurrentPrcb->HalReserved[2] = v16;
  }
  else
  {
    v2 = 96 * (unsigned int)HalpQueryMaximumRegisteredProcessorCount();
    Memory = (void *)HalpMmAllocateMemory(v2);
    CurrentPrcb->HalReserved[2] = (unsigned __int64)Memory;
    if ( !Memory )
      return 3221225626LL;
    memset_0(Memory, 0, (unsigned int)v2);
    if ( (HalpFeatureBits & 1) != 0 )
    {
      _RAX = 0LL;
      __asm { cpuid }
      *(_DWORD *)&Str1[4] = _RBX;
      *(_DWORD *)&Str1[8] = _RDX;
      *(_DWORD *)&Str1[12] = _RCX;
      *(_DWORD *)Str1 = _RAX;
      if ( !strncmp(&Str1[4], "AuthenticAMD", 0xCuLL) )
      {
        HalpProfileInterface = &Amd64ProfileInterface;
      }
      else if ( *(_DWORD *)Str1 >= 0xAu && !strncmp(&Str1[4], "GenuineIntel", 0xCuLL) )
      {
        _RAX = 10LL;
        __asm { cpuid }
        *(_DWORD *)&Str1[8] = _RCX;
        *(_DWORD *)Str1 = _RAX;
        *(_DWORD *)&Str1[4] = _RBX;
        *(_DWORD *)&Str1[12] = _RDX;
        if ( (_BYTE)_RAX )
        {
          if ( (_RAX & 0xFF000000) != 0 && (_RBX & 1) == 0 )
          {
            HalpProfileInterface = &EmonProfileInterface;
            if ( (unsigned __int8)_RAX >= 4u )
              HalpProfileFeatures |= 1u;
          }
        }
      }
      HalpPerfInterruptHandler = 0LL;
      if ( HalpIsMicrosoftCompatibleHvLoaded() )
      {
        HalpHvCpuid(0x40000003u, &v17);
        if ( (BYTE12(v17) & 4) == 0 )
          HalpProfileInterface = &DefaultProfileInterface;
      }
    }
    HalpLbrInitialize();
  }
  guard_dispatch_icall_no_overrides(v16, v15);
  return 0LL;
}
