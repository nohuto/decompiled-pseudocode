/*
 * XREFs of ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z @ 0x140026360
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x140025048 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     EngCreateRedirectionDeviceBitmap @ 0x140025290 (EngCreateRedirectionDeviceBitmap.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x14002550C (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x140025D60 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x14002F2C0 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     PushThreadGuardedObject @ 0x140030350 (PushThreadGuardedObject.c)
 *     ?EngTryFreeUserMem@@YA_NPEAX@Z @ 0x140034444 (-EngTryFreeUserMem@@YA_NPEAX@Z.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     SURFACE_Free @ 0x140043FE0 (SURFACE_Free.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@_N2E@Z @ 0x1400C2B80 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@_N2E@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1400C2CFC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1400C4384 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1400C4910 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1400C9BF0 (--1EPALOBJ@@QEAA@XZ.c)
 *     SURFACE_Allocate @ 0x140113EC0 (SURFACE_Allocate.c)
 *     UserIsCurrentProcessImmersiveAppContainer @ 0x140119700 (UserIsCurrentProcessImmersiveAppContainer.c)
 *     ?bInit@W32PIDLOCK@@QEAA_NXZ @ 0x14015664C (-bInit@W32PIDLOCK@@QEAA_NXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x14015672C (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ?AllocateKernelSectionForUserMapping@@YAJKPEAPEAX@Z @ 0x14015D860 (-AllocateKernelSectionForUserMapping@@YAJKPEAPEAX@Z.c)
 *     ??1SectionObj@Gre@@QEAA@XZ @ 0x14015D9B0 (--1SectionObj@Gre@@QEAA@XZ.c)
 *     EngAllocUserMemEx @ 0x140163CF8 (EngAllocUserMemEx.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1401645D0 (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?AllocateSharedSection@@YAJKPEAPEAX00@Z @ 0x1401B46EC (-AllocateSharedSection@@YAJKPEAPEAX00@Z.c)
 *     ?set_AppContainerW32PID@SURFACE@@QEAAXK@Z @ 0x1401BBF80 (-set_AppContainerW32PID@SURFACE@@QEAAXK@Z.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1401BEC68 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1401C0010 (-vFreeKernelSection@@YAXPEAX@Z.c)
 */

__int64 __fastcall SURFMEM::bCreateDIB(
        SURFMEM *this,
        struct _DEVBITMAPINFO *a2,
        void *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned __int64 a7,
        int a8,
        int a9,
        int a10)
{
  unsigned int v10; // eax
  __int16 v13; // r15
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rbx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rbx
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  int v27; // eax
  int v28; // eax
  void *v29; // r14
  unsigned __int64 v30; // rcx
  __int64 v31; // r15
  _DWORD *v32; // r12
  int v33; // eax
  int v34; // eax
  PVOID v35; // rax
  __int64 v36; // rcx
  void *v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned int v41; // ebx
  HPALETTE v42; // rdx
  __int64 v43; // rdx
  _WORD *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  unsigned int CurrentProcessId; // ecx
  __int64 v48; // rax
  _DWORD *v49; // rcx
  __int64 v50; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  int v54; // ecx
  __int64 v55; // rcx
  __int64 v56; // rcx
  void *v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rcx
  struct _GRETHREAD *v60; // rax
  unsigned int v61; // eax
  __int64 SessionState; // rax
  __int64 v63; // rcx
  __int64 v64; // rbx
  struct OBJECT *v65; // r8
  struct HOBJ__ *v66; // rax
  __int64 v67; // rcx
  SURFACE *v68; // rbx
  unsigned int v69; // eax
  _OWORD *v70; // rax
  void *v71; // [rsp+30h] [rbp-81h] BYREF
  __int64 v72; // [rsp+38h] [rbp-79h]
  int v73; // [rsp+40h] [rbp-71h]
  void *v74; // [rsp+48h] [rbp-69h] BYREF
  __int128 v75; // [rsp+50h] [rbp-61h] BYREF
  __int128 v76; // [rsp+60h] [rbp-51h]
  __int64 v77; // [rsp+70h] [rbp-41h]
  char v78; // [rsp+78h] [rbp-39h]
  __int128 v79; // [rsp+80h] [rbp-31h] BYREF
  __int128 v80; // [rsp+90h] [rbp-21h]
  __int128 v81; // [rsp+A0h] [rbp-11h]
  void *v82; // [rsp+100h] [rbp+4Fh] BYREF
  int v83; // [rsp+108h] [rbp+57h]
  PVOID Buffer; // [rsp+110h] [rbp+5Fh] BYREF
  void *v85; // [rsp+118h] [rbp+67h]

  v85 = a4;
  Buffer = a3;
  *((_BYTE *)this + 8) = 8;
  *(_QWORD *)this = 0LL;
  v10 = *((_DWORD *)a2 + 1);
  v73 = 1;
  LODWORD(v72) = 0;
  v13 = 0;
  v14 = 0;
  if ( v10 > 0x7FFFFFFF )
    return 0LL;
  v15 = *((unsigned int *)a2 + 2);
  if ( (unsigned int)v15 > 0x7FFFFFFF )
    return 0LL;
  v16 = v10;
  v17 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 > 6u )
  {
    v27 = v17 - 7;
    if ( v27 )
    {
      v28 = v27 - 1;
      if ( v28 )
      {
        if ( (unsigned int)(v28 - 1) > 1 )
          return 0LL;
      }
    }
    LODWORD(v23) = 0;
    v14 = 1;
    goto LABEL_24;
  }
  if ( v17 == 6 )
  {
    v23 = 4 * v16;
  }
  else
  {
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 != 1 )
              return 0LL;
            v22 = 3 * (v16 + 1);
          }
          else
          {
            v22 = 2 * v16 + 2;
          }
        }
        else
        {
          v22 = v16 + 3;
        }
        v23 = v22 & 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_18;
      }
      v24 = 0x7FFFFFFFFFFFFFFCLL;
      v25 = (unsigned __int64)(v16 + 7) >> 1;
    }
    else
    {
      v24 = 0x1FFFFFFFFFFFFFFCLL;
      v25 = (unsigned __int64)(v16 + 31) >> 3;
    }
    v23 = v24 & v25;
  }
LABEL_18:
  if ( v23 > 0x7FFFFFFF )
    return 0LL;
LABEL_24:
  v71 = 0LL;
  v83 = 0;
  v29 = 0LL;
  v74 = 0LL;
  LOBYTE(v82) = 0;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  if ( !a3 )
  {
    if ( v14 )
      v30 = *((unsigned int *)a2 + 3);
    else
      v30 = (unsigned int)v23 * v15;
    v31 = v30 + 696;
    if ( v30 + 696 < v30 || (unsigned __int64)v31 > 0x7FFFFFFF )
      return 0LL;
    v32 = (_DWORD *)((char *)a2 + 24);
    v33 = *((_DWORD *)a2 + 6);
    if ( (v33 & 0x40000) != 0 && v31 > 4096 )
    {
      v33 |= 8u;
      *v32 = v33;
    }
    if ( (v33 & 8) != 0 )
    {
      if ( (v33 & 0x80u) == 0 )
      {
        v34 = EngAllocUserMemEx((int)v31, v15, &Buffer);
      }
      else
      {
        v34 = AllocateSharedSection(v31, &v71, &v74, &Buffer);
        v29 = v71;
      }
      if ( v34 < 0 )
        return 0LL;
      v35 = Buffer;
    }
    else
    {
      if ( (v33 & 0x810) == 0 )
        goto LABEL_50;
      if ( (v33 & 0x800) != 0 )
      {
        if ( !W32PIDLOCK::bInit((W32PIDLOCK *)&v79) )
          return 0LL;
        AllocateKernelSectionForUserMapping(v31 - 696, &v71);
        v29 = v71;
        if ( !v71 )
        {
          W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v79);
          return 0LL;
        }
      }
      else
      {
        AllocateKernelSection(v31, v15, &Buffer);
      }
      v35 = Buffer;
      if ( !Buffer && !v29 )
        goto LABEL_50;
      LODWORD(v72) = *v32 & 0x800 | 0x10;
    }
    if ( v35 || v29 )
    {
LABEL_54:
      v13 = v72;
      goto LABEL_63;
    }
LABEL_50:
    v36 = (unsigned int)(v31 - 696);
    if ( (*v32 & 2) != 0 )
      v37 = (void *)PALLOCNOZ(v36, 0x6D627047u);
    else
      v37 = (void *)PALLOCMEM(v36, 1835167815LL);
    Buffer = v37;
    LOBYTE(v82) = 1;
    if ( !v37 )
      return 0LL;
    goto LABEL_54;
  }
  if ( a9 )
  {
    v38 = v14 ? *((unsigned int *)a2 + 3) : (unsigned int)v23 * v15;
    if ( v38 > 0x7FFFFFFF )
      return 0LL;
  }
  v32 = (_DWORD *)((char *)a2 + 24);
  if ( (*((_DWORD *)a2 + 6) & 0x800) != 0 )
  {
    if ( !W32PIDLOCK::bInit((W32PIDLOCK *)&v79) )
      return 0LL;
    v13 = 2048;
    v83 = 1;
  }
LABEL_63:
  v39 = SURFACE_Allocate();
  *(_QWORD *)this = v39;
  if ( !v39 )
  {
    v41 = 0;
    goto LABEL_65;
  }
  v72 = *(_QWORD *)((char *)a2 + 4);
  *(_QWORD *)(v39 + 56) = v72;
  *(_WORD *)(*(_QWORD *)this + 100LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 144LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 224LL) = 0LL;
  v42 = (HPALETTE)*((_QWORD *)a2 + 2);
  if ( v42 )
  {
    EPALOBJ::EPALOBJ((EPALOBJ *)&v71, v42);
    v43 = *(_QWORD *)this;
    if ( v71 )
    {
      *(_QWORD *)(v43 + 128) = v71;
      v71 = 0LL;
    }
    else
    {
      *(_QWORD *)(v43 + 128) = 0LL;
    }
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v71);
    v44 = (_WORD *)((char *)a2 + 24);
  }
  else
  {
    v44 = v32;
    *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
  }
  v45 = *(_QWORD *)this;
  v71 = v44;
  *(_QWORD *)(v45 + 72) = Buffer;
  v46 = *(_QWORD *)this;
  Buffer = 0LL;
  *(_BYTE *)(v46 + 688) = (_BYTE)v82;
  *(_DWORD *)(*(_QWORD *)this + 96LL) = *(_DWORD *)a2;
  *(_WORD *)(*(_QWORD *)this + 102LL) = v13 | *v44 & 0x89;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  v48 = *(_QWORD *)this;
  v72 = 0LL;
  *(_DWORD *)(v48 + 208) = CurrentProcessId & 0xFFFFFFFC;
  *(_QWORD *)(*(_QWORD *)this + 184LL) = v85;
  *(_DWORD *)(*(_QWORD *)this + 212LL) = a5;
  *(_QWORD *)(*(_QWORD *)this + 192LL) = a6;
  *(_QWORD *)(*(_QWORD *)this + 200LL) = a7;
  *(_DWORD *)(*(_QWORD *)this + 216LL) = a10;
  v49 = v71;
  *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 112LL) = *v49 & 0x40000;
  *(_QWORD *)(*(_QWORD *)this + 136LL) = 0LL;
  v50 = *(_QWORD *)this;
  *(_QWORD *)(v50 + 152) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 160LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 168LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 176LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
  CurrentThread = GreGetCurrentThread(v50, 0LL);
  if ( CurrentThread )
    *((_QWORD *)CurrentThread + 36) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 248LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 256LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 264LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 648LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 656LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 116LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 120LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 568LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 560LL) = 0LL;
  v52 = (_QWORD *)(*(_QWORD *)this + 232LL);
  v52[1] = v52;
  *v52 = v52;
  *(_DWORD *)(*(_QWORD *)this + 320LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 324LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 632LL) = 0LL;
  v53 = (_QWORD *)(*(_QWORD *)this + 528LL);
  v53[1] = v53;
  *v53 = v53;
  *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
  if ( v83 )
    *(_DWORD *)(*(_QWORD *)this + 116LL) |= 1u;
  if ( a6 && !a10 )
    *(_WORD *)(*(_QWORD *)this + 102LL) |= 4u;
  v54 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 != 8 && (((v54 - 7) & 0xFFFFFFFC) != 0 || v54 == 8) )
  {
    *(_DWORD *)(*(_QWORD *)this + 64LL) = *((_DWORD *)a2 + 2) * v23;
    v55 = *(_QWORD *)this;
    if ( (*(_DWORD *)v71 & 1) == 0 )
    {
      *(_DWORD *)(v55 + 88) = -(int)v23;
      *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL)
                                          + (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 64LL) - v23);
      goto LABEL_95;
    }
    *(_DWORD *)(v55 + 88) = v23;
    goto LABEL_93;
  }
  *(_WORD *)(*(_QWORD *)this + 102LL) &= ~0x800u;
  *(_DWORD *)(*(_QWORD *)this + 88LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 64LL) = *((_DWORD *)a2 + 3);
  if ( *(_DWORD *)a2 != 9 && *(_DWORD *)a2 != 10 )
  {
LABEL_93:
    *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL);
    goto LABEL_95;
  }
  *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
LABEL_95:
  v56 = *(_QWORD *)this;
  if ( *(char *)(*(_QWORD *)this + 102LL) < 0 )
  {
    v57 = v74;
    *(_QWORD *)(v56 + 584) = v29;
    *(_QWORD *)(*(_QWORD *)this + 592LL) = v57;
    v58 = *(_QWORD *)this;
    v59 = (__int64)v57 + *(_QWORD *)(*(_QWORD *)this + 80LL) - *(_QWORD *)(*(_QWORD *)this + 72LL);
    *(_QWORD *)(v58 + 600) = v59;
    *(_DWORD *)(*(_QWORD *)this + 608LL) = 1;
    v60 = GreGetCurrentThread(v59, v58);
    if ( v60 && *((_QWORD *)v60 + 8) )
    {
      v61 = UMPDGetThreadClientPID(v60);
      v56 = v61;
      *(_DWORD *)(*(_QWORD *)this + 612LL) = v61;
      *(_DWORD *)(*(_QWORD *)this + 616LL) = 1;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)this + 612LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 616LL) = 0;
    }
  }
  SessionState = W32GetSessionState(v56);
  v63 = *(_QWORD *)this;
  v64 = *(_QWORD *)(SessionState + 88);
  *(_DWORD *)(v63 + 92) = _InterlockedIncrement((volatile signed __int32 *)(v64 + 4364));
  v75 = 0LL;
  v76 = 0LL;
  PushThreadGuardedObject(
    &v75,
    &v75,
    UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
  v65 = *(struct OBJECT **)this;
  v77 = 0LL;
  v78 = 0;
  v66 = HmgInsertObjectHelper::Insert(
          (HmgInsertObjectHelper *)&v75,
          (struct Gre::Base::SESSION_GLOBALS *)v64,
          v65,
          1,
          a8 != 0,
          5);
  v67 = *(_QWORD *)this;
  if ( v66 )
  {
    *(_QWORD *)(v67 + 32) = *(_QWORD *)v67;
    if ( (unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
    {
      v68 = *(SURFACE **)this;
      v69 = (unsigned int)PsGetCurrentProcessId();
      SURFACE::set_AppContainerW32PID(v68, v69 & 0xFFFFFFFC);
    }
    v41 = v73;
  }
  else
  {
    if ( *(_QWORD *)(v67 + 128) )
    {
      v74 = *(void **)(v67 + 128);
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v74);
      *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
    }
    SURFACE_Free(*(void **)this);
    *(_QWORD *)this = 0LL;
    v41 = 0;
  }
  HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)&v75);
  if ( v41 )
  {
    if ( (*(_WORD *)(*(_QWORD *)this + 102LL) & 0x800) != 0 && *((_QWORD *)&v81 + 1) )
    {
      *(_QWORD *)(*(_QWORD *)this + 248LL) = v29;
      v70 = *(_OWORD **)this;
      v70[17] = v79;
      v70[18] = v80;
      v70[19] = v81;
      *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 112LL) |= 0x200u;
    }
    return v41;
  }
LABEL_65:
  if ( !Buffer && !v29 )
    return v41;
  if ( (*v32 & 8) != 0 )
  {
    if ( (*v32 & 0x80u) == 0 )
    {
      EngTryFreeUserMem(Buffer);
      return v41;
    }
    if ( *((_QWORD *)GreGetCurrentThread((__int64)Buffer, v40) + 8) )
    {
      v75 = 0uLL;
      v76 = (unsigned __int64)Buffer;
      LODWORD(v77) = 1;
      Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v75);
      v75 = 0uLL;
      v76 = (unsigned __int64)Buffer;
      LODWORD(v77) = 2;
      Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v75);
      if ( !v29 )
      {
LABEL_71:
        GrepCaptureLiveMemoryDump(400LL, 68LL, 2LL, 0LL, 0LL, 0);
        return v41;
      }
LABEL_115:
      v82 = v29;
      Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v82);
    }
  }
  else
  {
    if ( (v13 & 0x800) == 0 )
    {
      if ( (v13 & 0x10) != 0 )
      {
        vFreeKernelSection(Buffer);
      }
      else if ( (_BYTE)v82 )
      {
        if ( Buffer )
          GreDeleteFastMutex(Buffer);
      }
      return v41;
    }
    W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v79);
    if ( !v83 )
    {
      if ( !v29 )
        goto LABEL_71;
      goto LABEL_115;
    }
  }
  return v41;
}
