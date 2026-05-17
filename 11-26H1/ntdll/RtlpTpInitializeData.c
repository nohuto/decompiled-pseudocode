/*
 * XREFs of RtlpTpInitializeData @ 0x18004F280
 * Callers:
 *     RtlQueueWorkItem @ 0x180066390 (RtlQueueWorkItem.c)
 *     RtlCreateTimer @ 0x1800674B0 (RtlCreateTimer.c)
 * Callees:
 *     TpSetDefaultPoolMaxThreads @ 0x18004F310 (TpSetDefaultPoolMaxThreads.c)
 *     NtDuplicateToken @ 0x18015F780 (NtDuplicateToken.c)
 */

__int64 __fastcall RtlpTpInitializeData(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int16 v5; // bx
  int v8; // eax

  v3 = 0;
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = 0LL;
  v5 = a2;
  if ( (a2 & 0xFFFF0000) != 0 )
    TpSetDefaultPoolMaxThreads(HIWORD(a2));
  if ( !a3 || (v5 & 0x100) == 0 )
    return 0LL;
  v8 = NtDuplicateToken(a3, 4LL, 0LL, 0LL, 2, a1);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v3;
}
