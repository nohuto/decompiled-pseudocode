/*
 * XREFs of ?RealizePrimitive@CReconstructableDrawListEntry@@QEAAJXZ @ 0x180007A40
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006E21C (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ?BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawListEntry@@PEAPEAVCDrawListPrimitive@@@Z @ 0x180007D60 (-BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawLis.c)
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180009D20 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CReconstructableDrawListEntry::RealizePrimitive(CReconstructableDrawListEntry *this)
{
  char *v1; // rdi
  __int64 v2; // rcx
  const struct CReconstructableDrawListEntry *v3; // r8
  int v5; // ebx
  void (__fastcall ***v6)(_QWORD, __int64); // rbx
  void (__fastcall ***v7)(_QWORD, __int64); // rdx
  struct CDrawListPrimitive *v8; // [rsp+28h] [rbp-18h] BYREF
  char v9; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  void (__fastcall ***v11)(_QWORD, __int64); // [rsp+50h] [rbp+10h] BYREF

  v1 = (char *)this + 16;
  v2 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v2 + 8) || IsEmpty((const struct D2D_RECT_F *)(v2 + 56)) )
    return 0LL;
  v11 = 0LL;
  v8 = 0LL;
  v9 = 1;
  v5 = CDrawListEntryBuilder::BuildPrimitiveFromReconstructableDrawList(v3, &v8);
  if ( v9 )
    std::unique_ptr<CShape>::reset(&v11, v8);
  if ( v5 >= 0 )
  {
    v6 = *(void (__fastcall ****)(_QWORD, __int64))v1;
    v7 = v11;
    *(_QWORD *)v1 = 0LL;
    v11 = 0LL;
    std::unique_ptr<CShape>::reset(v1, v7);
    if ( v6 )
      (**v6)(v6, 1LL);
    if ( v11 )
      (**v11)(v11, 1LL);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC4,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\reconstructabledrawlistentry.cpp",
    (const char *)(unsigned int)v5,
    (int)&v11);
  if ( v11 )
    (**v11)(v11, 1LL);
  return (unsigned int)v5;
}
