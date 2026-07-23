/*
 * XREFs of PopPowerRequestStatsIsDetailedRequestReason @ 0x14077E9B0
 * Callers:
 *     PopPowerRequestStatsGetIdForRequest @ 0x140A900E8 (PopPowerRequestStatsGetIdForRequest.c)
 * Callees:
 *     strncmp @ 0x140741F60 (strncmp.c)
 */

char __fastcall PopPowerRequestStatsIsDetailedRequestReason(__int64 a1)
{
  char v1; // bl
  int v2; // ecx
  unsigned int v3; // edi
  _KPROCESS *Process; // rsi
  size_t v5; // r8
  const char *v6; // rdx

  v1 = 0;
  if ( *(_QWORD *)(a1 + 40) )
  {
    if ( *(_DWORD *)a1 )
    {
      v2 = *(_DWORD *)((a1 + 55) & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (v2 & 1) == 0 && (v2 & 2) != 0 )
      {
        v3 = 0;
        Process = KeGetCurrentThread()->ApcState.Process;
        while ( v3 < 2 )
        {
          v5 = -1LL;
          v6 = (&PopPowerRequestStatsVerboseProcessList)[v3];
          do
            ++v5;
          while ( v6[v5] );
          if ( !strncmp((const char *)&Process[1].SecureState, v6, v5) )
            return 1;
          ++v3;
        }
      }
    }
  }
  return v1;
}
