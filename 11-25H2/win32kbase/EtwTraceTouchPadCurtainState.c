/*
 * XREFs of EtwTraceTouchPadCurtainState @ 0x14014DB10
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x14018B3D0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     McTemplateK0t_EtwWriteTransfer @ 0x14014DB34 (McTemplateK0t_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceTouchPadCurtainState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return McTemplateK0t_EtwWriteTransfer(a1, a2, a3, (unsigned int)a1);
  return result;
}
