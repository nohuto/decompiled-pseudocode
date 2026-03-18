/*
 * XREFs of ?OnThreadExit@InkProcessor@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x1401A98B8
 * Callers:
 *     InkProcessorOnThreadExit @ 0x1401A9880 (InkProcessorOnThreadExit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall InkProcessor::OnThreadExit(InkProcessor **this, const struct tagTHREADINFO *a2)
{
  InkProcessor *i; // rdi

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  if ( *((_BYTE *)this + 8) )
  {
    for ( i = this[12]; i != (InkProcessor *)(this + 12); i = *(InkProcessor **)i )
      (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)i - 1) + 24LL))((__int64)i - 8, *(_QWORD *)a2);
  }
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
