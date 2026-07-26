/*
 * XREFs of ndisQueryStatisticsOids @ 0x1400888D0
 * Callers:
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x14015D440 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z @ 0x1400471A0 (-ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z.c)
 *     ?ndisIsSatisfiedByOidGenStatistics@@YAKK@Z @ 0x140052510 (-ndisIsSatisfiedByOidGenStatistics@@YAKK@Z.c)
 *     ?ndisVerifierInitialization@@YAEXZ @ 0x14008E0B0 (-ndisVerifierInitialization@@YAEXZ.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisQueryStatisticsOids(
        __int64 a1,
        struct _NDIS_USER_OPEN_CONTEXT *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        size_t Size,
        _DWORD *a7,
        char a8,
        _BYTE *a9)
{
  char v10; // di
  unsigned int *v11; // r13
  unsigned int v12; // r12d
  int v13; // edx
  unsigned int v14; // r15d
  unsigned int v15; // esi
  unsigned int *v16; // rcx
  void *Pool2; // rax
  unsigned int v19; // ebx
  unsigned int *v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // ebx
  int v23; // ecx
  struct _NDIS_USER_OPEN_CONTEXT *v24; // r10
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // edx
  __int64 v28; // rcx
  _QWORD *v29; // rdi
  unsigned int IsSatisfiedByOidGenStatistics; // eax
  __int64 v31; // rsi
  unsigned int v32; // ecx
  unsigned int BytesWritten; // ebx
  int *v34; // rdx
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  unsigned int v37; // ebx
  int v38; // eax
  __int64 v39; // rbx
  int v40; // ecx
  int v41; // r10d
  int v42; // eax
  int v43; // r9d
  int v44; // r8d
  int v45; // edx
  int v46; // eax
  unsigned __int8 v47; // r8
  __int64 v48; // rdx
  _QWORD *v49; // rax
  unsigned int v50; // ecx
  unsigned int v51; // edx
  unsigned int v52; // eax
  _BYTE *v53; // rcx
  int v54; // [rsp+40h] [rbp-C0h] BYREF
  char v55; // [rsp+44h] [rbp-BCh]
  int v56; // [rsp+48h] [rbp-B8h]
  _BYTE *v57; // [rsp+50h] [rbp-B0h]
  unsigned int v58; // [rsp+58h] [rbp-A8h]
  int v59; // [rsp+5Ch] [rbp-A4h] BYREF
  int v60; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v61; // [rsp+64h] [rbp-9Ch]
  unsigned int v62; // [rsp+68h] [rbp-98h]
  PVOID P; // [rsp+70h] [rbp-90h]
  __int64 v64; // [rsp+78h] [rbp-88h] BYREF
  __int64 v65; // [rsp+80h] [rbp-80h]
  struct _NDIS_USER_OPEN_CONTEXT *v66; // [rsp+88h] [rbp-78h]
  unsigned int *v67; // [rsp+90h] [rbp-70h]
  _DWORD *v68; // [rsp+98h] [rbp-68h]
  __int128 Src; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v70; // [rsp+C0h] [rbp-40h]
  __int128 v71; // [rsp+D0h] [rbp-30h]
  __int128 v72; // [rsp+E0h] [rbp-20h]
  __int128 v73; // [rsp+F0h] [rbp-10h]
  __int128 v74; // [rsp+100h] [rbp+0h]
  __int128 v75; // [rsp+110h] [rbp+10h]
  __int128 v76; // [rsp+120h] [rbp+20h]
  __int128 v77; // [rsp+130h] [rbp+30h]
  __int64 v78; // [rsp+140h] [rbp+40h]
  struct _NDIS_OID_REQUEST v79; // [rsp+150h] [rbp+50h] BYREF

  v10 = a8;
  v11 = a5;
  v12 = Size;
  v65 = a3;
  v66 = a2;
  v68 = a7;
  v57 = a9;
  v62 = a4;
  memset(&v79, 0, 0xF8uLL);
  v14 = 0;
  v56 = 0;
  v55 = 0;
  v78 = 0LL;
  P = 0LL;
  v59 = 0;
  v64 = 0LL;
  v54 = 0;
  Src = 0LL;
  v60 = 0;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      11,
      13,
      (struct _GUID *)&WPP_a48ea93cdc4f3f22353657f4d507625f_Traceguids,
      a1);
  }
  *a7 = 0;
  if ( a8 )
  {
    v15 = 12;
    v16 = a5;
  }
  else
  {
    Pool2 = (void *)ExAllocatePool2(66LL, (unsigned int)Size, 1835091022LL);
    P = Pool2;
    if ( !Pool2 )
    {
      *a9 = 0;
      return 3221225626LL;
    }
    v15 = 8;
    v16 = (unsigned int *)Pool2;
  }
  v58 = v15;
  memset(v16, 0, (unsigned int)Size);
  v19 = 0;
  v61 = 0;
  while ( v19 < v62 )
  {
    memset(&v79, 0, 0xF8uLL);
    if ( v12 < v15 + 4 )
    {
      v53 = v57;
      v14 = -1073676268;
      *v57 = 0;
      goto LABEL_130;
    }
    v20 = (unsigned int *)(v65 + 4LL * v19);
    v21 = *v20;
    v22 = *v20 & 0x7FFFFFFF;
    v67 = v20;
    if ( (v21 & 0xFF000000) != 0x80000000 )
      v22 = v21;
    if ( v22 == 65796
      || v22 == 66050
      || v22 - 131603 <= 5 && (v23 = 55, _bittest(&v23, v22 - 131603))
      || v22 == 0xFFFFFF
      || v22 == -50265850 )
    {
      v14 = 0;
      if ( v22 > 0x20215 )
      {
        switch ( v22 )
        {
          case 0x20217u:
            v40 = *(_DWORD *)(a1 + 1872);
            v41 = v40;
            v42 = *(_DWORD *)(a1 + 120);
            v43 = v40;
            v54 = v40;
            v44 = v40;
            v45 = v40;
            if ( (v42 & 0x10) != 0 )
            {
              v40 |= 0x1000000u;
              v54 = v40;
              v41 = v40;
              v43 = v40;
              v44 = v40;
              v45 = v40;
            }
            if ( (*(_DWORD *)(a1 + 120) & 0x20000) != 0 )
            {
              v40 = v41 | 0x400;
              v54 = v41 | 0x400;
              v43 = v41 | 0x400;
              v44 = v41 | 0x400;
              v45 = v41 | 0x400;
            }
            if ( (*(_DWORD *)(a1 + 120) & 0x4000000) != 0 )
            {
              v40 = v43 | 0x2000;
              v54 = v43 | 0x2000;
              v44 = v43 | 0x2000;
              v45 = v43 | 0x2000;
            }
            v46 = *(_DWORD *)(a1 + 124);
            if ( (v46 & 1) != 0 )
            {
              v40 = v44 | 0x8000;
              v54 = v44 | 0x8000;
              v45 = v44 | 0x8000;
            }
            if ( (v46 & 0x1000) != 0 )
            {
              v40 = v45 | 0x40000;
              v54 = v45 | 0x40000;
            }
            if ( (v46 & 0x2000) != 0 )
            {
              v40 |= 0x80000u;
              v54 = v40;
            }
            if ( (v46 & 0x200000) != 0 )
            {
              v40 |= 0x400000u;
              v54 = v40;
            }
            if ( (v46 & 0x400000) != 0 )
            {
              v40 |= 2u;
              v54 = v40;
            }
            if ( *(int *)(a1 + 3456) > 0 )
            {
              v40 |= 0x40000000u;
              v54 = v40;
            }
            v47 = *(_BYTE *)(a1 + 32);
            v48 = *(_QWORD *)(a1 + 3760);
            if ( v47 >= 6u )
            {
              v49 = *(_QWORD **)(a1 + 3760);
              if ( *(_QWORD *)(v48 + 200) )
                goto LABEL_104;
            }
            else
            {
              if ( !*(_QWORD *)(v48 + 296) )
              {
                v49 = *(_QWORD **)(a1 + 3760);
LABEL_105:
                if ( !v49[24] || !v49[15] )
                {
LABEL_111:
                  if ( v47 >= 6u && v49[27] )
                    v54 = v40 | 8;
                  v34 = &v54;
                  goto LABEL_115;
                }
LABEL_110:
                v40 |= 0x80u;
                v54 = v40;
                goto LABEL_111;
              }
LABEL_104:
              v40 |= 0x800000u;
              v49 = *(_QWORD **)(a1 + 3760);
              v54 = v40;
              if ( v47 < 6u )
                goto LABEL_105;
            }
            if ( !v49[26] || !v49[27] )
              goto LABEL_111;
            goto LABEL_110;
          case 0x20218u:
            BytesWritten = 4;
            ndisFlags = *(unsigned int *)((char *)v11 + v15);
            ndisVerifierInitialization();
            if ( (ndisFlags & 4) == 0 )
              ndisVerifierLevel &= ~4u;
            v79.DATA.QUERY_INFORMATION.BytesWritten = 4;
            goto LABEL_118;
          case 0xFFFFFFu:
            v39 = MEMORY[0xFFFFF78000000320] - *(_QWORD *)(a1 + 1592);
            v64 = v39 * KeQueryTimeIncrement() / 10000000;
            v34 = (int *)&v64;
            goto LABEL_115;
          case 0xFD010106:
            v34 = (int *)(a1 + 1292);
LABEL_75:
            BytesWritten = 4;
LABEL_76:
            if ( v34 )
            {
LABEL_116:
              if ( BytesWritten > v12 - v15 )
              {
                v14 = -1073676268;
                goto LABEL_129;
              }
              memmove((char *)v11 + v15, v34, BytesWritten);
            }
LABEL_118:
            v50 = BytesWritten + v15;
            *v11 = *v67;
            v11[1] = BytesWritten;
            if ( v10 )
            {
              v51 = (v50 + 7) & 0xFFFFFFF8;
              v52 = v12 - v15 - 4;
              if ( v52 >= v51 )
                v12 -= v51;
              else
                v12 -= v50;
              if ( v52 >= v51 )
                v50 = (v50 + 7) & 0xFFFFFFF8;
              v56 += v50;
              v11[2] = v50;
              v11 = (unsigned int *)((char *)v11 + v50);
            }
            else
            {
              v12 -= v50;
              v11 = (unsigned int *)((char *)v11 + v50);
              v56 += v50;
            }
            break;
        }
      }
      else
      {
        if ( v22 == 131605 )
        {
          v34 = &v59;
          v59 = *(unsigned __int16 *)(a1 + 1790) + (*(unsigned __int16 *)(a1 + 1788) << 16);
          goto LABEL_115;
        }
        v35 = v22 - 65796;
        if ( !v35 )
        {
          v34 = (int *)(a1 + 464);
          goto LABEL_75;
        }
        v36 = v35 - 254;
        if ( !v36 )
        {
          v38 = *(_DWORD *)(a1 + 1832);
          v34 = &v60;
          if ( v38 == 14 )
            v38 = 0;
          v60 = v38;
LABEL_115:
          BytesWritten = 4;
          goto LABEL_116;
        }
        v37 = v36 - 65553;
        if ( !v37 )
        {
          v34 = (int *)(a1 + 1624);
          goto LABEL_75;
        }
        if ( v37 == 1 )
        {
          v34 = &v59;
          v59 = *(unsigned __int16 *)(a1 + 1784) + *(unsigned __int16 *)(a1 + 1786);
          goto LABEL_115;
        }
      }
    }
    else
    {
      v24 = v66;
      v25 = *((_QWORD *)v66 + 1);
      if ( *(_BYTE *)(v25 + 32) < 6u && (v22 & 0xFF000000) == 0xFF000000 || (*(_DWORD *)(v25 + 120) & 0x80u) != 0 )
        goto LABEL_26;
      v26 = *((_QWORD *)v66 + 2);
      if ( v26 )
      {
        v27 = *(_DWORD *)(v26 + 4);
        v28 = 0LL;
        if ( v27 )
        {
          while ( *(_DWORD *)(*(_QWORD *)(v26 + 16) + 4 * v28) != v22 )
          {
            v28 = (unsigned int)(v28 + 1);
            if ( (unsigned int)v28 >= v27 )
              goto LABEL_25;
          }
LABEL_26:
          if ( v22 == 16843010 )
          {
            v22 = 67174658;
            if ( *(_DWORD *)(a1 + 464) != 3 )
              v22 = 16843010;
          }
          else if ( v22 == 16843009 && *(_DWORD *)(a1 + 464) == 3 )
          {
            v22 = 67174657;
          }
          if ( (*(_DWORD *)(a1 + 124) & 0x800) != 0 )
          {
            v14 = -1073676282;
            break;
          }
          if ( v10 )
            v29 = (_QWORD *)((char *)v11 + v15);
          else
            v29 = P;
          if ( *(_BYTE *)(a1 + 32) >= 6u )
          {
            IsSatisfiedByOidGenStatistics = ndisIsSatisfiedByOidGenStatistics(v22);
            v31 = IsSatisfiedByOidGenStatistics;
            if ( IsSatisfiedByOidGenStatistics || v22 == 131334 )
            {
              if ( !v55 )
              {
                v78 = 0LL;
                Src = 0LL;
                v70 = 0LL;
                v71 = 0LL;
                v72 = 0LL;
                v73 = 0LL;
                v74 = 0LL;
                v75 = 0LL;
                v76 = 0LL;
                v77 = 0LL;
                v14 = ndisQueryDeviceOid(v24, &v79, 0x20106u, &Src, 0x98u);
                if ( v14 )
                  break;
                v55 = 1;
              }
              v32 = v12 - v58;
              if ( v22 == 131334 )
              {
                if ( v32 < 0x98 )
                  goto LABEL_128;
                memmove(v29, &Src, 0x98uLL);
                BytesWritten = 152;
              }
              else
              {
                if ( v32 < 8 )
                {
LABEL_128:
                  v14 = -1073676268;
                  break;
                }
                BytesWritten = 8;
                *v29 = *(_QWORD *)((char *)&Src + v31);
              }
              v34 = 0LL;
              if ( !a8 )
                v34 = (int *)v29;
              v15 = v58;
LABEL_55:
              v10 = a8;
              if ( BytesWritten )
                goto LABEL_76;
              goto LABEL_118;
            }
            v15 = v58;
          }
          v14 = ndisQueryDeviceOid(v24, &v79, v22, v29, v12 - v15);
          if ( v14 )
            break;
          BytesWritten = v79.DATA.QUERY_INFORMATION.BytesWritten;
          v34 = 0LL;
          if ( !a8 )
            v34 = (int *)v29;
          goto LABEL_55;
        }
LABEL_25:
        if ( (unsigned int)v28 < v27 )
          goto LABEL_26;
      }
    }
    v19 = v61 + 1;
    v61 = v19;
  }
LABEL_129:
  v53 = v57;
LABEL_130:
  *v68 = v56;
  if ( *v53 && v14 == -1073741637 )
    v14 = 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xEu,
      (struct _GUID *)&WPP_a48ea93cdc4f3f22353657f4d507625f_Traceguids,
      a1,
      v14);
  return v14;
}
