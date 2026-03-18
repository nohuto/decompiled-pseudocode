/*
 * XREFs of ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1400912D0
 * Callers:
 *     bDynamicModeChange @ 0x1401793D8 (bDynamicModeChange.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x14017A4B0 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x14017C714 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     ulGetNearestIndexFromColorref @ 0x140090720 (ulGetNearestIndexFromColorref.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x140090A40 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x140091C38 (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x140091E00 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     rgbFromColorref @ 0x140093340 (rgbFromColorref.c)
 *     ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1400D7EE0 (-bIsPalDefault@XEPALOBJ@@QEBAHXZ.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x140129CB4 (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1401C7330 (-hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z.c)
 */

__int64 __fastcall EBRUSHOBJ::vInitBrush(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR a5,
        __int64 a6,
        unsigned int a7)
{
  ULONG_PTR v7; // rdi
  __int64 v11; // rax
  int v12; // ebx
  ULONG_PTR v13; // r9
  __int64 v14; // rax
  unsigned int v15; // esi
  unsigned int v16; // r10d
  tagPALETTEENTRY v17; // r11d
  void *v18; // rdx
  unsigned int v19; // ecx
  __int64 v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rsi
  volatile signed __int32 *v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // eax
  ULONG_PTR v27; // r9
  unsigned int v28; // eax
  int v29; // eax
  int v30; // r12d
  int v31; // edx
  __int64 result; // rax
  unsigned int v33; // ebx
  __int64 v34; // rdx
  unsigned int MatchFromPalentry; // r8d
  unsigned int v36; // eax
  __int64 v37; // rax
  int v38; // ecx
  struct tagPALETTEENTRY v39; // edx
  struct tagPALETTEENTRY v40; // eax
  int v41; // edx
  unsigned int v42; // eax
  unsigned int v43; // eax
  struct tagPALETTEENTRY v44; // r9d
  unsigned int v45; // ecx
  unsigned int peRed; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  int v49; // ebx
  ULONG_PTR v50; // rcx
  volatile signed __int32 *v51; // rcx
  unsigned int NearestIndexFromColorref; // eax
  unsigned int v53; // ebx
  __int64 v54; // rcx
  bool v55; // zf
  unsigned int v56; // ebx
  __int64 v57; // rcx
  unsigned int v58; // eax
  __int64 v59; // r8
  unsigned int v60; // [rsp+20h] [rbp-20h]
  __int64 v61; // [rsp+20h] [rbp-20h]
  ULONG_PTR v62; // [rsp+28h] [rbp-18h] BYREF
  ULONG_PTR v63; // [rsp+30h] [rbp-10h] BYREF
  __int64 v64; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v65; // [rsp+80h] [rbp+40h]
  unsigned int v67; // [rsp+88h] [rbp+48h]
  struct tagPALETTEENTRY v68; // [rsp+88h] [rbp+48h]
  tagPALETTEENTRY v69; // [rsp+90h] [rbp+50h]

  v7 = a5;
  if ( !a5 || (*(_DWORD *)(a5 + 24) & 0x800) != 0 )
  {
    v12 = 1;
  }
  else
  {
    v11 = *(_QWORD *)(a5 + 120);
    if ( v11 == a5 )
      v12 = *(_DWORD *)(a5 + 32);
    else
      v12 = *(_DWORD *)(v11 + 32);
  }
  v13 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  *((_QWORD *)a1 + 10) = a6;
  v14 = *(_QWORD *)(a2 + 976);
  v15 = *(_DWORD *)(a2 + 120);
  v62 = v13;
  v16 = *(_DWORD *)(v14 + 184);
  v17 = *(tagPALETTEENTRY *)(v14 + 176);
  v18 = *(void **)(v14 + 248);
  LODWORD(v14) = a1[31];
  v60 = v16;
  v69 = v17;
  v63 = (ULONG_PTR)v18;
  if ( *(_DWORD *)(a3 + 44) != (_DWORD)v14
    || (v36 = a1[30], (v36 & 1) != 0) && a1[12] != v16
    || (v36 & 2) != 0 && a1[13] != v17
    || ((v37 = *(_QWORD *)(a4 + 120), v37 != a4) ? (v38 = *(_DWORD *)(v37 + 32)) : (v38 = *(_DWORD *)(a4 + 32)),
        v38 != a1[11]
     || v12 != a1[10]
     || a3 == *(_QWORD *)(v13 + 104)
     || a3 == *(_QWORD *)(v13 + 120)
     || a1[18] != v15
     || *((void **)a1 + 8) != v18
     || (result = a7, a7 != a1[32])) )
  {
    v19 = *(_DWORD *)(a3 + 40);
    a1[30] = v19;
    *((_QWORD *)a1 + 14) = a3;
    a1[31] = *(_DWORD *)(a3 + 44);
    a1[12] = v16;
    a1[13] = (unsigned int)v17;
    v20 = *(_QWORD *)(a4 + 120);
    if ( v20 == a4 )
      v21 = *(_DWORD *)(a4 + 32);
    else
      v21 = *(_DWORD *)(v20 + 32);
    v65 = 0;
    a1[4] = 0;
    a1[11] = v21;
    v22 = a7;
    a1[10] = v12;
    a1[32] = v22;
    if ( (v15 & 7) == 0 )
      goto LABEL_9;
    v49 = 0;
    if ( (v19 & 0x20030) != 0 )
    {
      if ( (v15 & 1) == 0
        || (v19 & 0x20010) != 0 && ((v19 & 3) != 0 || a3 == *(_QWORD *)(v13 + 104) || a3 == *(_QWORD *)(v13 + 120)) )
      {
        goto LABEL_110;
      }
      if ( (*(_DWORD *)(a3 + 40) & 0x400) != 0 )
      {
        if ( !v18 )
          goto LABEL_110;
        v55 = (*(_DWORD *)(*(_QWORD *)(a2 + 976) + 152LL) & 0x80000) == 0;
      }
      else
      {
        if ( !v18 )
        {
LABEL_110:
          v49 = 1;
          goto LABEL_111;
        }
        v55 = (*(_DWORD *)(*(_QWORD *)(a2 + 976) + 152LL) & 0x40000) == 0;
      }
    }
    else
    {
      if ( (v19 & 0x80u) == 0 )
        goto LABEL_111;
      if ( (v15 & 1) == 0 || !v18 )
        goto LABEL_110;
      v55 = BRUSH::hFindIcmDIB((BRUSH *)a3, v18) == 0LL;
    }
    if ( !v55 )
      goto LABEL_110;
LABEL_111:
    if ( v49 )
    {
      v50 = v63;
      *((_QWORD *)a1 + 8) = v63;
      a1[18] = v15;
      if ( (v15 & 5) != 0 )
      {
        a1[4] |= 2u;
      }
      else if ( (v15 & 2) != 0 )
      {
        a1[4] |= 1u;
      }
      if ( (v15 & 1) != 0 && v50 && (v15 & 0x10000000) != 0 && (a1[30] & 0x10) != 0 )
      {
        a1[4] |= 4u;
        v65 = 1;
      }
      else
      {
        v65 = 0;
      }
LABEL_10:
      v23 = *(_QWORD *)(a6 + 48);
      if ( !v23 )
        v23 = *(_QWORD *)(a2 + 48);
      *((_QWORD *)a1 + 12) = a4;
      *((_QWORD *)a1 + 11) = v7;
      *((_QWORD *)a1 + 13) = *(_QWORD *)(v23 + 1792);
      v24 = (volatile signed __int32 *)*((_QWORD *)a1 + 4);
      a1[19] = *(_DWORD *)(v23 + 2092);
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd(v24, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v24, 1LL);
        *((_QWORD *)a1 + 4) = 0LL;
        v7 = a5;
      }
      v25 = *((_QWORD *)a1 + 1);
      if ( v25 )
      {
        v25 -= 16LL;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v25, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v25, 0LL);
        *((_QWORD *)a1 + 1) = 0LL;
        v7 = a5;
      }
      v26 = a1[30];
      v27 = v62;
      if ( (v26 & 0x10) != 0 )
      {
        if ( (v26 & 1) != 0 )
        {
          a1[6] = a1[12];
          if ( (a1[18] & 1) == 0 )
            goto LABEL_23;
          v25 = *(unsigned int *)(*(_QWORD *)(a2 + 976) + 188LL);
        }
        else if ( (v26 & 2) != 0 )
        {
          a1[6] = a1[13];
          if ( (a1[18] & 1) == 0 )
            goto LABEL_23;
          v25 = *(unsigned int *)(*(_QWORD *)(a2 + 976) + 180LL);
        }
        else if ( a3 == *(_QWORD *)(v62 + 104) )
        {
          v25 = *(unsigned int *)(*(_QWORD *)(a2 + 976) + 192LL);
          v47 = a1[18];
          a1[6] = v25;
          if ( (v47 & 1) == 0 )
            goto LABEL_23;
          v25 = *(unsigned int *)(*(_QWORD *)(a2 + 976) + 196LL);
        }
        else
        {
          if ( a3 != *(_QWORD *)(v62 + 120) )
          {
LABEL_22:
            v28 = a1[18];
            v25 = *(unsigned int *)(a3 + 76);
            a1[6] = v25;
            if ( (v28 & 1) == 0 )
              goto LABEL_23;
            a1[33] = v25;
            v25 = *(_QWORD *)(a2 + 976);
            v41 = *(_DWORD *)(v25 + 152);
            if ( (*(_DWORD *)(a3 + 40) & 0x400) != 0 )
            {
              if ( (v41 & 0x80000) == 0 )
                goto LABEL_23;
              v42 = *(_DWORD *)(v25 + 260);
              goto LABEL_62;
            }
            if ( (v41 & 0x40000) != 0 )
            {
              v42 = *(_DWORD *)(v25 + 256);
LABEL_62:
              a1[6] = v42;
            }
LABEL_23:
            v29 = *(_DWORD *)(a3 + 100);
            v30 = -1;
            if ( v29 != -1 )
            {
              v31 = *(_DWORD *)(a3 + 40);
              if ( ((v31 & 1) == 0 || v29 == v60)
                && ((v31 & 2) == 0 || *(_DWORD *)(a3 + 104) == v69)
                && *(_DWORD *)(a3 + 108) == a1[11]
                && *(_DWORD *)(a3 + 112) == a1[10]
                && *(_QWORD *)(a3 + 128) == v23
                && a3 != *(_QWORD *)(v27 + 104)
                && a3 != *(_QWORD *)(v27 + 120) )
              {
                if ( v31 >= 0 )
                {
                  v51 = *(volatile signed __int32 **)(a3 + 120);
                  if ( (v31 & 0x40000000) != 0 )
                    *((_QWORD *)a1 + 4) = v51;
                  else
                    *((_QWORD *)a1 + 1) = v51 + 4;
                  _InterlockedAdd(v51, 1u);
                }
                else
                {
                  v30 = *(_DWORD *)(a3 + 120);
                }
                *a1 = v30;
                result = *(unsigned int *)(a3 + 116);
                goto LABEL_84;
              }
            }
            result = a1[30];
            if ( (result & 0x10) == 0 )
            {
              a1[7] = -1;
              *a1 = -1;
              return result;
            }
            result = v65;
            if ( v65 )
            {
              MatchFromPalentry = a1[6];
              a1[7] = MatchFromPalentry;
              *a1 = MatchFromPalentry;
LABEL_54:
              if ( MatchFromPalentry != -1 || (_DWORD)result )
              {
LABEL_55:
                if ( !*(_DWORD *)(a3 + 96) && !_InterlockedExchange((volatile __int32 *)(a3 + 96), 1) )
                {
                  *(_DWORD *)(a3 + 104) = a1[13];
                  *(_DWORD *)(a3 + 108) = a1[11];
                  *(_DWORD *)(a3 + 112) = a1[10];
                  *(_QWORD *)(a3 + 120) = *a1;
                  v43 = a1[7];
                  *(_DWORD *)(a3 + 40) |= 0x80000000;
                  *(_DWORD *)(a3 + 116) = v43;
                  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a3 + 100), a1[12]);
                }
                return result;
              }
              LODWORD(v25) = a7;
LABEL_125:
              if ( ((a1[30] & 4) != 0 || (*(_DWORD *)(v23 + 1808) & 0x800000) != 0)
                && (_DWORD)v25
                && ((!v7 || v7 == *(_QWORD *)(v23 + 1792)) && (*(_DWORD *)(v23 + 1808) & 0x20) != 0
                 || (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&a5) && (*(_DWORD *)(v23 + 1808) & 0x400) != 0) )
              {
                result = a1[6];
LABEL_84:
                a1[7] = result;
                return result;
              }
              if ( *(_DWORD *)(a6 + 96) == 1 )
              {
                NearestIndexFromColorref = ulGetNearestIndexFromColorref(v7, a4, v69, 0);
                *a1 = NearestIndexFromColorref;
                v53 = NearestIndexFromColorref;
                result = rgbFromColorref(v7, a4, *(unsigned int *)&v69);
                a1[7] = result;
                if ( v69 != a1[6] )
                {
                  v54 = 1 - v53;
                  *a1 = v54;
                  result = *(_QWORD *)(v7 + 112);
                  a1[7] = *(_DWORD *)(result + 4 * v54);
                }
              }
              else
              {
                v58 = ulGetNearestIndexFromColorref(v7, a4, (tagPALETTEENTRY)a1[6], 0);
                v59 = a1[6];
                *a1 = v58;
                result = rgbFromColorref(v7, a4, v59);
                a1[7] = result;
              }
              goto LABEL_55;
            }
            if ( (*(_DWORD *)(v23 + 1808) & 0x800000) != 0 )
            {
              v25 = a7;
              if ( a7 )
              {
                a1[7] = a1[6];
                *a1 = -1;
                goto LABEL_125;
              }
            }
            v33 = a1[6];
            v62 = a4;
            v63 = v7;
            v67 = v33;
            v34 = *(_QWORD *)(W32GetSessionState(v25) + 88);
            v61 = v34;
            if ( v7 && (*(_DWORD *)(v7 + 24) & 0x800) == 0 )
            {
              if ( (v33 & 0x1000000) != 0 )
              {
                v39 = *(struct tagPALETTEENTRY *)(*(_QWORD *)(a4 + 112)
                                                + 4LL
                                                * ((unsigned __int16)v33 & (unsigned int)-((unsigned int)(unsigned __int16)v33 < *(_DWORD *)(a4 + 28))));
                goto LABEL_51;
              }
              if ( (v33 & 0x10FF0000) != 0x10FF0000 )
              {
                HIBYTE(v67) = 0;
                v39 = (struct tagPALETTEENTRY)v67;
LABEL_51:
                MatchFromPalentry = XEPALOBJ::ulGetMatchFromPalentry((XEPALOBJ *)&v63, v39);
                goto LABEL_52;
              }
              MatchFromPalentry = (unsigned int)(unsigned __int8)v33 < *(_DWORD *)(v7 + 28) ? (unsigned __int8)v33 : 0;
LABEL_52:
              v40 = (struct tagPALETTEENTRY)a1[6];
              *a1 = MatchFromPalentry;
              v68 = v40;
              if ( (*(_DWORD *)&v40 & 0x1000000) != 0 )
              {
                v44 = *(struct tagPALETTEENTRY *)(*(_QWORD *)(a4 + 112)
                                                + 4LL
                                                * (*(unsigned __int16 *)&v40.peRed & (unsigned int)-((unsigned int)*(unsigned __int16 *)&v40.peRed < *(_DWORD *)(a4 + 28))));
                v68 = v44;
                if ( v44.peFlags == 2 )
                {
                  if ( v7 )
                  {
                    v45 = *(_DWORD *)(v7 + 28);
                    if ( v45 )
                    {
                      peRed = v44.peRed;
                      if ( v44.peRed >= v45 )
                        peRed = v44.peRed % v45;
                      v68 = *(struct tagPALETTEENTRY *)(*(_QWORD *)(v7 + 112) + 4LL * peRed);
                    }
                  }
                }
              }
              v68.peFlags = 0;
              a1[7] = (unsigned int)v68;
              result = 0LL;
              goto LABEL_54;
            }
            if ( (v33 & 0x3000000) == 0 )
              goto LABEL_32;
            if ( (v33 & 0x1000000) != 0 )
            {
              v56 = (unsigned int)(unsigned __int16)v33 < *(_DWORD *)(a4 + 28) ? (unsigned __int16)v33 : 0;
            }
            else
            {
              HIBYTE(v67) = 0;
              v56 = XEPALOBJ::ulDispatchGFPEFunction(&v62, *(_DWORD *)(a4 + 96), v67);
            }
            if ( (unsigned int)XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v62) )
            {
              MatchFromPalentry = v56 + 236;
              if ( v56 < 0xA )
                MatchFromPalentry = v56;
              goto LABEL_52;
            }
            if ( v7 )
            {
              v57 = *(_QWORD *)(a4 + 80);
              if ( !v57 )
                goto LABEL_161;
            }
            else
            {
              v57 = *(_QWORD *)(a4 + 72);
              if ( !v57 )
              {
LABEL_161:
                v33 = *(_DWORD *)(*(_QWORD *)(a4 + 112) + 4LL * v56);
                v67 = v33;
                if ( HIBYTE(v33) == 2 )
                  goto LABEL_33;
                v34 = v61;
LABEL_32:
                if ( (v33 & 0x10FF0000) != 0x10FF0000 )
                {
                  HIBYTE(v67) = 0;
                  MatchFromPalentry = v67;
                  if ( v67 == 0xFFFFFF )
                  {
                    MatchFromPalentry = 19;
                  }
                  else
                  {
                    if ( v67 )
                    {
                      v64 = *(_QWORD *)(v34 + 3768);
                      MatchFromPalentry = XEPALOBJ::ulGetMatchFromPalentry(
                                            (XEPALOBJ *)&v64,
                                            (struct tagPALETTEENTRY)v67);
                    }
                    if ( MatchFromPalentry - 10 > 0xFFFFFFF4 )
                      goto LABEL_52;
                  }
                  MatchFromPalentry += 236;
                  goto LABEL_52;
                }
LABEL_33:
                MatchFromPalentry = (unsigned __int8)v33;
                goto LABEL_52;
              }
            }
            MatchFromPalentry = *(unsigned __int8 *)(v56 + v57 + 4);
            goto LABEL_52;
          }
          v25 = *(unsigned int *)(*(_QWORD *)(a2 + 976) + 200LL);
          v48 = a1[18];
          a1[6] = v25;
          if ( (v48 & 1) == 0 )
            goto LABEL_23;
          v25 = *(unsigned int *)(*(_QWORD *)(a2 + 976) + 204LL);
        }
        a1[33] = v25;
        goto LABEL_23;
      }
      if ( (v26 & 0x20) == 0 )
        goto LABEL_23;
      goto LABEL_22;
    }
LABEL_9:
    a1[18] = 0;
    *((_QWORD *)a1 + 8) = 0LL;
    goto LABEL_10;
  }
  return result;
}
