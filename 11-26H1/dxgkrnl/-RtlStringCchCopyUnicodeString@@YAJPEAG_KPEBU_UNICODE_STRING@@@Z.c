/*
 * XREFs of ?RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x140055544
 * Callers:
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x140191E54 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x140381104 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E2A30 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyUnicodeString(char *a1, __int64 a2, const struct _UNICODE_STRING *a3)
{
  unsigned __int64 Length; // r9
  unsigned __int16 MaximumLength; // ax
  wchar_t *Buffer; // r10
  __int64 v6; // r8
  signed __int64 v7; // r10
  unsigned __int16 *v8; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFE )
    return 3221225485LL;
  Length = a3->Length;
  if ( (Length & 1) != 0
    || (MaximumLength = a3->MaximumLength, (MaximumLength & 1) != 0)
    || (unsigned __int16)Length > MaximumLength
    || MaximumLength == 0xFFFF
    || (Buffer = a3->Buffer) == 0LL && ((_WORD)Length || MaximumLength) )
  {
    *(_WORD *)a1 = 0;
    return 3221225485LL;
  }
  v6 = (Length >> 1) - a2;
  v7 = (char *)Buffer - a1;
  do
  {
    if ( !(v6 + a2) )
      break;
    *(_WORD *)a1 = *(_WORD *)&a1[v7];
    a1 += 2;
    --a2;
  }
  while ( a2 );
  v8 = (unsigned __int16 *)(a1 - 2);
  if ( a2 )
    v8 = (unsigned __int16 *)a1;
  *v8 = 0;
  return a2 == 0 ? 0x80000005 : 0;
}
