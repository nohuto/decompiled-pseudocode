/*
 * XREFs of VfSetVerifierInformationEx @ 0x140B8C654
 * Callers:
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     VfFreeCapturedUnicodeString @ 0x140B72E84 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140B72FEC (VfProbeAndCaptureUnicodeString.c)
 *     VfDriverLock @ 0x140B7A4D4 (VfDriverLock.c)
 *     VfSetVerifierRunningMode @ 0x140B8B218 (VfSetVerifierRunningMode.c)
 *     VfWdSetCancelTimeout @ 0x140B8C9D8 (VfWdSetCancelTimeout.c)
 */

__int64 __fastcall VfSetVerifierInformationEx(int *a1)
{
  unsigned int v2; // edx
  int v3; // ecx
  int v4; // ebx
  __int128 v6; // [rsp+28h] [rbp-30h] BYREF
  __int128 v7; // [rsp+38h] [rbp-20h] BYREF

  v6 = 0LL;
  v2 = a1[6];
  v3 = *a1;
  if ( !v3 || (v4 = VfSetVerifierRunningMode(v3), v4 >= 0) )
  {
    if ( !v2 )
      goto LABEL_7;
    if ( v2 == -1 )
      v2 = 0;
    v4 = VfWdSetCancelTimeout(v2);
    if ( v4 >= 0 )
    {
LABEL_7:
      ++dword_140F03B00;
      v4 = VfProbeAndCaptureUnicodeString((__int64)&v6, (unsigned __int64)(a1 + 2), 64LL);
      if ( v4 >= 0 )
      {
        VfDriverLock();
        v7 = xmmword_140F03B08;
        xmmword_140F03B08 = v6;
        ViDriversLoadLockOwner = 0LL;
        KeReleaseMutex(&ViDriversLoadLock, 0);
        VfFreeCapturedUnicodeString((__int64)&v7);
      }
    }
  }
  return (unsigned int)v4;
}
