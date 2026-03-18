/*
 * XREFs of ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1403BBB4C
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1403BB818 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?ReportState@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1403BBF78 (-ReportState@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140053148 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpx_EtwWriteTransfer @ 0x140056460 (McTemplateK0ppqqpx_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpqq_EtwWriteTransfer @ 0x14005F9F0 (McTemplateK0ppqqpqq_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpt_EtwWriteTransfer @ 0x140060AD4 (McTemplateK0ppqqpt_EtwWriteTransfer.c)
 *     McTemplateK0ppqqx_EtwWriteTransfer @ 0x140069CD8 (McTemplateK0ppqqx_EtwWriteTransfer.c)
 *     McTemplateK0ppqqppqi_EtwWriteTransfer @ 0x140081F90 (McTemplateK0ppqqppqi_EtwWriteTransfer.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402BE420 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::ReportAdapterObjectState(
        struct ADAPTER_RENDER **this,
        struct DXGSYNCOBJECT *a2,
        __int64 a3)
{
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // eax
  const EVENT_DESCRIPTOR *v8; // rdx
  struct ADAPTER_RENDER *v9; // r9
  __int64 v10; // rcx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v12; // rdx
  __int64 v13; // [rsp+40h] [rbp-28h]

  if ( *((_DWORD *)a2 + 105) == 7 )
  {
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(a2, this[2]);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppqqx_EtwWriteTransfer(
        *((unsigned int *)a2 + 80),
        &EventReportNativeFence,
        a3,
        *(_QWORD *)(v12 + 16),
        VidSchSyncObject);
  }
  else if ( bTracingEnabled )
  {
    a3 = (__int64)this[4];
    v5 = *((_QWORD *)this[2] + 2);
    switch ( *((_DWORD *)a2 + 56) )
    {
      case 1:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppqqpt_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            &EventReportSynchronizationMutex,
            0LL,
            v5,
            a3,
            4,
            *((_DWORD *)a2 + 57),
            *((unsigned int *)a2 + 74),
            *((_DWORD *)a2 + 58));
        break;
      case 2:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppqqpqq_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            &EventReportSemaphore,
            0LL,
            v5,
            a3,
            4,
            *((_DWORD *)a2 + 57),
            *((unsigned int *)a2 + 74),
            *((_DWORD *)a2 + 58),
            *((_DWORD *)a2 + 59));
        break;
      case 3:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
          break;
        v6 = *((unsigned int *)a2 + 74);
        v13 = *((_QWORD *)a2 + 29);
        v7 = *((_DWORD *)a2 + 57);
        v8 = (const EVENT_DESCRIPTOR *)&EventReportFence;
        goto LABEL_10;
      case 4:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppqqpx_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            &EventReportCPUNotification,
            0LL,
            v5,
            a3,
            4,
            *((_DWORD *)a2 + 57),
            *((unsigned int *)a2 + 74),
            *((_QWORD *)a2 + 29));
        break;
      case 5:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v6 = *((unsigned int *)a2 + 74);
          v13 = *((_QWORD *)a2 + 29);
          v7 = *((_DWORD *)a2 + 57);
          v8 = (const EVENT_DESCRIPTOR *)&EventReportMonitoredFence;
LABEL_10:
          McTemplateK0ppqqpx_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, v8, 0LL, v5, a3, 4, v7, v6, v13);
        }
        break;
      case 6:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppqqppqi_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            &EventReportPeriodicMonitoredFence,
            0LL,
            v5,
            a3,
            4,
            *((_DWORD *)a2 + 57),
            *((unsigned int *)a2 + 74),
            *((unsigned int *)a2 + 58),
            *((_DWORD *)a2 + 59),
            *((_QWORD *)a2 + 30));
        break;
      default:
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1056;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 1056LL, 0LL, 0LL, 0LL, 0LL);
        break;
    }
  }
  if ( *((_DWORD *)a2 + 20) && bTracingEnabled )
  {
    v9 = this[4];
    if ( v9 )
      v10 = *((_QWORD *)v9 + 2);
    else
      v10 = 0LL;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pppp_EtwWriteTransfer(v10, &EventReportSyncObject, a3);
  }
}
