/*
 * XREFs of ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x140032B00
 * Callers:
 *     bDynamicModeChange @ 0x140030E68 (bDynamicModeChange.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1401F4F1C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x140033590 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x14003366C (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 *     ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1400C38C0 (-bIsPalDefault@XEPALOBJ@@QEBAHXZ.c)
 *     ulGetNearestIndexFromColorref @ 0x1400FC3E0 (ulGetNearestIndexFromColorref.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1400FC590 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     rgbFromColorref @ 0x140136270 (rgbFromColorref.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x140164B10 (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1401ECE90 (-hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z.c)
 */

__int64 __fastcall EBRUSHOBJ::vInitBrush(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v7; // rbx
  __int64 SessionState; // rax
  __int64 v13; // r8
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned int v16; // ebp
  unsigned int v17; // r10d
  unsigned int v18; // edx
  void *v19; // r12
  unsigned int v20; // r11d
  unsigned int v21; // edx
  unsigned int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // rbp
  volatile signed __int32 *v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  int v30; // r12d
  __int64 result; // rax
  unsigned int v32; // esi
  __int64 v33; // rax
  __int64 v34; // r13
  struct tagPALETTEENTRY v35; // edx
  unsigned int MatchFromPalentry; // r8d
  __int64 v37; // rcx
  unsigned int v38; // eax
  int *v39; // rsi
  __int64 v40; // rax
  unsigned int v41; // eax
  __int64 v42; // rcx
  unsigned int v43; // eax
  int v44; // edx
  unsigned int v45; // eax
  int v46; // eax
  __int64 v47; // rax
  int v48; // eax
  unsigned int v49; // r9d
  __int64 v50; // rcx
  unsigned int v51; // eax
  unsigned int v52; // eax
  int v53; // edx
  volatile signed __int32 *v54; // rdx
  unsigned int v55; // r12d
  unsigned int NearestIndexFromColorref; // eax
  unsigned int v57; // ebp
  __int64 v58; // rcx
  HBITMAP IcmDIB; // rax
  unsigned int v60; // eax
  unsigned int v61; // esi
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  int v65; // eax
  struct tagPALETTEENTRY v66; // edx
  unsigned int v67; // eax
  __int64 v68; // r8
  __int64 v69; // [rsp+20h] [rbp-48h] BYREF
  __int64 v70[8]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v71; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v72; // [rsp+78h] [rbp+10h]
  unsigned int v73; // [rsp+80h] [rbp+18h]

  v7 = a5;
  if ( !a5 || (*(_DWORD *)(a5 + 24) & 0x800) != 0 )
  {
    LODWORD(v71) = 1;
  }
  else
  {
    v40 = *(_QWORD *)(a5 + 120);
    if ( v40 == a5 )
      LODWORD(v71) = *(_DWORD *)(a5 + 32);
    else
      LODWORD(v71) = *(_DWORD *)(v40 + 32);
  }
  SessionState = W32GetSessionState(a1);
  v13 = a6;
  v14 = *(_QWORD *)(SessionState + 88);
  *((_QWORD *)a1 + 10) = a6;
  v15 = *(_QWORD *)(a2 + 976);
  v16 = *(_DWORD *)(a2 + 120);
  v17 = *(_DWORD *)(v15 + 184);
  v18 = *(_DWORD *)(v15 + 176);
  v19 = *(void **)(v15 + 248);
  LODWORD(v15) = a1[31];
  LODWORD(v69) = v17;
  v73 = v18;
  if ( *(_DWORD *)(a3 + 44) != (_DWORD)v15
    || (v41 = a1[30], (v41 & 1) != 0) && a1[12] != v17
    || (v41 & 2) != 0 && a1[13] != v18 )
  {
    v20 = a7;
    v21 = v71;
    goto LABEL_5;
  }
  v42 = a4;
  v21 = v71;
  v20 = a7;
  if ( *(_QWORD *)(a4 + 120) != a4 )
    v42 = *(_QWORD *)(a4 + 120);
  result = a1[11];
  if ( __PAIR64__(*(_DWORD *)(v42 + 32), v71) != *((_QWORD *)a1 + 5)
    || a3 == *(_QWORD *)(v14 + 192)
    || a3 == *(_QWORD *)(v14 + 208)
    || a1[18] != v16
    || *((void **)a1 + 8) != v19
    || a7 != a1[32] )
  {
LABEL_5:
    v22 = *(_DWORD *)(a3 + 40);
    a1[30] = v22;
    *((_QWORD *)a1 + 14) = a3;
    a1[31] = *(_DWORD *)(a3 + 44);
    a1[13] = v73;
    v23 = a4;
    a1[12] = v17;
    if ( *(_QWORD *)(a4 + 120) != a4 )
      v23 = *(_QWORD *)(a4 + 120);
    v72 = 0;
    a1[11] = *(_DWORD *)(v23 + 32);
    a1[10] = v21;
    a1[32] = v20;
    a1[4] = 0;
    if ( (v16 & 7) == 0 )
      goto LABEL_8;
    v53 = 0;
    if ( (v22 & 0x20030) != 0 )
    {
      if ( (v16 & 1) == 0 )
      {
LABEL_113:
        v53 = 1;
        goto LABEL_114;
      }
      if ( (v22 & 0x20010) != 0 && ((v22 & 3) != 0 || a3 == *(_QWORD *)(v14 + 192) || a3 == *(_QWORD *)(v14 + 208)) )
        goto LABEL_115;
      if ( (*(_DWORD *)(a3 + 40) & 0x400) != 0 )
      {
        if ( !v19 )
          goto LABEL_113;
        if ( (*(_DWORD *)(*(_QWORD *)(a2 + 976) + 152LL) & 0x80000) != 0 )
          v53 = 1;
      }
      else
      {
        if ( !v19 )
          goto LABEL_113;
        if ( (*(_DWORD *)(*(_QWORD *)(a2 + 976) + 152LL) & 0x40000) != 0 )
          v53 = 1;
      }
    }
    else if ( (v22 & 0x80u) != 0 )
    {
      if ( (v16 & 1) == 0 )
        goto LABEL_115;
      if ( !v19 )
        goto LABEL_113;
      IcmDIB = BRUSH::hFindIcmDIB((BRUSH *)a3, v19);
      v13 = a6;
      if ( IcmDIB )
        goto LABEL_113;
      v53 = 0;
    }
LABEL_114:
    if ( !v53 )
    {
LABEL_8:
      *((_QWORD *)a1 + 8) = 0LL;
      a1[18] = 0;
      goto LABEL_9;
    }
LABEL_115:
    a1[18] = v16;
    *((_QWORD *)a1 + 8) = v19;
    if ( (v16 & 5) != 0 )
    {
      a1[4] |= 2u;
    }
    else if ( (v16 & 2) != 0 )
    {
      a1[4] |= 1u;
    }
    if ( (v16 & 1) != 0 && v19 && (v16 & 0x10000000) != 0 && (a1[30] & 0x10) != 0 )
    {
      a1[4] |= 4u;
      v72 = 1;
    }
    else
    {
      v72 = 0;
    }
LABEL_9:
    v24 = *(_QWORD *)(v13 + 48);
    if ( !v24 )
      v24 = *(_QWORD *)(a2 + 48);
    *((_QWORD *)a1 + 12) = a4;
    *((_QWORD *)a1 + 11) = v7;
    *((_QWORD *)a1 + 13) = *(_QWORD *)(v24 + 1792);
    v25 = (volatile signed __int32 *)*((_QWORD *)a1 + 4);
    a1[19] = *(_DWORD *)(v24 + 2092);
    if ( v25 )
    {
      if ( _InterlockedExchangeAdd(v25, 0xFFFFFFFF) == 1 )
        RBRUSH::vFreeOrCacheRBrush(v25, 1LL);
      *((_QWORD *)a1 + 4) = 0LL;
    }
    v26 = *((_QWORD *)a1 + 1);
    if ( v26 )
    {
      v26 -= 16LL;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v26, 0xFFFFFFFF) == 1 )
        RBRUSH::vFreeOrCacheRBrush(v26, 0LL);
      *((_QWORD *)a1 + 1) = 0LL;
    }
    v27 = a1[30];
    if ( (v27 & 0x10) != 0 )
    {
      if ( (v27 & 1) != 0 )
      {
        a1[6] = a1[12];
        if ( (a1[18] & 1) != 0 )
        {
          v26 = *(unsigned int *)(*(_QWORD *)(a2 + 976) + 188LL);
          a1[33] = v26;
        }
        goto LABEL_25;
      }
      if ( (v27 & 2) != 0 )
      {
        a1[6] = a1[13];
        if ( (a1[18] & 1) != 0 )
        {
          v26 = *(unsigned int *)(*(_QWORD *)(a2 + 976) + 180LL);
          a1[33] = v26;
        }
        goto LABEL_25;
      }
      if ( a3 == *(_QWORD *)(v14 + 192) )
      {
        v26 = *(unsigned int *)(*(_QWORD *)(a2 + 976) + 192LL);
        v51 = a1[18];
        a1[6] = v26;
        if ( (v51 & 1) != 0 )
        {
          v26 = *(unsigned int *)(*(_QWORD *)(a2 + 976) + 196LL);
          a1[33] = v26;
        }
        goto LABEL_25;
      }
      if ( a3 == *(_QWORD *)(v14 + 208) )
      {
        v26 = *(unsigned int *)(*(_QWORD *)(a2 + 976) + 200LL);
        v52 = a1[18];
        a1[6] = v26;
        if ( (v52 & 1) != 0 )
        {
          v26 = *(unsigned int *)(*(_QWORD *)(a2 + 976) + 204LL);
          a1[33] = v26;
        }
        goto LABEL_25;
      }
      v28 = a1[18];
      v26 = *(unsigned int *)(a3 + 76);
      a1[6] = v26;
      if ( (v28 & 1) == 0 )
        goto LABEL_25;
      a1[33] = v26;
      v26 = *(_QWORD *)(a2 + 976);
      v44 = *(_DWORD *)(v26 + 152);
      if ( (*(_DWORD *)(a3 + 40) & 0x400) == 0 )
      {
        if ( (v44 & 0x40000) != 0 )
          goto LABEL_158;
        goto LABEL_25;
      }
    }
    else
    {
      if ( (v27 & 0x20) == 0 )
        goto LABEL_25;
      v43 = a1[18];
      v26 = *(unsigned int *)(a3 + 76);
      a1[6] = v26;
      if ( (v43 & 1) == 0 )
        goto LABEL_25;
      a1[33] = v26;
      v26 = *(_QWORD *)(a2 + 976);
      v44 = *(_DWORD *)(v26 + 152);
      if ( (*(_DWORD *)(a3 + 40) & 0x400) == 0 )
      {
        if ( (v44 & 0x40000) != 0 )
        {
LABEL_158:
          v45 = *(_DWORD *)(v26 + 256);
LABEL_68:
          a1[6] = v45;
        }
LABEL_25:
        v29 = *(_DWORD *)(a3 + 100);
        v30 = -1;
        if ( v29 != -1 )
        {
          v26 = *(unsigned int *)(a3 + 40);
          if ( ((v26 & 1) == 0 || v29 == (_DWORD)v69)
            && ((v26 & 2) == 0 || *(_DWORD *)(a3 + 104) == v73)
            && *(_DWORD *)(a3 + 108) == a1[11]
            && *(_DWORD *)(a3 + 112) == a1[10]
            && *(_QWORD *)(a3 + 128) == v24
            && a3 != *(_QWORD *)(v14 + 192)
            && a3 != *(_QWORD *)(v14 + 208) )
          {
            if ( (int)v26 >= 0 )
            {
              v54 = *(volatile signed __int32 **)(a3 + 120);
              if ( (v26 & 0x40000000) != 0 )
                *((_QWORD *)a1 + 4) = v54;
              else
                *((_QWORD *)a1 + 1) = v54 + 4;
              _InterlockedIncrement(v54);
            }
            else
            {
              v30 = *(_DWORD *)(a3 + 120);
            }
            *a1 = v30;
            result = *(unsigned int *)(a3 + 116);
            a1[7] = result;
            return result;
          }
        }
        result = a1[30];
        if ( (result & 0x10) == 0 )
        {
          a1[7] = -1;
          *a1 = -1;
          return result;
        }
        result = v72;
        if ( v72 )
        {
          MatchFromPalentry = a1[6];
          v39 = (int *)(a1 + 7);
          a1[7] = MatchFromPalentry;
          *a1 = MatchFromPalentry;
LABEL_41:
          if ( MatchFromPalentry != -1 || (_DWORD)result )
          {
LABEL_42:
            if ( !*(_DWORD *)(a3 + 96) && !_InterlockedExchange((volatile __int32 *)(a3 + 96), 1) )
            {
              *(_DWORD *)(a3 + 104) = a1[13];
              *(_DWORD *)(a3 + 108) = a1[11];
              *(_DWORD *)(a3 + 112) = a1[10];
              *(_QWORD *)(a3 + 120) = *a1;
              v46 = *v39;
              *(_DWORD *)(a3 + 40) |= 0x80000000;
              *(_DWORD *)(a3 + 116) = v46;
              return (unsigned int)_InterlockedExchange((volatile __int32 *)(a3 + 100), a1[12]);
            }
            return result;
          }
          LODWORD(v26) = a7;
LABEL_128:
          if ( ((a1[30] & 4) != 0 || (*(_DWORD *)(v24 + 1808) & 0x800000) != 0)
            && (_DWORD)v26
            && ((!v7 || v7 == *(_QWORD *)(v24 + 1792)) && (*(_DWORD *)(v24 + 1808) & 0x20) != 0
             || (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&a5) && (*(_DWORD *)(v24 + 1808) & 0x400) != 0) )
          {
            result = a1[6];
            a1[7] = result;
            return result;
          }
          v39 = (int *)(a1 + 7);
          if ( *(_DWORD *)(a6 + 96) == 1 )
          {
            v55 = v73;
            NearestIndexFromColorref = ulGetNearestIndexFromColorref(v7, a4, v73, 0LL);
            *a1 = NearestIndexFromColorref;
            v57 = NearestIndexFromColorref;
            result = rgbFromColorref(v7, a4, v55);
            *v39 = result;
            if ( v55 != a1[6] )
            {
              v58 = 1 - v57;
              *a1 = v58;
              result = *(_QWORD *)(v7 + 112);
              *v39 = *(_DWORD *)(result + 4 * v58);
              v39 = (int *)(a1 + 7);
            }
          }
          else
          {
            v67 = ulGetNearestIndexFromColorref(v7, a4, a1[6], 0LL);
            v68 = a1[6];
            *a1 = v67;
            result = rgbFromColorref(v7, a4, v68);
            *v39 = result;
          }
          goto LABEL_42;
        }
        if ( (*(_DWORD *)(v24 + 1808) & 0x800000) != 0 )
        {
          v26 = a7;
          if ( a7 )
          {
            a1[7] = a1[6];
            *a1 = -1;
            goto LABEL_128;
          }
        }
        v32 = a1[6];
        v69 = a4;
        v70[0] = v7;
        v33 = W32GetSessionState(v26);
        LODWORD(v71) = v32;
        v34 = *(_QWORD *)(v33 + 88);
        if ( !v7 || (*(_DWORD *)(v7 + 24) & 0x800) != 0 )
        {
          if ( (v32 & 0x3000000) != 0 )
          {
            if ( (v32 & 0x1000000) != 0 )
            {
              v60 = (unsigned __int16)v32;
              v61 = 0;
              if ( v60 < *(_DWORD *)(a4 + 28) )
                v61 = v60;
            }
            else
            {
              v62 = *(unsigned int *)(a4 + 96);
              BYTE3(v71) = 0;
              v61 = XEPALOBJ::ulDispatchGFPEFunction(&v69, v62, (unsigned int)v71);
            }
            if ( (unsigned int)XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v69) )
            {
              MatchFromPalentry = v61 + 236;
              if ( v61 < 0xA )
                MatchFromPalentry = v61;
              goto LABEL_38;
            }
            if ( v7 )
              v63 = *(_QWORD *)(a4 + 80);
            else
              v63 = *(_QWORD *)(a4 + 72);
            v64 = v61;
            if ( v63 )
            {
              MatchFromPalentry = *(unsigned __int8 *)(v61 + v63 + 4);
              goto LABEL_38;
            }
            v32 = *(_DWORD *)(*(_QWORD *)(a4 + 112) + 4LL * v61);
            v65 = HIBYTE(*(_DWORD *)(*(_QWORD *)(a4 + 112) + 4 * v64));
            LODWORD(v71) = v32;
            if ( (_BYTE)v65 == 2 )
            {
              MatchFromPalentry = (unsigned __int8)v32;
              goto LABEL_38;
            }
          }
          if ( (v32 & 0x10FF0000) == 0x10FF0000 )
          {
            MatchFromPalentry = (unsigned __int8)v32;
          }
          else
          {
            BYTE3(v71) = 0;
            MatchFromPalentry = v71;
            if ( (_DWORD)v71 == 0xFFFFFF )
            {
              MatchFromPalentry = 19;
            }
            else
            {
              if ( (_DWORD)v71 )
              {
                v66 = (struct tagPALETTEENTRY)v71;
                v71 = *(_QWORD *)(v34 + 3872);
                MatchFromPalentry = XEPALOBJ::ulGetMatchFromPalentry((XEPALOBJ *)&v71, v66);
              }
              if ( MatchFromPalentry - 10 > 0xFFFFFFF4 )
                goto LABEL_38;
            }
            MatchFromPalentry += 236;
          }
        }
        else
        {
          if ( (v32 & 0x1000000) != 0 )
          {
            v47 = 0LL;
            if ( (unsigned int)(unsigned __int16)v32 < *(_DWORD *)(a4 + 28) )
              v47 = (unsigned __int16)v32;
            v35 = *(struct tagPALETTEENTRY *)(*(_QWORD *)(a4 + 112) + 4 * v47);
          }
          else
          {
            if ( (v32 & 0x10FF0000) == 0x10FF0000 )
            {
              v37 = 0LL;
              MatchFromPalentry = 0;
              if ( (unsigned int)(unsigned __int8)v32 < *(_DWORD *)(v7 + 28) )
                MatchFromPalentry = (unsigned __int8)v32;
              goto LABEL_39;
            }
            BYTE3(v71) = 0;
            v35 = (struct tagPALETTEENTRY)v71;
          }
          MatchFromPalentry = XEPALOBJ::ulGetMatchFromPalentry((XEPALOBJ *)v70, v35);
        }
LABEL_38:
        v37 = 0LL;
LABEL_39:
        v38 = a1[6];
        *a1 = MatchFromPalentry;
        LODWORD(v71) = v38;
        if ( (v38 & 0x1000000) != 0 )
        {
          if ( (unsigned int)(unsigned __int16)v38 < *(_DWORD *)(a4 + 28) )
            v37 = (unsigned __int16)v38;
          v48 = *(_DWORD *)(*(_QWORD *)(a4 + 112) + 4 * v37);
          LODWORD(v71) = v48;
          if ( HIBYTE(v48) == 2 )
          {
            if ( v7 )
            {
              v49 = *(_DWORD *)(v7 + 28);
              if ( v49 )
              {
                v50 = (unsigned __int8)v48;
                if ( (unsigned __int8)v48 >= v49 )
                  v50 = (unsigned __int8)v48 % v49;
                LODWORD(v71) = *(_DWORD *)(*(_QWORD *)(v7 + 112) + 4 * v50);
              }
            }
          }
        }
        BYTE3(v71) = 0;
        v39 = (int *)(a1 + 7);
        a1[7] = v71;
        result = v72;
        goto LABEL_41;
      }
    }
    if ( (v44 & 0x80000) == 0 )
      goto LABEL_25;
    v45 = *(_DWORD *)(v26 + 260);
    goto LABEL_68;
  }
  return result;
}
