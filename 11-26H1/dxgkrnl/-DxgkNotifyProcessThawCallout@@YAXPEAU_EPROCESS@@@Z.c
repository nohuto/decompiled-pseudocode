/*
 * XREFs of ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1403B6060
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x14000CCF4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendNotifyProcessThaw@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1402307C0 (-VmBusSendNotifyProcessThaw@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1403B6204 (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 */

void __fastcall DxgkNotifyProcessThawCallout(PRKPROCESS PROCESS)
{
  __int64 ProcessDxgProcess; // rax
  int *v3; // rbx
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax
  int v6; // [rsp+20h] [rbp-19h] BYREF
  __int64 v7; // [rsp+28h] [rbp-11h]
  char v8; // [rsp+30h] [rbp-9h]
  _BYTE v9[16]; // [rsp+38h] [rbp-1h] BYREF
  _BYTE v10[16]; // [rsp+48h] [rbp+Fh] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp+1Fh] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v6 = -1;
  v7 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v8 = 1;
    v6 = 2096;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)PROCESS, (__int64)&EventProfilerEnter);
  }
  else
  {
    v8 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v6, 2096);
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v9);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  ProcessDxgProcess = PsGetProcessDxgProcess(PROCESS);
  v3 = (int *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x800) == 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (struct DXGFASTMUTEX *const)(ProcessDxgProcess + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
    KeStackAttachProcess(PROCESS, &ApcState);
    if ( v3[122] )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXG_GUEST_GLOBAL_VMBUS::VmBusSendNotifyProcessThaw(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 212), v3[122]);
    }
    DXGPROCESS::NotifyProcessThaw((DXGPROCESS *)v3);
    KeUnstackDetachProcess(&ApcState);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v9);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v6);
  if ( v8 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit);
  }
}
