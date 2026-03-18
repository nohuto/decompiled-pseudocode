/*
 * XREFs of ?GetHitTestAttributes@CWheelEvent@CMouseProcessor@@UEBA?AW4DIT_HITTESTATTRIBUTES@@XZ @ 0x1401621A0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

int __fastcall CMouseProcessor::CWheelEvent::GetHitTestAttributes(__int64 a1, int a2, int a3)
{
  int v3; // edi
  int v5; // eax
  unsigned int v6; // ebx
  char v7; // cl
  int result; // eax

  v3 = *(__int16 *)(a1 + 32);
  if ( !*(_WORD *)(a1 + 32) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7953LL);
  v5 = *(_DWORD *)(a1 + 28);
  v6 = (((v3 >> 15) & 0xFFFFFFFE) + 3) | 4;
  if ( v5 != 1 )
    v6 = ((v3 >> 15) & 0xFFFFFFFE) + 3;
  v7 = *(_BYTE *)(W32GetUserSessionState(((v3 >> 15) & 0xFFFFFFFE) + 3, a2, a3) + 14332);
  result = v6 | 0x100;
  if ( (v7 & 4) == 0 )
    return v6;
  return result;
}
