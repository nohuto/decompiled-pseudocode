/*
 * XREFs of ?CanCoalesceRawInputPayload@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@@Z @ 0x1401ABD74
 * Callers:
 *     ?ThrottleRawMouseInputToBackgroundListener@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x1401AB9D8 (-ThrottleRawMouseInputToBackgroundListener@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CanCoalesceRawInputPayload(struct tagPROCESS_HID_TABLE *a1, void *a2, const struct tagRAWMOUSE *a3)
{
  int v6; // r8d
  char v7; // dl
  char v8; // r8
  char v9; // al
  bool v11; // zf
  bool v12; // sf

  if ( *((_DWORD *)a1 + 28) != 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 355LL);
  if ( *((_DWORD *)a3 + 5) != *((_DWORD *)a1 + 38) || a2 != *((void **)a1 + 17) )
    return 0;
  v6 = *((_DWORD *)a3 + 3);
  v7 = 1;
  if ( (~v6 ^ ~*((_DWORD *)a1 + 36)) >= 0
    || (v11 = v6 == 0, v12 = v6 < 0, v8 = 0, (v12 || v11) == *((_DWORD *)a1 + 36) <= 0) )
  {
    v8 = 1;
  }
  if ( (~*((_DWORD *)a3 + 4) ^ ~*((_DWORD *)a1 + 37)) >= 0
    || (v9 = 0, *((_DWORD *)a3 + 4) <= 0 == *((_DWORD *)a1 + 37) <= 0) )
  {
    v9 = 1;
  }
  if ( !v8 || !v9 )
    return 0;
  return v7;
}
