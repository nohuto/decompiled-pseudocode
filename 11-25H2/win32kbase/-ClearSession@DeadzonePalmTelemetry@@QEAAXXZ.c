/*
 * XREFs of ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1401F5C78
 * Callers:
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x140127BE0 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     ?ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z @ 0x1401EDA3C (-ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z.c)
 * Callees:
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1401276D4 (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall DeadzonePalmTelemetry::ClearSession(DeadzonePalmTelemetry *this)
{
  DeadzonePalmTelemetry::_UploadTelemetryData(this, 1);
  *((_DWORD *)this + 1) = 0;
  memset((char *)this + 2060, 0, 0x2800uLL);
  memset((char *)this + 13, 0, 0x7FFuLL);
  *((_BYTE *)this + 12) = 0;
  *(_DWORD *)this = 0;
}
