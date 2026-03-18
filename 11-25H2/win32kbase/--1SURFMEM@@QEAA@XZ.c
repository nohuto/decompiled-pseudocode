/*
 * XREFs of ??1SURFMEM@@QEAA@XZ @ 0x14008CAD0
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1400700D0 (pProcessDfbSurfacesInternal.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x140087050 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1400893B0 (-EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x14008A368 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x14008A3D4 (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x14008BE60 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 * Callees:
 *     HmgRemoveObject @ 0x140019EC0 (HmgRemoveObject.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001BC00 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     SURFACE_Free @ 0x14001D1C0 (SURFACE_Free.c)
 *     ?vUnlock@?$SEMOBJ@$0CE@@@QEAAXXZ @ 0x140046704 (-vUnlock@-$SEMOBJ@$0CE@@@QEAAXXZ.c)
 *     EngFreeUserMem @ 0x140073720 (EngFreeUserMem.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z @ 0x140083AF8 (-Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z.c)
 *     ?GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z @ 0x140083B68 (-GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z.c)
 *     ??0?$SEMOBJ@$0CE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140084FD8 (--0-$SEMOBJ@$0CE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x14008E750 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1SectionObj@Gre@@QEAA@XZ @ 0x1400E4AC0 (--1SectionObj@Gre@@QEAA@XZ.c)
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400F36E0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x14011DE58 (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x140129FB4 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1401C6124 (-vFreeKernelSection@@YAXPEAX@Z.c)
 */

void __fastcall SURFMEM::~SURFMEM(struct _BASEOBJECT **this)
{
  struct _BASEOBJECT *v2; // rcx
  struct _BASEOBJECT *v3; // rax
  __int64 v4; // rcx
  void *v5; // rsi
  __int64 v6; // rbx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  unsigned __int64 v10; // rax
  __int64 SessionState; // rax
  __int64 v12; // rcx
  PEPROCESS *v13; // r14
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rdx
  int v17; // eax
  __int128 v18; // [rsp+40h] [rbp-19h]
  __int128 v19; // [rsp+58h] [rbp-1h] BYREF
  __int128 v20; // [rsp+68h] [rbp+Fh]
  __int128 v21; // [rsp+78h] [rbp+1Fh]
  __int64 v22; // [rsp+C0h] [rbp+67h] BYREF
  struct _ERESOURCE *v23; // [rsp+C8h] [rbp+6Fh] BYREF

  v2 = *this;
  if ( v2 )
  {
    if ( ((_BYTE)this[1] & 1) != 0 )
    {
LABEL_3:
      HmgDecrementShareReferenceCountEx(v2, 0LL);
      return;
    }
    if ( !HmgRemoveObject(*(_QWORD *)v2, *((_DWORD *)this + 3) != 0, 1, 1, 5, 0LL) )
    {
      *((_WORD *)*this + 7) |= 0x40u;
      if ( *((_DWORD *)this + 3) )
        OBJECT::InterlockedDecrementExclusiveLockCount(*this);
      v2 = *this;
      goto LABEL_3;
    }
    if ( ((_BYTE)this[1] & 8) != 0 && *((_QWORD *)*this + 16) )
    {
      v22 = *((_QWORD *)*this + 16);
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v22);
      *((_QWORD *)*this + 16) = 0LL;
    }
    if ( *((_DWORD *)this + 3) )
      OBJECT::InterlockedDecrementExclusiveLockCount(*this);
    v3 = *this;
    v4 = *((unsigned __int16 *)*this + 51);
    v5 = (void *)*((_QWORD *)*this + 9);
    v6 = *((_QWORD *)*this + 31);
    v7 = *((_OWORD *)*this + 18);
    v19 = *((_OWORD *)*this + 17);
    v8 = *((_OWORD *)v3 + 19);
    v20 = v7;
    v9 = *(_OWORD *)((char *)v3 + 584);
    v21 = v8;
    v18 = *(_OWORD *)((char *)v3 + 600);
    if ( (v4 & 8) != 0 )
    {
      if ( (*((_DWORD *)v3 + 28) & 0x40000) != 0 && v5 )
      {
        if ( (v4 & 0x80u) == 0LL )
        {
          EngFreeUserMem(v5);
        }
        else
        {
          if ( *((_QWORD *)GreGetCurrentThread() + 8) )
          {
            v10 = *((_QWORD *)&v9 + 1);
            if ( DWORD2(v18) )
              v10 = (unsigned __int64)v5;
            v19 = 0uLL;
            v20 = v10;
            *(_QWORD *)&v21 = 0LL;
            DWORD2(v21) = 1;
            Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v19);
            *(_QWORD *)&v19 = 0LL;
            *((_QWORD *)&v20 + 1) = 0LL;
            if ( DWORD2(v18) )
              v5 = (void *)*((_QWORD *)&v9 + 1);
            *((_QWORD *)&v19 + 1) = 0LL;
            *(_QWORD *)&v20 = v5;
            *(_QWORD *)&v21 = 0LL;
            DWORD2(v21) = 2;
            Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v19);
          }
          if ( (_QWORD)v9 )
          {
            v22 = v9;
            Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v22);
          }
          else
          {
            GrepCaptureLiveMemoryDump(400LL, 68LL, 2LL);
          }
        }
      }
    }
    else if ( (v4 & 0x800) != 0 )
    {
      SessionState = W32GetSessionState(v4);
      SEMOBJ<36>::SEMOBJ<36>(&v23, *(struct _ERESOURCE ***)(SessionState + 88));
      v13 = (PEPROCESS *)*((_QWORD *)*this + 33);
      if ( v13 )
      {
        PsGetCurrentProcessWin32Process(v12);
        v14 = (_QWORD *)((char *)*this + 528);
        v15 = (_QWORD *)*v14;
        if ( (_QWORD *)*v14 != v14 )
        {
          if ( (_QWORD *)v15[1] != v14 || (v16 = (_QWORD *)*((_QWORD *)*this + 67), (_QWORD *)*v16 != v14) )
            __fastfail(3u);
          *v16 = v15;
          v15[1] = v16;
        }
        if ( v5 && v6 )
        {
          v17 = (unsigned int)GrepW32PidFromW32Process(v13);
          Gre::MapViewOfSectionObj::Unmap(v17, v5);
        }
      }
      W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v19);
      if ( v6 )
      {
        v22 = v6;
        Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v22);
      }
      SEMOBJ<36>::vUnlock(&v23);
    }
    else if ( (v4 & 0x10) != 0 )
    {
      vFreeKernelSection(v5);
    }
    SURFACE_Free(*this);
  }
}
