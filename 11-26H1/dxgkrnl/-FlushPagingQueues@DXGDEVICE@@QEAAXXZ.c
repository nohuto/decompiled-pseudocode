/*
 * XREFs of ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1403F5A24
 * Callers:
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1401C3A8C (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1401F7B74 (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1403B85FC (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXGDEVICE::FlushPagingQueues(DXGDEVICE *this)
{
  DXGDEVICE *v2; // r14
  char *v3; // rsi
  char *i; // rbx
  char *v5; // rax
  char *v6; // rdx

  if ( !*((_BYTE *)this + 72)
    && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17))
    && *(struct _KTHREAD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 144LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8593;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsDeviceLockExclusiveOwner() || GetRenderAdapter()->IsStopResetLockExclusiveOwner()",
      8593LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = this;
  if ( (*((_BYTE *)this + 1917) & 1) == 0 )
  {
    v3 = (char *)this + 528;
    for ( i = (char *)*((_QWORD *)this + 66); ; i = *(char **)i )
    {
      v5 = 0LL;
      if ( i != v3 )
        v5 = i;
      if ( !v5 )
        break;
      v6 = i;
      if ( i == v3 )
        v6 = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v2 + 2) + 760LL) + 8LL) + 864LL))(
        *(_QWORD *)(*((_QWORD *)v2 + 2) + 768LL),
        *((_QWORD *)v6 + 4));
    }
  }
}
