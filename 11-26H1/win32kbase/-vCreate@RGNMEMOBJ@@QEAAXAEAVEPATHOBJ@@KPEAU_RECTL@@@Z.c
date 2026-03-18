/*
 * XREFs of ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x14000F920
 * Callers:
 *     GreExtCreateRegion @ 0x140011690 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1400C0C00 (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x1401A5920 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     bConstructGET @ 0x14000E8C0 (bConstructGET.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x14000EC14 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x14000ECF0 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x14000EE98 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x14000F730 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?CloseAllFigures@PATH_CORE@@QEAAKXZ @ 0x140010080 (-CloseAllFigures@PATH_CORE@@QEAAKXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140015950 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x140015AE0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140021EE0 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?bFlatten@EPATHOBJ@@QEAA_NXZ @ 0x14011A4A0 (-bFlatten@EPATHOBJ@@QEAA_NXZ.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1401BCB10 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memcmp @ 0x14024C590 (memcmp.c)
 */

void __fastcall RGNMEMOBJ::vCreate(RGNMEMOBJ *this, struct EPATHOBJ *a2, unsigned int a3, struct _RECTL *a4)
{
  RGNOBJ *v7; // r14
  unsigned int v8; // edi
  _DWORD *v9; // rsi
  const struct BaseRustExports *v10; // rdi
  int v11; // ebx
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  struct EDGE *v15; // rdi
  int v16; // r12d
  __int64 v17; // rcx
  LONG top; // edx
  LONG bottom; // r8d
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct REGION *Region; // rax
  int v23; // r13d
  _QWORD *v24; // rax
  int v25; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  _QWORD *v27; // rdx
  int v28; // r8d
  _QWORD *v29; // rcx
  int v31; // r10d
  __int64 v32; // r9
  bool v33; // sf
  __int64 v34; // r9
  int v35; // ecx
  __int64 *v36; // rdx
  _QWORD *v37; // r9
  int v38; // r8d
  __int64 *v39; // rcx
  __int64 v40; // rcx
  int v41; // r10d
  _QWORD *v42; // rdx
  _QWORD *v43; // r9
  __int64 v44; // rbx
  __int64 *v45; // r8
  int v46; // r11d
  unsigned int v47; // edi
  PVOID DeferredContext; // rax
  int v49; // ebx
  int v50; // ecx
  _QWORD *v51; // rcx
  _DWORD *v52; // rsi
  __int64 *v53; // rcx
  _DWORD *v54; // rax
  int v55; // edx
  __int64 v56; // rdi
  _DWORD *v57; // rbx
  __int64 v58; // r15
  int v59; // edx
  _DWORD *v60; // rax
  int v61; // edx
  int v62; // edx
  int v63; // edx
  _DWORD *v64; // rcx
  unsigned int sizeScanAlloc; // eax
  unsigned int v66; // ecx
  __int64 v67; // rbx
  unsigned int sizeScan; // eax
  struct EDGE *v69; // [rsp+30h] [rbp-D0h]
  char v70; // [rsp+38h] [rbp-C8h]
  _QWORD v71[9]; // [rsp+40h] [rbp-C0h] BYREF
  RGNOBJ *v72; // [rsp+88h] [rbp-78h]
  struct _GRETHREAD *v73; // [rsp+90h] [rbp-70h]
  _QWORD v74[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v75[1280]; // [rsp+E0h] [rbp-20h] BYREF

  v70 = a3;
  v7 = this;
  v72 = this;
  if ( !*((_QWORD *)a2 + 1) )
    return;
  memset(v71, 0, 0x40uLL);
  memset(v74, 0, sizeof(v74));
  *(_QWORD *)v7 = 0LL;
  if ( (*(_BYTE *)a2 & 1) != 0 && !EPATHOBJ::bFlatten(a2) )
    return;
  v8 = PATH_CORE::CloseAllFigures((PATH_CORE *)(*((_QWORD *)a2 + 1) + 24LL)) + *((_DWORD *)a2 + 1);
  *((_DWORD *)a2 + 1) = v8;
  if ( v8 < 2 )
    return;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    RGNMEMOBJ::vInitialize(v7, 0x70u);
    v9 = *(_DWORD **)v7;
    if ( !*(_QWORD *)v7 )
      return;
    v10 = *(const struct BaseRustExports **)WPP_MAIN_CB.Dpc.DeferredContext;
    v11 = (*(__int64 (__fastcall **)(_DWORD *, struct EPATHOBJ *, _QWORD, struct _RECTL *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                                          + 160LL))(
            v9 + 6,
            a2,
            a3,
            a4);
    RgnCaptureLiveMemoryDumpOnZeroSizedScan(v10, (const struct REGION_CORE *)(v9 + 6));
    if ( v11 )
      return;
    goto LABEL_7;
  }
  if ( !a4 || (v13 = *((_QWORD *)a2 + 1), a4->top < *(_DWORD *)(v13 + 52)) && a4->bottom > *(_DWORD *)(v13 + 60) )
  {
    if ( (unsigned int)RGNMEMOBJ::bFastFillWrapper(v7, a2) )
    {
      RGNOBJ::vTighten(v7);
      v12 = *(_DWORD **)v7;
      if ( ((*(_DWORD *)(*(_QWORD *)v7 + 52LL) & 0xF8000000) == 0
         || (*(_DWORD *)(*(_QWORD *)v7 + 52LL) & 0xF8000000) == 0xF8000000)
        && ((v12[16] & 0xF8000000) == 0 || (v12[16] & 0xF8000000) == 0xF8000000)
        && ((v12[15] & 0xF8000000) == 0 || (v12[15] & 0xF8000000) == 0xF8000000)
        && ((v12[14] & 0xF8000000) == 0 || (v12[14] & 0xF8000000) == 0xF8000000) )
      {
        return;
      }
LABEL_7:
      RGNOBJ::vDeleteRGNOBJ(v7);
      return;
    }
  }
  if ( v8 < 0x14 )
  {
    v15 = (struct EDGE *)v75;
    v16 = 0;
    v69 = (struct EDGE *)v75;
  }
  else
  {
    if ( v8 + 1 < v8 )
      return;
    v14 = (unsigned __int64)(v8 + 1) << 6;
    if ( v14 > 0xFFFFFFFF )
      return;
    v69 = (struct EDGE *)PALLOCNOZ(v14, 0x67646547u);
    v15 = v69;
    if ( !v69 )
      return;
    v16 = 1;
  }
  v17 = *((_QWORD *)a2 + 1);
  top = *(_DWORD *)(v17 + 52);
  bottom = *(_DWORD *)(v17 + 60);
  if ( bottom < top )
    goto LABEL_98;
  if ( a4 )
  {
    if ( top <= a4->top )
      top = a4->top;
    if ( bottom >= a4->bottom )
      bottom = a4->bottom;
  }
  v20 = bottom - (__int64)top;
  if ( v20 <= 0 )
    v20 = 0LL;
  v21 = 32 * (v20 >> 4) + 432;
  if ( v21 > 0x7FFFFFFF )
    goto LABEL_98;
  Region = RGNMEMOBJ::AllocateRegion(v21);
  *(_QWORD *)v7 = Region;
  if ( !Region )
    goto LABEL_98;
  REGION_CORE::set_sizeScan((struct REGION *)((char *)Region + 24), 0);
  v23 = 0x80000000;
  *(_DWORD *)(*(_QWORD *)v7 + 76LL) = 0;
  *(_DWORD *)(*(_QWORD *)v7 + 72LL) = 0;
  *(_DWORD *)(*(_QWORD *)v7 + 48LL) = 0;
  v24 = (_QWORD *)(*(_QWORD *)v7 + 80LL);
  v24[1] = v24;
  *v24 = v24;
  v25 = bConstructGET((__int64)a2, (__int64)v74, v15, a4);
  if ( !v25 )
    goto LABEL_90;
  CurrentThread = GreGetCurrentThread();
  v73 = CurrentThread;
  v71[0] = v71;
  *(_QWORD *)((char *)&v71[1] + 4) = 0x7FFFFFFFLL;
  while ( 1 )
  {
    if ( !v25 || PsIsThreadTerminating(*((PETHREAD *)CurrentThread - 1)) )
      goto LABEL_89;
    v27 = (_QWORD *)v71[0];
    if ( (_QWORD *)v71[0] != v71 )
    {
      v28 = v71[2];
      v29 = v71;
      do
      {
        if ( (*((_DWORD *)v27 + 2))-- == 1 )
        {
          --v28;
          *v29 = *v27;
        }
        else
        {
          v31 = *((_DWORD *)v27 + 3) + *((_DWORD *)v27 + 12);
          v32 = v27[4];
          v33 = v27[3] + v32 < 0;
          v34 = v27[3] + v32;
          v27[3] = v34;
          *((_DWORD *)v27 + 3) = v31;
          if ( !v33 )
          {
            v35 = *((_DWORD *)v27 + 13);
            v27[3] = v34 - v27[5];
            *((_DWORD *)v27 + 3) = v31 + v35;
          }
          v29 = v27;
        }
        v27 = (_QWORD *)*v29;
      }
      while ( (_QWORD *)*v29 != v71 );
      v7 = v72;
      LODWORD(v71[2]) = v28;
      if ( (_QWORD *)v71[0] != v71 )
      {
        if ( *(_QWORD **)v71[0] != v71 )
        {
          do
          {
            v36 = (__int64 *)v71[0];
            v37 = v71;
            v38 = 0;
            v39 = *(__int64 **)v71[0];
            do
            {
              if ( *((_DWORD *)v39 + 3) < *((_DWORD *)v36 + 3) )
              {
                *v37 = v39;
                v38 = 1;
                *v36 = *v39;
                *v39 = (__int64)v36;
                v36 = v39;
              }
              v37 = v36;
              v36 = (__int64 *)*v36;
              v39 = (__int64 *)*v36;
            }
            while ( (_QWORD *)*v36 != v71 );
          }
          while ( v38 );
        }
LABEL_47:
        v40 = v74[0];
        goto LABEL_48;
      }
    }
    v40 = v74[0];
    v63 = v23;
    if ( (_QWORD *)v74[0] == v74 )
      break;
    v23 = *(_DWORD *)(v74[0] + 16LL);
    if ( v23 != v63 )
    {
      if ( !(unsigned int)RGNMEMOBJ::bAddNullScan(v7, v63, v23) )
        goto LABEL_89;
      goto LABEL_47;
    }
LABEL_48:
    if ( *(_DWORD *)(v40 + 16) == v23 )
    {
      v41 = v71[2];
      v42 = v71;
      v43 = (_QWORD *)v40;
      v44 = v40;
      do
      {
        v45 = (__int64 *)*v42;
        v46 = *(_DWORD *)(v44 + 12);
        if ( v46 > *(_DWORD *)(*v42 + 12LL) )
        {
          do
          {
            v42 = v45;
            v45 = (__int64 *)*v45;
          }
          while ( v46 > *((_DWORD *)v45 + 3) );
        }
        ++v41;
        v74[0] = *(_QWORD *)v40;
        *(_QWORD *)v44 = *v42;
        *v42 = v43;
        v42 = v43;
        v40 = v74[0];
        v43 = (_QWORD *)v74[0];
        v44 = v74[0];
      }
      while ( *(_DWORD *)(v74[0] + 16LL) == v23 );
      LODWORD(v71[2]) = v41;
    }
    v47 = 4 * LODWORD(v71[2]) + 16;
    DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 184LL))(*(_QWORD *)v7 + 24LL);
      DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
    }
    else
    {
      v49 = *(_DWORD *)(*(_QWORD *)v7 + 32LL);
    }
    if ( DeferredContext )
    {
      v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)DeferredContext + 176LL))(*(_QWORD *)v7 + 24LL);
      DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
    }
    else
    {
      v50 = *(_DWORD *)(*(_QWORD *)v7 + 40LL);
    }
    if ( v47 <= v49 - v50 )
      goto LABEL_58;
    sizeScanAlloc = REGION_CORE::get_sizeScanAlloc((REGION_CORE *)(*(_QWORD *)v7 + 24LL));
    v66 = sizeScanAlloc + v47;
    if ( sizeScanAlloc + v47 >= sizeScanAlloc && v66 + 1120 >= v66 && (unsigned int)RGNOBJ::bExpand(v7, v66 + 1120) )
    {
      DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
LABEL_58:
      v51 = (_QWORD *)(*(_QWORD *)v7 + 24LL);
      if ( DeferredContext )
        v52 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*(_QWORD *)DeferredContext + 224LL))(v51);
      else
        v52 = (_DWORD *)(*v51 + *(_QWORD *)(*(_QWORD *)v7 + 40LL));
      v53 = (__int64 *)v71[0];
      v52[2] = 0x80000000;
      v54 = v52 + 2;
      if ( v53 != v71 )
      {
        if ( (v70 & 2) != 0 )
        {
          do
          {
            v59 = *((_DWORD *)v53 + 3);
            if ( *v54 >= v59 )
            {
              v60 = v54 - 1;
            }
            else
            {
              v60 = v54 + 1;
              *v60 = v59;
            }
            v61 = *((_DWORD *)v53 + 14);
            do
            {
              v53 = (__int64 *)*v53;
              v61 += *((_DWORD *)v53 + 14);
            }
            while ( v61 );
            v62 = *((_DWORD *)v53 + 3);
            if ( *v60 >= v62 )
            {
              v54 = v60 - 1;
            }
            else
            {
              v54 = v60 + 1;
              *v54 = v62;
            }
            v53 = (__int64 *)*v53;
          }
          while ( v53 != v71 );
        }
        else
        {
          do
          {
            v55 = *((_DWORD *)v53 + 3);
            if ( *v54 >= v55 )
              --v54;
            else
              *++v54 = v55;
            v53 = (__int64 *)*v53;
          }
          while ( v53 != v71 );
        }
      }
      v56 = (unsigned int)((unsigned __int64)((char *)v54 - (char *)(v52 + 2)) >> 2);
      v57 = (_DWORD *)((char *)v52 - (unsigned int)(4 * *(v52 - 1) + 16));
      if ( *v57 == (_DWORD)v56 )
      {
        v58 = (unsigned int)v56;
        if ( !memcmp(v57 + 3, v52 + 3, 4 * v56) )
        {
          v57[2] = v23 + 1;
LABEL_68:
          v25 = 1;
          goto LABEL_69;
        }
      }
      else
      {
        v58 = (unsigned int)((unsigned __int64)((char *)v54 - (char *)(v52 + 2)) >> 2);
      }
      ++*(_DWORD *)(*(_QWORD *)v7 + 48LL);
      v67 = *(_QWORD *)v7;
      sizeScan = REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL));
      REGION_CORE::set_sizeScan((REGION_CORE *)(v67 + 24), sizeScan + 16 + 4 * v56);
      v52[1] = v23;
      v52[2] = v23 + 1;
      *v52 = v56;
      v52[v58 + 3] = v56;
      goto LABEL_68;
    }
    v25 = 0;
LABEL_69:
    CurrentThread = v73;
    ++v23;
  }
  if ( !(unsigned int)RGNMEMOBJ::bAddNullScan(v7, v23, 0x7FFFFFFF)
    || (RGNOBJ::vTighten(v7), v64 = *(_DWORD **)v7, (*(_DWORD *)(*(_QWORD *)v7 + 52LL) & 0xF8000000) != 0)
    && (*(_DWORD *)(*(_QWORD *)v7 + 52LL) & 0xF8000000) != 0xF8000000
    || (v64[16] & 0xF8000000) != 0 && (v64[16] & 0xF8000000) != 0xF8000000
    || (v64[15] & 0xF8000000) != 0 && (v64[15] & 0xF8000000) != 0xF8000000 )
  {
LABEL_89:
    v15 = v69;
    goto LABEL_90;
  }
  v15 = v69;
  if ( (v64[14] & 0xF8000000) != 0 && (v64[14] & 0xF8000000) != 0xF8000000 )
LABEL_90:
    RGNOBJ::vDeleteRGNOBJ(v7);
LABEL_98:
  if ( v16 )
    GreDeleteFastMutex(v15);
}
