/*
 * XREFs of ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x18016E794
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800BAF10 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18016E8B0 (-BuildFromRectFs@CRectanglesShape@@QEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessSetDirtyRect(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_SETDIRTYRECT *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // r8d
  __int64 v8; // rax
  _QWORD v9[5]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v10[16]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v11; // [rsp+68h] [rbp-18h] BYREF

  v5 = *((_DWORD *)a3 + 2);
  v9[0] = &CRectanglesShape::`vftable';
  v9[2] = v10;
  v9[3] = v10;
  v9[4] = &v11;
  v9[1] = 0LL;
  v11 = 0LL;
  if ( v5 && a5 == 16LL * v5 )
  {
    CRectanglesShape::BuildFromRectFs(v9, a4);
    *((_QWORD *)this + 51) = v9;
    (*(void (__fastcall **)(CPrimitiveGroup *, __int64, CPrimitiveGroup *))(*(_QWORD *)this + 80LL))(this, 1LL, this);
    *((_QWORD *)this + 51) = 0LL;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x1AAu, 0LL);
    v8 = *(_QWORD *)this;
    *((_QWORD *)this + 51) = 0LL;
    (*(void (__fastcall **)(CPrimitiveGroup *, _QWORD, _QWORD))(v8 + 80))(this, 0LL, 0LL);
  }
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v9);
  return 0LL;
}
