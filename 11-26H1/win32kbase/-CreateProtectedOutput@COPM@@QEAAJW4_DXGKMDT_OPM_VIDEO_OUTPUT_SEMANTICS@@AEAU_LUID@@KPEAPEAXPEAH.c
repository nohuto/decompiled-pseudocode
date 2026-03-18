/*
 * XREFs of ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1400098D0
 * Callers:
 *     NtGdiCreateOPMProtectedOutput @ 0x140009580 (NtGdiCreateOPMProtectedOutput.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x14000BAA0 (DrvCreatePhysicalMonitorObjects.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140009CA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x140009D10 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x140009E0C (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 *     ?AddElement@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x14000A620 (-AddElement@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall COPM::CreateProtectedOutput(
        COPM *this,
        enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a2,
        struct _LUID *a3,
        unsigned int a4,
        void **a5,
        int *a6)
{
  OPM::CMutex *v6; // rbx
  int *v11; // r15
  unsigned int v12; // esi
  COPMProtectedOutput *Pool2; // rax
  COPMProtectedOutput *v14; // rax
  COPMProtectedOutput *v15; // r14
  int v16; // edi
  int v18; // [rsp+60h] [rbp+8h] BYREF

  v6 = (COPM *)((char *)this + 48);
  OPM::CMutex::Lock((COPM *)((char *)this + 48));
  v11 = a6;
  v12 = 0;
  v18 = 0;
  *a6 = 0;
  Pool2 = (COPMProtectedOutput *)ExAllocatePool2(258LL, 88LL, 1297108807LL);
  if ( Pool2 && (v14 = COPMProtectedOutput::COPMProtectedOutput(Pool2, a2, a3, a4, &v18), (v15 = v14) != 0LL) )
  {
    v16 = v18;
    if ( v18 >= 0 )
    {
      LODWORD(a6) = 0;
      v16 = OPM::CList<COPMProtectedOutput>::AddElement((char *)this + 24, v14, &a6);
      if ( v16 >= 0 )
      {
        *a5 = (void *)(unsigned int)a6;
        goto LABEL_7;
      }
    }
    (**(void (__fastcall ***)(COPMProtectedOutput *, __int64))v15)(v15, 1LL);
    if ( v16 == -1073741198 )
    {
      *v11 = 1;
      v16 = 0;
    }
  }
  else
  {
    v16 = -1073741801;
  }
  v12 = v16;
LABEL_7:
  OPM::CMutex::Unlock(v6);
  return v12;
}
