/*
 * XREFs of HalpLbrInitialize @ 0x140BF5224
 * Callers:
 *     HalpInitializeProfiling @ 0x140BF3728 (HalpInitializeProfiling.c)
 * Callees:
 *     HalpIsHvPresent @ 0x1404B2B68 (HalpIsHvPresent.c)
 *     HalpGetCpuInfo @ 0x1404BEF80 (HalpGetCpuInfo.c)
 *     HviGetHypervisorFeatures @ 0x1406E09D0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     HalpLbrInitializeIntel @ 0x140BF5394 (HalpLbrInitializeIntel.c)
 */

char HalpLbrInitialize()
{
  __int64 (__fastcall *v0)(int); // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned __int8 v14; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int8 v15; // [rsp+21h] [rbp-1Fh] BYREF
  char v16[6]; // [rsp+22h] [rbp-1Eh] BYREF
  __int128 v17; // [rsp+28h] [rbp-18h] BYREF

  LOBYTE(v0) = HalpFeatureBits;
  v16[0] = 0;
  v15 = 0;
  v14 = 0;
  byte_140F87A20 = 0;
  v17 = 0LL;
  if ( (HalpFeatureBits & 1) != 0 )
  {
    if ( !HalpIsHvPresent() || (LOBYTE(v0) = HviGetHypervisorFeatures(&v17), (HIDWORD(v17) & 0x4000000) != 0) )
    {
      LOBYTE(v0) = HalpGetCpuInfo(v16, 0LL, &v15, &v14);
      if ( (_BYTE)v0 )
      {
        LOBYTE(v0) = v14;
        if ( v14 == 2 )
        {
          LOBYTE(v1) = v15;
          LOBYTE(v2) = v16[0];
          LOBYTE(v0) = HalpLbrInitializeIntel(v2, v1);
        }
        else
        {
          if ( v14 != 1 )
            return (char)v0;
          _RAX = 0x80000000LL;
          __asm { cpuid }
          if ( (unsigned int)_RAX < 0x80000022 )
            goto LABEL_9;
          _RAX = 2147483682LL;
          __asm { cpuid }
          if ( (_RAX & 2) == 0 )
            goto LABEL_9;
          dword_140F87A40 = 3;
          dword_140F87A2C = ((unsigned int)_RBX >> 4) & 0x3F;
          if ( dword_140F87A2C )
          {
            HalpLbrMostSignificantFromAddrBit = 62;
            LOBYTE(v0) = 1;
            HalpLbrMostSignificantToAddrBit = 60;
          }
          else
          {
LABEL_9:
            LOBYTE(v0) = 0;
          }
        }
        if ( (_BYTE)v0 )
        {
          byte_140F87A20 = 1;
          off_140E00BE8[0] = (__int64 (__fastcall *)())HalpLbrCaptureStack;
          off_140E00BF0[0] = (__int64 (__fastcall *)())HalpLbrClearStack;
          off_140E00BF8[0] = (__int64 (__fastcall *)())HalpLbrConfigureRecording;
          off_140E00C00[0] = (__int64 (__fastcall *)())HalpLbrGetInformation;
          off_140E00C08[0] = (__int64 (__fastcall *)())HalpLbrResumeRecording;
          off_140E00C10[0] = (__int64 (__fastcall *)())HalpLbrStartRecording;
          v0 = HalpLbrStopRecording;
          off_140E00C18[0] = (__int64 (__fastcall *)())HalpLbrStopRecording;
        }
      }
    }
  }
  return (char)v0;
}
