/*
 * XREFs of ?GetLongPowerButtonHoldListener@DisplayDiagnostics@@QEAAPEAVLongPowerButtonHoldListener@@XZ @ 0x140077CB4
 * Callers:
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1401CB05C (-Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z.c)
 *     ?SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1401CBFD4 (-SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct LongPowerButtonHoldListener *__fastcall DisplayDiagnostics::GetLongPowerButtonHoldListener(
        DisplayDiagnostics *this)
{
  return (DisplayDiagnostics *)((char *)this + 64);
}
