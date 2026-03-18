/*
 * XREFs of ?HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1403F0470
 * Callers:
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x140034B2C (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall HandleAdapterMultiPlaneDisableEvent(PVOID IoObject, unsigned int *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rcx
  int v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+34h] [rbp-24h]
  int v8; // [rsp+3Ch] [rbp-1Ch]
  __int64 v9; // [rsp+40h] [rbp-18h]
  __int64 v10; // [rsp+48h] [rbp-10h]

  WdLogSingleEntry3(4LL, *(_QWORD *)Context, Context[2], Context[3]);
  WdLogGlobalForLineNumber = 2350;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(v5, (__int64)&MultiPlaneOverlayDisable);
  v7 = 0LL;
  v8 = 0;
  v10 = 0LL;
  v6 = 14;
  v9 = 1LL;
  SMgrGdiCallout(&v6, 0x200000000LL, 0LL, 0LL, 0LL, 0LL);
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
