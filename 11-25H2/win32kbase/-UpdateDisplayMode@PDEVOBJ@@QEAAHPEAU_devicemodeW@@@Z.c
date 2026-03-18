/*
 * XREFs of ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x140093688
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14015DE94 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     HmgSafeNextObjt @ 0x1400726E0 (HmgSafeNextObjt.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x14007553C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x14008D2D8 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x140092BB0 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x140093290 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1400939A0 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x140093FC8 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     GreHideSprites @ 0x1400940D8 (GreHideSprites.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x140109B20 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall PDEVOBJ::UpdateDisplayMode(PDEVOBJ *this, struct _devicemodeW *Src)
{
  __int64 v4; // r14
  unsigned int (__fastcall *v5)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *); // rbx
  __int64 v7; // rcx
  struct SURFACE *v8; // r15
  int v9; // eax
  __int64 v10; // rcx
  WORD dmSize; // cx
  __int64 v12; // rcx
  DC *v13; // rbx
  int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // esi
  DC *v17; // [rsp+40h] [rbp-C0h] BYREF
  HSURF v18; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v19[32]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+78h] [rbp-88h]
  _DWORD v21[80]; // [rsp+80h] [rbp-80h] BYREF

  v4 = *(_QWORD *)(W32GetSessionState(this) + 88);
  v5 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *))(*(_QWORD *)this + 2672LL);
  if ( !v5 )
  {
    WdLogSingleEntry1(4LL, 0LL);
    WdLogGlobalForLineNumber = 2593;
    return 0LL;
  }
  GreHideSprites(*(_QWORD *)this, 1LL);
  memset(v21, 0, sizeof(v21));
  v7 = *(_QWORD *)this;
  v18 = 0LL;
  if ( !v5(*(_QWORD *)(v7 + 1784), *(_QWORD *)(v7 + 2584), Src, v7 + 2120, v21, &v18) )
  {
    WdLogSingleEntry1(3LL, 0LL);
    WdLogGlobalForLineNumber = 2616;
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2712;
    return 0LL;
  }
  *(_DWORD *)(*(_QWORD *)this + 2136LL) = v21[4];
  *(_DWORD *)(*(_QWORD *)this + 2140LL) = v21[5];
  *(_DWORD *)(*(_QWORD *)this + 2128LL) = v21[2];
  *(_DWORD *)(*(_QWORD *)this + 2132LL) = v21[3];
  *(_DWORD *)(*(_QWORD *)this + 2160LL) = v21[10];
  *(_DWORD *)(*(_QWORD *)this + 2164LL) = v21[11];
  *(_DWORD *)(*(_QWORD *)this + 2376LL) = v21[64];
  *(_DWORD *)(*(_QWORD *)this + 2380LL) = v21[65];
  *(_DWORD *)(*(_QWORD *)this + 2184LL) = v21[16];
  *(_DWORD *)(*(_QWORD *)this + 2188LL) = v21[17];
  *(_DWORD *)(*(_QWORD *)this + 2532LL) = (((Src->dmDisplayOrientation - 1) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | *(_DWORD *)(*(_QWORD *)this + 2532LL) & 0xFFFFFF7F;
  v8 = *(struct SURFACE **)(*(_QWORD *)this + 2544LL);
  PDEVOBJ::vDisableSurface(this, 0);
  SURFREF::SURFREF((SURFREF *)v19, v8);
  HmgDecrementShareReferenceCountEx(v8, 0LL);
  v9 = SURFACE::bDeleteSurface(v20, 0, 0);
  v10 = v20;
  if ( v9 )
    v10 = 0LL;
  v20 = v10;
  SURFREF::~SURFREF((SURFREF *)v19);
  PDEVOBJ::bMakeSurface(this, v18);
  dmSize = *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 2584LL) + 68LL);
  if ( dmSize >= Src->dmSize )
    dmSize = Src->dmSize;
  memmove(*(void **)(*(_QWORD *)this + 2584LL), Src, dmSize);
  v12 = 0LL;
  v17 = 0LL;
  while ( 1 )
  {
    v16 = HmgSafeNextObjt(v12, 1, &v17);
    if ( !v16 )
      break;
    v13 = v17;
    if ( (*((_DWORD *)v17 + 9) & 0x2000) == 0 )
    {
      if ( *((struct SURFACE **)v17 + 62) == v8 )
      {
        DC::pSurface(v17, *(struct SURFACE **)(*(_QWORD *)this + 2544LL));
        *((_QWORD *)v13 + 64) = **(_QWORD **)&PDEVOBJ::sizl(this);
        *((_DWORD *)v13 + 79) |= 0xFu;
      }
      v14 = *((_DWORD *)v13 + 9);
      if ( (v14 & 0x200) != 0 && (*(_DWORD *)(*((_QWORD *)v13 + 62) + 112LL) & 0x200) != 0 )
        v15 = v14 | 0x8000;
      else
        v15 = v14 & 0xFFFF7FFF;
      *((_DWORD *)v13 + 9) = v15;
    }
    v12 = v16;
  }
  vResetSurfacePalette(*(HDEV *)this);
  ++*(_DWORD *)(v4 + 3640);
  return 1LL;
}
