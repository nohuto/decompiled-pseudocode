/*
 * XREFs of ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z @ 0x180197C68
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRectangleGeometry::ProcessSetRectangle(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE *a3)
{
  unsigned int v3; // ebx
  __int64 i; // rsi
  int v7; // eax
  int v9; // eax

  v3 = 0;
  if ( *((_BYTE *)a3 + 41) )
  {
    v9 = ((__int64 (__fastcall *)(CRectangleGeometry *, void *, char *))off_1803DC5B8)(
           this,
           &CRectangleGeometry::sc_CornerRadius,
           (char *)a3 + 8);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x14Cu, 0LL);
      return v3;
    }
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v7 = (*((__int64 (__fastcall **)(CRectangleGeometry *, _QWORD, char *))*(&off_1802DC880 + i) + 3))(
             this,
             *(&off_1802DC880 + i),
             (char *)a3 + qword_1803A1190[i]);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x157u, 0LL);
        return v3;
      }
    }
  }
  *((_BYTE *)this + 188) = *((_BYTE *)a3 + 41) != 0;
  *((_BYTE *)this + 132) = *((_BYTE *)a3 + 40) != 0;
  *((_BYTE *)this + 192) = *((_BYTE *)a3 + 42) != 0;
  return v3;
}
