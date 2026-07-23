/*
 * XREFs of PspGetStandardHandleList @ 0x1409E661C
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1409E53DC (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

__int64 __fastcall PspGetStandardHandleList(__int64 a1, __int64 a2)
{
  char *v2; // r12
  volatile void *v3; // r15
  __int64 v4; // r13
  __int64 *v5; // rax
  unsigned int i; // esi

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = *(__int64 **)(a1 + 784);
  if ( v5 )
    v4 = *v5;
  if ( v4 )
  {
    v3 = (volatile void *)((unsigned int)RtlReadULongFromUser((unsigned int *)(v4 + 16)) + 24LL);
    ProbeForRead(v3, 1uLL, 4u);
  }
  else
  {
    v2 = (char *)(RtlReadULong64FromUser((volatile void *)(*(_QWORD *)(a1 + 736) + 32LL)) + 32);
    ProbeForRead(v2, 1uLL, 4u);
  }
  for ( i = 0; i < 3; ++i )
  {
    if ( v4 )
      *(_QWORD *)(a2 + 8LL * i) = (unsigned int)RtlReadULongFromUser((unsigned int *)v3 + i);
    else
      *(_QWORD *)(a2 + 8LL * i) = RtlReadULong64FromUser(&v2[8 * i]);
  }
  return 0LL;
}
