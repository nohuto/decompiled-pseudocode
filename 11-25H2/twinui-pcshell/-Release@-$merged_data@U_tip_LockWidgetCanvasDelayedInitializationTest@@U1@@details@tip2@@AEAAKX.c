/*
 * XREFs of ?Release@?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@AEAAKXZ @ 0x1805B1B80
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805A7C74 (--1-$com_ptr_t@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805A83CC (--4-$com_ptr_t@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@.c)
 *     ??4?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@QEAAAEAV01@AEBV01@@Z @ 0x1805A842C (--4-$tip_test@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805B8E98 (-reset@-$com_ptr_t@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@t.c)
 * Callees:
 *     ??1?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@QEAA@XZ @ 0x1805A7ED4 (--1-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 74);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>::~merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
