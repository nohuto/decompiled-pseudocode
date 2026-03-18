/*
 * XREFs of ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x140082BE8
 * Callers:
 *     DrvCreatePhysicalMonitorObjects @ 0x140139E70 (DrvCreatePhysicalMonitorObjects.c)
 *     NtGdiCreateOPMProtectedOutput @ 0x140153500 (NtGdiCreateOPMProtectedOutput.c)
 * Callees:
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1400830CC (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140085240 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x1400852B0 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     ?AddElement@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x14015C1F0 (-AddElement@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall COPM::CreateProtectedOutput(
        COPM *this,
        enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a2,
        struct _LUID *a3,
        unsigned int a4,
        void **a5,
        int *a6)
{
  int *v10; // r15
  unsigned int v11; // esi
  COPMProtectedOutput *Pool2; // rax
  int v13; // edi
  COPMProtectedOutput *v15; // rax
  COPMProtectedOutput *v16; // r14
  int v17; // [rsp+60h] [rbp+8h] BYREF

  OPM::CMutex::Lock((COPM *)((char *)this + 48));
  v10 = a6;
  v11 = 0;
  v17 = 0;
  *a6 = 0;
  Pool2 = (COPMProtectedOutput *)ExAllocatePool2(258LL, 88LL, 1297108807LL);
  if ( Pool2 && (v15 = COPMProtectedOutput::COPMProtectedOutput(Pool2, a2, a3, a4, &v17), (v16 = v15) != 0LL) )
  {
    v13 = v17;
    if ( v17 >= 0 )
    {
      LODWORD(a6) = 0;
      v13 = OPM::CList<COPMProtectedOutput>::AddElement((char *)this + 24, v15, &a6);
      if ( v13 >= 0 )
      {
        *a5 = (void *)(unsigned int)a6;
        goto LABEL_6;
      }
    }
    (**(void (__fastcall ***)(COPMProtectedOutput *, __int64))v16)(v16, 1LL);
  }
  else
  {
    v13 = -1073741801;
  }
  if ( v13 == -1073741198 )
  {
    *v10 = 1;
    v13 = 0;
  }
  v11 = v13;
LABEL_6:
  OPM::CMutex::Unlock((COPM *)((char *)this + 48));
  return v11;
}
