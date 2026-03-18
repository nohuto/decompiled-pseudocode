/*
 * XREFs of rimReleaseCursor @ 0x140131388
 * Callers:
 *     RIMCmDeactivateContact @ 0x1401310A4 (RIMCmDeactivateContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimReleaseCursor(__int64 a1, int a2)
{
  unsigned int i; // edx
  __int64 v5; // rax
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 1040) >= *(_DWORD *)(a1 + 1044) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 769LL);
  for ( i = 0; i < *(_DWORD *)(a1 + 1044); ++i )
  {
    v5 = *(_QWORD *)(a1 + 1032);
    if ( a2 == *(_DWORD *)(v5 + 12LL * i + 4) )
    {
      *(_DWORD *)(v5 + 12LL * i + 8) = 0;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 1032) + 12LL * *(unsigned int *)(a1 + 1040) + 8) )
        *(_DWORD *)(a1 + 1040) = i;
      break;
    }
  }
  result = *(unsigned int *)(a1 + 1044);
  if ( *(_DWORD *)(a1 + 1040) >= (unsigned int)result )
    return MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 785LL);
  return result;
}
