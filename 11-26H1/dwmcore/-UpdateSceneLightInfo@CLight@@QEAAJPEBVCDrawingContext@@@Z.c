/*
 * XREFs of ?UpdateSceneLightInfo@CLight@@QEAAJPEBVCDrawingContext@@@Z @ 0x180264E0C
 * Callers:
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1802351BC (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x1802069C0 (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLight::UpdateSceneLightInfo(CLight *this, const struct CDrawingContext *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(CLight *, const struct CDrawingContext *))(*(_QWORD *)this + 312LL))(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( !*((_BYTE *)this + 180) )
    {
      CSceneResourceManager::RegisterSceneListener(
        *(CSceneResourceManager **)(*((_QWORD *)this + 3) + 672LL),
        (struct ISceneNotificationListener *)(((unsigned __int64)this + 88) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
      *((_BYTE *)this + 180) = 1;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x158,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\light.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
