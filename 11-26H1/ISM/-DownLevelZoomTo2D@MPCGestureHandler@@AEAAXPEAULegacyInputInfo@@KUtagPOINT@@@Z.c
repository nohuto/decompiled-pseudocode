/*
 * XREFs of ?DownLevelZoomTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BDC74
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BDA84 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@.c)
 * Callees:
 *     ?IsInContact@ManipulationInjector@@QEAA_NXZ @ 0x1800B1F9C (-IsInContact@ManipulationInjector@@QEAA_NXZ.c)
 *     ??$MPCGestureHandler_StartZoom@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x1800BC9CC (--$MPCGestureHandler_StartZoom@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x180115314 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z @ 0x1801157DC (-StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z.c)
 */

void __fastcall MPCGestureHandler::DownLevelZoomTo2D(
        MPCGestureHandler *this,
        struct LegacyInputInfo *a2,
        unsigned int a3,
        struct tagPOINT a4)
{
  ManipulationInjector *v6; // rdi
  const RECT *v7; // rdx
  ManipulationInjector *v8; // rcx
  POINT v9; // r9
  _DWORD *v10; // r10
  __int64 v11; // r11
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF
  struct tagPOINT v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = a4;
  v13 = a3;
  if ( *((_DWORD *)a2 + 67) )
  {
    v6 = (MPCGestureHandler *)((char *)this + 80);
    if ( !ManipulationInjector::IsInContact((MPCGestureHandler *)((char *)this + 80))
      || *((_DWORD *)this + 32) == 1 && *((_DWORD *)this + 42) == 64 )
    {
      if ( PtInRect(v7 + 55, v9) )
      {
        ManipulationInjector::StartZoom(v6, &v14, 1, a3);
        *((_BYTE *)this + 972) = ManipulationInjector::IsInContact(v6);
        v12 = *((_DWORD *)this + 228);
        ISMTracing::MPCGestureHandler_StartZoom<long &,long &,unsigned long const &,unsigned long>(
          (int *)&v14,
          &v14.y,
          &v13,
          &v12);
      }
    }
    else if ( ManipulationInjector::IsInContactForDeviceId(v8, a3) && (*v10 == 16 || *v10 == 32) )
    {
      *((_DWORD *)this + 242) = *(_DWORD *)(v11 + 868);
    }
  }
}
