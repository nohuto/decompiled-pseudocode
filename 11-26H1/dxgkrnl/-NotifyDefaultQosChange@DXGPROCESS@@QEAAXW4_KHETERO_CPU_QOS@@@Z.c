/*
 * XREFs of ?NotifyDefaultQosChange@DXGPROCESS@@QEAAXW4_KHETERO_CPU_QOS@@@Z @ 0x14018B008
 * Callers:
 *     ?NotifyProcessDefaultQosChangeCallback@@YAXPEAU_EPROCESS@@E@Z @ 0x1401F6B90 (-NotifyProcessDefaultQosChangeCallback@@YAXPEAU_EPROCESS@@E@Z.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 */

void __fastcall DXGPROCESS::NotifyDefaultQosChange(__int64 a1, __int32 a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    if ( a2 != _InterlockedExchange((volatile __int32 *)(v3 + 140), a2) )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&NotifyProcessDefaultQosChange);
      _InterlockedAdd((volatile signed __int32 *)(a1 + 424), 1u);
      if ( _InterlockedExchange((volatile __int32 *)(a1 + 420), 1) )
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 424));
      else
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(*(_QWORD *)(a1 + 64) + 48LL), CriticalWorkQueue);
    }
  }
  else
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 4447;
  }
}
