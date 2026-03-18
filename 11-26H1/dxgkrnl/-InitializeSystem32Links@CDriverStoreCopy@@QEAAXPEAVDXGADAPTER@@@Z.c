/*
 * XREFs of ?InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401D76F8
 * Callers:
 *     ?SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1401D7FF8 (-SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_.c)
 *     ?VmBusGetNextHardLink@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140226F50 (-VmBusGetNextHardLink@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?EnumSingleDriverKey@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@@Z @ 0x1401D74D8 (-EnumSingleDriverKey@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     DpiGetPnpRegistryKeyName @ 0x140391730 (DpiGetPnpRegistryKeyName.c)
 */

void __fastcall CDriverStoreCopy::InitializeSystem32Links(CDriverStoreCopy *this, struct DXGADAPTER *a2)
{
  struct _UNICODE_STRING *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( (int)DpiGetPnpRegistryKeyName(*((_QWORD *)a2 + 27), 3LL, &v4) >= 0 )
  {
    if ( (int)CDriverStoreCopy::EnumSingleDriverKey(this, v4) >= 0 )
    {
      if ( (int)DpiGetPnpRegistryKeyName(*((_QWORD *)a2 + 27), 2LL, &v4) >= 0 )
      {
        if ( (int)CDriverStoreCopy::EnumSingleDriverKey(this, v4) < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 1143;
        }
      }
      else
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1137;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 1130;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1124;
  }
}
