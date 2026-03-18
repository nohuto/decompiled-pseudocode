/*
 * XREFs of ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1403A1844
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14030D4B0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1403A35A8 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 */

void __fastcall DXGPROCESS::FlushAllDevice(struct _KTHREAD **this, const struct DXGADAPTER *a2)
{
  _QWORD **v4; // rdi
  _QWORD *i; // rbx
  _QWORD *v6; // rcx

  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3009;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      3009LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3011;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapterToFlush", 3011LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( this[28] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3012;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DeviceCreationLock.IsExclusiveOwner()",
      3012LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = (_QWORD **)(this + 40);
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    if ( !i )
      break;
    v6 = i - 3;
    if ( i == (_QWORD *)24 )
      break;
    if ( *(const struct DXGADAPTER **)(v6[2] + 16LL) == a2 )
      DXGDEVICE::FlushScheduler(v6, 5LL, 4294967293LL, 0LL);
  }
}
