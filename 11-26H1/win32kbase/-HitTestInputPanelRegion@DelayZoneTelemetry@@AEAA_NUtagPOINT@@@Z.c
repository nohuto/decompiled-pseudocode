/*
 * XREFs of ?HitTestInputPanelRegion@DelayZoneTelemetry@@AEAA_NUtagPOINT@@@Z @ 0x14022519C
 * Callers:
 *     ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x140193AE0 (-UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDela.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     PtInRect @ 0x14010DA60 (PtInRect.c)
 */

char __fastcall DelayZoneTelemetry::HitTestInputPanelRegion(DelayZoneTelemetry *this, struct tagPOINT a2)
{
  char *v2; // r14
  char v3; // si
  char *v4; // rdi
  BOOL v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  char **v10; // rdx

  v2 = (char *)this + 12288;
  v3 = 0;
  v4 = (char *)*((_QWORD *)this + 1536);
  if ( v4 == (char *)this + 12288 )
    return 0;
  do
  {
    v7 = PtInRect((_DWORD *)v4 + 4, *(_QWORD *)&a2);
    v4 = *(char **)v4;
    if ( v7 )
      v3 = 1;
    if ( *((_QWORD *)v4 + 1) != v8 || (v10 = *(char ***)(v8 + 8), *v10 != (char *)v8) )
      __fastfail(3u);
    *v10 = v4;
    *((_QWORD *)v4 + 1) = v10;
    GreDeleteFastMutex((char *)v8, (__int64)v10, v8, v9);
  }
  while ( v4 != v2 );
  return v3;
}
