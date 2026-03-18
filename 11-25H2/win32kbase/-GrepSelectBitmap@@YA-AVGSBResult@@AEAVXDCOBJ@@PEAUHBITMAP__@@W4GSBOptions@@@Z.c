/*
 * XREFs of ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140177760
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x14001C350 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreSelectBitmap @ 0x140042CE0 (GreSelectBitmap.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x140012950 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     HmgShareLockCheck @ 0x140017AD0 (HmgShareLockCheck.c)
 *     GreAcquireHmgrSemaphore @ 0x14001A530 (GreAcquireHmgrSemaphore.c)
 *     HmgPentryFromPobj @ 0x14001AA80 (HmgPentryFromPobj.c)
 *     ??0?$SEMOBJEXORSHARED@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x14001AD48 (--0-$SEMOBJEXORSHARED@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x14001C2F0 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     HmgIncrementShareReferenceCount @ 0x14001C920 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     ??1?$SEMOBJEXORSHARED@$01@@QEAA@XZ @ 0x140043B3C (--1-$SEMOBJEXORSHARED@$01@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x140045580 (GreReleaseHmgrSemaphore.c)
 *     ??1MLOCKOBJ@@QEAA@XZ @ 0x140045EA4 (--1MLOCKOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140046948 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x14006F5E0 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x14007553C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x14008D2D8 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x14008D32C (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x14008E750 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140093C3C (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bIsDefault@SURFACE@@QEBA_NXZ @ 0x1400C6D7C (-bIsDefault@SURFACE@@QEBA_NXZ.c)
 *     ?GSBIsSurfaceAllowedInDC@@YA?AW4GSBStatus@GSBResult@@PEAVSURFACE@@PEAUHDEV__@@@Z @ 0x1400CD058 (-GSBIsSurfaceAllowedInDC@@YA-AW4GSBStatus@GSBResult@@PEAVSURFACE@@PEAUHDEV__@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400CD1B8 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     vMirrorIncludeNotifyWrap @ 0x1400D52F8 (vMirrorIncludeNotifyWrap.c)
 *     IsvMirrorIncludeNotifySupported @ 0x1400DD01C (IsvMirrorIncludeNotifySupported.c)
 *     ?GSBIsCompatible@@YA?AW4GSBStatus@GSBResult@@PEAPEAVPALETTE@@PEAV3@PEAVSURFACE@@PEAUHDEV__@@@Z @ 0x1400DD160 (-GSBIsCompatible@@YA-AW4GSBStatus@GSBResult@@PEAPEAVPALETTE@@PEAV3@PEAVSURFACE@@PEAUHDEV__@@@Z.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1400DE8DC (-bStockSurface@SURFACE@@QEAAHXZ.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1400FA670 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140177330 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1401C3C68 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1401C65FC (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 */

__int64 __fastcall GrepSelectBitmap(__int64 a1, XDCOBJ *a2, __int64 a3, char a4)
{
  struct HOBJ__ *v5; // r13
  struct Gre::Base::SESSION_GLOBALS *v9; // rsi
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  SURFACE *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // r9
  unsigned int v16; // r15d
  __int64 v17; // r11
  char v18; // al
  __int64 v19; // r11
  struct SURFACE *v20; // rax
  __int64 v21; // r15
  DC *v22; // rcx
  struct _BASEOBJECT *v23; // rcx
  __int64 v24; // r12
  bool IsDefault; // al
  DC *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct _BASEOBJECT *v29; // rax
  int v30; // eax
  BOOL v31; // r8d
  unsigned int v32; // ecx
  int v33; // edx
  bool v34; // al
  unsigned int v35; // edx
  int v36; // eax
  unsigned int *v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  DC *v41; // rcx
  struct Gre::Base::SESSION_GLOBALS *v42; // rbx
  __int64 v44; // [rsp+20h] [rbp-69h] BYREF
  _BYTE v45[16]; // [rsp+28h] [rbp-61h] BYREF
  unsigned int v46; // [rsp+38h] [rbp-51h]
  __int64 v47; // [rsp+40h] [rbp-49h] BYREF
  char v48; // [rsp+48h] [rbp-41h]
  _BYTE v49[32]; // [rsp+50h] [rbp-39h] BYREF
  SURFACE *v50; // [rsp+70h] [rbp-19h]
  struct Gre::Base::SESSION_GLOBALS *v51; // [rsp+78h] [rbp-11h]
  _BYTE v52[96]; // [rsp+80h] [rbp-9h] BYREF
  struct _BASEOBJECT *v53; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v54; // [rsp+100h] [rbp+77h]

  v54 = a3;
  v5 = 0LL;
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v49);
  v9 = (struct Gre::Base::SESSION_GLOBALS *)*((_QWORD *)a2 + 2);
  v51 = v9;
  v50 = 0LL;
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v44);
  v50 = (SURFACE *)HmgShareLockCheck(a3, 5);
  if ( v50 )
  {
    SEMOBJEXORSHARED<2>::SEMOBJEXORSHARED<2>((__int64)v45, (struct _ERESOURCE **)v9, (a4 & 2) != 0);
    GreAcquireHmgrSemaphore(v10);
    v11 = *(_QWORD **)a2;
    v12 = v50;
    LODWORD(v53) = 1;
    v47 = 0LL;
    v13 = v11[6];
    v14 = HmgPentryFromPobj(v11);
    v15 = *(_QWORD **)a2;
    v16 = *(_DWORD *)(v14 + 8) & 0xFFFFFFFE;
    if ( *(_DWORD *)(*(_QWORD *)a2 + 32LL) == 1 )
    {
      if ( !*((_DWORD *)v12 + 42) || SURFACE::bStockSurface(v12) || *((_QWORD *)v12 + 20) == *v15 )
      {
        v18 = GSBIsCompatible(&v47, *((_QWORD *)v12 + 16), (__int64)v12, v15[6]);
        if ( v18 )
        {
          *(_QWORD *)a1 = v19;
        }
        else
        {
          v18 = GSBIsSurfaceAllowedInDC((__int64)v12, *(_QWORD *)(*(_QWORD *)a2 + 48LL));
          if ( !v18 )
          {
            if ( v16 && (*((_DWORD *)v12 + 28) & 0x800) != 0 )
            {
              *(_QWORD *)a1 = 0LL;
              *(_BYTE *)(a1 + 8) = 9;
            }
            else if ( (a4 & 4) != 0 || v16 )
            {
              v20 = XDCOBJ::pSurfaceEff(a2);
              v21 = (__int64)v20;
              if ( _bittest((const signed __int32 *)v20 + 28, 0x1Au)
                && _bittest((const signed __int32 *)v12 + 28, 0x1Au)
                && (*((_DWORD *)v20 + 29) & 0x200) == 0
                || (a4 & 1) != 0 )
              {
                v22 = *(DC **)a2;
                v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL);
                if ( (v46 & 7) != 0 )
                  DC::dwSetLayout(v22, -1, 0);
                v23 = (struct _BASEOBJECT *)v47;
                if ( *((_QWORD *)v12 + 16) != v47 )
                {
                  *((_DWORD *)v12 + 28) |= 0x8000000u;
                  *((_QWORD *)v12 + 16) = v23;
                  if ( v23 )
                    HmgIncrementShareReferenceCount(v23);
                }
                if ( (*(_DWORD *)(v21 + 112) & 0x1000000) != 0 )
                  v5 = *(struct HOBJ__ **)v21;
                v24 = *(_QWORD *)(v21 + 32);
                if ( v54 != v24 )
                {
                  IsDefault = SURFACE::bIsDefault(v12);
                  v26 = *(DC **)a2;
                  if ( IsDefault )
                  {
                    DC::pSurface(v26, 0LL);
                  }
                  else
                  {
                    DC::pSurface(v26, v12);
                    if ( SURFACE::bStockSurface(v12) || !*((_WORD *)v12 + 50) && *((_DWORD *)v12 + 54) )
                      *(_DWORD *)(*(_QWORD *)a2 + 36LL) |= 0x10000u;
                    else
                      *(_DWORD *)(*(_QWORD *)a2 + 36LL) &= ~0x10000u;
                  }
                  *(_QWORD *)(*(_QWORD *)a2 + 512LL) = *((_QWORD *)v12 + 7);
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 152LL) |= 0xFu;
                  if ( !SURFACE::bIsDefault((SURFACE *)v21) )
                  {
                    if ( (*(_DWORD *)(v21 + 112) & 0x10) != 0 && (int)IsvMirrorIncludeNotifySupported(v28, v27) >= 0 )
                      vMirrorIncludeNotifyWrap((__int64)a2, v21, 0);
                    SURFACE::vDec_cRef((SURFACE *)v21);
                    v28 = 0LL;
                    if ( !*(_DWORD *)(v21 + 168) )
                    {
                      if ( v5 )
                        v5 = *(struct HOBJ__ **)v21;
                      if ( (*(_DWORD *)(v21 + 112) & 0x8000000) != 0 )
                      {
                        v29 = *(struct _BASEOBJECT **)(v21 + 128);
                        *(_QWORD *)(v21 + 128) = 0LL;
                        v53 = v29;
                        XEPALOBJ::vUnrefPalette(&v53);
                      }
                      *(_DWORD *)(v21 + 112) &= ~0x8000000u;
                    }
                  }
                  if ( (int)IsvMirrorIncludeNotifySupported(v28, v27) >= 0 )
                    vMirrorIncludeNotifyWrap((__int64)a2, (__int64)v12, 1u);
                  v30 = *((_DWORD *)v12 + 28);
                  v31 = (v30 & 0x4000) != 0 || (v30 & 0x800010) != 0 && (*(_DWORD *)(v13 + 40) & 1) != 0;
                  v32 = *(_DWORD *)(*(_QWORD *)a2 + 36LL) | 0x200;
                  if ( !v31 )
                    v32 = *(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xFFFFFDFF;
                  *(_DWORD *)(*(_QWORD *)a2 + 36LL) = v32;
                  v33 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
                  v34 = (v33 & *((_DWORD *)v12 + 28) & 0x200) != 0;
                  v35 = v33 | 0x8000;
                  if ( !v34 )
                    v35 = *(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xFFFF7FFF;
                  *(_DWORD *)(*(_QWORD *)a2 + 36LL) = v35;
                  if ( !SURFACE::bIsDefault(v12) )
                  {
                    HmgIncrementShareReferenceCount(v12);
                    ++*((_DWORD *)v12 + 42);
                    if ( !SURFACE::bStockSurface(v12) )
                    {
                      *((_QWORD *)v12 + 20) = **(_QWORD **)a2;
                      *((_QWORD *)v12 + 6) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
                    }
                  }
                  v36 = SURFACE::bDIBSection(v12);
                  *v37 = *v37 & 0xFFFFFFFE | (v36 != 0);
                  if ( (unsigned int)SURFACE::bDIBSection(v12) )
                    v39 = *((_QWORD *)v12 + 25);
                  else
                    v39 = 0LL;
                  *(_QWORD *)(v38 + 24) = v39;
                  HmgDecrementShareReferenceCountEx(v50, 0LL);
                  v50 = 0LL;
                  GreReleaseHmgrSemaphore(v40);
                  v41 = *(DC **)a2;
                  LODWORD(v53) = 0;
                  DC::bSetDefaultRegion(v41);
                  DC::AcquireDcVisRgnShared(*(DC **)a2);
                  DC::vUpdate_VisRect(*(DC **)a2, *(struct REGION **)(*(_QWORD *)a2 + 1136LL));
                  if ( v48 )
                    CPushLock::ReleaseLock((CPushLock *)(v47 + 1112));
                  if ( v5 )
                  {
                    v42 = v51;
                    SURFREF::SURFREF((SURFREF *)v52, v5, v51);
                    SURFREF::bDeleteSurface((SURFREF *)v52);
                    v24 = *(_QWORD *)(*((_QWORD *)v42 + 376) + 168LL);
                    SURFREF::~SURFREF((SURFREF *)v52);
                  }
                }
                if ( (v46 & 7) != 0 )
                  DC::dwSetLayout(*(DC **)a2, -1, v46);
                *(_QWORD *)a1 = v24;
                *(_BYTE *)(a1 + 8) = 0;
              }
              else
              {
                *(_BYTE *)(a1 + 8) = 11;
                *(_QWORD *)a1 = 0LL;
              }
            }
            else
            {
              *(_QWORD *)a1 = 0LL;
              *(_BYTE *)(a1 + 8) = 10;
            }
            goto LABEL_74;
          }
          *(_QWORD *)a1 = 0LL;
        }
        *(_BYTE *)(a1 + 8) = v18;
      }
      else
      {
        *(_QWORD *)a1 = v17;
        *(_BYTE *)(a1 + 8) = 7;
      }
    }
    else
    {
      *(_BYTE *)(a1 + 8) = 6;
      *(_QWORD *)a1 = 0LL;
    }
LABEL_74:
    MLOCKOBJ::~MLOCKOBJ((MLOCKOBJ *)&v53);
    SEMOBJEXORSHARED<2>::~SEMOBJEXORSHARED<2>((__int64)v45);
    goto LABEL_75;
  }
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 5;
LABEL_75:
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v44);
  SURFREF::~SURFREF((SURFREF *)v49);
  return a1;
}
