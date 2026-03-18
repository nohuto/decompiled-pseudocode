/*
 * XREFs of ??1COPM@@QEAA@XZ @ 0x14000879C
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ??1?$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ @ 0x1400086A4 (--1-$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ.c)
 *     ??1?$CList@VCOPMProtectedOutput@@@OPM@@QEAA@XZ @ 0x140008734 (--1-$CList@VCOPMProtectedOutput@@@OPM@@QEAA@XZ.c)
 *     ??1CMutex@OPM@@QEAA@XZ @ 0x14000A3F0 (--1CMutex@OPM@@QEAA@XZ.c)
 */

void __fastcall COPM::~COPM(OPM **this)
{
  void *v2; // rdx

  OPM::CMutex::~CMutex((OPM::CMutex *)(this + 7));
  OPM::CMutex::~CMutex((OPM::CMutex *)(this + 6));
  OPM::CList<COPMProtectedOutput>::~CList<COPMProtectedOutput>((__int64)(this + 3), v2);
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::~COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>(this + 2);
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::~COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>(this + 1);
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::~COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>(this);
}
