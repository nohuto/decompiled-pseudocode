/*
 * XREFs of ?DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD810
 * Callers:
 *     ?DownLevelSelectTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BDA34 (-DownLevelSelectTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BDA84 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@.c)
 * Callees:
 *     ?IsInContact@ManipulationInjector@@QEAA_NXZ @ 0x1800B1F9C (-IsInContact@ManipulationInjector@@QEAA_NXZ.c)
 *     ??$MPCGestureHandler_InjectRelease@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x1800BC7A4 (--$MPCGestureHandler_InjectRelease@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 *     ?ResetGestureState@MPCSpatialGestureRecognizerHandler@@QEAAXXZ @ 0x1800C42C8 (-ResetGestureState@MPCSpatialGestureRecognizerHandler@@QEAAXXZ.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x180113CF8 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x180114C00 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x180115314 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 */

void __fastcall MPCGestureHandler::DownLevelReleaseTo2D(
        MPCGestureHandler *this,
        struct LegacyInputInfo *a2,
        unsigned int a3,
        struct tagPOINT a4)
{
  ManipulationInjector *v4; // rdi
  unsigned int v8; // edx
  MPCSpatialGestureRecognizerHandler *v9; // rcx
  struct tagPOINT v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+50h] [rbp+18h] BYREF
  struct tagPOINT v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = a4;
  v11 = a3;
  v4 = (MPCGestureHandler *)((char *)this + 80);
  if ( *((_DWORD *)this + 32) == 1 && *((_DWORD *)this + 42) == 64 )
  {
    v10 = (struct tagPOINT)*((_QWORD *)this + 28);
    ManipulationInjector::InjectDrag(v4, &v10, a3);
    *((_BYTE *)this + 972) = ManipulationInjector::IsInContactForDeviceId(v4, a3);
  }
  if ( ManipulationInjector::IsInContactForDeviceId(v4, a3) && *((_DWORD *)this + 42) == 1 )
    *((float *)this + 239) = *((float *)this + 238)
                           / (float)((double)(*((_DWORD *)a2 + 4) - *((_DWORD *)this + 236))
                                   / (double)(int)qword_180253EC8);
  ManipulationInjector::EndManipulation(v4, v8);
  if ( !ManipulationInjector::IsInContact(v4) )
  {
    v9 = (MPCSpatialGestureRecognizerHandler *)*((_QWORD *)this + 113);
    if ( v9 )
      MPCSpatialGestureRecognizerHandler::ResetGestureState(v9);
  }
  v10.x = *((_DWORD *)this + 228);
  ISMTracing::MPCGestureHandler_InjectRelease<long &,long &,unsigned long const &,unsigned long>(
    (int *)&v12,
    &v12.y,
    &v11,
    (unsigned int *)&v10);
}
