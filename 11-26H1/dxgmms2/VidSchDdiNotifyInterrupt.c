/*
 * XREFs of VidSchDdiNotifyInterrupt @ 0x140028AB0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchiLogInterrupt @ 0x140029538 (VidSchiLogInterrupt.c)
 *     VidSchDdiNotifyInterruptWorker @ 0x1400297B0 (VidSchDdiNotifyInterruptWorker.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x140044EC8 (McTemplateK0dq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchDdiNotifyInterrupt(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 DxgAdapter; // rax
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // ecx
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h]
  char v18; // [rsp+40h] [rbp-18h]

  v16 = -1;
  v17 = 0LL;
  if ( (qword_14008A010 & 2) != 0 )
  {
    v18 = 1;
    v16 = 4015;
    if ( (byte_14008A202 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 4015LL);
  }
  else
  {
    v18 = 0;
  }
  ((void (__fastcall *)(unsigned int *, __int64))DxgCoreInterface[82])(&v16, 4015LL);
  if ( (DpiGetSchedulerCallbackState(a1) & 2) != 0 )
  {
    DxgAdapter = DpiGetDxgAdapter(a1);
    v9 = DxgAdapter;
    if ( !DxgAdapter )
      goto LABEL_10;
    v10 = *(_QWORD *)(*(_QWORD *)(DxgAdapter + 3168) + 744LL);
    if ( !v10 )
      goto LABEL_10;
    LOBYTE(v8) = 1;
    VidSchiLogInterrupt(v10, a2, v8);
    v11 = *a2;
    if ( *a2 != 3 && (v11 > 0x12 || (v12 = 263296, !_bittest(&v12, v11))) || *(_QWORD *)(v9 + 3160) )
    {
      VidSchDdiNotifyInterruptWorker(*(_QWORD *)(v9 + 3168), a2, 1LL);
      goto LABEL_10;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 7LL, v9, 0LL, 0LL);
    WdLogGlobalForLineNumber = 916;
  }
  if ( (byte_14008A202 & 1) != 0 )
    McTemplateK0dq_EtwWriteTransfer(v5, &NotifyInterruptCB, v6, 4294967293LL, 0);
LABEL_10:
  result = ((__int64 (__fastcall *)(unsigned int *))DxgCoreInterface[83])(&v16);
  if ( v18 )
  {
    if ( (byte_14008A202 & 1) != 0 )
      return McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v16);
  }
  return result;
}
