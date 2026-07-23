/*
 * XREFs of PspIncrementJobChainProcessCounts @ 0x1407FE7A4
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140946FB8 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140AC79B8 (PspAssignProcessToJob.c)
 * Callees:
 *     PspSendJobNotification @ 0x1404C9CC0 (PspSendJobNotification.c)
 */

void __fastcall PspIncrementJobChainProcessCounts(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int64 v6; // rbx
  int v7; // r9d
  int v8; // eax

  if ( a1 != a2 )
  {
    v6 = a1;
    v7 = a4 & 0x8000;
    do
    {
      v8 = *(_DWORD *)(a1 + 212);
      if ( v8 != -1 )
        *(_DWORD *)(a1 + 212) = v8 + 1;
      ++*(_DWORD *)(a1 + 216);
      ++*(_DWORD *)(a1 + 1456);
      if ( v7 || (*(_DWORD *)(a3 + 1532) & 0x20) != 0 )
        ++*(_DWORD *)(a1 + 1460);
      a1 = *(_QWORD *)(a1 + 1304);
    }
    while ( a1 != a2 );
    do
    {
      _InterlockedAnd((volatile signed __int32 *)(v6 + 1552), 0xFFDFFFFF);
      if ( *(_QWORD *)(v6 + 552) )
      {
        if ( (*(_DWORD *)(v6 + 1104) & 0x40) != 0 )
          PspSendJobNotification(v6, 6LL, *(_QWORD *)(a3 + 464), 0);
      }
      v6 = *(_QWORD *)(v6 + 1304);
    }
    while ( v6 != a2 );
  }
}
