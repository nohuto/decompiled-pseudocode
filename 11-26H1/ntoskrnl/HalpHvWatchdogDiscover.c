/*
 * XREFs of HalpHvWatchdogDiscover @ 0x14059AE90
 * Callers:
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x140585324 (HalpTimerRegisterBuiltinPluginsCommon.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404B2BBC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpTimerRegister @ 0x14059A8EC (HalpTimerRegister.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 HalpHvWatchdogDiscover()
{
  _BYTE v6[6]; // [rsp+20h] [rbp-49h]
  _DWORD v7[2]; // [rsp+30h] [rbp-39h] BYREF
  __int64 (__fastcall *v8)(); // [rsp+38h] [rbp-31h]
  __int64 (__fastcall *v9)(__int64, __int64, unsigned __int64); // [rsp+50h] [rbp-19h]
  __int64 (__fastcall *v10)(); // [rsp+58h] [rbp-11h]
  __int64 v11; // [rsp+88h] [rbp+1Fh]
  int v12; // [rsp+90h] [rbp+27h]
  int v13; // [rsp+94h] [rbp+2Bh]
  __int64 v14; // [rsp+98h] [rbp+2Fh]
  int v15; // [rsp+A4h] [rbp+3Bh]
  int v16; // [rsp+B8h] [rbp+4Fh]

  if ( !HalpTimerWatchdogPhysicalOnly && HalpIsMicrosoftCompatibleHvLoaded() && (HalpEnlightenment & 0x20) == 0 )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    *(_DWORD *)v6 = _RAX;
    *(_WORD *)&v6[4] = _RBX;
    if ( (_RDX & 0x400000) != 0 && (*(_QWORD *)v6 & 0x100000000008LL) == 0x100000000008LL )
    {
      memset_0(v7, 0, 0x90uLL);
      v7[0] = 1;
      v8 = HalpHvWatchdogInitialize;
      v7[1] = 144;
      v9 = HalpHvWatchdogArm;
      v11 = 0LL;
      v10 = HalpHvWatchdogStop;
      v12 = 0;
      v13 = 64;
      v14 = 10000000LL;
      v16 = 8;
      v15 = 163872;
      HalpTimerRegister((__int64)v7, 0LL);
    }
  }
  return 0LL;
}
