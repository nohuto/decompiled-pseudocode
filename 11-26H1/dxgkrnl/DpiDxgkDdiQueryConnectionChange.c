/*
 * XREFs of DpiDxgkDdiQueryConnectionChange @ 0x1400160A4
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140015450 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     McTemplateK0pxqqqqq_EtwWriteTransfer @ 0x140014B1C (McTemplateK0pxqqqqq_EtwWriteTransfer.c)
 *     DpiFdoHandleQueryConnectionChange @ 0x140017BDC (DpiFdoHandleQueryConnectionChange.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiQueryConnectionChange(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  unsigned int v12; // ecx
  _DWORD *v13; // rdi
  _QWORD *v14; // rax
  __int64 result; // rax
  unsigned int v16; // eax
  __int64 v17; // [rsp+28h] [rbp-30h]
  __int64 v18; // [rsp+30h] [rbp-28h]
  __int64 v19; // [rsp+38h] [rbp-20h]
  __int64 v20; // [rsp+40h] [rbp-18h]
  __int64 v21; // [rsp+48h] [rbp-10h]

  if ( (*(_BYTE *)(a1 + 4041) & 8) == 0 )
    return DpiFdoHandleQueryConnectionChange(a1, a4);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pxqqqqq_EtwWriteTransfer(a1, &EventEnterDdiQueryConnectionChange, a3, a3, 0LL, 0, 0, -2, 0, 0);
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(a2 + 1136))(a3, a4);
  v11 = v7;
  if ( bTracingEnabled )
  {
    if ( v7 < 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v21) = v7;
        LODWORD(v20) = 0;
        LODWORD(v19) = -2;
        LODWORD(v18) = 0;
        LODWORD(v17) = 0;
        McTemplateK0pxqqqqq_EtwWriteTransfer(
          v9,
          &EventExitDdiQueryConnectionChange,
          v10,
          a3,
          0LL,
          v17,
          v18,
          v19,
          v20,
          v21);
      }
    }
    else
    {
      v12 = a4[2];
      v8 = v12 & 0xFFFFFF;
      v9 = HIBYTE(v12) & 0xF;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v21) = v7;
        LODWORD(v20) = a4[4];
        LODWORD(v19) = a4[3];
        LODWORD(v18) = v9;
        LODWORD(v17) = v8;
        McTemplateK0pxqqqqq_EtwWriteTransfer(
          v9,
          &EventExitDdiQueryConnectionChange,
          (unsigned int)v20,
          a3,
          *(_QWORD *)a4,
          v17,
          v18,
          v19,
          v20,
          v21);
      }
    }
  }
  if ( g_bDbgForceUsb4MonitorSupport )
  {
    v9 = a4[2];
    if ( (a4[2] & 0xF000000) == 0xA000000 )
    {
      v9 &= 0xFFFFFFu;
      if ( (_DWORD)v9 == g_DbgUsb4MonitorTargetId )
      {
        a4[6] = g_DbgUsb4MonitorDpcdDP_IN_Adapter_Number;
        v16 = g_DbgUsb4MonitorDpcdUSB4_Driver_ID;
        a4[4] |= 1u;
        a4[7] = v16;
      }
    }
  }
  v13 = a4 + 4;
  if ( g_bDbgTreatUsb4MonitorAsNormal )
    *v13 &= ~1u;
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v14[3] = *a4;
  v14[4] = a4[2] & 0xFFFFFF;
  v14[5] = HIBYTE(a4[2]) & 0xF;
  v14[6] = (unsigned int)*v13;
  v14[7] = v11;
  result = (unsigned int)v11;
  WdLogGlobalForLineNumber = 873;
  return result;
}
