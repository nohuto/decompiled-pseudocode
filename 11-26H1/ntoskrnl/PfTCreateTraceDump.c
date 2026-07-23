/*
 * XREFs of PfTCreateTraceDump @ 0x1409F21D0
 * Callers:
 *     PfTGenerateTrace @ 0x1409F2150 (PfTGenerateTrace.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PfTFreeBufferList @ 0x1409F29D4 (PfTFreeBufferList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfTCreateTraceDump(_QWORD *a1, __int64 *a2)
{
  _QWORD *v2; // r14
  unsigned int v3; // r13d
  __int64 v4; // rbp
  int v5; // esi
  __int64 *v6; // rax
  int v7; // ebx
  unsigned int i; // r8d
  size_t v9; // rdi
  _WORD *Pool2; // rax
  _WORD *v11; // r15
  __int64 v12; // rax
  _QWORD *v13; // r8
  _QWORD *v14; // r11
  _QWORD *v15; // r14
  __int16 v16; // r12
  unsigned int v17; // edi
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int16 v20; // r9
  unsigned __int16 v21; // ax
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // r9
  int v28; // esi
  int v29; // ebx
  __int64 v30; // rax
  _QWORD *v31; // r10
  __int64 v32; // r11
  __int64 v33; // r9
  __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  unsigned int v37; // ebx
  _QWORD *v38; // rcx
  unsigned int v39; // r14d
  unsigned __int64 v40; // r8
  _WORD *v41; // rbx
  __int64 v42; // rsi
  unsigned int v43; // edi
  __int64 v44; // rcx
  unsigned __int16 v45; // r9
  unsigned __int16 v46; // r8
  _OWORD *v47; // r10
  _OWORD *v48; // rdx
  unsigned __int16 v49; // r8
  unsigned int v50; // ecx
  unsigned __int16 v51; // r9
  unsigned int v52; // ecx
  int v53; // eax
  __int64 v55; // r8
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  unsigned int v61; // eax
  __int64 v62; // r8
  __int64 v63; // r8
  __int64 v64; // r10
  _QWORD *v65; // rdx
  __int64 v66; // r11
  _QWORD *v67; // rcx
  __int64 v68; // r10
  _QWORD *v69; // rcx
  __int64 v70; // r11
  unsigned __int64 v71; // [rsp+20h] [rbp-118h]
  _QWORD *v72; // [rsp+28h] [rbp-110h]
  __int64 v73; // [rsp+30h] [rbp-108h]
  unsigned __int64 v74; // [rsp+38h] [rbp-100h]
  _QWORD *v75; // [rsp+40h] [rbp-F8h]
  unsigned __int64 v76; // [rsp+48h] [rbp-F0h]
  __int64 v77; // [rsp+50h] [rbp-E8h]
  char v78[72]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v79; // [rsp+D8h] [rbp-60h]
  __int16 v80; // [rsp+E6h] [rbp-52h]
  unsigned __int16 v83; // [rsp+150h] [rbp+18h]
  _QWORD *v84; // [rsp+158h] [rbp+20h]

  v2 = a1;
  memset_0(v78, 0, 0x60uLL);
  v3 = 0;
  v4 = v2[20];
  v72 = v2 + 14;
  v5 = 0;
  v6 = (__int64 *)v2[19];
  v7 = 0;
  v84 = v2 + 19;
  for ( i = 0; v6 != v2 + 19; v6 = (__int64 *)*v6 )
    i += *((_DWORD *)v6 + 8);
  v9 = 2LL * i;
  Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
  v11 = Pool2;
  if ( !Pool2 )
  {
    v37 = -1073741670;
    goto LABEL_55;
  }
  memset_0(Pool2, 0, v9);
  v12 = v2[20];
  v13 = v2 + 14;
  v14 = v2 + 19;
  v15 = v2 + 14;
  v16 = *(_WORD *)(v12 + 36);
  do
  {
    v15 = (_QWORD *)v15[1];
    v17 = 0;
    if ( !*((_DWORD *)v15 + 4) )
      continue;
    do
    {
      v18 = (((unsigned __int64)v15 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16LL * v17;
      v19 = *(_QWORD *)v18;
      if ( ((unsigned __int8)*(_QWORD *)v18 & 3u) >= 2 )
      {
        v61 = ((unsigned int)v19 >> 2) & 0x3FF;
        v5 += v61;
        v17 = v61 + v17 - 1;
        if ( (v19 & 3) != 2 )
          goto LABEL_24;
        LODWORD(v19) = *(_DWORD *)(v18 + 16);
        v18 += 16LL;
      }
      else
      {
        ++v5;
      }
      if ( (v19 & 3) != 0 )
      {
        v21 = -1;
        if ( (*(_BYTE *)v18 & 0x18) == 0x10 )
          v20 = *(_WORD *)(v18 + 10);
        else
          v20 = -1;
      }
      else
      {
        v20 = *(_WORD *)(v18 + 10);
        v21 = *(_WORD *)(v18 + 8);
      }
      if ( v21 == 0xFFFF )
      {
        v22 = 0LL;
      }
      else
      {
        v55 = *(unsigned __int16 *)(v4 + 36);
        if ( v21 < (unsigned __int16)v55 || v21 >= (unsigned int)(*(_DWORD *)(v4 + 32) + v55) )
        {
          v64 = v4;
          do
          {
            v64 = *(_QWORD *)(v64 + 8);
            if ( (_QWORD *)v64 == v14 )
              v64 = v14[1];
            if ( v64 == v4 )
            {
              v22 = 0LL;
              goto LABEL_11;
            }
            v55 = *(unsigned __int16 *)(v64 + 36);
          }
          while ( v21 < (unsigned __int16)v55 || v21 >= (unsigned int)(*(_DWORD *)(v64 + 32) + v55) );
          v4 = v64;
          v56 = v64 + 47;
        }
        else
        {
          v56 = v4 + 47;
        }
        v22 = (v56 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * (v21 - v55) + 8;
      }
LABEL_11:
      if ( v20 == 0xFFFF )
      {
        v23 = 0LL;
      }
      else
      {
        v24 = *(unsigned __int16 *)(v4 + 36);
        if ( v20 < (unsigned __int16)v24 || v20 >= (unsigned int)(*(_DWORD *)(v4 + 32) + v24) )
        {
          v65 = v84;
          v66 = v4;
          while ( 1 )
          {
            v66 = *(_QWORD *)(v66 + 8);
            if ( (_QWORD *)v66 == v65 )
              v66 = v65[1];
            if ( v66 == v4 )
            {
              v23 = 0LL;
              goto LABEL_17;
            }
            v24 = *(unsigned __int16 *)(v66 + 36);
            if ( v20 >= (unsigned __int16)v24 )
            {
              v65 = v84;
              if ( v20 < (unsigned int)(*(_DWORD *)(v66 + 32) + v24) )
                break;
            }
          }
          v4 = v66;
          v25 = v66 + 47;
        }
        else
        {
          v25 = v4 + 47;
        }
        v23 = (v25 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * (v20 - v24) + 8;
      }
LABEL_17:
      if ( v22 )
      {
        _mm_lfence();
        v26 = v21 - v16;
        if ( v11[v26] != 0xFFFF )
        {
          v11[v26] = -1;
          ++v7;
        }
      }
      if ( v23 )
      {
        _mm_lfence();
        v27 = v20 - v16;
        if ( v11[v27] != 0xFFFF )
        {
          v11[v27] = -1;
          ++v7;
        }
      }
      v14 = v84;
LABEL_24:
      ++v17;
    }
    while ( v17 < *((_DWORD *)v15 + 4) );
    v13 = v72;
    v3 = 0;
  }
  while ( v15 != (_QWORD *)*v13 );
  if ( v5 )
  {
    v28 = 16 * v5;
    v29 = 32 * v7;
    v30 = ExAllocatePool2(0x100uLL);
    v77 = v30;
    if ( v30 )
    {
      v31 = v72;
      v32 = v30 + 32;
      v73 = v30 + 32;
      v33 = v30 + 56;
      *(_OWORD *)(v30 + 32) = 0LL;
      *(_QWORD *)(v30 + 48) = 0LL;
      *(_DWORD *)(v30 + 24) = v29 + ((v28 + 63) & 0xFFFFFFF8) - 16;
      *(_DWORD *)(v30 + 16) = 852013;
      *(_DWORD *)(v30 + 20) = 1128485697;
      *(_DWORD *)(v30 + 28) = 0;
      v34 = (unsigned int)(v28 + 24);
      *(_DWORD *)(v30 + 40) = v34;
      v35 = v30 + 32 + v34;
      v36 = v30 + 32 + (unsigned int)(v29 + v28 + 24);
      *(_DWORD *)(v32 + 16) = v29 + v28 + 24;
      v37 = 0;
      *(_DWORD *)v32 = 24;
      v83 = 0;
      v38 = v72;
      v71 = v35;
      v74 = v36;
      v79 = v36;
      do
      {
        v38 = (_QWORD *)v38[1];
        v39 = 0;
        v75 = v38;
        if ( *((_DWORD *)v38 + 4) )
        {
          v40 = ((unsigned __int64)v38 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
          v76 = v40;
          do
          {
            v41 = (_WORD *)(v40 + 16LL * v39);
            v42 = v33 + 16LL * v3;
            if ( ((unsigned __int8)*(_QWORD *)v41 & 3u) >= 2 )
            {
              v43 = ((unsigned int)*(_QWORD *)v41 >> 2) & 0x3FF;
              v39 = v43 + v39 - 1;
            }
            else
            {
              v43 = 1;
            }
            if ( v42 + (unsigned __int64)(16 * v43) > v35 )
              break;
            memmove((void *)(v33 + 16LL * v3), v41, 16 * v43);
            v32 = v73;
            v3 += v43;
            *(_DWORD *)(v73 + 4) += v43;
            if ( (*(_DWORD *)v41 & 3) == 2 )
            {
              v41 += 8;
              v42 += 16LL;
            }
            v44 = *(_QWORD *)v41;
            if ( ((unsigned __int8)*(_QWORD *)v41 & 3u) < 2 )
            {
              if ( (v44 & 3) != 0 )
              {
                v46 = -1;
                if ( (v44 & 0x18) == 0x10 )
                  v45 = v41[5];
                else
                  v45 = -1;
              }
              else
              {
                v45 = v41[5];
                v46 = v41[4];
              }
              if ( v46 == 0xFFFF )
              {
                v47 = 0LL;
              }
              else
              {
                v59 = *(unsigned __int16 *)(v4 + 36);
                if ( v46 < (unsigned __int16)v59 || v46 >= (unsigned int)(*(_DWORD *)(v4 + 32) + v59) )
                {
                  v67 = v84;
                  v68 = v4;
                  while ( 1 )
                  {
                    v68 = *(_QWORD *)(v68 + 8);
                    if ( (_QWORD *)v68 == v67 )
                      v68 = v67[1];
                    if ( v68 == v4 )
                    {
                      v47 = 0LL;
                      goto LABEL_42;
                    }
                    v59 = *(unsigned __int16 *)(v68 + 36);
                    if ( v46 >= (unsigned __int16)v59 )
                    {
                      v67 = v84;
                      if ( v46 < (unsigned int)(*(_DWORD *)(v68 + 32) + v59) )
                        break;
                    }
                  }
                  v4 = v68;
                  v60 = v68 + 47;
                }
                else
                {
                  v60 = v4 + 47;
                }
                v47 = (_OWORD *)((v60 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * (v46 - v59) + 8);
              }
LABEL_42:
              if ( v45 == 0xFFFF )
              {
                v48 = 0LL;
              }
              else
              {
                v57 = *(unsigned __int16 *)(v4 + 36);
                if ( v45 < (unsigned __int16)v57 || v45 >= (unsigned int)(*(_DWORD *)(v4 + 32) + v57) )
                {
                  v69 = v84;
                  v70 = v4;
                  while ( 1 )
                  {
                    v70 = *(_QWORD *)(v70 + 8);
                    if ( (_QWORD *)v70 == v69 )
                      v70 = v69[1];
                    if ( v70 == v4 )
                    {
                      v48 = 0LL;
                      goto LABEL_64;
                    }
                    v57 = *(unsigned __int16 *)(v70 + 36);
                    if ( v45 >= (unsigned __int16)v57 )
                    {
                      v69 = v84;
                      if ( v45 < (unsigned int)(*(_DWORD *)(v70 + 32) + v57) )
                        break;
                    }
                  }
                  v4 = v70;
                  v58 = v70 + 47;
                }
                else
                {
                  v58 = v4 + 47;
                }
                v48 = (_OWORD *)((v58 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * (v45 - v57) + 8);
LABEL_64:
                v32 = v73;
              }
              if ( v47 )
              {
                v49 = v46 - v16;
                LOWORD(v50) = v11[v49];
                if ( (_WORD)v50 == 0xFFFF )
                {
                  v50 = v83;
                  v11[v49] = v83++;
                  v62 = 32LL * v50;
                  if ( v62 + v71 + 32 > v74 )
                  {
                    v83 = v50;
                  }
                  else
                  {
                    *(_OWORD *)(v62 + v71) = *v47;
                    *(_OWORD *)(v62 + v71 + 16) = v47[1];
                    ++*(_WORD *)(v32 + 12);
                  }
                }
                *(_WORD *)(v42 + 8) = v50;
              }
              if ( v48 )
              {
                v51 = v45 - v16;
                LOWORD(v52) = v11[v51];
                if ( (_WORD)v52 == 0xFFFF )
                {
                  v52 = v83;
                  v11[v51] = v83++;
                  v63 = 32LL * v52;
                  if ( v71 + v63 + 32 > v74 )
                  {
                    v83 = v52;
                  }
                  else
                  {
                    *(_OWORD *)(v63 + v71) = *v48;
                    *(_OWORD *)(v63 + v71 + 16) = v48[1];
                    ++*(_WORD *)(v32 + 12);
                  }
                }
                *(_WORD *)(v42 + 10) = v52;
              }
            }
            v38 = v75;
            v33 = v32 + 24;
            v35 = v71;
            ++v39;
            v40 = v76;
          }
          while ( v39 < *((_DWORD *)v75 + 4) );
          v31 = v72;
          v37 = 0;
        }
      }
      while ( v38 != (_QWORD *)*v31 );
      v53 = v79 - v32 - *(_DWORD *)(v32 + 16);
      *(_WORD *)(v32 + 14) = v80;
      *(_DWORD *)(v32 + 20) = v53;
      *a2 = v77;
    }
    else
    {
      v37 = -1073741670;
    }
  }
  else
  {
    v37 = -2147483622;
  }
  ExFreePoolWithTag(v11, 0);
  v2 = a1;
LABEL_55:
  PfTFreeBufferList(v2 + 11);
  PfTFreeBufferList(v2 + 16);
  return v37;
}
