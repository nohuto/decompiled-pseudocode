/*
 * XREFs of VfSetVerifierInformationEx @ 0x140C39B18
 * Callers:
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     VfFreeCapturedUnicodeString @ 0x140C21304 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140C2146C (VfProbeAndCaptureUnicodeString.c)
 *     VfSetVerifierRunningMode @ 0x140C390C4 (VfSetVerifierRunningMode.c)
 *     VfWdSetCancelTimeout @ 0x140C3A070 (VfWdSetCancelTimeout.c)
 *     VfDriverLock @ 0x140C46804 (VfDriverLock.c)
 */

__int64 __fastcall VfSetVerifierInformationEx(_DWORD *a1)
{
  int v2; // ecx
  unsigned int v3; // edx
  int v4; // ebx
  __int64 v5; // rcx
  __int128 v7; // [rsp+28h] [rbp-30h] BYREF
  __int128 v8; // [rsp+38h] [rbp-20h] BYREF

  v7 = 0LL;
  v2 = *a1;
  v3 = a1[6];
  if ( !v2 || (v4 = VfSetVerifierRunningMode(v2), v4 >= 0) )
  {
    if ( !v3 )
      goto LABEL_7;
    if ( v3 == -1 )
      v3 = 0;
    v4 = VfWdSetCancelTimeout(v3);
    if ( v4 >= 0 )
    {
LABEL_7:
      ++dword_140F08700;
      v4 = VfProbeAndCaptureUnicodeString(&v7, a1 + 2, 0x40u);
      if ( v4 >= 0 )
      {
        VfDriverLock(v5);
        v8 = xmmword_140F08708;
        xmmword_140F08708 = v7;
        ViDriversLoadLockOwner = 0LL;
        KeReleaseMutex(&ViDriversLoadLock, 0);
        VfFreeCapturedUnicodeString((__int64)&v8);
      }
    }
  }
  return (unsigned int)v4;
}
