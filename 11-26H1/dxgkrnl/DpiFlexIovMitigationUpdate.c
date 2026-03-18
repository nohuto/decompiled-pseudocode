/*
 * XREFs of DpiFlexIovMitigationUpdate @ 0x1402496D4
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1403D4AF0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140060B8C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1400637E0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x140218AC8 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     DpiFdoGetVirtualGpuType @ 0x14042FBE8 (DpiFdoGetVirtualGpuType.c)
 */

__int64 __fastcall DpiFlexIovMitigationUpdate(
        _QWORD *a1,
        struct _IRP *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v7; // rdi
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 result; // rax
  _BYTE v14[32]; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+50h] [rbp-18h]

  v7 = a1[8];
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v7, L"DpiFlexIovMitigationUpdate", 0LL);
  if ( !a2->RequestorMode || DxgkpCheckProcessForVirtualMachineManagementAccess() )
  {
    if ( a4 >= 8 && a3 && a6 >= 0x2C && a5 )
    {
      if ( (unsigned int)DpiFdoGetVirtualGpuType(a2) )
      {
        WdLogSingleEntry0(3LL);
        result = 3221225659LL;
        WdLogGlobalForLineNumber = 2964;
        return result;
      }
      if ( *(_BYTE *)(v7 + 5516) )
      {
        if ( *(_QWORD *)(v7 + 5504) )
        {
          v11 = -1073741811;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 2983;
        }
        else
        {
          LOBYTE(v12) = 1;
          CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v14, a1, a2, v12, 0, 0);
          v11 = v15;
          if ( v15 >= 0 )
          {
            KeSetEvent((PRKEVENT)(v7 + 5568), 0, 0);
            *(_QWORD *)(v7 + 5504) = a2;
            a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
            IoCsqInsertIrp((PIO_CSQ)(v7 + 5400), a2, 0LL);
            v11 = 259;
          }
          CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v14);
        }
      }
      else
      {
        v11 = -1073741811;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2974;
      }
    }
    else
    {
      v11 = -1073741789;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2957;
    }
  }
  else
  {
    v11 = -1073741790;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2946;
  }
  if ( bTracingEnabled )
    VgpuTrace(0, v11, (void *)v7, L"DpiFlexIovMitigationUpdate", 0LL);
  return v11;
}
