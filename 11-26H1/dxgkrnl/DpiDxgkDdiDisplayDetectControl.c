/*
 * XREFs of DpiDxgkDdiDisplayDetectControl @ 0x14031C134
 * Callers:
 *     DpiFdoInvalidateChildStatus @ 0x140244D74 (DpiFdoInvalidateChildStatus.c)
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x140248A44 (DpiFdoStopAdapter.c)
 *     DpiFdoInvalidateChildRelations @ 0x14031B740 (DpiFdoInvalidateChildRelations.c)
 * Callees:
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x140013EF0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     DpiFdoHandleDisplayDetectControl @ 0x140014BDC (DpiFdoHandleDisplayDetectControl.c)
 *     DxgkQueryConnectionChanges @ 0x140015450 (DxgkQueryConnectionChanges.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiDisplayDetectControl(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  char v8; // di
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  _QWORD *v13; // rax
  unsigned __int64 v14; // rcx
  bool v15; // zf
  unsigned __int8 v16; // r8
  __int64 v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+28h] [rbp-30h]
  __int64 v20; // [rsp+30h] [rbp-28h]
  __int64 v21; // [rsp+38h] [rbp-20h]

  if ( (*(_BYTE *)(a1 + 4041) & 8) == 0 )
    return DpiFdoHandleDisplayDetectControl(a1, (int *)a4, a3);
  v8 = 1;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqtqq_EtwWriteTransfer(
      HIBYTE(*a4) & 0xF,
      &EventEnterDdiDisplayDetectControl,
      *a4 & 0xFFFFFF,
      a3,
      HIBYTE(*a4) & 0xF,
      *a4 & 0xFFFFFF,
      (*a4 >> 28) & 1,
      0);
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(a2 + 1128))(a3, a4);
  v12 = v9;
  if ( bTracingEnabled )
  {
    v10 = *a4 >> 28;
    v11 = HIBYTE(*a4) & 0xF;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v21) = v9;
      LODWORD(v20) = (*a4 & 0x10000000) != 0;
      LODWORD(v19) = *a4 & 0xFFFFFF;
      LODWORD(v18) = HIBYTE(*a4) & 0xF;
      McTemplateK0pqtqq_EtwWriteTransfer(
        v11,
        &EventExitDdiDisplayDetectControl,
        (unsigned int)v19,
        a3,
        v18,
        v19,
        v20,
        v21);
    }
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
  v13[3] = a2;
  v13[4] = HIBYTE(*a4) & 0xF;
  v13[5] = *a4 & 0xFFFFFF;
  v14 = ((unsigned __int64)*a4 >> 28) & 1;
  v13[7] = v12;
  v13[6] = v14;
  v15 = *((_BYTE *)a4 + 22) == 0;
  WdLogGlobalForLineNumber = 781;
  if ( !v15 )
  {
    v16 = *((_BYTE *)a4 + 20);
    if ( (*a4 & 0xF000000) != 0x2000000 || !v16 )
      v8 = 0;
    if ( (int)DxgkQueryConnectionChanges(*(_QWORD *)(a1 + 24), v8, v16, *((_BYTE *)a4 + 21), 0, *((_BYTE *)a4 + 23)) < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 812;
    }
  }
  return (unsigned int)v12;
}
