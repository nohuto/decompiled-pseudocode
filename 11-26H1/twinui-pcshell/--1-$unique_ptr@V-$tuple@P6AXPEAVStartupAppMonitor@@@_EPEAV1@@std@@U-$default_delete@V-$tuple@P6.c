/*
 * XREFs of ??1?$unique_ptr@V?$tuple@P6AXPEAVStartupAppMonitor@@@_EPEAV1@@std@@U?$default_delete@V?$tuple@P6AXPEAVStartupAppMonitor@@@_EPEAV1@@std@@@2@@std@@QEAA@XZ @ 0x1802C68DC
 * Callers:
 *     ??$_Invoke@V?$tuple@P6AXPEAVStartupAppMonitor@@@_EPEAV1@@std@@$0A@$00@thread@std@@CAIPEAX@Z @ 0x180583BE0 (--$_Invoke@V-$tuple@P6AXPEAVStartupAppMonitor@@@_EPEAV1@@std@@$0A@$00@thread@std@@CAIPEAX@Z.c)
 *     _StartupAppMonitor::StartMonitor_::_1_::dtor$38 @ 0x1806D4503 (_StartupAppMonitor--StartMonitor_--_1_--dtor$38.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall __1__unique_ptr_V__tuple_P6AXPEAVStartupAppMonitor____EPEAV1__std__U__default_delete_V__tuple_P6AXPEAVStartupAppMonitor____EPEAV1__std___2__std__QEAA_XZ(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x10);
}
