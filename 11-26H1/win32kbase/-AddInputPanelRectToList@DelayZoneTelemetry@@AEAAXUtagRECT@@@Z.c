/*
 * XREFs of ?AddInputPanelRectToList@DelayZoneTelemetry@@AEAAXUtagRECT@@@Z @ 0x140225084
 * Callers:
 *     ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x140193AE0 (-UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDela.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

void __fastcall DelayZoneTelemetry::AddInputPanelRectToList(DelayZoneTelemetry *this, struct tagRECT *a2)
{
  char *v2; // rbx
  char *v3; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  struct tagRECT v8; // [rsp+20h] [rbp-18h]

  v2 = (char *)this + 12288;
  v3 = (char *)*((_QWORD *)this + 1536);
  v8 = *a2;
  if ( v3 != (char *)this + 12288 )
  {
    while ( v3 != v2 )
    {
      v5 = *((_QWORD *)v3 + 2) - *(_QWORD *)&v8.left;
      if ( !v5 )
        v5 = *((_QWORD *)v3 + 3) - *(_QWORD *)&v8.right;
      if ( !v5 )
        return;
      v3 = *(char **)v3;
    }
  }
  v6 = Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x7A647355u);
  if ( v6 )
  {
    *(struct tagRECT *)(v6 + 16) = *a2;
    v7 = *(_QWORD *)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 )
      __fastfail(3u);
    *(_QWORD *)v6 = v7;
    *(_QWORD *)(v6 + 8) = v2;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)v2 = v6;
  }
}
