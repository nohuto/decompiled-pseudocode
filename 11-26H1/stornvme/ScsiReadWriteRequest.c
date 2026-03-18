/*
 * XREFs of ScsiReadWriteRequest @ 0x140003DE0
 * Callers:
 *     ScsiToNVMe @ 0x140002FA0 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     BuildReadWriteCommand @ 0x140004540 (BuildReadWriteCommand.c)
 *     ProcessorToIoSqMappingBase @ 0x140004B70 (ProcessorToIoSqMappingBase.c)
 *     ProcessorToDedicatedIoSqMapping @ 0x140019430 (ProcessorToDedicatedIoSqMapping.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 *     memmove @ 0x140032740 (memmove.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall ScsiReadWriteRequest(__int64 a1, __int64 a2, __int64 a3, int a4, bool *a5)
{
  char v6; // dl
  __int64 v8; // rax
  __int64 v9; // rsi
  _DWORD *v10; // r8
  unsigned __int8 v11; // cl
  __int64 v12; // rax
  unsigned int v13; // r9d
  _DWORD *v14; // rax
  char v15; // r11
  __int64 *v16; // rax
  __int64 v17; // r13
  unsigned int v18; // eax
  int v19; // r12d
  bool v20; // zf
  unsigned __int8 *v21; // r10
  unsigned int v22; // eax
  unsigned int *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r9
  int v27; // ecx
  unsigned int v28; // r8d
  unsigned int i; // edx
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int *v32; // rax
  __int64 v33; // r9
  unsigned __int16 v34; // r14
  __int64 v35; // rax
  unsigned int v36; // edi
  unsigned int v37; // ecx
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rax
  __int16 v41; // ax
  unsigned int v42; // ecx
  unsigned __int16 v43; // dx
  _BYTE *v45; // r12
  unsigned __int8 v46; // r11
  char v47; // r10
  char *v48; // r15
  unsigned int v49; // eax
  unsigned int *v50; // rdx
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // r8
  _BYTE *v54; // r12
  unsigned __int8 v55; // r11
  char v56; // r10
  char *v57; // rdi
  unsigned int v58; // eax
  unsigned int *v59; // rdx
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // r8
  int v63; // ecx
  int v64; // ecx
  int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // edi
  __int64 v68; // rsi
  unsigned int v69; // edi
  char *v70; // rcx
  unsigned int v71; // edi
  size_t v72; // r8
  unsigned int v73; // edx
  unsigned int v74; // esi
  __int64 v75; // r14
  unsigned int v76; // esi
  unsigned int v77; // esi
  bool v78; // [rsp+30h] [rbp-41h]
  unsigned __int16 v79; // [rsp+32h] [rbp-3Fh]
  __int64 v80; // [rsp+38h] [rbp-39h]
  unsigned int v81; // [rsp+40h] [rbp-31h] BYREF
  unsigned int v82; // [rsp+44h] [rbp-2Dh]
  int v83; // [rsp+48h] [rbp-29h]
  unsigned int v84; // [rsp+4Ch] [rbp-25h]
  bool *v85; // [rsp+50h] [rbp-21h]
  __int64 v86; // [rsp+58h] [rbp-19h]
  __int64 v87; // [rsp+60h] [rbp-11h]
  __int128 Src; // [rsp+68h] [rbp-9h] BYREF
  int v89; // [rsp+78h] [rbp+7h] BYREF

  v6 = *(_BYTE *)(a2 + 2);
  v85 = a5;
  v8 = 104LL;
  v83 = a4;
  v87 = a3;
  if ( v6 != 40 )
    v8 = 56LL;
  v9 = *(_QWORD *)(v8 + a2);
  v80 = v9;
  if ( (v9 & 0xFFF) != 0 )
  {
    v9 = v9 - (v9 & 0xFFF) + 4096;
    v80 = v9;
  }
  if ( v6 == 40 )
  {
    v10 = (_DWORD *)(a2 + 60);
    v11 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v11 = *(_BYTE *)(a2 + 7);
    v10 = (_DWORD *)(a2 + 16);
  }
  v86 = v11;
  v12 = *(_QWORD *)(a1 + 8LL * v11 + 1672);
  v13 = *(_DWORD *)(v12 + 52);
  v84 = v13;
  if ( !v13 || !*(_QWORD *)(v12 + 56) )
  {
    NVMeSetSenseData(a2, 6, 5, 0x24u);
    return 3238002694LL;
  }
  v79 = *(_WORD *)(v12 + 92);
  if ( v6 == 40 )
    v14 = (_DWORD *)(a2 + 24);
  else
    v14 = (_DWORD *)(a2 + 12);
  if ( (*v14 & 0xC0) == 0 )
  {
    *(_BYTE *)(a2 + 3) = 6;
    LOWORD(v89) = 0;
    v45 = 0LL;
    v46 = 0;
    Src = 0LL;
    v47 = 0;
    LOBYTE(Src) = -16;
    BYTE7(Src) = 10;
    BYTE2(Src) = 5;
    v48 = 0LL;
    WORD6(Src) = 36;
    if ( v6 != 40 )
    {
      if ( v6 )
        return 3238002694LL;
      v48 = *(char **)(a2 + 32);
      v45 = (_BYTE *)(a2 + 4);
      v46 = *(_BYTE *)(a2 + 11);
LABEL_79:
      if ( v45 )
        *v45 = 2;
      if ( !v48 || !v46 )
        return 3238002694LL;
      v67 = v46;
      v68 = v46;
      if ( v46 > 0x12u )
        v68 = 18LL;
      memmove(v48, &Src, (unsigned int)v68);
      *(_BYTE *)(a2 + 3) |= 0x80u;
      if ( v67 <= (unsigned int)v68 )
        return 3238002694LL;
      v69 = v67 - v68;
      v70 = &v48[v68];
      if ( (v69 & 3) == 0 )
      {
        v71 = v69 >> 2;
        if ( v71 )
          memset(v70, 0, 4LL * v71);
        return 3238002694LL;
      }
      if ( !v69 )
        return 3238002694LL;
      v72 = v69;
LABEL_165:
      memset(v70, 0, v72);
      return 3238002694LL;
    }
    if ( *(_DWORD *)(a2 + 20) )
      return 3238002694LL;
    v49 = *(_DWORD *)(a2 + 56);
    if ( !v49 )
      return 3238002694LL;
    v50 = (unsigned int *)(a2 + 120);
    v51 = v49;
    while ( 1 )
    {
      v52 = *v50;
      if ( (unsigned int)v52 < 0x80 || (unsigned int)v52 > *(_DWORD *)(a2 + 16) )
        goto LABEL_77;
      v53 = a2 + v52;
      if ( *(_DWORD *)(a2 + v52) == 64 || *(_DWORD *)(a2 + v52) == 65 )
        break;
      if ( *(_DWORD *)(a2 + v52) == 66 )
      {
        v48 = *(char **)(v53 + 24);
        goto LABEL_105;
      }
LABEL_77:
      ++v50;
      if ( !--v51 )
      {
        if ( !v47 )
          return 3238002694LL;
        goto LABEL_79;
      }
    }
    v48 = *(char **)(v53 + 16);
LABEL_105:
    v46 = *(_BYTE *)(v53 + 9);
    v45 = (_BYTE *)(v53 + 8);
    v47 = 1;
    goto LABEL_77;
  }
  if ( *v10 && ((v13 - 1) & *v10) == 0 )
  {
    *(_BYTE *)(v9 + 4225) = *(_BYTE *)(v9 + 4225) & 0xFC | 2;
    v15 = *(_BYTE *)(a2 + 2);
    if ( v15 == 40 )
      v16 = (__int64 *)(a2 + 104);
    else
      v16 = (__int64 *)(a2 + 56);
    v17 = *v16;
    v18 = *v16 & 0xFFF;
    if ( v18 )
      v17 = v17 - v18 + 4096;
    v19 = 0;
    v81 = 0;
    v20 = (*(_BYTE *)(v17 + 4225) & 1) == 0;
    v78 = 0;
    v82 = 0;
    if ( !v20 )
      goto LABEL_96;
    v89 = 0;
    v21 = 0LL;
    Src = 0LL;
    if ( v15 == 40 )
    {
      if ( !*(_DWORD *)(a2 + 20) )
      {
        v22 = *(_DWORD *)(a2 + 56);
        if ( v22 )
        {
          v23 = (unsigned int *)(a2 + 120);
          v24 = v22;
          while ( 1 )
          {
            v25 = *v23;
            if ( (unsigned int)v25 < 0x80 || (unsigned int)v25 > *(_DWORD *)(a2 + 16) )
              goto LABEL_28;
            v26 = a2 + v25;
            if ( *(_DWORD *)(a2 + v25) == 64 )
            {
              if ( *(_BYTE *)(v26 + 10) )
                goto LABEL_102;
            }
            else
            {
              if ( *(_DWORD *)(a2 + v25) != 65 )
              {
                if ( *(_DWORD *)(a2 + v25) == 66 && *(_DWORD *)(v26 + 12) )
                  v21 = (unsigned __int8 *)(v26 + 32);
                goto LABEL_28;
              }
              if ( *(_BYTE *)(v26 + 10) )
LABEL_102:
                v21 = (unsigned __int8 *)(v26 + 24);
            }
LABEL_28:
            ++v23;
            if ( !--v24 )
              goto LABEL_29;
          }
        }
      }
    }
    else if ( !v15 && *(_BYTE *)(a2 + 10) )
    {
      v21 = (unsigned __int8 *)(a2 + 72);
LABEL_29:
      if ( v21 )
      {
        v27 = *v21;
        if ( v27 == 138 || (v63 = v27 - 40) == 0 || (v64 = v63 - 2) == 0 || v64 == 94 )
        {
          if ( v15 == 40 )
          {
            v28 = *(_DWORD *)(a2 + 56);
            if ( v28 )
            {
              for ( i = 0; i < v28; ++i )
              {
                v30 = *(unsigned int *)(a2 + 4LL * i + 120);
                if ( (unsigned int)v30 >= 0x80 && (unsigned int)v30 < *(_DWORD *)(a2 + 16) )
                {
                  v31 = a2 + v30;
                  if ( *(_DWORD *)v31 == 128 )
                    goto LABEL_40;
                }
              }
            }
          }
          v32 = (unsigned int *)(a2 + 16);
          v31 = 0LL;
          if ( v15 == 40 )
LABEL_40:
            v32 = (unsigned int *)(a2 + 60);
          if ( v32 )
            v82 = *v32;
          if ( v31 )
            v78 = (*(_BYTE *)(v31 + 8) & 2) != 0;
        }
      }
    }
    *(_QWORD *)&Src = 0x1400000002LL;
    StorPortExtendedFunction(15LL, a1, a2, &Src);
    v34 = WORD4(Src);
    if ( (_WORD)v89 == 0xFFFF && BYTE2(v89) == 0xFF )
      StorPortExtendedFunction(17LL, a1, &v89, v33);
    StorPortExtendedFunction(56LL, a1, &v89, &v81);
    v35 = 24LL;
    v36 = v81;
    if ( *(_BYTE *)(a2 + 2) != 40 )
      v35 = 12LL;
    if ( (*(_BYTE *)(v17 + 4225) & 1) != 0 )
    {
LABEL_96:
      v41 = *(_WORD *)(a1 + 384);
      goto LABEL_60;
    }
    if ( *(_BYTE *)(a1 + 20) )
    {
      v40 = *(_QWORD *)(a1 + 936);
    }
    else
    {
      v37 = *(unsigned __int16 *)(a1 + 234);
      if ( v81 >= v37 )
        v36 = v81 % v37;
      v38 = 72LL * v36;
      v39 = *(_QWORD *)(a1 + 264);
      if ( (*(_DWORD *)(v35 + a2) & 0x4000) != 0 )
      {
        if ( !*(_QWORD *)(v39 + v38 + 64) )
          ProcessorToDedicatedIoSqMapping(a1, v36, v34);
        v40 = *(_QWORD *)(v38 + *(_QWORD *)(a1 + 264) + 64);
      }
      else
      {
        if ( !*(_QWORD *)(v39 + v38 + 56) )
          ProcessorToIoSqMappingBase(a1, v36, v34, 0LL);
        v40 = *(_QWORD *)(v38 + *(_QWORD *)(a1 + 264) + 56);
      }
      if ( *(_BYTE *)(a1 + 3752) && v82 )
      {
        v65 = *(_DWORD *)(a1 + 3764);
        if ( (v65 & 0x80u) == 0 && (v82 > *(_DWORD *)(a1 + 3760) || v78) )
        {
          v9 = v80;
          v41 = *(_WORD *)(208LL
                         * (unsigned __int16)(*(_WORD *)(a1 + 334)
                                            + v36 % (unsigned __int16)(*(_WORD *)(a1 + 332) - *(_WORD *)(a1 + 334)))
                         + *(_QWORD *)(a1 + 936)
                         + 48);
        }
        else
        {
          v9 = v80;
          if ( (v65 & 0x40) != 0 )
            v73 = v36 % *(unsigned __int16 *)(a1 + 332);
          else
            v73 = v36 % *(unsigned __int16 *)(a1 + 334);
          v41 = *(_WORD *)(208LL * (unsigned __int16)v73 + *(_QWORD *)(a1 + 936) + 48);
        }
LABEL_60:
        *(_WORD *)(v17 + 4212) = v41;
        if ( (unsigned int)v86 < *(_DWORD *)(a1 + 224) && *(_QWORD *)(a1 + 8 * v86 + 1672) )
        {
          _mm_lfence();
          v19 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v86 + 1672) + 16LL);
        }
        BuildReadWriteCommand(a1, a2, v87, v83, v9 + 4096, v19);
        v42 = *(_DWORD *)(a1 + 52);
        if ( v42 < v84 || v42 % v84 )
        {
          v43 = v79;
          if ( !v79 )
          {
            if ( v85 )
              *v85 = 0;
            return 0LL;
          }
        }
        else
        {
          v43 = v79;
        }
        if ( v43 )
          v66 = v43;
        else
          v66 = v42 / v84;
        if ( v85 )
          *v85 = *(_QWORD *)(v9 + 4136) / (__int64)v66 != (*(_QWORD *)(v9 + 4136)
                                                         + (unsigned int)(unsigned __int16)*(_DWORD *)(v9 + 4144)
                                                         + 1
                                                         - 1LL)
                                                        / v66;
        return 0LL;
      }
      v9 = v80;
    }
    v41 = *(_WORD *)(v40 + 48);
    goto LABEL_60;
  }
  *(_BYTE *)(a2 + 3) = 6;
  LOWORD(v89) = 0;
  v54 = 0LL;
  v55 = 0;
  Src = 0LL;
  v56 = 0;
  LOBYTE(Src) = -16;
  BYTE7(Src) = 10;
  BYTE2(Src) = 5;
  v57 = 0LL;
  WORD6(Src) = 36;
  if ( v6 == 40 )
  {
    if ( *(_DWORD *)(a2 + 20) )
      return 3238002694LL;
    v58 = *(_DWORD *)(a2 + 56);
    if ( !v58 )
      return 3238002694LL;
    v59 = (unsigned int *)(a2 + 120);
    v60 = v58;
    while ( 1 )
    {
      v61 = *v59;
      if ( (unsigned int)v61 < 0x80 || (unsigned int)v61 > *(_DWORD *)(a2 + 16) )
        goto LABEL_90;
      v62 = a2 + v61;
      if ( *(_DWORD *)(a2 + v61) == 64 || *(_DWORD *)(a2 + v61) == 65 )
        break;
      if ( *(_DWORD *)(a2 + v61) == 66 )
      {
        v57 = *(char **)(v62 + 24);
        goto LABEL_107;
      }
LABEL_90:
      ++v59;
      if ( !--v60 )
      {
        if ( v56 )
          goto LABEL_92;
        return 3238002694LL;
      }
    }
    v57 = *(char **)(v62 + 16);
LABEL_107:
    v55 = *(_BYTE *)(v62 + 9);
    v54 = (_BYTE *)(v62 + 8);
    v56 = 1;
    goto LABEL_90;
  }
  if ( !v6 )
  {
    v57 = *(char **)(a2 + 32);
    v54 = (_BYTE *)(a2 + 4);
    v55 = *(_BYTE *)(a2 + 11);
LABEL_92:
    if ( v54 )
      *v54 = 2;
    if ( v57 && v55 )
    {
      v74 = v55;
      v75 = v55;
      if ( v55 > 0x12u )
        v75 = 18LL;
      memmove(v57, &Src, (unsigned int)v75);
      *(_BYTE *)(a2 + 3) |= 0x80u;
      if ( v74 > (unsigned int)v75 )
      {
        v76 = v74 - v75;
        v70 = &v57[v75];
        if ( (v76 & 3) == 0 )
        {
          v77 = v76 >> 2;
          if ( v77 )
            memset(v70, 0, 4LL * v77);
          return 3238002694LL;
        }
        if ( !v76 )
          return 3238002694LL;
        v72 = v76;
        goto LABEL_165;
      }
    }
  }
  return 3238002694LL;
}
