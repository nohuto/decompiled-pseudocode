/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1402A1330
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14029FF9C (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x140012A50 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x14003BD40 (-SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z.c)
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1400534B8 (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int a3,
        char a4,
        unsigned __int8 *a5)
{
  __int64 v5; // rbp
  __int64 v9; // rsi
  __int64 v11; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v13; // r8

  v5 = *((_QWORD *)this + 16);
  v9 = 4024LL * a2;
  v11 = a2;
  Current = DXGPROCESS::GetCurrent();
  *a5 = 1;
  if ( !*(_QWORD *)(v9 + v5 + 912) || (*((_DWORD *)Current + 102) & 4) == 0 && !g_OSTestSigningEnabled )
    return 3221225485LL;
  if ( *((_QWORD *)this + 58) )
  {
    *(_DWORD *)(v9 + v5 + 920) = a3;
    BLTQUEUE::SetDWMTargetVsync((BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 58) + 8LL) + 3040 * v11), a3);
  }
  else
  {
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqq_EtwWriteTransfer(
          0LL,
          &EventDWMVsyncCountWait,
          v13,
          a3,
          *(_DWORD *)(v9 + v5 + 924),
          *(_BYTE *)(v9 + v5 + 928),
          a4,
          4);
    }
    ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(this, a2, a3, a5);
  }
  return 0LL;
}
