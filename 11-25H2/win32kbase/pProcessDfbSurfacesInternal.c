/*
 * XREFs of pProcessDfbSurfacesInternal @ 0x1400700D0
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x140070C90 (pProcessDfbSurfaces2.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x14001A530 (GreAcquireHmgrSemaphore.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B6B0 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1MLOCKOBJ@@QEAA@XZ @ 0x140045EA4 (--1MLOCKOBJ@@QEAA@XZ.c)
 *     bMigrateSurfaceForConversion @ 0x140070324 (bMigrateSurfaceForConversion.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x140071D90 (vDynamicConvertNewSurfaceDCs.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14008675C (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x140086D90 (-bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x14008C0E0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x14008CAD0 (--1SURFMEM@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008E1A8 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x14008E5C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1401C66EC (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 */

struct OBJECT *__fastcall pProcessDfbSurfacesInternal(struct SURFACE *this)
{
  struct OBJECT *v1; // rbx
  struct OBJECT *v2; // rdi
  int v4; // eax
  int v5; // ecx
  __int64 v7; // rbx
  __int64 v8; // rcx
  struct _ERESOURCE **v9; // rcx
  int v10; // eax
  int v11; // eax
  struct OBJECT *v12; // [rsp+60h] [rbp-A0h] BYREF
  char v13; // [rsp+68h] [rbp-98h]
  int v14; // [rsp+6Ch] [rbp-94h]
  _DWORD v15[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v16; // [rsp+80h] [rbp-80h]
  __int64 v17; // [rsp+88h] [rbp-78h]
  __int128 v18; // [rsp+90h] [rbp-70h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-60h]
  int v20; // [rsp+A8h] [rbp-58h]
  char v21[80]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v22; // [rsp+100h] [rbp+0h]
  __int64 v23; // [rsp+108h] [rbp+8h]
  int v24; // [rsp+160h] [rbp+60h] BYREF

  v1 = (struct OBJECT *)*((_QWORD *)this + 70);
  v2 = 0LL;
  W32GetSessionState(this);
  v4 = *((_DWORD *)this + 28);
  if ( (v4 & 0x80100000) == 0 )
  {
    v5 = *((_DWORD *)this + 29) & 1;
    if ( v5 || (v4 & 0x800) == 0 || *((_WORD *)this + 50) != 3 )
    {
      v12 = 0LL;
      v13 = 0;
      v14 = 0;
      if ( !v1 )
      {
        v15[0] = *((_DWORD *)this + 24);
        v15[1] = *((_DWORD *)this + 14);
        v15[2] = *((_DWORD *)this + 15);
        v15[3] = 0;
        v17 = 1LL;
        v16 = 0LL;
        if ( v5 )
        {
          v11 = 1;
          if ( (*((_WORD *)this + 51) & 0x800) != 0 )
            v11 = 2049;
          LODWORD(v17) = v11;
        }
        if ( !(unsigned int)SURFMEM::bCreateDIB(
                              (SURFMEM *)&v12,
                              (struct _DEVBITMAPINFO *)v15,
                              0LL,
                              0LL,
                              0,
                              0LL,
                              0LL,
                              0,
                              1,
                              0,
                              0) )
          goto LABEL_25;
        v7 = *((_QWORD *)this + 6);
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v21);
        v23 = 0LL;
        v18 = 0LL;
        v22 = 0LL;
        DEVLOCKOBJ::bPrepareTrgDco((DEVLOCKOBJ *)&v18, 0LL);
        v20 = 1;
        if ( (*(_DWORD *)(v7 + 40) & 1) != 0 )
        {
          v9 = *(struct _ERESOURCE ***)(W32GetSessionState(v8) + 88);
          *(_QWORD *)&v18 = *(_QWORD *)(v7 + 48);
          v19 = v7;
          if ( (struct _ERESOURCE *)v18 == &(*v9)[11] )
          {
            v20 |= 0x100000u;
            GreAcquireSemaphore<2,>(v9);
          }
          else
          {
            GreAcquireSemaphore<8,PDEVOBJ>(v7);
          }
        }
        GreAcquireHmgrSemaphore(v8);
        v10 = *((_DWORD *)this + 29);
        v1 = v12;
        v24 = 1;
        if ( (v10 & 1) != 0 )
          *((_DWORD *)v12 + 28) |= 0x800u;
        *((_QWORD *)v1 + 6) = *((_QWORD *)this + 6);
        MLOCKOBJ::~MLOCKOBJ((MLOCKOBJ *)&v24);
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v18);
      }
      if ( (unsigned int)bMigrateSurfaceForConversion(this, v1) )
      {
        if ( v12 )
          v13 |= 1u;
        v2 = v1;
LABEL_8:
        SURFMEM::~SURFMEM((SURFMEM *)&v12);
        return v2;
      }
LABEL_25:
      if ( (*((_DWORD *)this + 29) & 1) != 0 )
        vCleanupRedirectionSurface(this, 0);
      goto LABEL_8;
    }
  }
  return 0LL;
}
