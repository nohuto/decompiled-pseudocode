/*
 * XREFs of ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x14000B1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x14000CCF4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400305C0 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400306B0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x140042470 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x140046738 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402E6CB0 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

void __fastcall DxgkProcessNotify(PEPROCESS Process, HANDLE ProcessId, PPS_CREATE_NOTIFY_INFO CreateInfo)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  DXGPROCESS *ProcessDxgProcess; // rbx
  unsigned int v8; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v9; // [rsp+28h] [rbp-D8h]
  char v10; // [rsp+30h] [rbp-D0h]
  _BYTE v11[24]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[256]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = -1;
  v9 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v10 = 1;
    v8 = 3;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(Process, &EventProfilerEnter, CreateInfo, 3LL);
  }
  else
  {
    v10 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v8, 3);
  if ( !CreateInfo )
  {
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v11);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
    ProcessDxgProcess = (DXGPROCESS *)PsGetProcessDxgProcess(Process);
    if ( ProcessDxgProcess )
    {
      CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v12);
      *((_DWORD *)ProcessDxgProcess + 102) |= 0x800u;
      DXGPROCESS::AcquireReference(ProcessDxgProcess);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
      DXGPROCESS::DestroyDxgProcess(ProcessDxgProcess);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
      DXGPROCESS::ReleaseReference(ProcessDxgProcess);
      CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v12);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( v10 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerExit, v6, v8);
  }
}
