/*
 * XREFs of ?DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z @ 0x140440110
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x14000CCF4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     Feature_GraphicsKernelBr2601BugFixes__private_IsEnabledDeviceUsageNoInline @ 0x140080768 (Feature_GraphicsKernelBr2601BugFixes__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DxgkSetProcessStatus(struct _D3DKMT_PROCESS_STATUS_INTERNAL *a1)
{
  __int64 v2; // rbp
  __int64 ProcessDxgProcess; // rbx
  int v4; // edx
  bool v5; // zf
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  signed __int32 v8; // ett
  __int64 v9; // rbx
  int v10; // edx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  signed __int32 v13; // ett
  _BYTE v14[16]; // [rsp+50h] [rbp-18h] BYREF

  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal() + 420)
    || !_InterlockedCompareExchange((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 419, 1, 1) )
  {
    v2 = *(_QWORD *)a1;
    if ( (unsigned int)Feature_GraphicsKernelBr2601BugFixes__private_IsEnabledDeviceUsageNoInline() )
    {
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v14);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
      ProcessDxgProcess = PsGetProcessDxgProcess(v2);
      if ( ProcessDxgProcess )
      {
        if ( *((_DWORD *)a1 + 2) == 1 )
        {
          v4 = 1;
        }
        else
        {
          if ( *((_DWORD *)a1 + 2) != 2 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 4337;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"Invalid DxgProcess state!",
              4337LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_21;
          }
          v4 = 2;
        }
        v5 = *((_BYTE *)a1 + 12) == 0;
        _m_prefetchw((const void *)(ProcessDxgProcess + 416));
        v6 = *(_DWORD *)(ProcessDxgProcess + 416);
        if ( v5 )
        {
          do
          {
            v8 = v6;
            v6 = _InterlockedCompareExchange((volatile signed __int32 *)(ProcessDxgProcess + 416), ~v4 & v6, v6);
          }
          while ( v8 != v6 );
          if ( (v6 & v4) == 0 )
            goto LABEL_21;
        }
        else
        {
          do
          {
            v7 = v6;
            v6 = _InterlockedCompareExchange((volatile signed __int32 *)(ProcessDxgProcess + 416), v4 | v6, v6);
          }
          while ( v7 != v6 );
          if ( (v6 & v4) != 0 )
            goto LABEL_21;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&SetProcessStatus);
        _InterlockedAdd((volatile signed __int32 *)(ProcessDxgProcess + 424), 1u);
        if ( _InterlockedExchange((volatile __int32 *)(ProcessDxgProcess + 420), 1) )
          _InterlockedDecrement((volatile signed __int32 *)(ProcessDxgProcess + 424));
        else
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(*(_QWORD *)(ProcessDxgProcess + 64) + 48LL), CriticalWorkQueue);
      }
LABEL_21:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
      return;
    }
    v9 = PsGetProcessDxgProcess(v2);
    if ( v9 )
    {
      if ( *((_DWORD *)a1 + 2) == 1 )
      {
        v10 = 1;
      }
      else
      {
        if ( *((_DWORD *)a1 + 2) != 2 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 4402;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Invalid DxgProcess state!", 4402LL, 0LL, 0LL, 0LL, 0LL);
          return;
        }
        v10 = 2;
      }
      v5 = *((_BYTE *)a1 + 12) == 0;
      _m_prefetchw((const void *)(v9 + 416));
      v11 = *(_DWORD *)(v9 + 416);
      if ( v5 )
      {
        do
        {
          v13 = v11;
          v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 416), ~v10 & v11, v11);
        }
        while ( v13 != v11 );
        if ( (v11 & v10) == 0 )
          return;
      }
      else
      {
        do
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 416), v10 | v11, v11);
        }
        while ( v12 != v11 );
        if ( (v11 & v10) != 0 )
          return;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&SetProcessStatus);
      _InterlockedAdd((volatile signed __int32 *)(v9 + 424), 1u);
      if ( _InterlockedExchange((volatile __int32 *)(v9 + 420), 1) )
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 424));
      else
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(*(_QWORD *)(v9 + 64) + 48LL), CriticalWorkQueue);
    }
  }
}
