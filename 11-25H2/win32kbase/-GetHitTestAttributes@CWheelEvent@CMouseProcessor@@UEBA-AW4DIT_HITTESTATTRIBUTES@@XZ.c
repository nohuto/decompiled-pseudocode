/*
 * XREFs of ?GetHitTestAttributes@CWheelEvent@CMouseProcessor@@UEBA?AW4DIT_HITTESTATTRIBUTES@@XZ @ 0x1402208A0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

int __fastcall CMouseProcessor::CWheelEvent::GetHitTestAttributes(__int64 a1, __int64 a2)
{
  int v2; // edi
  int v4; // eax
  unsigned int v5; // ebx
  char v6; // cl
  int result; // eax

  v2 = *(__int16 *)(a1 + 32);
  if ( !*(_WORD *)(a1 + 32) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7960);
  v4 = *(_DWORD *)(a1 + 28);
  v5 = (((v2 >> 15) & 0xFFFFFFFE) + 3) | 4;
  if ( v4 != 1 )
    v5 = ((v2 >> 15) & 0xFFFFFFFE) + 3;
  v6 = *(_BYTE *)(W32GetUserSessionState(((v2 >> 15) & 0xFFFFFFFE) + 3, a2) + 14340);
  result = v5 | 0x100;
  if ( (v6 & 4) == 0 )
    return v5;
  return result;
}
