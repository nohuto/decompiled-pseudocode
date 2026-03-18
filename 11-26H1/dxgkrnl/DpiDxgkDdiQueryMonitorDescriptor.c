/*
 * XREFs of DpiDxgkDdiQueryMonitorDescriptor @ 0x140094528
 * Callers:
 *     DpiFdoGetMonitorDescriptorFromDriver @ 0x140241C14 (DpiFdoGetMonitorDescriptorFromDriver.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x140245390 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiQueryDisplayIDDescriptor @ 0x140256F14 (DpiQueryDisplayIDDescriptor.c)
 * Callees:
 *     McTemplateK0qqbr1pqqp_EtwWriteTransfer @ 0x14005BF4C (McTemplateK0qqbr1pqqp_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiQueryMonitorDescriptor(__int64 a1, unsigned int a2, int *a3)
{
  __int64 v3; // r15
  int v4; // ebx
  __int64 v6; // rsi
  __int64 result; // rax
  int v9; // r9d
  int v10; // edx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r14
  _QWORD *v17; // rax

  v3 = *(_QWORD *)(a1 + 48);
  v4 = 0;
  v6 = a2;
  if ( *(_QWORD *)(a1 + 6432) )
  {
    if ( bTracingEnabled )
    {
      v9 = 0;
      v10 = 0;
      v11 = 0LL;
      if ( a3 )
      {
        v9 = *a3;
        v10 = a3[1];
        v11 = *((_QWORD *)a3 + 1);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqbr1pqqp_EtwWriteTransfer(
          v11,
          &EventEnterDdiQueryMonitorDescriptor,
          (__int64)a3,
          v9,
          v10,
          v11,
          v3,
          v6,
          0,
          v11);
    }
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 6432))(v3, (unsigned int)v6, a3);
    v16 = v12;
    if ( bTracingEnabled )
    {
      v13 = 0LL;
      v14 = 0LL;
      if ( a3 )
      {
        v4 = *a3;
        v13 = (unsigned int)a3[1];
        v14 = *((_QWORD *)a3 + 1);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqbr1pqqp_EtwWriteTransfer(
          v14,
          &EventExitDdiQueryMonitorDescriptor,
          v15,
          v4,
          v13,
          v14,
          v3,
          v6,
          v12,
          v14);
    }
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13);
    v17[3] = *(_QWORD *)(a1 + 48);
    v17[4] = v6;
    v17[5] = *a3;
    v17[6] = (unsigned int)a3[1];
    v17[7] = v16;
    result = (unsigned int)v16;
    WdLogGlobalForLineNumber = 364;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    result = 3221225474LL;
    WdLogGlobalForLineNumber = 345;
  }
  return result;
}
