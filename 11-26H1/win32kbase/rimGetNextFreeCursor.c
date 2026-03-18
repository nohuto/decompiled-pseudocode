/*
 * XREFs of rimGetNextFreeCursor @ 0x14015CA5C
 * Callers:
 *     RIMCmActivateContact @ 0x14015C7F8 (RIMCmActivateContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimGetNextFreeCursor(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int v3; // eax
  unsigned int v4; // r8d
  unsigned int v5; // r9d
  __int64 v6; // rcx
  __int64 v7; // rdx

  v2 = 0;
  if ( *(_DWORD *)(a1 + 1040) >= *(_DWORD *)(a1 + 1044) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 743LL);
  v3 = *(_DWORD *)(a1 + 1040);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 1044);
  while ( v4 < v5 )
  {
    v6 = *(_QWORD *)(a1 + 1032);
    v7 = v3 % v5;
    v3 = v3 % v5 + 1;
    if ( !*(_DWORD *)(v6 + 12LL * (unsigned int)v7 + 8) )
    {
      v2 = *(_DWORD *)(v6 + 12 * v7 + 4);
      *(_DWORD *)(a1 + 1040) = v3 % v5;
      *(_DWORD *)(v6 + 12 * v7 + 8) = 1;
      break;
    }
    ++v4;
  }
  if ( *(_DWORD *)(a1 + 1040) >= *(_DWORD *)(a1 + 1044) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 758LL);
  return v2;
}
