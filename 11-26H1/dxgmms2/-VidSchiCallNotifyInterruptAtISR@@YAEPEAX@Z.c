/*
 * XREFs of ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x14004B920
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchiLogInterrupt @ 0x140029538 (VidSchiLogInterrupt.c)
 *     VidSchDdiNotifyInterruptWorker @ 0x1400297B0 (VidSchDdiNotifyInterruptWorker.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall VidSchiCallNotifyInterruptAtISR(int **a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  char v9; // [rsp+30h] [rbp-18h]

  v7 = -1;
  v8 = 0LL;
  if ( (qword_14008A010 & 2) != 0 )
  {
    v9 = 1;
    v7 = 4016;
    if ( (byte_14008A202 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 4016);
  }
  else
  {
    v9 = 0;
  }
  ((void (__fastcall *)(int *, __int64))DxgCoreInterface[82])(&v7, 4016LL);
  VidSchiLogInterrupt(*((_QWORD *)*a1 + 93), a1[1], 0LL);
  VidSchDdiNotifyInterruptWorker((__int64)*a1, (__int64)a1[1], 0);
  ((void (__fastcall *)(int *))DxgCoreInterface[83])(&v7);
  if ( v9 && (byte_14008A202 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerExit, v5, v7);
  return 1;
}
