/*
 * XREFs of ?ProcessSetSurface@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFACEMATERIALINPUT_SETSURFACE@@@Z @ 0x180210320
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180151FC4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?SetSurfaceContentRect@CSceneSurfaceMaterialInput@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180281ABC (-SetSurfaceContentRect@CSceneSurfaceMaterialInput@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneSurfaceMaterialInput::ProcessSetSurface(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SCENESURFACEMATERIALINPUT_SETSURFACE *a3)
{
  __int64 v3; // rbx
  unsigned int v5; // edx
  struct CResource *ResourceWithoutType; // rsi
  struct CResource *v10; // rax
  float v11[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  ResourceWithoutType = 0LL;
  if ( !v5
    || (ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v5),
        (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 64LL))(
          ResourceWithoutType,
          162LL))
    || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 64LL))(
         ResourceWithoutType,
         29LL) )
  {
    if ( ResourceWithoutType != this[11] )
    {
      CResource::RegisterNotifier((CResource *)this, ResourceWithoutType);
      CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
      v10 = *this;
      this[11] = ResourceWithoutType;
      (*((void (__fastcall **)(struct CResource **, _QWORD, struct CResource **))v10 + 10))(this, 0LL, this);
    }
    do
    {
      v11[v3] = (float)*((int *)a3 + v3 + 3);
      ++v3;
    }
    while ( v3 < 4 );
    CSceneSurfaceMaterialInput::SetSurfaceContentRect(this, v11);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\spatialsurfacematerialinput.cpp",
      (const char *)0x88980403LL);
    return 2291663875LL;
  }
}
