/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x140015360
 * Callers:
 *     GreCombineRgn @ 0x14000DFC0 (GreCombineRgn.c)
 *     GreGetRgnBox @ 0x140013370 (GreGetRgnBox.c)
 *     GrePtInRegion @ 0x140013490 (GrePtInRegion.c)
 *     NtGdiDeleteObjectApp @ 0x140013640 (NtGdiDeleteObjectApp.c)
 *     GreGetRegionData @ 0x140013A10 (GreGetRegionData.c)
 *     GreOffsetRgn @ 0x140014370 (GreOffsetRgn.c)
 *     bDeleteRegion @ 0x1400146C0 (bDeleteRegion.c)
 *     GreSetRectRgn @ 0x140014720 (GreSetRectRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x140014B10 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x140014F50 (SetRectRgnIndirect.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x14008AA94 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x14008B9F0 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreEqualRgn @ 0x140095FC0 (GreEqualRgn.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     GreRectInRegion @ 0x1400D0D70 (GreRectInRegion.c)
 *     GreIsValidRegion @ 0x140132870 (GreIsValidRegion.c)
 *     GreCopyVisRgn @ 0x14017D470 (GreCopyVisRgn.c)
 *     InitializeGre @ 0x1402EC79C (InitializeGre.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x140012490 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?ReportOverflow@OBJECT@@QEAAXK@Z @ 0x1401C5230 (-ReportOverflow@OBJECT@@QEAAXK@Z.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rax
  __int64 v4; // rcx
  char **v5; // rdx

  if ( !*((_DWORD *)this + 12) )
    RGNOBJ::UpdateUserRgn(this);
  v2 = *(volatile signed __int32 **)this;
  if ( *(_QWORD *)this )
  {
    _InterlockedDecrement(v2 + 3);
    if ( *((_WORD *)v2 + 6) == 0xFFFF )
      OBJECT::ReportOverflow((OBJECT *)v2, 3u);
  }
  v3 = (char *)this + 8;
  if ( this != (RGNOBJAPI *)-8LL )
  {
    v4 = *(_QWORD *)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = (char **)*((_QWORD *)this + 2), *v5 != v3) )
      __fastfail(3u);
    *v5 = (char *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    *((_QWORD *)this + 2) = (char *)this + 8;
    *(_QWORD *)v3 = v3;
  }
}
