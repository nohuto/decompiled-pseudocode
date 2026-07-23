/*
 * XREFs of PfpLogPageAccess @ 0x1409F1770
 * Callers:
 *     PfpFlushBuffers @ 0x1409F13D0 (PfpFlushBuffers.c)
 *     PfpCopyEvent @ 0x1409F1E30 (PfpCopyEvent.c)
 * Callees:
 *     PfTReplaceCurrentBuffer @ 0x1409F2068 (PfTReplaceCurrentBuffer.c)
 */

unsigned __int64 __fastcall PfpLogPageAccess(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4, __int64 a5, int a6)
{
  __int16 v6; // si
  __int16 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // r11
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int64 v18; // r9
  unsigned int *v19; // r10
  char v20; // r11
  unsigned __int64 v21; // rdx
  int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // r9
  __int64 v26; // r8
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r12
  unsigned __int64 v35; // r13
  unsigned __int64 v36; // rbx
  __int64 v37; // r8
  __int64 v38; // rcx
  unsigned __int64 v39; // r9
  unsigned int *v40; // r10
  char v41; // dl
  unsigned __int64 v42; // rdx
  __int16 v43; // ax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // r11
  __int64 v47; // rax
  unsigned int v48; // ecx
  unsigned int v49; // eax
  __int64 v50; // rax
  unsigned int v51; // eax
  unsigned int v52; // edx
  unsigned int v53; // ecx
  __int64 v54; // rax
  unsigned int v55; // eax
  __int64 v56; // r8
  unsigned __int64 v57; // r8
  bool v58; // zf
  __int16 v59; // [rsp+20h] [rbp-48h]
  __int16 v60; // [rsp+20h] [rbp-48h]
  int v61; // [rsp+24h] [rbp-44h]
  unsigned __int64 v62; // [rsp+28h] [rbp-40h]
  __int64 v63; // [rsp+38h] [rbp-30h]
  __int64 v64; // [rsp+80h] [rbp+18h]
  unsigned int v65; // [rsp+80h] [rbp+18h]
  unsigned int v66; // [rsp+80h] [rbp+18h]

  v6 = -1;
  v11 = -1;
  if ( (*a3 & 0x1FF) == 0 )
    goto LABEL_2;
  v34 = a1 + 128;
  v35 = *(_QWORD *)(a5 - 8LL * (*a3 & 0x1FF));
  v36 = v35 & 0xFFFFFFFFFFFFFFFCuLL;
  v60 = 0;
  while ( 1 )
  {
    v37 = *(_QWORD *)(v34 + 24);
    v38 = *(unsigned int *)(v37 + 16);
    v39 = (v37 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
    v40 = (unsigned int *)(v37 + 32);
    if ( *(_QWORD *)(v39 + 40 * v38) != v36 )
    {
      v66 = *v40;
      v62 = v35 & 0xFFFFFFFFFFFFFFFCuLL;
      v46 = (*v40 - 1) & (442596621 * (unsigned __int8)v36
                        + 37
                        * (BYTE6(v62)
                         + 37
                         * (BYTE5(v62) + 37 * (BYTE4(v62) + 37 * (BYTE3(v62) + 37 * (BYTE2(v62) + 37 * BYTE1(v62))))))
                        + HIBYTE(v62)
                        - 877075889);
      v47 = *(_QWORD *)(v39 + 40 * v46);
      if ( v47 != v36 )
      {
        if ( v47 )
        {
          v51 = *v40;
          v52 = v46 + 1;
          v53 = 0;
          v34 = a1 + 128;
          while ( v53 < 2 )
          {
            while ( v52 < v51 )
            {
              v54 = *(_QWORD *)(v39 + 40LL * v52);
              if ( v54 == v36 )
              {
                *(_DWORD *)(v37 + 16) = v52;
                LOWORD(v38) = v52;
                goto LABEL_24;
              }
              if ( !v54 )
              {
                LOWORD(v46) = v52;
                *(_DWORD *)(v37 + 16) = v52;
                v60 = v52;
                goto LABEL_58;
              }
              v51 = v66;
              ++v52;
            }
            v52 = 0;
            ++v53;
            v51 = (*v40 - 1) & (442596621 * (unsigned __int8)v36
                              + 37
                              * (BYTE6(v62)
                               + 37
                               * (BYTE5(v62)
                                + 37 * (BYTE4(v62) + 37 * (BYTE3(v62) + 37 * (BYTE2(v62) + 37 * BYTE1(v62))))))
                              + HIBYTE(v62)
                              - 877075889);
            v66 = v51;
          }
          LOWORD(v46) = -1;
          v60 = -1;
        }
        else
        {
          *(_DWORD *)(v37 + 16) = v46;
          v60 = v46;
        }
        goto LABEL_58;
      }
      *(_DWORD *)(v37 + 16) = v46;
      LOWORD(v38) = v46;
    }
LABEL_24:
    if ( (_WORD)v38 != 0xFFFF )
    {
      v41 = 0;
      goto LABEL_26;
    }
    LOWORD(v46) = v60;
LABEL_58:
    v55 = *(_DWORD *)(v37 + 28);
    if ( v55 < 3 * (*v40 >> 2) )
      break;
    if ( (unsigned int)PfTReplaceCurrentBuffer(a1, v34) == -1073741823 )
      return 0LL;
  }
  v41 = 1;
  *(_DWORD *)(v37 + 28) = v55 + 1;
  *(_QWORD *)(v39 + 40LL * (unsigned __int16)v46) = v36;
  LOWORD(v38) = v46;
LABEL_26:
  if ( !v37 )
    return 0LL;
  v11 = *(_WORD *)(v37 + 36) + v38;
  if ( v41 )
  {
    v42 = v39 + 40LL * (unsigned __int16)v38;
    v43 = *(_WORD *)(v42 + 16);
    *(_QWORD *)(v42 + 8) = (16 * v35) | *(_DWORD *)(v42 + 8) & 8 | 4;
    *(_WORD *)(v42 + 16) = v43 & 0xFFF0 | (v35 >> 60);
  }
LABEL_2:
  if ( a2 )
  {
    if ( !a6 )
    {
      v12 = (*(_QWORD *)(a2 + 464) ^ *(_QWORD *)(a2 + 504)) & 0x1FFFFFFFFFFFFFFFLL;
      goto LABEL_5;
    }
  }
  else if ( !a6 )
  {
    v64 = 0LL;
    goto LABEL_12;
  }
  v12 = a2;
LABEL_5:
  v13 = a1 + 128;
  v59 = 0;
  v14 = v12 & 0xFFFFFFFFFFFFFFFCuLL | 1;
  v15 = 4 * (v14 & 3) + 16;
  v63 = v15;
  while ( 2 )
  {
    v16 = *(_QWORD *)(v13 + 24);
    v17 = *(unsigned int *)(v16 + v15);
    v18 = (v16 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
    v19 = (unsigned int *)(v16 + 32);
    if ( *(_QWORD *)(v18 + 40 * v17) == v14 )
    {
LABEL_7:
      if ( (_WORD)v17 != 0xFFFF )
      {
        v20 = 0;
        goto LABEL_9;
      }
      LOWORD(v44) = v59;
    }
    else
    {
      v65 = *v19;
      v44 = (*v19 - 1) & (HIBYTE(v14)
                        - 877075889
                        + 442596621 * (unsigned __int8)v14
                        + 37
                        * (BYTE6(v14)
                         + 37
                         * (BYTE5(v14) + 37 * (BYTE4(v14) + 37 * (BYTE3(v14) + 37 * (BYTE2(v14) + 37 * BYTE1(v14)))))));
      v45 = *(_QWORD *)(v18 + 40 * v44);
      if ( v45 == v14 )
      {
LABEL_32:
        LOWORD(v17) = v44;
        *(_DWORD *)(v16 + v63) = v44;
        goto LABEL_7;
      }
      if ( v45 )
      {
        LODWORD(v44) = v44 + 1;
        v48 = 0;
        v61 = 0;
        v49 = *v19;
        while ( v48 < 2 )
        {
          while ( (unsigned int)v44 < v49 )
          {
            v50 = *(_QWORD *)(v18 + 40LL * (unsigned int)v44);
            if ( v50 == v14 )
              goto LABEL_32;
            if ( !v50 )
              goto LABEL_42;
            v49 = v65;
            LODWORD(v44) = v44 + 1;
          }
          LODWORD(v44) = 0;
          v48 = v61 + 1;
          v49 = (*v19 - 1) & (HIBYTE(v14)
                            - 877075889
                            + 442596621 * (unsigned __int8)v14
                            + 37
                            * (BYTE6(v14)
                             + 37
                             * (BYTE5(v14) + 37 * (BYTE4(v14) + 37 * (BYTE3(v14) + 37 * (BYTE2(v14) + 37 * BYTE1(v14)))))));
          v65 = v49;
          ++v61;
        }
        LOWORD(v44) = -1;
      }
      else
      {
LABEL_42:
        *(_DWORD *)(v16 + v63) = v44;
      }
      v59 = v44;
    }
    LODWORD(v17) = *(_DWORD *)(v16 + 28);
    if ( (unsigned int)v17 >= 3 * (*v19 >> 2) )
    {
      v58 = (unsigned int)PfTReplaceCurrentBuffer(a1, v13) == -1073741823;
      v13 = a1 + 128;
      v15 = 4 * (v14 & 3) + 16;
      if ( v58 )
        return 0LL;
      continue;
    }
    break;
  }
  v20 = 1;
  *(_DWORD *)(v16 + 28) = v17 + 1;
  *(_QWORD *)(v18 + 40LL * (unsigned __int16)v44) = v14;
  LOWORD(v17) = v44;
LABEL_9:
  if ( !v16 )
    return 0LL;
  v6 = *(_WORD *)(v16 + 36) + v17;
  v64 = 2LL;
  v21 = v18 + 40LL * (unsigned __int16)v17;
  if ( v20 || (*(_BYTE *)(v21 + 8) & 4) != 0 )
  {
    v56 = *(_QWORD *)(v21 + 8);
    if ( a6 )
    {
      *(_QWORD *)(v21 + 8) = v56 & 0xFFFFFFFFFFFFFFF8uLL | 5;
    }
    else
    {
      v57 = v56 & 0xFFFFFFFFFFFFFFF8uLL | 1;
      *(_QWORD *)(v21 + 8) = v57;
      *(_QWORD *)(v21 + 8) = v57 & 7 | (8LL * (*(_QWORD *)(a2 + 464) ^ *(_QWORD *)(a2 + 504)));
      *(_DWORD *)(v21 + 20) = *(_DWORD *)(a2 + 900);
      *(_DWORD *)(v21 + 16) = *(_DWORD *)(a2 + 464);
    }
  }
LABEL_12:
  v22 = ((*a4 & 3) == 2) + 1;
  while ( 1 )
  {
    v23 = *(_QWORD *)(a1 + 112);
    v24 = *(unsigned int *)(v23 + 16);
    if ( (unsigned int)(v24 + v22) <= *(_DWORD *)(v23 + 20) )
      break;
    if ( (unsigned int)PfTReplaceCurrentBuffer(a1, a1 + 88) == -1073741823 )
      return 0LL;
  }
  *(_DWORD *)(v23 + 16) = v24 + v22;
  v25 = 16 * v24 + ((v23 + 31) & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (*a4 & 3) == 2 )
  {
    *(_OWORD *)v25 = *(_OWORD *)a4;
    *(_QWORD *)v25 = *(_QWORD *)v25 & 0xFFFFFFFFFFFFF003uLL | 8;
    v25 += 16LL;
  }
  v26 = *(_QWORD *)v25;
  if ( (*a3 & 0x1FF) != 0 )
  {
    v30 = v26 & 0xFFFFFFFFFFFFFFFCuLL;
    *(_QWORD *)v25 = v30;
    v31 = ((unsigned __int64)(unsigned int)*a3 >> 7) & 0x1FFFFFFFFFFFFFCLL ^ (v30 ^ ((unsigned __int64)(unsigned int)*a3 >> 7) & 0x1FFFFFFFFFFFFFCLL) & 0xFFFFFFFFFFFFFFFBuLL;
    *(_QWORD *)v25 = v31;
    result = v25;
    v32 = ((unsigned __int64)(unsigned int)*a3 >> 7) & 0x1FFFFFFFFFFFFF8LL ^ (v31 ^ ((unsigned __int64)(unsigned int)*a3 >> 7) & 0x1FFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF7uLL;
    *(_QWORD *)v25 = v32;
    v33 = v32 & 0xF | (16LL * (unsigned int)(*(_QWORD *)a3 >> 12));
    *(_WORD *)(v25 + 10) = v6;
    *(_QWORD *)v25 = v33;
    *(_WORD *)(v25 + 8) = v11;
  }
  else
  {
    v27 = v26 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    *(_QWORD *)v25 = v27;
    v28 = (8 * v64) | v27 & 0xFFFFFFFFFFFFFFE3uLL ^ ((unsigned __int64)(unsigned int)*a3 >> 7) & 4;
    *(_QWORD *)v25 = v28;
    *(_QWORD *)v25 = v28 ^ (*(_QWORD *)a3 ^ v28) & 0xFFFFFFFFFFFFF000uLL;
    result = v25;
    if ( v64 == 2 )
      *(_WORD *)(v25 + 10) = v6;
    else
      *(_DWORD *)(v25 + 8) = -1;
  }
  return result;
}
