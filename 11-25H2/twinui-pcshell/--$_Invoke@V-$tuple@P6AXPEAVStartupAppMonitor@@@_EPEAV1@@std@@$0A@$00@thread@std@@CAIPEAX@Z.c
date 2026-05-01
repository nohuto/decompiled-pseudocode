/*
 * XREFs of ??$_Invoke@V?$tuple@P6AXPEAVStartupAppMonitor@@@_EPEAV1@@std@@$0A@$00@thread@std@@CAIPEAX@Z @ 0x18055FBD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@V?$tuple@P6AXPEAVStartupAppMonitor@@@_EPEAV1@@std@@U?$default_delete@V?$tuple@P6AXPEAVStartupAppMonitor@@@_EPEAV1@@std@@@2@@std@@QEAA@XZ @ 0x1802CF5C0 (--1-$unique_ptr@V-$tuple@P6AXPEAVStartupAppMonitor@@@_EPEAV1@@std@@U-$default_delete@V-$tuple@P6.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ____Invoke_V__tuple_P6AXPEAVStartupAppMonitor____EPEAV1__std___0A__00_thread_std__CAIPEAX_Z(
        _QWORD *a1)
{
  void *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  ((void (__fastcall *)(_QWORD))a1[1])(*a1);
  _Cnd_do_broadcast_at_thread_exit();
  __1__unique_ptr_V__tuple_P6AXPEAVStartupAppMonitor____EPEAV1__std__U__default_delete_V__tuple_P6AXPEAVStartupAppMonitor____EPEAV1__std___2__std__QEAA_XZ(&v2);
  return 0LL;
}
