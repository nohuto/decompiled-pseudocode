/*
 * XREFs of ?SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z @ 0x18027D248
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x1802629F8 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV-$TM.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?CreatesCycle@CBrush@@IEAA_NPEAV1@@Z @ 0x1801D3200 (-CreatesCycle@CBrush@@IEAA_NPEAV1@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNineGridBrush::SetSource(struct CResource **this, struct CBrush *a2)
{
  struct CResource *v4; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != this[18] )
  {
    if ( (!a2
       || (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 19LL)
       || (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 142LL)
       || (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 59LL)
       || (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 47LL))
      && !CBrush::CreatesCycle((CBrush *)this, a2) )
    {
      CResource::RegisterNotifier((CResource *)this, a2);
      CResource::UnRegisterNotifierInternal((CResource *)this, this[18]);
      v4 = *this;
      this[18] = a2;
      (*((void (__fastcall **)(struct CResource **, __int64))v4 + 10))(this, 14LL);
    }
    else
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0xCF,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\ninegridbrush.cpp",
        (const char *)0x80070057LL);
    }
  }
  return 0LL;
}
