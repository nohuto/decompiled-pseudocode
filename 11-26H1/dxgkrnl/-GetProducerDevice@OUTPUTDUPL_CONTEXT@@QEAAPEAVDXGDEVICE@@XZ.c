/*
 * XREFs of ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x14036C388
 * Callers:
 *     _lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_ @ 0x1402C70B0 (_lambda_a196522e28cbefec8f1ebe5a826d98cf_--_lambda_invoker_cdecl_.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402C7424 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x14036BD68 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x14036C144 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

struct DXGDEVICE *__fastcall OUTPUTDUPL_CONTEXT::GetProducerDevice(OUTPUTDUPL_CONTEXT *this)
{
  __int64 v1; // rdx
  __int64 i; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax

  v1 = 0LL;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v4 = *((_QWORD *)this + i + 6);
    v5 = v1;
    v6 = *(_QWORD *)(v4 + 8);
    if ( v1 )
    {
      if ( v6 && v1 != v6 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2094;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"!pCurrentMutexDevice || (pDeviceFound == pCurrentMutexDevice)",
          2094LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v1 = v5;
      }
    }
    else if ( v6 )
    {
      v1 = *(_QWORD *)(v4 + 8);
    }
  }
  return (struct DXGDEVICE *)v1;
}
