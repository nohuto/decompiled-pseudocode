/*
 * XREFs of ?ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1403B2FC0
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1403B2D1C (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140030C90 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1402E65EC (-ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::ReportDeviceSyncObjects(ADAPTER_RENDER **this)
{
  DXGDEVICESYNCOBJECT **v2; // rdi
  DXGDEVICESYNCOBJECT *i; // rbx
  DXGDEVICESYNCOBJECT *v4; // rax
  DXGDEVICESYNCOBJECT *v5; // rcx

  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8995;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      8995LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = this + 68;
  for ( i = *v2; ; i = *(DXGDEVICESYNCOBJECT **)i )
  {
    v4 = 0LL;
    if ( i != (DXGDEVICESYNCOBJECT *)v2 )
      v4 = i;
    if ( !v4 )
      break;
    v5 = i;
    if ( i == (DXGDEVICESYNCOBJECT *)v2 )
      v5 = 0LL;
    DXGDEVICESYNCOBJECT::ReportState(v5);
  }
}
