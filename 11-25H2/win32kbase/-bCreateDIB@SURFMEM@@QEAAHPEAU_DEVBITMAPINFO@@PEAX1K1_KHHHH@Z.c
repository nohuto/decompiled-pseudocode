/*
 * XREFs of ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x14008C0E0
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1400700D0 (pProcessDfbSurfacesInternal.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x140087050 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x14008A3D4 (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x14008BE60 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x14001C960 (--1EPALOBJ@@QEAA@XZ.c)
 *     SURFACE_Free @ 0x14001D1C0 (SURFACE_Free.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14001F850 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x14001F8B4 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     EngAllocUserMemEx @ 0x140072DE8 (EngAllocUserMemEx.c)
 *     EngFreeUserMem @ 0x140073720 (EngFreeUserMem.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x14008E750 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     PushThreadGuardedObject @ 0x1400988E0 (PushThreadGuardedObject.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_W32PROCESS@@@Z @ 0x1400BFB90 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_W32PROCESS@@@Z.c)
 *     SURFACE_Allocate @ 0x1400C8890 (SURFACE_Allocate.c)
 *     ??1SectionObj@Gre@@QEAA@XZ @ 0x1400E4AC0 (--1SectionObj@Gre@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1400EBB0C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400F36E0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x14011DE58 (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x14012625C (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x140129FB4 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     UMPDGetThreadClientPID @ 0x14013974C (UMPDGetThreadClientPID.c)
 *     ?AllocateKernelSectionForUserMapping@@YAJKPEAPEAX@Z @ 0x1401772B0 (-AllocateKernelSectionForUserMapping@@YAJKPEAPEAX@Z.c)
 *     ?ReportOverflow@OBJECT@@QEAAXK@Z @ 0x1401C5230 (-ReportOverflow@OBJECT@@QEAAXK@Z.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1401C5DA8 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKPEAPEAX00@Z @ 0x1401C5EBC (-AllocateSharedSection@@YAJKPEAPEAX00@Z.c)
 *     ?bInit@W32PIDLOCK@@QEAA_NXZ @ 0x1401C607C (-bInit@W32PIDLOCK@@QEAA_NXZ.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1401C6124 (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     Feature_1612503355__private_IsEnabledDeviceUsageNoInline @ 0x1401C61AC (Feature_1612503355__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_BsodDuringLolGameplay__private_IsEnabledDeviceUsageNoInline @ 0x1401C6200 (Feature_Servicing_BsodDuringLolGameplay__private_IsEnabledDeviceUsageNoInline.c)
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
        int a10,
        int a11)
{
  int v13; // r15d
  unsigned __int64 v14; // rbx
  unsigned int v15; // edx
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // ebx
  int v24; // ebx
  unsigned int v25; // ebx
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v29; // rbx
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // rbx
  __int64 v35; // rax
  unsigned __int64 v36; // rbx
  unsigned int v37; // eax
  unsigned int v38; // eax
  void *v39; // r14
  unsigned __int64 v40; // rcx
  __int64 v41; // r15
  _DWORD *v42; // r12
  __int64 v43; // rcx
  int v44; // eax
  int v45; // eax
  PVOID v46; // rax
  bool v47; // zf
  __int64 v48; // rcx
  void *v49; // rax
  __int64 v50; // rax
  unsigned int v51; // ebx
  bool v52; // zf
  HPALETTE v53; // rdx
  __int64 v54; // rdx
  _WORD *v55; // r15
  __int64 v56; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v58; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rcx
  char *v65; // r8
  struct _GRETHREAD *v66; // rax
  __int64 v67; // rdx
  int v68; // eax
  __int64 SessionState; // rax
  __int64 v70; // rdx
  struct OBJECT *v71; // rdx
  int v72; // eax
  __int64 v73; // rbx
  __int64 v74; // rcx
  SURFACE *v75; // rbx
  unsigned __int64 CurrentProcessWin32Process; // rax
  _OWORD *v77; // rax
  int v78; // [rsp+30h] [rbp-C1h]
  void *v79; // [rsp+38h] [rbp-B9h] BYREF
  __int64 v80; // [rsp+40h] [rbp-B1h]
  void *v81; // [rsp+48h] [rbp-A9h] BYREF
  int v82; // [rsp+50h] [rbp-A1h]
  struct _BASEOBJECT *v83; // [rsp+58h] [rbp-99h] BYREF
  __int128 v84; // [rsp+60h] [rbp-91h] BYREF
  __int128 v85; // [rsp+70h] [rbp-81h]
  __int128 v86; // [rsp+80h] [rbp-71h]
  __int64 v87; // [rsp+90h] [rbp-61h] BYREF
  __int64 v88; // [rsp+98h] [rbp-59h]
  PVOID v89; // [rsp+A0h] [rbp-51h]
  __int64 v90; // [rsp+A8h] [rbp-49h]
  __int64 v91; // [rsp+B0h] [rbp-41h]
  int v92; // [rsp+B8h] [rbp-39h]
  _OWORD v93[2]; // [rsp+C0h] [rbp-31h] BYREF
  __int64 v94; // [rsp+E0h] [rbp-11h]
  void *v95; // [rsp+140h] [rbp+4Fh] BYREF
  int v96; // [rsp+148h] [rbp+57h]
  PVOID pv; // [rsp+150h] [rbp+5Fh] BYREF
  void *v98; // [rsp+158h] [rbp+67h]

  v98 = a4;
  pv = a3;
  *((_BYTE *)this + 8) = 8;
  *(_QWORD *)this = 0LL;
  v82 = 1;
  v13 = 0;
  v96 = 0;
  LODWORD(v14) = 0;
  if ( *((_DWORD *)a2 + 1) > 0x7FFFFFFFu || *((_DWORD *)a2 + 2) > 0x7FFFFFFFu )
    return 0LL;
  v47 = (unsigned int)Feature_1612503355__private_IsEnabledDeviceUsageNoInline() == 0;
  v16 = 4294967292LL;
  v17 = *(_DWORD *)a2;
  if ( v47 )
  {
    if ( v17 <= 6 )
    {
      if ( v17 == 6 )
      {
        v25 = *((_DWORD *)a2 + 1);
        if ( v25 >= 0x3FFFFFFF )
          return 0LL;
        LODWORD(v14) = 4 * v25;
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
                v22 = *((_DWORD *)a2 + 1);
                if ( v22 >= 0x55555554 )
                  return 0LL;
                v23 = 3 * (v22 + 1);
              }
              else
              {
                v24 = *((_DWORD *)a2 + 1);
                if ( (unsigned int)(v24 + 1) >= 0x7FFFFFFF )
                  return 0LL;
                v23 = 2 * v24 + 2;
              }
            }
            else
            {
              v23 = *((_DWORD *)a2 + 1) + 3;
            }
            LODWORD(v14) = v23 & 0xFFFFFFFC;
          }
          else
          {
            LODWORD(v14) = ((unsigned int)(*((_DWORD *)a2 + 1) + 7) >> 1) & 0x7FFFFFFC;
          }
        }
        else
        {
          LODWORD(v14) = ((unsigned int)(*((_DWORD *)a2 + 1) + 31) >> 3) & 0x1FFFFFFC;
        }
      }
      goto LABEL_47;
    }
    v26 = v17 - 7;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( v27 )
      {
        if ( v27 - 1 >= 2 )
          return 0LL;
      }
    }
    goto LABEL_46;
  }
  v29 = *((unsigned int *)a2 + 1);
  if ( v17 > 6 )
  {
    v37 = v17 - 7;
    if ( v37 )
    {
      v38 = v37 - 1;
      if ( v38 )
      {
        if ( v38 - 1 > 1 )
          return 0LL;
      }
    }
    LODWORD(v14) = 0;
LABEL_46:
    v13 = 1;
    goto LABEL_47;
  }
  if ( v17 == 6 )
  {
    v14 = 4 * v29;
  }
  else
  {
    v30 = v17 - 1;
    if ( v30 )
    {
      v31 = v30 - 1;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( v33 )
          {
            if ( v33 != 1 )
              return 0LL;
            v34 = 3 * (v29 + 1);
          }
          else
          {
            v34 = 2 * v29 + 2;
          }
        }
        else
        {
          v34 = v29 + 3;
        }
        v14 = v34 & 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_40;
      }
      v35 = 0x7FFFFFFFFFFFFFFCLL;
      v36 = (unsigned __int64)(v29 + 7) >> 1;
    }
    else
    {
      v35 = 0x1FFFFFFFFFFFFFFCLL;
      v36 = (unsigned __int64)(v29 + 31) >> 3;
    }
    v14 = v35 & v36;
  }
LABEL_40:
  if ( v14 > 0x7FFFFFFF )
    return 0LL;
LABEL_47:
  v39 = 0LL;
  v84 = 0LL;
  v79 = 0LL;
  v85 = 0LL;
  v78 = 0;
  v86 = 0LL;
  v81 = 0LL;
  LOBYTE(v95) = 0;
  if ( pv )
  {
    if ( !a9
      || (!v13
        ? (v16 = (unsigned int)v14 * (unsigned __int64)*((unsigned int *)a2 + 2))
        : (v16 = *((unsigned int *)a2 + 3)),
          v16 <= 0x7FFFFFFF) )
    {
      v42 = (_DWORD *)((char *)a2 + 24);
      if ( (*((_DWORD *)a2 + 6) & 0x800) == 0 )
        goto LABEL_80;
      if ( (unsigned int)Feature_Servicing_BsodDuringLolGameplay__private_IsEnabledDeviceUsageNoInline(v16) )
      {
        v52 = !W32PIDLOCK::bInit((W32PIDLOCK *)&v84);
      }
      else
      {
        W32PIDLOCK::vInit((W32PIDLOCK *)&v84);
        v52 = *((_QWORD *)&v86 + 1) == 0LL;
      }
      if ( !v52 )
      {
        v96 = 2048;
        v78 = 1;
        goto LABEL_80;
      }
    }
    return 0LL;
  }
  if ( v13 )
    v40 = *((unsigned int *)a2 + 3);
  else
    v40 = (unsigned int)v14 * (unsigned __int64)*((unsigned int *)a2 + 2);
  v41 = v40 + 696;
  if ( v40 + 696 < v40 || (unsigned __int64)v41 > 0x7FFFFFFF )
    return 0LL;
  v42 = (_DWORD *)((char *)a2 + 24);
  v43 = *((unsigned int *)a2 + 6);
  v44 = *((_DWORD *)a2 + 6);
  if ( (v43 & 0x40000) != 0 && v41 > 4096 )
  {
    v44 |= 8u;
    *v42 = v44;
  }
  if ( (v44 & 8) == 0 )
  {
    if ( (v44 & 0x810) == 0 )
      goto LABEL_76;
    if ( (v44 & 0x800) != 0 )
    {
      if ( (unsigned int)Feature_Servicing_BsodDuringLolGameplay__private_IsEnabledDeviceUsageNoInline(v43) )
      {
        v47 = !W32PIDLOCK::bInit((W32PIDLOCK *)&v84);
      }
      else
      {
        W32PIDLOCK::vInit((W32PIDLOCK *)&v84);
        v47 = *((_QWORD *)&v86 + 1) == 0LL;
      }
      if ( v47 )
        return 0LL;
      AllocateKernelSectionForUserMapping(v41 - 696, &v79);
      v39 = v79;
      if ( !v79 )
      {
        W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v84);
        return 0LL;
      }
    }
    else
    {
      AllocateKernelSection(v41, v15, &pv);
    }
    v46 = pv;
    if ( !pv && !v39 )
      goto LABEL_76;
    v96 = *v42 & 0x800 | 0x10;
    goto LABEL_74;
  }
  if ( (v44 & 0x80u) == 0 )
  {
    v45 = EngAllocUserMemEx((int)v41, v15, &pv);
  }
  else
  {
    v45 = AllocateSharedSection(v41, &v79, &v81, &pv);
    v39 = v79;
  }
  if ( v45 < 0 )
    return 0LL;
  v46 = pv;
LABEL_74:
  if ( v46 || v39 )
    goto LABEL_80;
LABEL_76:
  v48 = (unsigned int)(v41 - 696);
  if ( (*v42 & 2) != 0 )
    v49 = (void *)PALLOCNOZ(v48, 1835167815LL);
  else
    v49 = (void *)PALLOCMEM(v48, 1835167815LL);
  pv = v49;
  LOBYTE(v95) = 1;
  if ( !v49 )
    return 0LL;
LABEL_80:
  v50 = SURFACE_Allocate();
  *(_QWORD *)this = v50;
  if ( v50 )
  {
    v80 = *(_QWORD *)((char *)a2 + 4);
    *(_QWORD *)(v50 + 56) = v80;
    *(_WORD *)(*(_QWORD *)this + 100LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 144LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 224LL) = 0LL;
    v53 = (HPALETTE)*((_QWORD *)a2 + 2);
    if ( v53 )
    {
      EPALOBJ::EPALOBJ((EPALOBJ *)&v83, v53);
      v54 = *(_QWORD *)this;
      if ( v83 )
      {
        *(_QWORD *)(v54 + 128) = v83;
        v83 = 0LL;
      }
      else
      {
        *(_QWORD *)(v54 + 128) = 0LL;
      }
      EPALOBJ::~EPALOBJ(&v83);
      v55 = (_WORD *)((char *)a2 + 24);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
      v55 = v42;
    }
    *(_QWORD *)(*(_QWORD *)this + 72LL) = pv;
    v56 = *(_QWORD *)this;
    pv = 0LL;
    *(_BYTE *)(v56 + 688) = (_BYTE)v95;
    *(_DWORD *)(*(_QWORD *)this + 96LL) = *(_DWORD *)a2;
    *(_WORD *)(*(_QWORD *)this + 102LL) = v96 | *v55 & 0x89;
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    v58 = *(_QWORD *)this;
    v80 = 0LL;
    *(_DWORD *)(v58 + 208) = CurrentProcessId & 0xFFFFFFFC;
    *(_QWORD *)(*(_QWORD *)this + 184LL) = v98;
    *(_DWORD *)(*(_QWORD *)this + 212LL) = a5;
    *(_QWORD *)(*(_QWORD *)this + 192LL) = a6;
    *(_QWORD *)(*(_QWORD *)this + 200LL) = a7;
    *(_DWORD *)(*(_QWORD *)this + 216LL) = a10;
    *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)this + 112LL) = *(_DWORD *)v55 & 0x40000;
    *(_QWORD *)(*(_QWORD *)this + 136LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 152LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 160LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)this + 168LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 176LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
    CurrentThread = GreGetCurrentThread();
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
    v60 = (_QWORD *)(*(_QWORD *)this + 232LL);
    v60[1] = v60;
    *v60 = v60;
    *(_DWORD *)(*(_QWORD *)this + 320LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 324LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 632LL) = 0LL;
    v61 = (_QWORD *)(*(_QWORD *)this + 528LL);
    v61[1] = v61;
    *v61 = v61;
    *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
    if ( v78 )
      *(_DWORD *)(*(_QWORD *)this + 116LL) |= 1u;
    if ( a6 && !a10 )
      *(_WORD *)(*(_QWORD *)this + 102LL) |= 4u;
    v62 = *(_QWORD *)this;
    if ( (unsigned int)(*(_DWORD *)a2 - 7) <= 3 )
    {
      *(_WORD *)(v62 + 102) &= ~0x800u;
      *(_DWORD *)(*(_QWORD *)this + 88LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 64LL) = *((_DWORD *)a2 + 3);
      if ( (unsigned int)(*(_DWORD *)a2 - 9) <= 1 )
        *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
      else
        *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL);
    }
    else
    {
      *(_DWORD *)(v62 + 64) = *((_DWORD *)a2 + 2) * v14;
      v63 = *(_QWORD *)this;
      if ( (*(_DWORD *)v55 & 1) != 0 )
      {
        *(_DWORD *)(v63 + 88) = v14;
        *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL);
      }
      else
      {
        *(_DWORD *)(v63 + 88) = -(int)v14;
        *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL)
                                            + (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 64LL) - v14);
      }
    }
    v64 = *(_QWORD *)this;
    if ( *(char *)(*(_QWORD *)this + 102LL) < 0 )
    {
      v65 = (char *)v81;
      *(_QWORD *)(v64 + 584) = v39;
      *(_QWORD *)(*(_QWORD *)this + 592LL) = v65;
      *(_QWORD *)(*(_QWORD *)this + 600LL) = &v65[*(_QWORD *)(*(_QWORD *)this + 80LL)
                                                - *(_QWORD *)(*(_QWORD *)this + 72LL)];
      *(_DWORD *)(*(_QWORD *)this + 608LL) = 1;
      v66 = GreGetCurrentThread();
      if ( v66 && *((_QWORD *)v66 + 8) )
      {
        v68 = UMPDGetThreadClientPID(v66, v67);
        v64 = *(_QWORD *)this;
        *(_DWORD *)(*(_QWORD *)this + 612LL) = v68;
        *(_DWORD *)(*(_QWORD *)this + 616LL) = 1;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)this + 612LL) = 0;
        *(_DWORD *)(*(_QWORD *)this + 616LL) = 0;
      }
    }
    SessionState = W32GetSessionState(v64);
    v70 = *(_QWORD *)this;
    *(_DWORD *)(v70 + 92) = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(SessionState + 88) + 4252LL));
    memset(v93, 0, sizeof(v93));
    PushThreadGuardedObject(
      v93,
      v93,
      UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
    v71 = *(struct OBJECT **)this;
    v94 = 0LL;
    if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v93, v71) )
    {
      v72 = a11;
      *((_DWORD *)this + 3) = a11;
      if ( v72 )
      {
        v73 = *(_QWORD *)this;
        if ( *(_WORD *)(*(_QWORD *)this + 12LL) == 0xFFFF )
          OBJECT::ReportOverflow(*(OBJECT **)this, 2u);
        _InterlockedAdd((volatile signed __int32 *)(v73 + 12), 1u);
      }
      v74 = *(_QWORD *)this;
      *(_QWORD *)(v74 + 32) = **(_QWORD **)this;
      v75 = *(SURFACE **)this;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v74);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      SURFACE::vAppContainerOwner(v75, (struct _W32PROCESS *)CurrentProcessWin32Process);
      v51 = v82;
    }
    else
    {
      if ( *(_QWORD *)(*(_QWORD *)this + 128LL) )
      {
        v81 = *(void **)(*(_QWORD *)this + 128LL);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v81);
        *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
      }
      SURFACE_Free(*(_QWORD **)this);
      *(_QWORD *)this = 0LL;
      v51 = 0;
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v93);
    if ( v51 )
    {
      if ( (*(_WORD *)(*(_QWORD *)this + 102LL) & 0x800) != 0 && *((_QWORD *)&v86 + 1) )
      {
        *(_QWORD *)(*(_QWORD *)this + 248LL) = v79;
        v77 = *(_OWORD **)this;
        v77[17] = v84;
        v77[18] = v85;
        v77[19] = v86;
        *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)this + 112LL) |= 0x200u;
      }
      return v51;
    }
    v39 = v79;
  }
  else
  {
    v51 = 0;
  }
  if ( pv || v39 )
  {
    if ( (*v42 & 8) != 0 )
    {
      if ( (*v42 & 0x80u) == 0 )
      {
        EngFreeUserMem(pv);
        return v51;
      }
      if ( *((_QWORD *)GreGetCurrentThread() + 8) )
      {
        v87 = 0LL;
        v88 = 0LL;
        v89 = pv;
        v90 = 0LL;
        v91 = 0LL;
        v92 = 1;
        Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v87);
        v87 = 0LL;
        v88 = 0LL;
        v89 = pv;
        v90 = 0LL;
        v91 = 0LL;
        v92 = 2;
        Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v87);
        if ( !v39 )
        {
LABEL_140:
          GrepCaptureLiveMemoryDump(400LL, 68LL, 2LL);
          return v51;
        }
LABEL_145:
        v95 = v39;
        Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v95);
      }
    }
    else
    {
      if ( (v96 & 0x800) == 0 )
      {
        if ( (v96 & 0x10) != 0 )
        {
          vFreeKernelSection(pv);
        }
        else if ( (_BYTE)v95 )
        {
          if ( pv )
            GreDeleteFastMutex((char *)pv);
        }
        return v51;
      }
      W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v84);
      if ( !v78 )
      {
        if ( !v39 )
          goto LABEL_140;
        goto LABEL_145;
      }
    }
  }
  return v51;
}
