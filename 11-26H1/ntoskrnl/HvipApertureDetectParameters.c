/*
 * XREFs of HvipApertureDetectParameters @ 0x14063A9B4
 * Callers:
 *     HviEnterKernelAperture @ 0x14063A88C (HviEnterKernelAperture.c)
 * Callees:
 *     HviGetHardwareFeatures @ 0x1404DF900 (HviGetHardwareFeatures.c)
 *     HviIsKernelApertureAvailable @ 0x14063A8EC (HviIsKernelApertureAvailable.c)
 */

char HvipApertureDetectParameters()
{
  bool v5; // di
  char v6; // bl
  char result; // al
  char v8; // si
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF

  _RAX = 0LL;
  __asm { cpuid }
  v5 = 0;
  v9 = 0LL;
  if ( (_DWORD)_RBX != 1970169159 || (_DWORD)_RDX != 1231384169 || (v6 = 1, (_DWORD)_RCX != 1818588270) )
    v6 = 0;
  result = HviIsKernelApertureAvailable();
  if ( result )
  {
    v8 = 0;
    result = HviGetHardwareFeatures((__int64)&v9);
    v5 = (v9 & 0x8000) != 0;
  }
  else
  {
    v8 = 1;
  }
  BYTE2(RtlpBootStatHandleLock.ExpectedRunTime) = v6;
  byte_140E0CD82 = v8;
  LOBYTE(RtlpBootStatHandleLock.ExpectedRunTime) = v5;
  BYTE1(RtlpBootStatHandleLock.ExpectedRunTime) = 1;
  return result;
}
