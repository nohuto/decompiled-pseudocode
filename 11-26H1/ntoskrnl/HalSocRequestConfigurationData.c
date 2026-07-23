/*
 * XREFs of HalSocRequestConfigurationData @ 0x14059BCDC
 * Callers:
 *     HalpApicSetupRegisterAccess @ 0x140593B28 (HalpApicSetupRegisterAccess.c)
 *     HalpHvDiscover @ 0x140599910 (HalpHvDiscover.c)
 *     HalpHpetDiscover @ 0x14059B0A8 (HalpHpetDiscover.c)
 *     HalpTscGetAttributes @ 0x14059BA64 (HalpTscGetAttributes.c)
 * Callees:
 *     HalpIsHvPresent @ 0x1404B2B68 (HalpIsHvPresent.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404B2BBC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsPartitionCpuManager @ 0x140587720 (HalpIsPartitionCpuManager.c)
 */

__int64 __fastcall HalSocRequestConfigurationData(int a1, int a2, char *a3)
{
  unsigned int v3; // r11d
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  char *p_IsMicrosoftCompatibleHvLoaded; // rcx
  char v19; // di
  char v20; // di
  char v22; // r10
  bool v42; // cf
  char v43; // al
  bool IsMicrosoftCompatibleHvLoaded; // [rsp+20h] [rbp-20h] BYREF
  char v46; // [rsp+21h] [rbp-1Fh] BYREF
  char v47; // [rsp+22h] [rbp-1Eh] BYREF
  char v48; // [rsp+23h] [rbp-1Dh] BYREF
  char v49; // [rsp+24h] [rbp-1Ch] BYREF
  char v50; // [rsp+25h] [rbp-1Bh] BYREF
  char IsPartitionCpuManager; // [rsp+60h] [rbp+20h] BYREF
  int v52; // [rsp+68h] [rbp+28h] BYREF
  char IsHvPresent; // [rsp+78h] [rbp+38h] BYREF

  v52 = a2;
  v3 = 0;
  IsPartitionCpuManager = 0;
  v49 = 0;
  IsHvPresent = 0;
  IsMicrosoftCompatibleHvLoaded = 0;
  v50 = 0;
  LOBYTE(v52) = 0;
  v46 = 0;
  v48 = 0;
  v47 = 0;
  v5 = a1 - 1;
  if ( !v5 )
  {
    v49 = HalpTimerPlatformSourceForced;
    p_IsMicrosoftCompatibleHvLoaded = &v49;
    goto LABEL_39;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    p_IsMicrosoftCompatibleHvLoaded = &v50;
    goto LABEL_39;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( HalpIsMicrosoftCompatibleHvLoaded() )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      if ( (_RAX & 0xE) == 0xE )
      {
        LOBYTE(v52) = 1;
        if ( HalpIsPartitionCpuManager() )
        {
          _RAX = 1073741830LL;
          __asm { cpuid }
          v42 = (_RAX & 0x200) != 0;
          v43 = 1;
          if ( v42 )
            v43 = v3;
          LOBYTE(v52) = v43;
        }
      }
    }
    p_IsMicrosoftCompatibleHvLoaded = (char *)&v52;
    goto LABEL_39;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v20 = 1;
    _RAX = 1LL;
    v22 = 0;
    __asm { cpuid }
    if ( (_RCX & 0x200000) != 0 )
    {
      if ( HalpIommuX2ApicSupport )
        goto LABEL_24;
      if ( HalpIsMicrosoftCompatibleHvLoaded() )
      {
        _RAX = 1073741828LL;
        __asm { cpuid }
        if ( (_RAX & 0x80000) != 0 )
LABEL_24:
          v22 = 1;
      }
    }
    if ( HalpInterruptX2ApicPolicy == (_BYTE)v3 || HalpHvCpuManager != (_BYTE)v3 || !v22 )
      v20 = v3;
    v48 = v20;
    p_IsMicrosoftCompatibleHvLoaded = &v48;
    goto LABEL_39;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    p_IsMicrosoftCompatibleHvLoaded = &v47;
    v47 = HalpIommuX2ApicSupport;
    goto LABEL_39;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( !HalpIsMicrosoftCompatibleHvLoaded() )
      goto LABEL_17;
    _RAX = 1073741828LL;
    __asm { cpuid }
    if ( (_RAX & 0x100) != 0 )
      v19 = 1;
    else
LABEL_17:
      v19 = v3;
    v46 = v19;
    p_IsMicrosoftCompatibleHvLoaded = &v46;
    goto LABEL_39;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    IsMicrosoftCompatibleHvLoaded = HalpIsMicrosoftCompatibleHvLoaded();
    p_IsMicrosoftCompatibleHvLoaded = (char *)&IsMicrosoftCompatibleHvLoaded;
    goto LABEL_39;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    IsHvPresent = HalpIsHvPresent();
    p_IsMicrosoftCompatibleHvLoaded = &IsHvPresent;
    goto LABEL_39;
  }
  if ( v12 == 1 )
  {
    IsPartitionCpuManager = HalpIsPartitionCpuManager();
    p_IsMicrosoftCompatibleHvLoaded = &IsPartitionCpuManager;
LABEL_39:
    *a3 = *p_IsMicrosoftCompatibleHvLoaded;
    return v3;
  }
  v3 = -1073741811;
  HalpTimerLastProblem = 30;
  return v3;
}
