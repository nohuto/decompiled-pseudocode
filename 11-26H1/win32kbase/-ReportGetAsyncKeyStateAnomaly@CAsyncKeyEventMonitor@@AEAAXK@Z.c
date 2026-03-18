/*
 * XREFs of ?ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor@@AEAAXK@Z @ 0x140066128
 * Callers:
 *     ?OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ @ 0x140066084 (-OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140066268 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

void __fastcall CAsyncKeyEventMonitor::ReportGetAsyncKeyStateAnomaly(
        CAsyncKeyEventMonitor *this,
        unsigned int a2,
        int a3)
{
  unsigned int *v4; // rbx
  unsigned int i; // edi
  int v6; // r9d
  unsigned int v7; // ecx

  v4 = (unsigned int *)((char *)this + 12);
  for ( i = 0; i < 0xA; ++i )
  {
    v6 = *(v4 - 1);
    if ( v6 == -1 )
      break;
    v7 = *v4;
    if ( *v4 >= 2 && (!a2 || v7 / a2) && (Microsoft_Windows_Win32kEnableBits & 0x400000000LL) != 0 )
      McTemplateK0qqq_EtwWriteTransfer(v7, (unsigned int)&AuditApiGetAsyncKeyState, a3, v6, a2, *v4);
    *(_QWORD *)(v4 - 1) = -1LL;
    v4 += 2;
  }
}
