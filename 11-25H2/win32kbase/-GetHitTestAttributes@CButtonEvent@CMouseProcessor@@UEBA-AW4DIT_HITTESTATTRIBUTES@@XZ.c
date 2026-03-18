/*
 * XREFs of ?GetHitTestAttributes@CButtonEvent@CMouseProcessor@@UEBA?AW4DIT_HITTESTATTRIBUTES@@XZ @ 0x140220840
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::CButtonEvent::GetHitTestAttributes(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 40) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7871);
  result = 8LL;
  if ( *(_DWORD *)(a1 + 32) != 1 )
    return 0LL;
  return result;
}
