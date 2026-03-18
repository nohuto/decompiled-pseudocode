/*
 * XREFs of ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1401A7440
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14019F50C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1401A9B50 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140030C90 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1403D0364 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 */

void __fastcall ADAPTER_RENDER::FlushDeferredDestructions(ADAPTER_RENDER *this)
{
  char *v2; // r14
  char *i; // rsi
  char *v4; // rax
  DXGDEVICE *v5; // rbx
  char *v6; // rsi
  char *j; // rdi
  char *v8; // rax
  DXGDEVICE *v9; // rbx
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-58h] BYREF

  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2327;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 2327LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 2) + 144LL) != KeGetCurrentThread()
    && !*(_BYTE *)(*((_QWORD *)this + 2) + 3093LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2332;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsStopResetLockExclusiveOwner() || GetAdapter()->IsTdrPending()",
      2332LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = (char *)this + 144;
  for ( i = (char *)*((_QWORD *)this + 18); ; i = *(char **)i )
  {
    v4 = 0LL;
    if ( i != v2 )
      v4 = i;
    if ( !v4 )
      break;
    memset(&ApcState, 0, 32);
    v5 = (DXGDEVICE *)i;
    if ( i == v2 )
      v5 = 0LL;
    *(_OWORD *)&ApcState.Process = 0LL;
    KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)v5 + 5) + 56LL), &ApcState);
    DXGDEVICE::FlushDeferredDestruction(v5, 0LL, 0, 0);
    KeUnstackDetachProcess(&ApcState);
  }
  v6 = (char *)this + 160;
  for ( j = (char *)*((_QWORD *)this + 20); ; j = *(char **)j )
  {
    v8 = 0LL;
    if ( j != v6 )
      v8 = j;
    if ( !v8 )
      break;
    memset(&ApcState, 0, 32);
    v9 = (DXGDEVICE *)j;
    if ( j == v6 )
      v9 = 0LL;
    *(_OWORD *)&ApcState.Process = 0LL;
    KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)v9 + 5) + 56LL), &ApcState);
    DXGDEVICE::FlushDeferredDestruction(v9, 0LL, 0, 0);
    KeUnstackDetachProcess(&ApcState);
  }
}
