/*
 * XREFs of AVrfpEnableVerifierOptions @ 0x180120D44
 * Callers:
 *     AVrfInitializeVerifier @ 0x180115BD0 (AVrfInitializeVerifier.c)
 * Callees:
 *     AVrfpEnableHandleVerifier @ 0x180137F58 (AVrfpEnableHandleVerifier.c)
 *     AVrfpEnableHeapVerifier @ 0x180137FD8 (AVrfpEnableHeapVerifier.c)
 */

__int64 __fastcall AVrfpEnableVerifierOptions(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  char v4; // al
  int v5; // eax

  v2 = (unsigned int)AVrfpVerifierFlags;
  v3 = 0LL;
  if ( (AVrfpVerifierFlags & 0x8001) != 0 )
  {
    v4 = AVrfpEnableHeapVerifier(a1, a2, (unsigned int)AVrfpVerifierFlags, 0LL);
    a1 = 3221225473LL;
    if ( !v4 )
      v3 = 3221225473LL;
  }
  if ( (v2 & 4) != 0 )
  {
    v5 = AVrfpEnableHandleVerifier(a1, a2, v2, v3);
    LODWORD(v2) = AVrfpVerifierFlags;
    LODWORD(v3) = v5;
  }
  if ( (v2 & 8) != 0 )
  {
    if ( NtCurrentPeb()->BeingDebugged || MEMORY[0x7FFE02D4] )
      NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag | 0x10000;
    LODWORD(v2) = AVrfpVerifierFlags;
  }
  if ( (v2 & 0x40000) != 0 )
    RtlpCriticalSectionVerifier = 1;
  return (unsigned int)v3;
}
