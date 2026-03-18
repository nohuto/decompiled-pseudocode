/*
 * XREFs of ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1400316CC
 * Callers:
 *     ??0ADAPTEROWNERTRACKER@@QEAA@PEAVDXGADAPTER@@0@Z @ 0x1400313D4 (--0ADAPTEROWNERTRACKER@@QEAA@PEAVDXGADAPTER@@0@Z.c)
 *     ?DxgkCddPushWorkerThreadOfOwner@@YAXQEAX0PEAU_ETHREAD@@@Z @ 0x1403F59D0 (-DxgkCddPushWorkerThreadOfOwner@@YAXQEAX0PEAU_ETHREAD@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGADAPTER::PushWorkerThreadOfExclusiveOwner(DXGADAPTER *this, struct _ETHREAD *a2)
{
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3127;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3127LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 24) )
  {
    WdLogSingleEntry5(0LL, 275LL, 17LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 3133;
  }
  *((_QWORD *)this + 24) = *((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = a2;
}
