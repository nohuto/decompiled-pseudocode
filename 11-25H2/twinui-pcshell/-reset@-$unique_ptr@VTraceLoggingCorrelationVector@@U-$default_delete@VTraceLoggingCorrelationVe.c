/*
 * XREFs of ?reset@?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAXPEAVTraceLoggingCorrelationVector@@@Z @ 0x18022B99C
 * Callers:
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1805D48A4 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 *     ?RegisterFlyoutWindow@ApplicationFlyoutView@@UEAA?AUIInspectable@Foundation@Windows@winrt@@PEAUHWND__@@AEBUhstring@5@@Z @ 0x1805D7AB0 (-RegisterFlyoutWindow@ApplicationFlyoutView@@UEAA-AUIInspectable@Foundation@Windows@winrt@@PEAUH.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<TraceLoggingCorrelationVector>::reset(void **a1, void *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    operator delete(v2, (const struct std::nothrow_t *)0x90);
}
