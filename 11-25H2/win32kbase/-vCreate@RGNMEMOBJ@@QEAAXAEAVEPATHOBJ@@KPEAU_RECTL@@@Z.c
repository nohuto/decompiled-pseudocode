/*
 * XREFs of ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400963B0
 * Callers:
 *     GreExtCreateRegion @ 0x140096D00 (GreExtCreateRegion.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x14009AEA0 (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x14000EE20 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x14000F490 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x140010450 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x1400112F0 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400133F0 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x140094980 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     bConstructGET @ 0x140094F10 (bConstructGET.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x140095278 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140095AE0 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     ?RegionCore_set_from_path@Win32kRS@@YAHPEAVREGION_CORE@@AEAVEPATHOBJ@@KPEBU_RECTL@@@Z @ 0x140095BA8 (-RegionCore_set_from_path@Win32kRS@@YAHPEAVREGION_CORE@@AEAVEPATHOBJ@@KPEBU_RECTL@@@Z.c)
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x140095C5C (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x140095EA0 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140096A80 (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?CloseAllFigures@PATH_CORE@@QEAAKXZ @ 0x140096B20 (-CloseAllFigures@PATH_CORE@@QEAAKXZ.c)
 *     ?bFlatten@EPATHOBJ@@QEAA_NXZ @ 0x1400D57C0 (-bFlatten@EPATHOBJ@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 *     memcmp @ 0x140243810 (memcmp.c)
 */

void __fastcall RGNMEMOBJ::vCreate(RGNMEMOBJ *this, struct EPATHOBJ *a2, struct EPATHOBJ *a3, struct _RECTL *a4)
{
  unsigned int v5; // r15d
  RGNOBJ *v7; // rsi
  unsigned int v8; // r14d
  struct REGION_CORE *v9; // rdx
  _DWORD *v10; // r9
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  struct EDGE *v13; // r13
  int v14; // r14d
  __int64 v15; // rcx
  LONG top; // edx
  LONG bottom; // r8d
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct REGION *Region; // rax
  unsigned int v21; // r8d
  int v22; // r15d
  _QWORD *v23; // rax
  int v24; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  _QWORD *v26; // rdx
  int v27; // r8d
  _QWORD *v28; // rcx
  int v30; // r10d
  __int64 v31; // r9
  bool v32; // sf
  __int64 v33; // r9
  int v34; // ecx
  _QWORD *v35; // rcx
  _QWORD *v36; // rdx
  _QWORD *v37; // r8
  int v38; // r9d
  __int64 v39; // rcx
  int v40; // r10d
  _QWORD *v41; // rdx
  _QWORD *v42; // r9
  __int64 v43; // rax
  __int64 *v44; // r8
  int v45; // r11d
  unsigned int v46; // edi
  int sizeScanAlloc; // ebx
  struct SCAN *pscnTail; // rax
  __int64 *v49; // rcx
  struct SCAN *v50; // r12
  char *v51; // r8
  _DWORD *v52; // rdi
  int v53; // eax
  unsigned __int64 v54; // rdi
  __int64 v55; // rcx
  char *v56; // rbx
  int v57; // eax
  _DWORD *v58; // rdi
  int v59; // eax
  int v60; // eax
  __int64 v61; // rbx
  int sizeScan; // eax
  unsigned int v63; // r8d
  int v64; // edx
  struct REGION_CORE *v65; // rdx
  _DWORD *v66; // r9
  unsigned int v67; // eax
  unsigned int v68; // ecx
  struct REGION_CORE *v69; // rdx
  char v70; // [rsp+24h] [rbp-DCh]
  _QWORD v71[8]; // [rsp+30h] [rbp-D0h] BYREF
  RGNOBJ *v72; // [rsp+70h] [rbp-90h]
  struct _GRETHREAD *v73; // [rsp+78h] [rbp-88h]
  _QWORD v74[8]; // [rsp+80h] [rbp-80h] BYREF
  char v75; // [rsp+C0h] [rbp-40h] BYREF

  v70 = (char)a3;
  v5 = (unsigned int)a3;
  v7 = this;
  v72 = this;
  if ( !*((_QWORD *)a2 + 1) )
    return;
  memset(v71, 0, sizeof(v71));
  memset(v74, 0, sizeof(v74));
  *(_QWORD *)v7 = 0LL;
  if ( (*(_BYTE *)a2 & 1) != 0 && !EPATHOBJ::bFlatten(a2) )
    return;
  *((_DWORD *)a2 + 1) += PATH_CORE::CloseAllFigures((PATH_CORE *)(*((_QWORD *)a2 + 1) + 24LL));
  v8 = *((_DWORD *)a2 + 1);
  if ( v8 < 2 )
    return;
  if ( qword_1402A10B0 )
  {
    RGNMEMOBJ::vInitialize(v7, 0x70u);
    if ( *(_QWORD *)v7
      && !(unsigned int)Win32kRS::RegionCore_set_from_path(
                          (Win32kRS *)(*(_QWORD *)v7 + 24LL),
                          a2,
                          (struct EPATHOBJ *)v5,
                          (__int64)a4) )
    {
      goto LABEL_14;
    }
    return;
  }
  if ( a4 && ((v11 = *((_QWORD *)a2 + 1), a4->top >= *(_DWORD *)(v11 + 52)) || a4->bottom <= *(_DWORD *)(v11 + 60))
    || !(unsigned int)RGNMEMOBJ::bFastFillWrapper(v7, a2) )
  {
    if ( v8 < 0x14 )
    {
      v13 = (struct EDGE *)&v75;
      v14 = 0;
    }
    else
    {
      if ( v8 + 1 < v8 )
        return;
      v12 = (unsigned __int64)(v8 + 1) << 6;
      if ( v12 > 0xFFFFFFFF )
        return;
      v13 = (struct EDGE *)PALLOCNOZ(v12, 1734632775LL);
      if ( !v13 )
        return;
      v14 = 1;
    }
    v15 = *((_QWORD *)a2 + 1);
    top = *(_DWORD *)(v15 + 52);
    bottom = *(_DWORD *)(v15 + 60);
    if ( bottom >= top )
    {
      if ( a4 )
      {
        if ( top <= a4->top )
          top = a4->top;
        if ( bottom >= a4->bottom )
          bottom = a4->bottom;
      }
      v18 = bottom - (__int64)top;
      if ( v18 <= 0 )
        v18 = 0LL;
      v19 = 32 * (v18 >> 4) + 432;
      if ( v19 <= 0x7FFFFFFF )
      {
        Region = RGNMEMOBJ::AllocateRegion(v19);
        *(_QWORD *)v7 = Region;
        if ( Region )
        {
          REGION_CORE::set_sizeScan((struct REGION *)((char *)Region + 24), 0LL, v21);
          v22 = 0x80000000;
          *(_DWORD *)(*(_QWORD *)v7 + 76LL) = 0;
          *(_DWORD *)(*(_QWORD *)v7 + 72LL) = 0;
          *(_DWORD *)(*(_QWORD *)v7 + 48LL) = 0;
          v23 = (_QWORD *)(*(_QWORD *)v7 + 80LL);
          v23[1] = v23;
          *v23 = v23;
          v24 = bConstructGET((__int64)a2, (__int64)v74, v13, a4);
          if ( v24 )
          {
            CurrentThread = GreGetCurrentThread();
            v73 = CurrentThread;
            v71[0] = v71;
            *(_QWORD *)((char *)&v71[1] + 4) = 0x7FFFFFFFLL;
            while ( 1 )
            {
              if ( !v24 || PsIsThreadTerminating(*((PETHREAD *)CurrentThread - 1)) )
                goto LABEL_81;
              v26 = (_QWORD *)v71[0];
              if ( (_QWORD *)v71[0] != v71 )
              {
                v27 = v71[2];
                v28 = v71;
                do
                {
                  if ( (*((_DWORD *)v26 + 2))-- == 1 )
                  {
                    --v27;
                    *v28 = *v26;
                  }
                  else
                  {
                    v30 = *((_DWORD *)v26 + 3) + *((_DWORD *)v26 + 12);
                    v31 = v26[4];
                    v32 = v26[3] + v31 < 0;
                    v33 = v26[3] + v31;
                    v26[3] = v33;
                    *((_DWORD *)v26 + 3) = v30;
                    if ( !v32 )
                    {
                      v34 = *((_DWORD *)v26 + 13);
                      v26[3] = v33 - v26[5];
                      *((_DWORD *)v26 + 3) = v30 + v34;
                    }
                    v28 = v26;
                  }
                  v26 = (_QWORD *)*v28;
                }
                while ( (_QWORD *)*v28 != v71 );
                v35 = (_QWORD *)v71[0];
                v7 = v72;
                LODWORD(v71[2]) = v27;
                if ( (_QWORD *)v71[0] != v71 )
                  break;
              }
              v39 = v74[0];
              v64 = v22;
              if ( (_QWORD *)v74[0] == v74 )
              {
                if ( !(unsigned int)RGNMEMOBJ::bAddNullScan(v7, v22, 0x7FFFFFFF) )
                  goto LABEL_81;
                RGNOBJ::vTighten(v7, v65);
                v66 = *(_DWORD **)v7;
                if ( (*(_DWORD *)(*(_QWORD *)v7 + 52LL) & 0xF8000000) != 0
                  && (*(_DWORD *)(*(_QWORD *)v7 + 52LL) & 0xF8000000) != -134217728
                  || (v66[16] & 0xF8000000) != 0 && (v66[16] & 0xF8000000) != -134217728
                  || (((v66[15] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
                  || (((v66[14] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
                {
                  goto LABEL_81;
                }
                goto LABEL_87;
              }
              v22 = *(_DWORD *)(v74[0] + 16LL);
              if ( v22 != v64 )
              {
                if ( !(unsigned int)RGNMEMOBJ::bAddNullScan(v7, v64, v22) )
                  goto LABEL_81;
                goto LABEL_46;
              }
LABEL_47:
              if ( *(_DWORD *)(v39 + 16) == v22 )
              {
                v40 = v71[2];
                v41 = v71;
                v42 = (_QWORD *)v39;
                v43 = v39;
                do
                {
                  v44 = (__int64 *)*v41;
                  v45 = *(_DWORD *)(v43 + 12);
                  if ( v45 > *(_DWORD *)(*v41 + 12LL) )
                  {
                    do
                    {
                      v41 = v44;
                      v44 = (__int64 *)*v44;
                    }
                    while ( v45 > *((_DWORD *)v44 + 3) );
                  }
                  ++v40;
                  v74[0] = *(_QWORD *)v39;
                  *v42 = *v41;
                  *v41 = v42;
                  v41 = v42;
                  v39 = v74[0];
                  v42 = (_QWORD *)v74[0];
                  v43 = v74[0];
                }
                while ( *(_DWORD *)(v74[0] + 16LL) == v22 );
                LODWORD(v71[2]) = v40;
              }
              v46 = 4 * LODWORD(v71[2]) + 16;
              sizeScanAlloc = REGION_CORE::get_sizeScanAlloc((REGION_CORE *)(*(_QWORD *)v7 + 24LL));
              if ( v46 <= sizeScanAlloc - (unsigned int)REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL))
                || (v67 = REGION_CORE::get_sizeScanAlloc((REGION_CORE *)(*(_QWORD *)v7 + 24LL)),
                    v68 = v67 + v46,
                    v67 + v46 >= v67)
                && (v69 = (struct REGION_CORE *)(v68 + 1120), (unsigned int)v69 >= v68)
                && (unsigned int)RGNOBJ::bExpand(v7, v69) )
              {
                pscnTail = REGION_CORE::get_pscnTail((REGION_CORE *)(*(_QWORD *)v7 + 24LL));
                v49 = (__int64 *)v71[0];
                v50 = pscnTail;
                v51 = (char *)pscnTail + 8;
                *((_DWORD *)pscnTail + 2) = 0x80000000;
                v52 = (_DWORD *)((char *)pscnTail + 8);
                if ( v49 != v71 )
                {
                  if ( (v70 & 2) != 0 )
                  {
                    do
                    {
                      v57 = *((_DWORD *)v49 + 3);
                      if ( *v52 >= v57 )
                      {
                        v58 = v52 - 1;
                      }
                      else
                      {
                        v58 = v52 + 1;
                        *v58 = v57;
                      }
                      v59 = *((_DWORD *)v49 + 14);
                      do
                      {
                        v49 = (__int64 *)*v49;
                        v59 += *((_DWORD *)v49 + 14);
                      }
                      while ( v59 );
                      v60 = *((_DWORD *)v49 + 3);
                      if ( *v58 >= v60 )
                      {
                        v52 = v58 - 1;
                      }
                      else
                      {
                        v52 = v58 + 1;
                        *v52 = v60;
                      }
                      v49 = (__int64 *)*v49;
                    }
                    while ( v49 != v71 );
                  }
                  else
                  {
                    do
                    {
                      v53 = *((_DWORD *)v49 + 3);
                      if ( *v52 >= v53 )
                        --v52;
                      else
                        *++v52 = v53;
                      v49 = (__int64 *)*v49;
                    }
                    while ( v49 != v71 );
                  }
                }
                v54 = (unsigned __int64)((char *)v52 - v51) >> 2;
                v55 = (unsigned int)(4 * *((_DWORD *)v50 - 1) + 16);
                v56 = (char *)v50 - v55 - 4;
                if ( *(_DWORD *)((char *)v50 - v55) == (_DWORD)v54
                  && !memcmp(v56 + 16, (char *)v50 + 12, 4LL * (unsigned int)v54) )
                {
                  *((_DWORD *)v56 + 3) = v22 + 1;
                }
                else
                {
                  ++*(_DWORD *)(*(_QWORD *)v7 + 48LL);
                  v61 = *(_QWORD *)v7;
                  sizeScan = REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL));
                  REGION_CORE::set_sizeScan(
                    (REGION_CORE *)(v61 + 24),
                    (struct REGION_CORE *)(unsigned int)(sizeScan + 16 + 4 * v54),
                    v63);
                  *((_DWORD *)v50 + 1) = v22;
                  *((_DWORD *)v50 + 2) = v22 + 1;
                  *(_DWORD *)v50 = v54;
                  *((_DWORD *)v50 + (unsigned int)v54 + 3) = v54;
                }
                v24 = 1;
              }
              else
              {
                v24 = 0;
              }
              CurrentThread = v73;
              ++v22;
            }
            if ( *(_QWORD **)v71[0] != v71 )
            {
              while ( 1 )
              {
                v36 = (_QWORD *)*v35;
                v37 = v71;
                v38 = 0;
                do
                {
                  if ( *((_DWORD *)v36 + 3) < *((_DWORD *)v35 + 3) )
                  {
                    *v37 = v36;
                    v38 = 1;
                    *v35 = *v36;
                    *v36 = v35;
                    v35 = v36;
                  }
                  v37 = v35;
                  v35 = (_QWORD *)*v35;
                  v36 = (_QWORD *)*v35;
                }
                while ( (_QWORD *)*v35 != v71 );
                if ( !v38 )
                  break;
                v35 = (_QWORD *)v71[0];
              }
            }
LABEL_46:
            v39 = v74[0];
            goto LABEL_47;
          }
LABEL_81:
          RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)v7);
        }
      }
    }
LABEL_87:
    if ( v14 )
      GreDeleteFastMutex((char *)v13);
    return;
  }
  RGNOBJ::vTighten(v7, v9);
  v10 = *(_DWORD **)v7;
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 52LL) & 0xF8000000) != 0
    && (*(_DWORD *)(*(_QWORD *)v7 + 52LL) & 0xF8000000) != -134217728
    || (v10[16] & 0xF8000000) != 0 && (v10[16] & 0xF8000000) != -134217728
    || (((v10[15] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((v10[14] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
LABEL_14:
    RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)v7);
  }
}
