/*
 * XREFs of ??1COPM@@QEAA@XZ @ 0x14006D858
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ??1?$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ @ 0x14006D8A4 (--1-$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ.c)
 *     ??1?$CList@VCOPMProtectedOutput@@@OPM@@QEAA@XZ @ 0x14006D8DC (--1-$CList@VCOPMProtectedOutput@@@OPM@@QEAA@XZ.c)
 *     ??1CMutex@OPM@@QEAA@XZ @ 0x140082DB0 (--1CMutex@OPM@@QEAA@XZ.c)
 */

void __fastcall COPM::~COPM(COPM *this)
{
  OPM::CMutex::~CMutex((COPM *)((char *)this + 56));
  OPM::CMutex::~CMutex((COPM *)((char *)this + 48));
  OPM::CList<COPMProtectedOutput>::~CList<COPMProtectedOutput>((char *)this + 24);
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::~COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>((char *)this + 16);
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::~COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>((char *)this + 8);
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::~COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>(this);
}
