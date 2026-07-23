/*
 * XREFs of HalGetEnvironmentVariable @ 0x14057E860
 * Callers:
 *     NtQuerySystemEnvironmentValue @ 0x140844070 (NtQuerySystemEnvironmentValue.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140449BA4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140532A40 (HalpAcquireCmosSpinLock.c)
 *     _stricmp @ 0x1405386E0 (_stricmp.c)
 *     strncpy_s @ 0x14053EC50 (strncpy_s.c)
 */

__int64 __fastcall HalGetEnvironmentVariable(const char *a1, unsigned __int16 a2, char *a3)
{
  rsize_t v4; // rdi
  char v6; // r8
  bool v7; // zf
  const char *v8; // r8

  v4 = a2;
  if ( HalpDeviceBlockUnblockPushLock.WaitBlockFill6[72] )
    return 7LL;
  if ( stricmp(a1, "LastKnownGood") )
    return 14LL;
  HalpAcquireCmosSpinLock(0);
  __outbyte(0x70u, 0xBu);
  __inbyte(0x71u);
  HalpReleaseCmosSpinLock();
  v7 = (v6 & 1) == 0;
  v8 = "TRUE";
  if ( v7 )
    v8 = "FALSE";
  strncpy_s(a3, v4, v8, v4 - 1);
  return 0LL;
}
