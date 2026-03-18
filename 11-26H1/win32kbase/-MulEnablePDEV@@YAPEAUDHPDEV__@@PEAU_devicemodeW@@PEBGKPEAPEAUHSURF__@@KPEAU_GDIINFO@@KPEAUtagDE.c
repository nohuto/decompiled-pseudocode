/*
 * XREFs of ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1401F29F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     EngFreeMem @ 0x140044080 (EngFreeMem.c)
 *     EngAllocMem @ 0x140044130 (EngAllocMem.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1400C2CFC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEBAHXZ @ 0x1400C5370 (-bAllowShareAccess@PDEVOBJ@@QEBAHXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1400C9BF0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C9E10 (-vReferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1401560A0 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     bIntersect @ 0x1401945E0 (bIntersect.c)
 *     ?pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ @ 0x1401F3244 (-pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

struct HDEV__ *__fastcall MulEnablePDEV(
        struct _devicemodeW *a1,
        const unsigned __int16 *a2,
        __int64 a3,
        HSURF *a4,
        unsigned int a5,
        struct _GDIINFO *a6,
        unsigned int a7,
        struct tagDEVINFO *a8,
        HDEV a9)
{
  int v9; // r12d
  struct _GDIINFO *v10; // rbx
  HDEV v12; // rdi
  char **v13; // r14
  struct HDEV__ *v14; // rsi
  char *v15; // r13
  unsigned int v16; // r8d
  struct _ERESOURCE **v17; // r9
  __int64 v18; // rdi
  __int64 v19; // rbx
  _OWORD *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  struct _GDIINFO *v23; // rax
  __int128 v24; // xmm1
  __int64 v25; // rdx
  __int128 v26; // xmm1
  struct tagDEVINFO *v27; // rcx
  _OWORD *v28; // rax
  __int128 v29; // xmm1
  int v30; // eax
  __int128 v31; // xmm0
  __int64 v32; // rax
  __int64 *v33; // r14
  __int64 v34; // rax
  char *v35; // rbx
  int v36; // eax
  int v37; // r8d
  int v38; // eax
  int v39; // eax
  int v40; // eax
  unsigned int v41; // r12d
  struct tagDEVINFO *v42; // rdx
  int v43; // eax
  __int64 v44; // r12
  struct Gre::Base::SESSION_GLOBALS *v45; // r13
  __int64 v46; // rbx
  bool v47; // zf
  signed __int32 v48; // ett
  __int64 v49; // rax
  signed __int32 v50; // ett
  int v51; // ecx
  unsigned int *v52; // rax
  struct Gre::Base::SESSION_GLOBALS *v53; // rcx
  _DWORD *v54; // rdx
  _DWORD *v55; // rcx
  BOOL v56; // eax
  __int64 v58; // rcx
  signed __int32 v59; // ett
  unsigned int v60; // ebx
  __int64 v61; // r14
  unsigned int v62; // r12d
  _QWORD *v63; // rsi
  __int64 v64; // rbx
  signed __int32 v65; // ett
  signed __int32 v66; // ett
  signed __int32 v67; // ett
  signed __int32 v68; // ett
  void *v69; // rax
  void *v70; // rdx
  signed __int32 v71; // ett
  signed __int32 v72; // ett
  _QWORD *v73; // r12
  unsigned int i; // edx
  __int64 v75; // r8
  void (__fastcall *v76)(HDEV, _QWORD, _QWORD *); // rax
  struct Gre::Base::SESSION_GLOBALS *v77; // [rsp+38h] [rbp-B9h] BYREF
  int v78; // [rsp+40h] [rbp-B1h]
  int v79; // [rsp+44h] [rbp-ADh]
  unsigned int *v80; // [rsp+48h] [rbp-A9h] BYREF
  PVOID pv; // [rsp+50h] [rbp-A1h]
  struct tagDEVINFO *v82; // [rsp+58h] [rbp-99h]
  struct _GDIINFO *v83; // [rsp+60h] [rbp-91h]
  __int64 v84; // [rsp+68h] [rbp-89h]
  void *v85; // [rsp+70h] [rbp-81h]
  char *v86; // [rsp+78h] [rbp-79h]
  HDEV v87; // [rsp+80h] [rbp-71h]
  char *v88; // [rsp+88h] [rbp-69h]
  __int64 *v89; // [rsp+98h] [rbp-59h] BYREF

  v9 = -1;
  v10 = a6;
  v12 = a9;
  v82 = a8;
  v85 = 0LL;
  v83 = a6;
  v87 = a9;
  v79 = -1;
  v84 = 0LL;
  LODWORD(v80) = 0;
  v77 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(a1) + 88);
  if ( !a9 )
    return 0LL;
  v13 = (char **)&v89;
  v88 = (char *)EngAllocMem(1u, 80 * *(_DWORD *)&a1->dmDeviceName[10] + 112, 0x76645647u);
  v14 = (struct HDEV__ *)v88;
  if ( !v88 )
    return 0LL;
  pv = EngAllocMem(1u, 8 * *(_DWORD *)&a1->dmDeviceName[10], 0x73647647u);
  if ( !pv )
  {
LABEL_59:
    EngFreeMem(v14);
    return 0LL;
  }
  v15 = v88 + 112;
  *((_DWORD *)v88 + 4) = *(_DWORD *)&a1->dmDeviceName[10];
  *((_DWORD *)v14 + 18) = 0x7FFFFFFF;
  v16 = 0;
  *((_DWORD *)v14 + 19) = 0x7FFFFFFF;
  *((_DWORD *)v14 + 20) = 0x80000000;
  *((_DWORD *)v14 + 21) = 0x80000000;
  *((_QWORD *)v14 + 4) = a9;
  v78 = 0;
  if ( *(_DWORD *)&a1->dmDeviceName[10] )
  {
    while ( 1 )
    {
      v17 = (struct _ERESOURCE **)v77;
      v18 = 28LL * v16;
      v19 = *(_QWORD *)&a1->dmDeviceName[v18 + 20];
      if ( *(_QWORD *)(v19 + 2568) == -4LL && !*((_DWORD *)v77 + 789) )
      {
        GrepCaptureLiveMemoryDump(400LL, 38LL, v19, (__int64)a1, 0LL, 0);
        v17 = (struct _ERESOURCE **)v77;
        v16 = v78;
        *((_DWORD *)v77 + 789) = 1;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v19 + 2568) + 160LL) & 4) != 0 )
      {
        v20 = (_OWORD *)(v19 + 2120);
        v21 = *(_DWORD *)(v19 + 2156) & 0x100;
        v84 = v19;
        LODWORD(v80) = v21;
        v22 = 2LL;
        v23 = v83;
        do
        {
          *(_OWORD *)&v23->ulVersion = *v20;
          *(_OWORD *)&v23->ulHorzRes = v20[1];
          *(_OWORD *)&v23->ulNumColors = v20[2];
          *(_OWORD *)&v23->flTextCaps = v20[3];
          *(_OWORD *)&v23->ulAspectX = v20[4];
          *(_OWORD *)&v23->yStyleStep = v20[5];
          *(_OWORD *)&v23->szlPhysSize.cx = v20[6];
          v23 = (struct _GDIINFO *)((char *)v23 + 128);
          v24 = v20[7];
          v20 += 8;
          *(_OWORD *)&v23[-1].flShadeBlend = v24;
          --v22;
        }
        while ( v22 );
        v25 = 2LL;
        *(_OWORD *)&v23->ulVersion = *v20;
        *(_OWORD *)&v23->ulHorzRes = v20[1];
        *(_OWORD *)&v23->ulNumColors = v20[2];
        v26 = v20[3];
        v27 = v82;
        *(_OWORD *)&v23->flTextCaps = v26;
        v28 = (_OWORD *)(v19 + 1808);
        do
        {
          *(_OWORD *)v27 = *v28;
          *((_OWORD *)v27 + 1) = v28[1];
          *((_OWORD *)v27 + 2) = v28[2];
          *((_OWORD *)v27 + 3) = v28[3];
          *((_OWORD *)v27 + 4) = v28[4];
          *((_OWORD *)v27 + 5) = v28[5];
          *((_OWORD *)v27 + 6) = v28[6];
          v27 = (struct tagDEVINFO *)((char *)v27 + 128);
          v29 = v28[7];
          v28 += 8;
          *((_OWORD *)v27 - 1) = v29;
          --v25;
        }
        while ( v25 );
        *(_OWORD *)v27 = *v28;
        *((_OWORD *)v27 + 1) = v28[1];
        *((_OWORD *)v27 + 2) = v28[2];
        *((_QWORD *)v27 + 6) = *((_QWORD *)v28 + 6);
      }
      v9 &= *(_DWORD *)(v19 + 1808);
      v30 = *(_DWORD *)(v19 + 2112) & v79;
      *v13 = v15;
      v13[1] = v15;
      *((_DWORD *)v15 + 4) = v16;
      v31 = *(_OWORD *)&a1->dmDeviceName[v18 + 28];
      v79 = v30;
      *(_OWORD *)(v15 + 28) = v31;
      v32 = *(_QWORD *)&a1->dmDeviceName[v18 + 20];
      *((_QWORD *)v15 + 6) = v32;
      *((_QWORD *)v15 + 7) = v32;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)(v15 + 56), v17);
      v33 = v89;
      *((_DWORD *)v15 + 18) = -*(_DWORD *)(v19 + 2576);
      *((_DWORD *)v15 + 19) = -*(_DWORD *)(v19 + 2580);
      v34 = *(_QWORD *)(v19 + 2544);
      v35 = (char *)v33;
      *((_DWORD *)v15 + 5) = 1;
      *((_QWORD *)v15 + 8) = (v34 + 24) & -(__int64)(v34 != 0);
      if ( v33 != (__int64 *)v15 )
      {
        do
        {
          if ( bIntersect((_DWORD *)v35 + 7, (_DWORD *)v15 + 7) )
          {
            *(_DWORD *)(*((_QWORD *)v15 + 7) + 1808LL) |= 0x8000000u;
            *((_DWORD *)v15 + 5) = 0;
          }
          v35 = *(char **)v35;
        }
        while ( v35 != v15 );
      }
      v36 = *((_DWORD *)v14 + 18);
      v37 = v78;
      if ( v36 >= *((_DWORD *)v15 + 7) )
        v36 = *((_DWORD *)v15 + 7);
      v86 = v15;
      *((_DWORD *)v14 + 18) = v36;
      v38 = *((_DWORD *)v14 + 19);
      if ( v38 >= *((_DWORD *)v15 + 8) )
        v38 = *((_DWORD *)v15 + 8);
      *((_DWORD *)v14 + 19) = v38;
      v39 = *((_DWORD *)v14 + 20);
      if ( v39 <= *((_DWORD *)v15 + 9) )
        v39 = *((_DWORD *)v15 + 9);
      *((_DWORD *)v14 + 20) = v39;
      v40 = *((_DWORD *)v14 + 21);
      if ( v40 <= *((_DWORD *)v15 + 10) )
        v40 = *((_DWORD *)v15 + 10);
      v16 = v37 + 1;
      v15 += 80;
      *((_DWORD *)v14 + 21) = v40;
      v78 = v16;
      if ( v16 >= *(_DWORD *)&a1->dmDeviceName[10] )
        break;
      v13 = (char **)v86;
    }
    v12 = v87;
    v10 = v83;
  }
  else
  {
    v33 = v89;
  }
  v41 = v9 & 0xFFFEE7FF;
  v42 = v82;
  v10->ulHorzSize = -v10->ulHorzSize;
  v10->ulVertSize = -v10->ulVertSize;
  v43 = v41 | 0x80020;
  if ( !(_DWORD)v80 )
    v43 = v41;
  v44 = v84;
  *(_DWORD *)v42 = v43;
  v45 = v77;
  *((_DWORD *)v42 + 76) = v79;
  v14[16] = *(_DWORD *)(struct HDEV__ *)((int)v42 + 284);
  *(_QWORD *)v14 = v33;
  *((_QWORD *)v14 + 1) = v33;
  *((_QWORD *)v14 + 5) = v44;
  while ( v33 )
  {
    v46 = v33[6];
    v47 = v33 == *(__int64 **)v14;
    _m_prefetchw((const void *)(v46 + 40));
    if ( v47 )
    {
      do
        v48 = *(_DWORD *)(v46 + 40);
      while ( v48 != _InterlockedCompareExchange((volatile signed __int32 *)(v46 + 40), v48 | 0x10000000, v48) );
      v49 = 0LL;
    }
    else
    {
      do
        v50 = *(_DWORD *)(v46 + 40);
      while ( v50 != _InterlockedCompareExchange((volatile signed __int32 *)(v46 + 40), v50 & 0xEFFFFFFF, v50) );
      v49 = *(_QWORD *)(*(_QWORD *)v14 + 48LL);
    }
    *(_QWORD *)(v46 + 32) = v49;
    if ( v46 == v44 )
    {
      *((_DWORD *)v33 + 6) = 0;
    }
    else
    {
      v51 = *(_DWORD *)(v46 + 2092) - *((_DWORD *)v14 + 16);
      *((_DWORD *)v33 + 6) = v51;
      if ( !v51 )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v80, *((HPALETTE *)v42 + 37));
        EPALOBJ::EPALOBJ((EPALOBJ *)&v77, *(HPALETTE *)(v46 + 2104));
        v52 = v80;
        if ( !v80 || (v53 = v77) == 0LL )
        {
          EPALOBJ::~EPALOBJ((unsigned int **)&v77);
          EPALOBJ::~EPALOBJ(&v80);
          EngFreeMem(pv);
          goto LABEL_59;
        }
        if ( ((*((_BYTE *)v80 + 24) ^ *((_BYTE *)v77 + 24)) & 0x1F) != 0 )
        {
          *((_DWORD *)v33 + 6) = 1;
        }
        else
        {
          *((_DWORD *)v33 + 6) = 0;
          if ( (v52[6] & 0x1F) == 2 )
          {
            v54 = (_DWORD *)*((_QWORD *)v53 + 14);
            v55 = (_DWORD *)*((_QWORD *)v52 + 14);
            v56 = *v55 != *v54 || v55[1] != v54[1] || v55[2] != v54[2];
            *((_DWORD *)v33 + 6) = v56;
          }
        }
        EPALOBJ::~EPALOBJ((unsigned int **)&v77);
        EPALOBJ::~EPALOBJ(&v80);
        v42 = v82;
      }
      if ( *((_DWORD *)v33 + 6) )
      {
        *(_DWORD *)&a1->dmDeviceName[8] |= 1u;
        *((_DWORD *)v45 + 788) = 1;
      }
    }
    v33 = (__int64 *)*v33;
  }
  v12[644] = v14[18];
  v12[645] = v14[19];
  *((_DWORD *)v12 + 425) = *((_DWORD *)v14 + 20) - *((_DWORD *)v14 + 18);
  *((_DWORD *)v12 + 426) = *((_DWORD *)v14 + 21) - *((_DWORD *)v14 + 19);
  _m_prefetchw(v12 + 10);
  do
  {
    v58 = *((unsigned int *)v12 + 10);
    LODWORD(v58) = v58 | 0x20000;
    v59 = *((_DWORD *)v12 + 10);
  }
  while ( v59 != _InterlockedCompareExchange((volatile signed __int32 *)v12 + 10, v58, v59) );
  v60 = *(_DWORD *)&a1->dmDeviceName[10];
  v61 = 0LL;
  v62 = 0;
  if ( v60 )
  {
    v63 = pv;
    do
    {
      v64 = *(_QWORD *)&a1->dmDeviceName[28 * v62 + 20];
      v77 = (struct Gre::Base::SESSION_GLOBALS *)v64;
      if ( (*(_DWORD *)(v64 + 1808) & 0x8000000) != 0 )
      {
        _m_prefetchw(v12 + 10);
        do
          v65 = *((_DWORD *)v12 + 10);
        while ( v65 != _InterlockedCompareExchange((volatile signed __int32 *)v12 + 10, v65 | 0x1000000, v65) );
        if ( (*(_DWORD *)(v64 + 2112) & 0x1000) != 0 )
        {
          _m_prefetchw(v12 + 10);
          do
            v66 = *((_DWORD *)v12 + 10);
          while ( v66 != _InterlockedCompareExchange((volatile signed __int32 *)v12 + 10, v66 | 0x2000000, v66) );
          *((_DWORD *)v12 + 528) |= 0x1000u;
        }
        if ( _bittest((const signed __int32 *)(v64 + 2112), 0xFu) )
        {
          _m_prefetchw(v12 + 10);
          do
            v67 = *((_DWORD *)v12 + 10);
          while ( v67 != _InterlockedCompareExchange((volatile signed __int32 *)v12 + 10, v67 | 0x20000000, v67) );
        }
        v63[v61] = *(_QWORD *)&a1->dmDeviceName[28 * v62 + 20];
        v61 = (unsigned int)(v61 + 1);
      }
      if ( !(unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v77) && *(_DWORD *)(v64 + 2604) != 5 )
      {
        _m_prefetchw(v12 + 10);
        do
        {
          v58 = *((unsigned int *)v12 + 10);
          LODWORD(v58) = v58 | 0x8000000;
          v68 = *((_DWORD *)v12 + 10);
        }
        while ( v68 != _InterlockedCompareExchange((volatile signed __int32 *)v12 + 10, v58, v68) );
      }
      if ( ((_DWORD)v12[10] & 0x4000000) == 0
        && (!_bittest((const signed __int32 *)(v64 + 2112), 0xFu) || !*(_QWORD *)(v64 + 2760)) )
      {
        if ( !v85 || (v69 = PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v77), v69 == v70) )
        {
          v85 = PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v77);
        }
        else
        {
          _m_prefetchw(v12 + 10);
          do
          {
            v58 = *((unsigned int *)v12 + 10);
            LODWORD(v58) = v58 | 0x4000000;
            v71 = *((_DWORD *)v12 + 10);
          }
          while ( v71 != _InterlockedCompareExchange((volatile signed __int32 *)v12 + 10, v58, v71) );
        }
      }
      if ( ((_DWORD)v12[10] & 0x40000000) == 0 && !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v77) )
      {
        _m_prefetchw(v12 + 10);
        do
        {
          v58 = *((_DWORD *)v12 + 10) | 0x40000000u;
          v72 = *((_DWORD *)v12 + 10);
        }
        while ( v72 != _InterlockedCompareExchange((volatile signed __int32 *)v12 + 10, v58, v72) );
      }
      v60 = *(_DWORD *)&a1->dmDeviceName[10];
      ++v62;
    }
    while ( v62 < v60 );
    v14 = (struct HDEV__ *)v88;
  }
  v73 = pv;
  for ( i = 0; i < v60; ++i )
  {
    v58 = 56LL * i;
    v75 = *(_QWORD *)((char *)&a1->dmDeviceName[20] + v58);
    if ( (*(_DWORD *)(v75 + 1808) & 0x8000000) == 0 )
    {
      v73[v61] = v75;
      v61 = (unsigned int)(v61 + 1);
    }
    v60 = *(_DWORD *)&a1->dmDeviceName[10];
  }
  v76 = *(void (__fastcall **)(HDEV, _QWORD, _QWORD *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v58) + 24) + 16LL);
  if ( v76 )
    v76(v12, v60, v73);
  return v14;
}
