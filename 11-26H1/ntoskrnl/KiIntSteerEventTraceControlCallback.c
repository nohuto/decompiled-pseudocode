/*
 * XREFs of KiIntSteerEventTraceControlCallback @ 0x1407BB310
 * Callers:
 *     <none>
 * Callees:
 *     KiIntSteerLogStatus @ 0x140254C20 (KiIntSteerLogStatus.c)
 */

void __fastcall KiIntSteerEventTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( (ControlCode & 0xFFFFFFFD) == 0 )
    KiIntSteerLogStatus(1);
}
