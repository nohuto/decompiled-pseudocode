/*
 * XREFs of RtlUpdateTimer @ 0x1800F8740
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpResumeImpersonation @ 0x18004F238 (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x180067740 (RtlpTpRevertCapture.c)
 *     TpSetTimerEx @ 0x180069020 (TpSetTimerEx.c)
 */

__int64 __fastcall RtlUpdateTimer(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // r15
  __int64 v7; // rdx
  int v8; // edi
  HANDLE v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11[4]; // [rsp+28h] [rbp-20h] BYREF

  v5 = a3;
  v10 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
    return 3221225480LL;
  v8 = RtlpTpRevertCapture(&v10, 0);
  if ( v8 >= 0 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 80), v7);
    if ( *(_BYTE *)(a2 + 88) || !*(_DWORD *)(a2 + 92) )
    {
      *(_BYTE *)(a2 + 88) = a4 != 0;
      v11[0] = -10000 * v5;
      TpSetTimerEx(*(_QWORD *)(a2 + 64), (__int64)v11, a4, 0);
    }
    v8 = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  }
  RtlpTpResumeImpersonation(v10);
  return (unsigned int)v8;
}
