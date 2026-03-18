/*
 * XREFs of ?VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140057248
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x140028DF4 (VidSchDdiNotifyDpcWorker.c)
 *     VidSchCaptureLogs @ 0x1400C1CB0 (VidSchCaptureLogs.c)
 * Callees:
 *     ?VidSchiQueueAsyncOperation@@YAJPEAU_VIDSCH_NODE@@W4VIDSCH_ASYNC_OPERATION_TYPE@@PEATVIDSCH_ASYNC_OPERATION_DATA@@@Z @ 0x1400575AC (-VidSchiQueueAsyncOperation@@YAJPEAU_VIDSCH_NODE@@W4VIDSCH_ASYNC_OPERATION_TYPE@@PEATVIDSCH_ASYN.c)
 */

void __fastcall VidSchiAsyncReCreateSchedulingLog(struct _VIDSCH_NODE *a1)
{
  struct _VIDSCH_NODE *v1; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v2; // [rsp+28h] [rbp-10h]
  int v3; // [rsp+2Ch] [rbp-Ch]

  v3 = 0;
  v1 = a1;
  v2 = (byte_14008A203 & 0x40) != 0 ? 0x2000 : 2048;
  VidSchiQueueAsyncOperation(a1, v2, &v1);
}
