/*
 * XREFs of ?AreVirtualDesktopsEnabled@@YA_NXZ @ 0x180118A90
 * Callers:
 *     ?CreateFrames@TaskViewHost@@AEAAJXZ @ 0x180108C7C (-CreateFrames@TaskViewHost@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x1801AA3A8 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     ?IsCloudPCComponentEnabled@@YA_NXZ @ 0x18024D300 (-IsCloudPCComponentEnabled@@YA_NXZ.c)
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180680158 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18069558C (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ??R_lambda_fe990823f78b875c41e1c4896de2e063_@@QEBA@XZ @ 0x180118AF8 (--R_lambda_fe990823f78b875c41e1c4896de2e063_@@QEBA@XZ.c)
 *     _Init_thread_footer @ 0x1802D5898 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D5900 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=1
char AreVirtualDesktopsEnabled(void)
{
  if ( __TSS0__1__AreVirtualDesktopsEnabled__YA_NXZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                      + (unsigned int)tls_index)
                                                                    + 16LL) )
  {
    Init_thread_header(&__TSS0__1__AreVirtualDesktopsEnabled__YA_NXZ_4HA);
    if ( __TSS0__1__AreVirtualDesktopsEnabled__YA_NXZ_4HA == -1 )
    {
      `AreVirtualDesktopsEnabled'::`2'::s_enabled = _lambda_fe990823f78b875c41e1c4896de2e063_::operator()();
      Init_thread_footer(&__TSS0__1__AreVirtualDesktopsEnabled__YA_NXZ_4HA);
    }
  }
  return `AreVirtualDesktopsEnabled'::`2'::s_enabled;
}
