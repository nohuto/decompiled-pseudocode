/*
 * XREFs of ?NotifyProcessDefaultQosChangeCallback@@YAXPEAU_EPROCESS@@E@Z @ 0x1401F6B90
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x14000CCF4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     Feature_GraphicsKernelBr2601BugFixes__private_IsEnabledDeviceUsageNoInline @ 0x140080768 (Feature_GraphicsKernelBr2601BugFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     ?NotifyDefaultQosChange@DXGPROCESS@@QEAAXW4_KHETERO_CPU_QOS@@@Z @ 0x14018B008 (-NotifyDefaultQosChange@DXGPROCESS@@QEAAXW4_KHETERO_CPU_QOS@@@Z.c)
 */

void __fastcall NotifyProcessDefaultQosChangeCallback(struct _EPROCESS *a1, unsigned __int8 a2)
{
  __int32 v2; // edi
  __int64 ProcessDxgProcess; // rax
  __int64 v5; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  if ( (unsigned __int8)PsGetProcessExitProcessCalled(a1) )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 4494;
  }
  else if ( (unsigned int)Feature_GraphicsKernelBr2601BugFixes__private_IsEnabledDeviceUsageNoInline() )
  {
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v6);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
    ProcessDxgProcess = PsGetProcessDxgProcess(a1);
    if ( ProcessDxgProcess )
    {
      DXGPROCESS::NotifyDefaultQosChange(ProcessDxgProcess, v2);
    }
    else
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 4514;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v6);
  }
  else
  {
    v5 = PsGetProcessDxgProcess(a1);
    if ( v5 )
    {
      DXGPROCESS::NotifyDefaultQosChange(v5, v2);
    }
    else
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 4526;
    }
  }
}
