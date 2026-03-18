/*
 * XREFs of ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x14036BBE8
 * Callers:
 *     _lambda_916b8cf52c985c2b3c6a9e3c4a47be2a_::_lambda_invoker_cdecl_ @ 0x14036BBD0 (_lambda_916b8cf52c985c2b3c6a9e3c4a47be2a_--_lambda_invoker_cdecl_.c)
 *     OutputDuplProcessDestroyDevice @ 0x1403A379C (OutputDuplProcessDestroyDevice.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x14036BD68 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x14036C144 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessDestroyDevice(ADAPTER_DISPLAY **this, struct DXGDEVICE *a2)
{
  ADAPTER_DISPLAY *v3; // rcx
  unsigned int i; // esi

  v3 = *this;
  if ( v3 && !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(v3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1447;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(m_pDisplayCore == NULL) || (m_pDisplayCore->IsCoreResourceSharedOwner())",
      1447LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_BYTE *)a2 + 72)
    && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)a2 + 17))
    && *(struct _KTHREAD **)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 144LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1448;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->IsDeviceLockExclusiveOwner() || pDevice->GetRenderAdapter()->IsStopResetLockExclusiveOwner()",
      1448LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( i = 0; i < *((_DWORD *)this + 19); ++i )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, i, a2, 0LL, 0, 5);
  OUTPUTDUPL_MGR::ProcessPendingDestroy((OUTPUTDUPL_MGR *)this, a2, 0);
}
