/*
 * XREFs of Duplicate802_11AttachAttributesCommon @ 0x140059140
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x140080DC0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     NdisAllocateMemoryWithTag @ 0x140059D30 (NdisAllocateMemoryWithTag.c)
 *     PrivateULongAdd @ 0x1400E7D90 (PrivateULongAdd.c)
 *     PrivateULongMult @ 0x1400E7DB4 (PrivateULongMult.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall Duplicate802_11AttachAttributesCommon(
        unsigned __int16 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        size_t Size,
        UINT a7,
        size_t a8,
        _QWORD *a9)
{
  unsigned int v10; // r12d
  unsigned int v11; // r13d
  char v12; // al
  unsigned int v13; // r10d
  __int64 v14; // rcx
  UINT v15; // edi
  unsigned int v16; // ebx
  unsigned int v17; // r11d
  __int64 v18; // r14
  __int64 v19; // rcx
  unsigned int v20; // r11d
  unsigned int v21; // r11d
  __int64 v22; // rcx
  unsigned int v23; // r11d
  __int64 v24; // rcx
  unsigned int v25; // r11d
  __int64 v26; // rcx
  unsigned int v27; // r11d
  __int64 v28; // rcx
  unsigned int v29; // r11d
  __int64 v30; // rcx
  unsigned int v31; // r11d
  __int64 v32; // rdx
  __int64 v33; // r15
  int v34; // eax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int v39; // r11d
  unsigned int v40; // r11d
  __int64 v41; // rcx
  unsigned int v42; // r11d
  __int64 v43; // rcx
  unsigned int v44; // r11d
  __int64 v45; // r15
  int v46; // eax
  __int64 v47; // r10
  unsigned int v48; // r15d
  __int64 v49; // rcx
  __int64 v50; // rcx
  _DWORD *v51; // r15
  __int128 v52; // xmm0
  _QWORD *v53; // rax
  char *v54; // rcx
  _QWORD *v55; // rsi
  unsigned int v56; // ecx
  char *v57; // rax
  __int64 v58; // rdi
  char *v59; // rax
  char *v60; // rax
  unsigned int v61; // ecx
  __int64 v62; // rdi
  char *v63; // rax
  unsigned int v64; // ecx
  __int64 v65; // rdi
  char *v66; // rax
  unsigned int v67; // ecx
  __int64 v68; // rdi
  unsigned int v69; // ecx
  __int64 v70; // rdi
  unsigned int v71; // r13d
  __int64 v72; // rdx
  char v73; // al
  size_t v74; // rsi
  _BYTE *v75; // r14
  _BYTE *v76; // rdi
  unsigned int v77; // r12d
  __int64 v78; // r13
  __int64 v79; // r14
  _QWORD *v80; // rsi
  unsigned int v81; // ecx
  char *v82; // rax
  __int64 v83; // rdi
  char *v84; // rax
  unsigned int v85; // ecx
  __int64 v86; // rdi
  char *v87; // rax
  unsigned int v88; // ecx
  __int64 v89; // rdi
  __int64 v90; // rdx
  _QWORD *v91; // rsi
  unsigned int v92; // ecx
  char *v93; // rax
  __int64 v94; // rdi
  char *v95; // rax
  unsigned int v96; // ecx
  PVOID VirtualAddress; // [rsp+20h] [rbp-61h] BYREF
  size_t v98; // [rsp+28h] [rbp-59h] BYREF
  unsigned int v99; // [rsp+30h] [rbp-51h]
  size_t v100; // [rsp+34h] [rbp-4Dh] BYREF
  size_t v101; // [rsp+3Ch] [rbp-45h] BYREF
  size_t v102; // [rsp+44h] [rbp-3Dh] BYREF
  size_t v103; // [rsp+4Ch] [rbp-35h] BYREF
  _DWORD *v104; // [rsp+58h] [rbp-29h] BYREF
  __int64 v105; // [rsp+60h] [rbp-21h]
  __int64 v106; // [rsp+68h] [rbp-19h]
  __int64 v107; // [rsp+70h] [rbp-11h]
  unsigned int v109; // [rsp+D8h] [rbp+57h]
  unsigned int v110; // [rsp+E0h] [rbp+5Fh]
  unsigned int v111; // [rsp+E8h] [rbp+67h]

  a5 = 0;
  v10 = 0;
  v111 = 0;
  v11 = 0;
  LODWORD(Size) = 0;
  LODWORD(a8) = 0;
  v100 = 0LL;
  v98 = 0LL;
  v110 = 0;
  v101 = 0LL;
  v102 = 0LL;
  LODWORD(v104) = 0;
  v109 = 0;
  v103 = 0LL;
  v106 = 0LL;
  v107 = 0LL;
  v105 = 0LL;
  VirtualAddress = 0LL;
  if ( !a2 || !a9 || *(_BYTE *)a2 != 0xA1 )
    return (unsigned int)-1073741811;
  *a9 = 0LL;
  v12 = *((_BYTE *)a2 + 1);
  if ( v12 == 1 )
  {
    if ( *((_WORD *)a2 + 1) >= 0x28u )
    {
      v13 = 1;
      goto LABEL_13;
    }
    return (unsigned int)-1073741811;
  }
  if ( v12 == 2 )
  {
    if ( *((_WORD *)a2 + 1) >= 0x38u )
    {
      v13 = 2;
      goto LABEL_13;
    }
    return (unsigned int)-1073741811;
  }
  if ( v12 != 3 || *((_WORD *)a2 + 1) < 0x40u )
    return (unsigned int)-1073741811;
  v13 = 3;
LABEL_13:
  v14 = *((unsigned int *)a2 + 5);
  a7 = 64;
  v15 = 64;
  v99 = v13;
  if ( (_DWORD)v14 && *((_QWORD *)a2 + 3) )
  {
    v16 = PrivateULongMult(v14, 1092LL, &a5);
    if ( v16 )
      return v16;
    v10 = a5;
    v16 = PrivateULongAdd(v17, a5, &a7);
    if ( v16 )
      return v16;
    v15 = a7;
  }
  v18 = *((_QWORD *)a2 + 4);
  if ( v18 )
  {
    v19 = *(unsigned int *)(v18 + 48);
    v20 = 160;
    v111 = 160;
    a5 = 160;
    if ( (_DWORD)v19 && *(_QWORD *)(v18 + 56) )
    {
      v16 = PrivateULongMult(v19, 3LL, &Size);
      if ( v16 )
        return v16;
      v16 = PrivateULongAdd(v21, (unsigned int)Size, &a5);
      if ( v16 )
        return v16;
      v20 = a5;
      v111 = a5;
    }
    v22 = *(unsigned int *)(v18 + 64);
    if ( (_DWORD)v22 && *(_QWORD *)(v18 + 72) )
    {
      v16 = PrivateULongMult(v22, 8LL, (char *)&v103 + 4);
      if ( v16 )
        return v16;
      v11 = HIDWORD(v103);
      v16 = PrivateULongAdd(v23, HIDWORD(v103), &a5);
      if ( v16 )
        return v16;
      v20 = a5;
      v111 = a5;
    }
    v24 = *(unsigned int *)(v18 + 80);
    if ( (_DWORD)v24 && *(_QWORD *)(v18 + 88) )
    {
      v16 = PrivateULongMult(v24, 8LL, &a8);
      if ( v16 )
        return v16;
      v16 = PrivateULongAdd(v25, (unsigned int)a8, &a5);
      if ( v16 )
        return v16;
      v20 = a5;
      v111 = a5;
    }
    v26 = *(unsigned int *)(v18 + 96);
    if ( (_DWORD)v26 && *(_QWORD *)(v18 + 104) )
    {
      v16 = PrivateULongMult(v26, 8LL, &v98);
      if ( v16 )
        return v16;
      v16 = PrivateULongAdd(v27, (unsigned int)v98, &a5);
      if ( v16 )
        return v16;
      v20 = a5;
      v111 = a5;
    }
    v28 = *(unsigned int *)(v18 + 112);
    if ( (_DWORD)v28 && *(_QWORD *)(v18 + 120) )
    {
      v16 = PrivateULongMult(v28, 8LL, (char *)&v98 + 4);
      if ( v16 )
        return v16;
      v16 = PrivateULongAdd(v29, HIDWORD(v98), &a5);
      if ( v16 )
        return v16;
      v20 = a5;
      v111 = a5;
    }
    if ( v13 >= 3 )
    {
      v30 = *(unsigned int *)(v18 + 140);
      if ( (_DWORD)v30 )
      {
        if ( *(_QWORD *)(v18 + 144) && *(_BYTE *)(v18 + 1) >= 3u )
        {
          v16 = PrivateULongMult(v30, 8LL, &v100);
          if ( v16 )
            return v16;
          v16 = PrivateULongAdd(v31, (unsigned int)v100, &a5);
          if ( v16 )
            return v16;
          v20 = a5;
          v111 = a5;
        }
      }
    }
    v16 = PrivateULongAdd(v15, v20, &a7);
    if ( v16 )
      return v16;
    v15 = a7;
  }
  if ( v13 < 2 )
  {
LABEL_85:
    if ( v13 >= 3 )
    {
      v45 = *((_QWORD *)a2 + 7);
      v46 = *((_DWORD *)a2 + 1);
      v105 = v45;
      if ( (v46 & 0x70) != 0 )
      {
        if ( !v45 )
          return (unsigned int)-1073741811;
        v47 = v105;
        v48 = 72;
        v109 = 72;
        a5 = 72;
        v49 = *(unsigned int *)(v105 + 48);
        if ( (_DWORD)v49 && *(_QWORD *)(v105 + 56) )
        {
          v16 = PrivateULongMult(v49, 3LL, (char *)&v102 + 4);
          if ( v16 )
            return v16;
          v16 = PrivateULongAdd(72LL, HIDWORD(v102), &a5);
          if ( v16 )
            return v16;
          v48 = a5;
          v109 = a5;
        }
        v50 = *(unsigned int *)(v47 + 32);
        if ( (_DWORD)v50 && *(_QWORD *)(v47 + 40) )
        {
          v16 = PrivateULongMult(v50, 6LL, &v103);
          if ( v16 )
            return v16;
          v16 = PrivateULongAdd(v48, (unsigned int)v103, &a5);
          if ( v16 )
            return v16;
          v48 = a5;
          v109 = a5;
        }
        v16 = PrivateULongAdd(v15, v48, &a7);
        if ( v16 )
          return v16;
        v15 = a7;
      }
      else if ( v45 )
      {
        return (unsigned int)-1073741811;
      }
    }
    a5 = NdisAllocateMemoryWithTag(&VirtualAddress, v15, 0x6D61444Eu);
    v16 = a5;
    if ( a5 )
      return v16;
    memset(VirtualAddress, 0, v15);
    v51 = VirtualAddress;
    v52 = *a2;
    v53 = a9;
    v104 = VirtualAddress;
    *(_OWORD *)VirtualAddress = v52;
    *v53 = v51;
    v51[4] = *((_DWORD *)a2 + 4);
    VirtualAddress = (char *)VirtualAddress + 64;
    *v51 = 4195233;
    if ( v10 && *((_DWORD *)a2 + 5) )
    {
      *((_QWORD *)v51 + 3) = VirtualAddress;
      v51[5] = *((_DWORD *)a2 + 5);
      memmove(VirtualAddress, *((const void **)a2 + 3), v10);
      v54 = (char *)VirtualAddress + v10;
      VirtualAddress = v54;
    }
    else
    {
      *((_QWORD *)v51 + 3) = 0LL;
      v51[5] = 0;
      v54 = (char *)VirtualAddress;
    }
    if ( !v111 || !v18 )
      goto LABEL_138;
    *((_QWORD *)v51 + 4) = v54;
    v55 = VirtualAddress;
    *(_OWORD *)v54 = *(_OWORD *)v18;
    *((_OWORD *)v54 + 1) = *(_OWORD *)(v18 + 16);
    *((_OWORD *)v54 + 2) = *(_OWORD *)(v18 + 32);
    v56 = Size;
    v57 = (char *)VirtualAddress + 160;
    VirtualAddress = (char *)VirtualAddress + 160;
    if ( !(_DWORD)Size )
      goto LABEL_111;
    if ( *(_DWORD *)(v18 + 48) )
    {
      v55[7] = v57;
      v58 = v56;
      *((_DWORD *)v55 + 12) = *(_DWORD *)(v18 + 48);
      memmove(VirtualAddress, *(const void **)(v18 + 56), v56);
      v59 = (char *)VirtualAddress + v58;
      VirtualAddress = (char *)VirtualAddress + v58;
    }
    else
    {
LABEL_111:
      v55[7] = 0LL;
      *((_DWORD *)v55 + 12) = 0;
      v59 = (char *)VirtualAddress;
    }
    if ( v11 && *(_DWORD *)(v18 + 64) )
    {
      v55[9] = v59;
      *((_DWORD *)v55 + 16) = *(_DWORD *)(v18 + 64);
      memmove(VirtualAddress, *(const void **)(v18 + 72), v11);
      v60 = (char *)VirtualAddress + v11;
      VirtualAddress = v60;
    }
    else
    {
      v55[9] = 0LL;
      *((_DWORD *)v55 + 16) = 0;
      v60 = (char *)VirtualAddress;
    }
    v61 = a8;
    if ( (_DWORD)a8 && *(_DWORD *)(v18 + 80) )
    {
      v55[11] = v60;
      v62 = v61;
      *((_DWORD *)v55 + 20) = *(_DWORD *)(v18 + 80);
      memmove(VirtualAddress, *(const void **)(v18 + 88), v61);
      v63 = (char *)VirtualAddress + v62;
      VirtualAddress = (char *)VirtualAddress + v62;
    }
    else
    {
      v55[11] = 0LL;
      *((_DWORD *)v55 + 20) = 0;
      v63 = (char *)VirtualAddress;
    }
    v64 = v98;
    if ( (_DWORD)v98 && *(_DWORD *)(v18 + 96) )
    {
      v55[13] = v63;
      v65 = v64;
      *((_DWORD *)v55 + 24) = *(_DWORD *)(v18 + 96);
      memmove(VirtualAddress, *(const void **)(v18 + 104), v64);
      v66 = (char *)VirtualAddress + v65;
      VirtualAddress = (char *)VirtualAddress + v65;
    }
    else
    {
      v55[13] = 0LL;
      *((_DWORD *)v55 + 24) = 0;
      v66 = (char *)VirtualAddress;
    }
    v67 = HIDWORD(v98);
    if ( HIDWORD(v98) && *(_DWORD *)(v18 + 112) )
    {
      v55[15] = v66;
      v68 = v67;
      *((_DWORD *)v55 + 28) = *(_DWORD *)(v18 + 112);
      memmove(VirtualAddress, *(const void **)(v18 + 120), v67);
      v54 = (char *)VirtualAddress + v68;
      VirtualAddress = (char *)VirtualAddress + v68;
    }
    else
    {
      v55[15] = 0LL;
      *((_DWORD *)v55 + 28) = 0;
      v54 = (char *)VirtualAddress;
    }
    if ( v99 < 3 )
      goto LABEL_138;
    *(_BYTE *)(*((_QWORD *)v51 + 4) + 128LL) = *(_BYTE *)(v18 + 128);
    *(_DWORD *)(*((_QWORD *)v51 + 4) + 132LL) = *(_DWORD *)(v18 + 132);
    *(_BYTE *)(*((_QWORD *)v51 + 4) + 136LL) = *(_BYTE *)(v18 + 136);
    if ( *(_DWORD *)(v18 + 140) && *(_QWORD *)(v18 + 144) && *(_BYTE *)(v18 + 1) >= 3u )
    {
      v69 = v100;
      if ( (_DWORD)v100 )
      {
        v70 = (unsigned int)v100;
        v55[18] = VirtualAddress;
        *((_DWORD *)v55 + 35) = *(_DWORD *)(v18 + 140);
        memmove(VirtualAddress, *(const void **)(v18 + 144), v69);
        v54 = (char *)VirtualAddress + v70;
        VirtualAddress = (char *)VirtualAddress + v70;
        goto LABEL_136;
      }
      v55[18] = 0LL;
      *((_DWORD *)v55 + 35) = 0;
    }
    v54 = (char *)VirtualAddress;
LABEL_136:
    if ( *(_BYTE *)(v18 + 1) >= 4u )
    {
      *(_BYTE *)(*((_QWORD *)v51 + 4) + 152LL) = *(_BYTE *)(v18 + 152);
      *(_BYTE *)(*((_QWORD *)v51 + 4) + 153LL) = *(_BYTE *)(v18 + 153);
      *(_BYTE *)(*((_QWORD *)v51 + 4) + 154LL) = *(_BYTE *)(v18 + 154);
      *(_BYTE *)(*((_QWORD *)v51 + 4) + 155LL) = *(_BYTE *)(v18 + 155);
      *(_BYTE *)(*((_QWORD *)v51 + 4) + 156LL) = *(_BYTE *)(v18 + 156);
      v54 = (char *)VirtualAddress;
    }
LABEL_138:
    v71 = HIDWORD(v100);
    if ( HIDWORD(v100) )
    {
      v72 = v106;
      if ( v106 )
      {
        *((_QWORD *)v51 + 5) = v54;
        *(_QWORD *)v54 = *(_QWORD *)v72;
        if ( *(_DWORD *)(v72 + 4) )
        {
          v73 = *(_BYTE *)(v72 + 9);
          if ( v73 == 3 )
          {
            v74 = 24LL;
          }
          else if ( v73 == 2 )
          {
            v74 = 20LL;
          }
          else
          {
            v74 = 0LL;
            if ( v73 == 1 )
              v74 = 16LL;
          }
          v75 = (_BYTE *)(v72 + 8);
          v76 = (_BYTE *)(*((_QWORD *)v51 + 5) + 8LL);
          v77 = 0;
          v78 = v72;
          do
          {
            memmove(v76, v75, v74);
            if ( a1 >= 0x61Eu )
              *((_DWORD *)v76 + 4) = 0;
            ++v77;
            *v76 = *v75;
            v75 += v74;
            v76[1] = 3;
            *((_WORD *)v76 + 1) = 24;
            v76 += 24;
          }
          while ( v77 < *(_DWORD *)(v78 + 4) );
          v16 = a5;
          v51 = v104;
          v71 = HIDWORD(v100);
        }
        v54 = (char *)VirtualAddress + v71;
        VirtualAddress = v54;
      }
    }
    if ( v110 )
    {
      v79 = v107;
      if ( v107 )
      {
        *((_QWORD *)v51 + 6) = v54;
        v80 = VirtualAddress;
        *(_OWORD *)v54 = *(_OWORD *)v79;
        *((_OWORD *)v54 + 1) = *(_OWORD *)(v79 + 16);
        v81 = v101;
        v82 = (char *)VirtualAddress + 80;
        VirtualAddress = (char *)VirtualAddress + 80;
        if ( (_DWORD)v101 && *(_DWORD *)(v79 + 32) )
        {
          v80[5] = v82;
          v83 = v81;
          *((_DWORD *)v80 + 8) = *(_DWORD *)(v79 + 32);
          memmove(VirtualAddress, *(const void **)(v79 + 40), v81);
          v84 = (char *)VirtualAddress + v83;
          VirtualAddress = (char *)VirtualAddress + v83;
        }
        else
        {
          v80[5] = 0LL;
          *((_DWORD *)v80 + 8) = 0;
          v84 = (char *)VirtualAddress;
        }
        v85 = HIDWORD(v101);
        if ( HIDWORD(v101) && *(_DWORD *)(v79 + 48) )
        {
          v80[7] = v84;
          v86 = v85;
          *((_DWORD *)v80 + 12) = *(_DWORD *)(v79 + 48);
          memmove(VirtualAddress, *(const void **)(v79 + 56), v85);
          v87 = (char *)VirtualAddress + v86;
          VirtualAddress = (char *)VirtualAddress + v86;
        }
        else
        {
          v80[7] = 0LL;
          *((_DWORD *)v80 + 12) = 0;
          v87 = (char *)VirtualAddress;
        }
        v88 = v102;
        if ( (_DWORD)v102 && *(_DWORD *)(v79 + 64) )
        {
          v80[9] = v87;
          v89 = v88;
          *((_DWORD *)v80 + 16) = *(_DWORD *)(v79 + 64);
          memmove(VirtualAddress, *(const void **)(v79 + 72), v88);
          v54 = (char *)VirtualAddress + v89;
          VirtualAddress = (char *)VirtualAddress + v89;
        }
        else
        {
          v80[9] = 0LL;
          *((_DWORD *)v80 + 16) = 0;
          v54 = (char *)VirtualAddress;
        }
      }
    }
    if ( v109 )
    {
      v90 = v105;
      if ( v105 )
      {
        *((_QWORD *)v51 + 7) = v54;
        v91 = VirtualAddress;
        *(_OWORD *)v54 = *(_OWORD *)v90;
        *((_OWORD *)v54 + 1) = *(_OWORD *)(v90 + 16);
        *((_OWORD *)v54 + 2) = *(_OWORD *)(v90 + 32);
        *((_OWORD *)v54 + 3) = *(_OWORD *)(v90 + 48);
        *((_QWORD *)v54 + 8) = *(_QWORD *)(v90 + 64);
        v92 = HIDWORD(v102);
        v93 = (char *)VirtualAddress + 72;
        VirtualAddress = (char *)VirtualAddress + 72;
        if ( HIDWORD(v102) && *(_DWORD *)(v90 + 48) )
        {
          v91[7] = v93;
          v94 = v92;
          *((_DWORD *)v91 + 12) = *(_DWORD *)(v90 + 48);
          memmove(VirtualAddress, *(const void **)(v90 + 56), v92);
          v90 = v105;
          v95 = (char *)VirtualAddress + v94;
          VirtualAddress = (char *)VirtualAddress + v94;
        }
        else
        {
          v91[7] = 0LL;
          *((_DWORD *)v91 + 12) = 0;
          v95 = (char *)VirtualAddress;
        }
        v96 = v103;
        if ( (_DWORD)v103 && *(_DWORD *)(v90 + 32) )
        {
          v91[5] = v95;
          *((_DWORD *)v91 + 8) = *(_DWORD *)(v90 + 32);
          memmove(VirtualAddress, *(const void **)(v90 + 40), v96);
        }
        else
        {
          v91[5] = 0LL;
          *((_DWORD *)v91 + 8) = 0;
        }
      }
    }
    return v16;
  }
  v32 = *((_QWORD *)a2 + 5);
  v33 = *((_QWORD *)a2 + 6);
  v34 = *((_DWORD *)a2 + 1);
  v106 = v32;
  v107 = v33;
  if ( (v34 & 0x28) != 0 )
  {
    if ( !v33 )
      return (unsigned int)-1073741811;
  }
  else if ( v33 )
  {
    return (unsigned int)-1073741811;
  }
  if ( !v32 )
  {
LABEL_67:
    if ( v33 )
    {
      v38 = *(unsigned int *)(v33 + 32);
      v39 = 80;
      v110 = 80;
      a5 = 80;
      if ( (_DWORD)v38 && *(_QWORD *)(v33 + 40) )
      {
        v16 = PrivateULongMult(v38, 3LL, &v101);
        if ( v16 )
          return v16;
        v16 = PrivateULongAdd(v40, (unsigned int)v101, &a5);
        if ( v16 )
          return v16;
        v39 = a5;
        v110 = a5;
      }
      v41 = *(unsigned int *)(v33 + 48);
      if ( (_DWORD)v41 && *(_QWORD *)(v33 + 56) )
      {
        v16 = PrivateULongMult(v41, 8LL, (char *)&v101 + 4);
        if ( v16 )
          return v16;
        v16 = PrivateULongAdd(v42, HIDWORD(v101), &a5);
        if ( v16 )
          return v16;
        v39 = a5;
        v110 = a5;
      }
      v43 = *(unsigned int *)(v33 + 64);
      if ( (_DWORD)v43 && *(_QWORD *)(v33 + 72) )
      {
        v16 = PrivateULongMult(v43, 8LL, &v102);
        if ( v16 )
          return v16;
        v16 = PrivateULongAdd(v44, (unsigned int)v102, &a5);
        if ( v16 )
          return v16;
        v39 = a5;
        v110 = a5;
      }
      v16 = PrivateULongAdd(v15, v39, &a7);
      if ( v16 )
        return v16;
      v15 = a7;
    }
    goto LABEL_85;
  }
  v36 = *(unsigned int *)(v32 + 4);
  a5 = 8;
  if ( (_DWORD)v36 )
  {
    v16 = PrivateULongMult(v36, 24LL, &v104);
    if ( v16 )
      return v16;
    v37 = (unsigned int)v104;
  }
  else
  {
    v37 = 16LL;
  }
  v16 = PrivateULongAdd(8LL, v37, &a5);
  if ( !v16 )
  {
    HIDWORD(v100) = a5;
    v16 = PrivateULongAdd(v15, a5, &a7);
    if ( !v16 )
    {
      v15 = a7;
      goto LABEL_67;
    }
  }
  return v16;
}
