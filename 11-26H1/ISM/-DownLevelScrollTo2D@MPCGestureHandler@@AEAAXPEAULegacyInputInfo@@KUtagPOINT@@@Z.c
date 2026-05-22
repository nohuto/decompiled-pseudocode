/*
 * XREFs of ?DownLevelScrollTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD918
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BDA84 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@.c)
 * Callees:
 *     ??$MPCGestureHandler_StartScroll@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x1800BC96C (--$MPCGestureHandler_StartScroll@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x180114D44 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x180115314 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x18011576C (-StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 */

void __fastcall MPCGestureHandler::DownLevelScrollTo2D(
        MPCGestureHandler *this,
        struct LegacyInputInfo *a2,
        unsigned int a3,
        struct tagPOINT a4)
{
  ManipulationInjector *v7; // rsi
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF
  struct tagPOINT v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = a4;
  v9 = a3;
  if ( *((_DWORD *)a2 + 67) )
  {
    v7 = (MPCGestureHandler *)((char *)this + 80);
    if ( *((_DWORD *)this + 42) == 1 )
    {
      if ( ManipulationInjector::IsInContactForDeviceId((MPCGestureHandler *)((char *)this + 80), a3) )
      {
        *((_DWORD *)this + 240) = *((_DWORD *)a2 + 215);
        *((_DWORD *)this + 241) = *((_DWORD *)a2 + 216);
      }
    }
    else
    {
      if ( !PtInRect((const RECT *)a2 + 55, a4) )
        return;
      ManipulationInjector::StartPan(v7, &v10, a3);
      if ( *((_DWORD *)this + 42) == 1 )
      {
        ManipulationInjector::InjectPan(v7, *((float *)a2 + 215), *((float *)a2 + 216), a3);
        *((_BYTE *)this + 972) = ManipulationInjector::IsInContactForDeviceId(v7, a3);
      }
      v8 = *((_DWORD *)this + 228);
      ISMTracing::MPCGestureHandler_StartScroll<long &,long &,unsigned long const &,unsigned long>(
        (int *)&v10,
        &v10.y,
        &v9,
        &v8);
    }
    if ( *((_BYTE *)this + 972) )
    {
      *((_QWORD *)this + 118) = *((_QWORD *)a2 + 2);
      *((_QWORD *)this + 119) = 0LL;
    }
  }
}
