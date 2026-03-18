/*
 * XREFs of ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1401338F0
 * Callers:
 *     <none>
 * Callees:
 *     HmgShareLockCheck @ 0x140017AD0 (HmgShareLockCheck.c)
 *     EngAllocMem @ 0x14001BE30 (EngAllocMem.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     EngFreeMem @ 0x14001D0A0 (EngFreeMem.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1400854F0 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEBAHXZ @ 0x1400865B0 (-bAllowShareAccess@PDEVOBJ@@QEBAHXZ.c)
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400F36E0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1401340E0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     bIntersect @ 0x140134110 (bIntersect.c)
 *     vSpEnableMultiMon @ 0x14019F8B8 (vSpEnableMultiMon.c)
 *     ?pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ @ 0x1401D2348 (-pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
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
  unsigned int v9; // r14d
  HDEV v10; // rsi
  int v11; // ebx
  struct HDEV__ *v13; // r15
  __int64 v14; // rcx
  char *v15; // rdi
  __int64 v16; // rax
  int v17; // esi
  __int64 v18; // rbx
  __int64 v19; // r12
  __int64 v20; // rcx
  char **v21; // rax
  __int64 v22; // rax
  char *v23; // r12
  __int64 v24; // rax
  _QWORD *v25; // rbx
  int v26; // eax
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // eax
  struct _GDIINFO *v31; // rcx
  unsigned int v32; // ebx
  struct tagDEVINFO *v33; // rdx
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // rbx
  bool v37; // zf
  signed __int32 v38; // ett
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rax
  struct _BASEOBJECT *v43; // rcx
  signed __int32 v45; // ett
  __int64 v46; // rdx
  unsigned int v47; // edi
  unsigned int v48; // r12d
  _QWORD *v49; // r8
  int v50; // r8d
  int v51; // edx
  int v52; // eax
  _OWORD *v53; // rcx
  __int64 v54; // rdx
  struct _GDIINFO *v55; // rax
  __int128 v56; // xmm1
  __int64 v57; // rdx
  __int128 v58; // xmm1
  struct tagDEVINFO *v59; // rcx
  _OWORD *v60; // rax
  __int128 v61; // xmm1
  signed __int32 v62; // ett
  _DWORD *v63; // rdx
  _DWORD *v64; // r8
  int v65; // ecx
  _QWORD *v66; // r15
  __int64 v67; // rbx
  signed __int32 v68; // ett
  signed __int32 v69; // ett
  signed __int32 v70; // ett
  __int64 v71; // rcx
  signed __int32 v72; // ett
  void *v73; // rax
  void *v74; // rdx
  signed __int32 v75; // ett
  signed __int32 v76; // ett
  __int64 v77; // rdx
  __int64 v78; // rax
  int v79; // [rsp+38h] [rbp-B9h]
  __int64 v80; // [rsp+40h] [rbp-B1h] BYREF
  __int64 v81; // [rsp+48h] [rbp-A9h]
  PVOID pv; // [rsp+50h] [rbp-A1h]
  struct tagDEVINFO *v83; // [rsp+58h] [rbp-99h]
  __int64 v84; // [rsp+60h] [rbp-91h]
  char **v85; // [rsp+68h] [rbp-89h]
  struct _GDIINFO *v86; // [rsp+70h] [rbp-81h]
  void *v87; // [rsp+78h] [rbp-79h]
  char *v88; // [rsp+80h] [rbp-71h]
  __int64 v89; // [rsp+88h] [rbp-69h]
  HDEV v90; // [rsp+90h] [rbp-61h]
  char *v91; // [rsp+98h] [rbp-59h] BYREF

  v9 = 0;
  v10 = a9;
  v11 = -1;
  v83 = a8;
  v86 = a6;
  v90 = a9;
  LODWORD(v81) = -1;
  v84 = 0LL;
  LODWORD(v80) = 0;
  v87 = 0LL;
  if ( !a9 )
    return 0LL;
  v85 = &v91;
  v88 = (char *)EngAllocMem(1u, 80 * *(_DWORD *)&a1->dmDeviceName[10] + 112, 0x76645647u);
  v13 = (struct HDEV__ *)v88;
  if ( !v88 )
    return 0LL;
  pv = EngAllocMem(1u, 8 * *(_DWORD *)&a1->dmDeviceName[10], 0x73647647u);
  if ( !pv )
  {
LABEL_39:
    EngFreeMem(v13);
    return 0LL;
  }
  v15 = v88 + 112;
  *((_DWORD *)v88 + 4) = *(_DWORD *)&a1->dmDeviceName[10];
  *((_DWORD *)v13 + 18) = 0x7FFFFFFF;
  *((_DWORD *)v13 + 19) = 0x7FFFFFFF;
  *((_DWORD *)v13 + 20) = 0x80000000;
  *((_DWORD *)v13 + 21) = 0x80000000;
  v16 = 0LL;
  *((_QWORD *)v13 + 4) = a9;
  v79 = 0;
  if ( *(_DWORD *)&a1->dmDeviceName[10] )
  {
    v17 = -1;
    do
    {
      v89 = 56 * v16;
      v18 = *(_QWORD *)&a1->dmDeviceName[28 * v16 + 20];
      v19 = *(_QWORD *)(W32GetSessionState(v14) + 88);
      if ( *(_QWORD *)(v18 + 2568) == -4LL && !*(_DWORD *)(v19 + 3076) )
      {
        GrepCaptureLiveMemoryDump(0x190u, 38LL, v18, (__int64)a1, 0LL, 0);
        *(_DWORD *)(v19 + 3076) = 1;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v18 + 2568) + 160LL) & 4) != 0 )
      {
        v52 = *(_DWORD *)(v18 + 2156);
        v53 = (_OWORD *)(v18 + 2120);
        v84 = v18;
        v54 = 2LL;
        LODWORD(v80) = v52 & 0x100;
        v55 = v86;
        do
        {
          *(_OWORD *)&v55->ulVersion = *v53;
          *(_OWORD *)&v55->ulHorzRes = v53[1];
          *(_OWORD *)&v55->ulNumColors = v53[2];
          *(_OWORD *)&v55->flTextCaps = v53[3];
          *(_OWORD *)&v55->ulAspectX = v53[4];
          *(_OWORD *)&v55->yStyleStep = v53[5];
          *(_OWORD *)&v55->szlPhysSize.cx = v53[6];
          v55 = (struct _GDIINFO *)((char *)v55 + 128);
          v56 = v53[7];
          v53 += 8;
          *(_OWORD *)&v55[-1].flShadeBlend = v56;
          --v54;
        }
        while ( v54 );
        v57 = 2LL;
        *(_OWORD *)&v55->ulVersion = *v53;
        *(_OWORD *)&v55->ulHorzRes = v53[1];
        *(_OWORD *)&v55->ulNumColors = v53[2];
        v58 = v53[3];
        v59 = v83;
        *(_OWORD *)&v55->flTextCaps = v58;
        v60 = (_OWORD *)(v18 + 1808);
        do
        {
          *(_OWORD *)v59 = *v60;
          *((_OWORD *)v59 + 1) = v60[1];
          *((_OWORD *)v59 + 2) = v60[2];
          *((_OWORD *)v59 + 3) = v60[3];
          *((_OWORD *)v59 + 4) = v60[4];
          *((_OWORD *)v59 + 5) = v60[5];
          *((_OWORD *)v59 + 6) = v60[6];
          v59 = (struct tagDEVINFO *)((char *)v59 + 128);
          v61 = v60[7];
          v60 += 8;
          *((_OWORD *)v59 - 1) = v61;
          --v57;
        }
        while ( v57 );
        *(_OWORD *)v59 = *v60;
        *((_OWORD *)v59 + 1) = v60[1];
        *((_OWORD *)v59 + 2) = v60[2];
        *((_QWORD *)v59 + 6) = *((_QWORD *)v60 + 6);
      }
      v17 &= *(_DWORD *)(v18 + 1808);
      v20 = v89;
      LODWORD(v81) = *(_DWORD *)(v18 + 2112) & v81;
      v21 = v85;
      *v85 = v15;
      v21[1] = v15;
      *((_DWORD *)v15 + 4) = v79;
      *(_OWORD *)(v15 + 28) = *(_OWORD *)((char *)&a1->dmDeviceName[28] + v20);
      v22 = *(_QWORD *)((char *)&a1->dmDeviceName[20] + v20);
      *((_QWORD *)v15 + 7) = v22;
      *((_QWORD *)v15 + 6) = v22;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)(v15 + 56));
      v23 = v91;
      *((_DWORD *)v15 + 18) = -*(_DWORD *)(v18 + 2576);
      *((_DWORD *)v15 + 19) = -*(_DWORD *)(v18 + 2580);
      v24 = *(_QWORD *)(v18 + 2544);
      v25 = v23;
      *((_DWORD *)v15 + 5) = 1;
      *((_QWORD *)v15 + 8) = (v24 + 24) & -(__int64)(v24 != 0);
      if ( v23 != v15 )
      {
        do
        {
          if ( (unsigned int)bIntersect((char *)v25 + 28, v15 + 28) )
          {
            *(_DWORD *)(*((_QWORD *)v15 + 7) + 1808LL) |= 0x8000000u;
            *((_DWORD *)v15 + 5) = 0;
          }
          v25 = (_QWORD *)*v25;
        }
        while ( v25 != (_QWORD *)v15 );
        v13 = (struct HDEV__ *)v88;
      }
      v26 = *((_DWORD *)v15 + 7);
      v27 = *((_DWORD *)v13 + 18);
      v85 = (char **)v15;
      if ( v27 >= v26 )
        v27 = v26;
      *((_DWORD *)v13 + 18) = v27;
      v28 = *((_DWORD *)v13 + 19);
      if ( v28 >= *((_DWORD *)v15 + 8) )
        v28 = *((_DWORD *)v15 + 8);
      *((_DWORD *)v13 + 19) = v28;
      v29 = *((_DWORD *)v13 + 20);
      if ( v29 <= *((_DWORD *)v15 + 9) )
        v29 = *((_DWORD *)v15 + 9);
      *((_DWORD *)v13 + 20) = v29;
      v30 = *((_DWORD *)v15 + 10);
      v14 = *((unsigned int *)v13 + 21);
      if ( (int)v14 <= v30 )
        v14 = (unsigned int)v30;
      v16 = (unsigned int)(v79 + 1);
      *((_DWORD *)v13 + 21) = v14;
      v15 += 80;
      v79 = v16;
    }
    while ( (unsigned int)v16 < *(_DWORD *)&a1->dmDeviceName[10] );
    v11 = v17;
    v10 = v90;
  }
  else
  {
    v23 = v91;
  }
  v31 = v86;
  v32 = v11 & 0xFFFEE7FF;
  v33 = v83;
  v34 = v84;
  v86->ulHorzSize = -v86->ulHorzSize;
  v31->ulVertSize = -v31->ulVertSize;
  v35 = v32 | 0x80020;
  if ( !(_DWORD)v80 )
    v35 = v32;
  *(_DWORD *)v33 = v35;
  *((_DWORD *)v33 + 76) = v81;
  v13[16] = *(_DWORD *)(struct HDEV__ *)((int)v33 + 284);
  *(_QWORD *)v13 = v23;
  *((_QWORD *)v13 + 1) = v23;
  *((_QWORD *)v13 + 5) = v34;
  while ( v23 )
  {
    v36 = *((_QWORD *)v23 + 6);
    v37 = v23 == *(char **)v13;
    _m_prefetchw((const void *)(v36 + 40));
    if ( v37 )
    {
      do
        v38 = *(_DWORD *)(v36 + 40);
      while ( v38 != _InterlockedCompareExchange((volatile signed __int32 *)(v36 + 40), v38 | 0x10000000, v38) );
      v39 = 0LL;
    }
    else
    {
      do
        v62 = *(_DWORD *)(v36 + 40);
      while ( v62 != _InterlockedCompareExchange((volatile signed __int32 *)(v36 + 40), v62 & 0xEFFFFFFF, v62) );
      v39 = *(_QWORD *)(*(_QWORD *)v13 + 48LL);
    }
    *(_QWORD *)(v36 + 32) = v39;
    if ( v36 == v34 )
    {
      *((_DWORD *)v23 + 6) = 0;
    }
    else
    {
      v40 = (unsigned int)(*(_DWORD *)(v36 + 2092) - *((_DWORD *)v13 + 16));
      *((_DWORD *)v23 + 6) = v40;
      if ( !(_DWORD)v40 )
      {
        v41 = HmgShareLockCheck(*((_QWORD *)v33 + 37), 8);
        v42 = HmgShareLockCheck(*(_QWORD *)(v36 + 2104), 8);
        if ( !v41 )
        {
          if ( v42 )
          {
            v43 = (struct _BASEOBJECT *)v42;
LABEL_37:
            HmgDecrementShareReferenceCountEx(v43, 0LL);
          }
          EngFreeMem(pv);
          goto LABEL_39;
        }
        if ( !v42 )
        {
          v43 = (struct _BASEOBJECT *)v41;
          goto LABEL_37;
        }
        v50 = *(_DWORD *)(v42 + 24) & 0x1F;
        v51 = *(_DWORD *)(v41 + 24) & 0x1F;
        *((_DWORD *)v23 + 6) = v51 != v50;
        if ( v51 == v50 && (*(_DWORD *)(v41 + 24) & 0x1F) == 2 )
        {
          v63 = *(_DWORD **)(v42 + 112);
          v64 = *(_DWORD **)(v41 + 112);
          if ( *v64 != *v63 || v64[1] != v63[1] || (v65 = 0, v64[2] != v63[2]) )
            v65 = 1;
          *((_DWORD *)v23 + 6) = v65;
        }
        HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)v42, 0LL);
        HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)v41, 0LL);
      }
      if ( *((_DWORD *)v23 + 6) )
      {
        *(_DWORD *)&a1->dmDeviceName[8] |= 1u;
        *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v40) + 88) + 3072LL) = 1;
      }
    }
    v23 = *(char **)v23;
    v33 = v83;
    v34 = v84;
  }
  v10[644] = v13[18];
  v10[645] = v13[19];
  *((_DWORD *)v10 + 425) = *((_DWORD *)v13 + 20) - *((_DWORD *)v13 + 18);
  *((_DWORD *)v10 + 426) = *((_DWORD *)v13 + 21) - *((_DWORD *)v13 + 19);
  _m_prefetchw(v10 + 10);
  do
    v45 = *((_DWORD *)v10 + 10);
  while ( v45 != _InterlockedCompareExchange((volatile signed __int32 *)v10 + 10, v45 | 0x20000, v45) );
  v46 = *(unsigned int *)&a1->dmDeviceName[10];
  v47 = 0;
  v48 = 0;
  if ( !(_DWORD)v46 )
    goto LABEL_45;
  v66 = pv;
  do
  {
    v67 = *(_QWORD *)&a1->dmDeviceName[28 * v48 + 20];
    v80 = v67;
    if ( (*(_DWORD *)(v67 + 1808) & 0x8000000) != 0 )
    {
      _m_prefetchw(v10 + 10);
      do
        v68 = *((_DWORD *)v10 + 10);
      while ( v68 != _InterlockedCompareExchange((volatile signed __int32 *)v10 + 10, v68 | 0x1000000, v68) );
      v67 = v80;
      if ( (*(_DWORD *)(v80 + 2112) & 0x1000) != 0 )
      {
        _m_prefetchw(v10 + 10);
        do
          v69 = *((_DWORD *)v10 + 10);
        while ( v69 != _InterlockedCompareExchange((volatile signed __int32 *)v10 + 10, v69 | 0x2000000, v69) );
        *((_DWORD *)v10 + 528) |= 0x1000u;
        v67 = v80;
      }
      if ( (*(_DWORD *)(v67 + 2112) & 0x8000) != 0 )
      {
        _m_prefetchw(v10 + 10);
        do
          v70 = *((_DWORD *)v10 + 10);
        while ( v70 != _InterlockedCompareExchange((volatile signed __int32 *)v10 + 10, v70 | 0x20000000, v70) );
        v67 = v80;
      }
      v71 = v47++;
      v66[v71] = *(_QWORD *)&a1->dmDeviceName[28 * v48 + 20];
    }
    if ( !(unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v80) && *(_DWORD *)(v67 + 2604) != 5 )
    {
      _m_prefetchw(v10 + 10);
      do
        v72 = *((_DWORD *)v10 + 10);
      while ( v72 != _InterlockedCompareExchange((volatile signed __int32 *)v10 + 10, v72 | 0x8000000, v72) );
      v67 = v80;
    }
    if ( ((_DWORD)v10[10] & 0x4000000) == 0 && ((*(_DWORD *)(v67 + 2112) & 0x8000) == 0 || !*(_QWORD *)(v67 + 2760)) )
    {
      if ( !v87 || (v73 = PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v80), v73 == v74) )
      {
        v87 = PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v80);
      }
      else
      {
        _m_prefetchw(v10 + 10);
        do
          v75 = *((_DWORD *)v10 + 10);
        while ( v75 != _InterlockedCompareExchange((volatile signed __int32 *)v10 + 10, v75 | 0x4000000, v75) );
      }
    }
    if ( ((_DWORD)v10[10] & 0x40000000) == 0 && !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v80) )
    {
      _m_prefetchw(v10 + 10);
      do
        v76 = *((_DWORD *)v10 + 10);
      while ( v76 != _InterlockedCompareExchange((volatile signed __int32 *)v10 + 10, v76 | 0x40000000, v76) );
    }
    v46 = *(unsigned int *)&a1->dmDeviceName[10];
    ++v48;
  }
  while ( v48 < (unsigned int)v46 );
  v13 = (struct HDEV__ *)v88;
  if ( (_DWORD)v46 )
  {
    v49 = pv;
    do
    {
      v77 = *(_QWORD *)&a1->dmDeviceName[28 * v9 + 20];
      if ( (*(_DWORD *)(v77 + 1808) & 0x8000000) == 0 )
      {
        v78 = v47++;
        v49[v78] = v77;
      }
      v46 = *(unsigned int *)&a1->dmDeviceName[10];
      ++v9;
    }
    while ( v9 < (unsigned int)v46 );
  }
  else
  {
LABEL_45:
    v49 = pv;
  }
  vSpEnableMultiMon(v10, v46, v49);
  return v13;
}
