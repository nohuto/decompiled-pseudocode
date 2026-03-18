/*
 * XREFs of ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1400C9FCC
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHAEAVPDEVOBJ@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401F55B0 (-DrvUpdateDisplayModeInPdev@@YAHAEAVPDEVOBJ@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x140019050 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1400271B4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     HmgSafeNextObjt @ 0x140032210 (HmgSafeNextObjt.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1400392A4 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1400C8390 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1400C9EC4 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     GreHideSprites @ 0x1400CA32C (GreHideSprites.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x140149274 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x1401B9140 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall PDEVOBJ::UpdateDisplayMode(PDEVOBJ *this, struct _devicemodeW *Src)
{
  __int64 v4; // r14
  unsigned int (__fastcall *v5)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *); // rbx
  __int64 v7; // rcx
  DWORD dmDisplayOrientation; // eax
  int v9; // edx
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 SessionState; // rax
  int v14; // eax
  __int64 *v15; // rcx
  __int64 v16; // rax
  WORD dmSize; // ax
  __int64 v18; // rcx
  DC *v19; // rbx
  int v20; // edx
  unsigned int v21; // edx
  unsigned int Objt; // r15d
  DC *v23; // [rsp+40h] [rbp-C0h] BYREF
  HSURF v24; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v25[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int *v26; // [rsp+70h] [rbp-90h]
  _DWORD v27[80]; // [rsp+80h] [rbp-80h] BYREF

  v4 = *(_QWORD *)(W32GetSessionState(this) + 88);
  v5 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *))(*(_QWORD *)this + 2672LL);
  if ( !v5 )
  {
    WdLogSingleEntry1(4LL, 0LL);
    WdLogGlobalForLineNumber = 2561;
    return 0LL;
  }
  GreHideSprites(*(_QWORD *)this, 1LL);
  memset(v27, 0, sizeof(v27));
  v7 = *(_QWORD *)this;
  v24 = 0LL;
  if ( !v5(*(_QWORD *)(v7 + 1784), *(_QWORD *)(v7 + 2584), Src, v7 + 2120, v27, &v24) )
  {
    WdLogSingleEntry1(3LL, 0LL);
    WdLogGlobalForLineNumber = 2584;
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2680;
    return 0LL;
  }
  *(_DWORD *)(*(_QWORD *)this + 2136LL) = v27[4];
  *(_DWORD *)(*(_QWORD *)this + 2140LL) = v27[5];
  *(_DWORD *)(*(_QWORD *)this + 2128LL) = v27[2];
  *(_DWORD *)(*(_QWORD *)this + 2132LL) = v27[3];
  *(_DWORD *)(*(_QWORD *)this + 2160LL) = v27[10];
  *(_DWORD *)(*(_QWORD *)this + 2164LL) = v27[11];
  *(_DWORD *)(*(_QWORD *)this + 2376LL) = v27[64];
  *(_DWORD *)(*(_QWORD *)this + 2380LL) = v27[65];
  *(_DWORD *)(*(_QWORD *)this + 2184LL) = v27[16];
  *(_DWORD *)(*(_QWORD *)this + 2188LL) = v27[17];
  dmDisplayOrientation = Src->dmDisplayOrientation;
  if ( dmDisplayOrientation == 1 || (v9 = 0, dmDisplayOrientation == 3) )
    v9 = 128;
  *(_DWORD *)(*(_QWORD *)this + 2532LL) = v9 | *(_DWORD *)(*(_QWORD *)this + 2532LL) & 0xFFFFFF7F;
  v10 = *(__int64 **)(*(_QWORD *)this + 2544LL);
  PDEVOBJ::vDisableSurface(this, 0);
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>((__int64)v25, v11);
  if ( v10 )
  {
    v26 = (unsigned int *)v10;
    SessionState = W32GetSessionState(v12);
    HmgIncrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v26);
  }
  HmgDecrementShareReferenceCount(v4, (unsigned int *)v10);
  v14 = SURFACE::bDeleteSurface((__int64 *)v26, v4, 0, 0);
  v15 = (__int64 *)v26;
  if ( v14 )
    v15 = 0LL;
  v26 = (unsigned int *)v15;
  if ( v15 )
  {
    v16 = W32GetSessionState(v15);
    HmgDecrementShareReferenceCount(*(_QWORD *)(v16 + 88), v26);
  }
  PopThreadGuardedObject(v25);
  PDEVOBJ::bMakeSurface(this, (__int64)v24);
  dmSize = *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 2584LL) + 68LL);
  if ( dmSize >= Src->dmSize )
    dmSize = Src->dmSize;
  memmove(*(void **)(*(_QWORD *)this + 2584LL), Src, dmSize);
  v18 = 0LL;
  v23 = 0LL;
  while ( 1 )
  {
    Objt = HmgSafeNextObjt(v18, 1, (__int64 **)&v23);
    if ( !Objt )
      break;
    v19 = v23;
    if ( (*((_DWORD *)v23 + 9) & 0x2000) == 0 )
    {
      if ( *((__int64 **)v23 + 62) == v10 )
      {
        DC::pSurface(v23, *(struct SURFACE **)(*(_QWORD *)this + 2544LL));
        *((_QWORD *)v19 + 64) = **(_QWORD **)&PDEVOBJ::sizl(this);
        *((_DWORD *)v19 + 79) |= 0xFu;
      }
      v20 = *((_DWORD *)v19 + 9);
      if ( (v20 & 0x200) != 0 && (*(_DWORD *)(*((_QWORD *)v19 + 62) + 112LL) & 0x200) != 0 )
        v21 = v20 | 0x8000;
      else
        v21 = v20 & 0xFFFF7FFF;
      *((_DWORD *)v19 + 9) = v21;
    }
    v18 = Objt;
  }
  vResetSurfacePalette(*(_QWORD **)this);
  ++*(_DWORD *)(v4 + 3720);
  return 1LL;
}
