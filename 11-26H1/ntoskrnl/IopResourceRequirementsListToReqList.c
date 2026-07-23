/*
 * XREFs of IopResourceRequirementsListToReqList @ 0x140B09240
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1405DD704 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopAllocateBootResourcesInternal @ 0x1407A8B3C (IopAllocateBootResourcesInternal.c)
 *     PnpRestoreResourcesInternal @ 0x1407B65FC (PnpRestoreResourcesInternal.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140AA0544 (PnpGetResourceRequirementsForAssignTable.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopFreeReqAlternative @ 0x1407787F4 (IopFreeReqAlternative.c)
 *     IopFreeReqList @ 0x1407A57BC (IopFreeReqList.c)
 *     IopSetupArbiterAndTranslators @ 0x140B09784 (IopSetupArbiterAndTranslators.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopResourceRequirementsListToReqList(__int64 a1, _QWORD *a2)
{
  unsigned int *v2; // rax
  unsigned int v3; // edi
  unsigned int *v4; // r13
  int v5; // r8d
  unsigned int *v6; // rbx
  unsigned int *v7; // rdx
  int v8; // esi
  _DWORD *v9; // r15
  __int64 v10; // rax
  unsigned int v11; // r14d
  __int64 v12; // r12
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned __int64 v20; // rsi
  unsigned int v21; // ebx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // ebp
  _QWORD *Pool2; // rax
  _QWORD *v26; // rdi
  __int64 *v27; // rbx
  int v28; // esi
  int v29; // eax
  int v30; // r14d
  int v31; // r12d
  __int64 v32; // rbp
  int *v33; // rcx
  unsigned int *v34; // rbx
  __int64 v35; // r13
  _QWORD *v36; // rdx
  int v37; // eax
  char *v38; // r10
  _QWORD *v39; // r8
  int v40; // r9d
  char *v41; // rcx
  char v42; // al
  bool v43; // zf
  char v44; // al
  _BYTE *v45; // r8
  int v46; // r8d
  int v47; // esi
  unsigned int v48; // esi
  int v49; // eax
  unsigned int *v50; // rcx
  unsigned int *v51; // r14
  char v52; // r11
  int v53; // ebp
  char v54; // r9
  int v55; // eax
  unsigned int v56; // [rsp+20h] [rbp-88h]
  int v57; // [rsp+24h] [rbp-84h]
  _DWORD *v58; // [rsp+28h] [rbp-80h]
  int v59; // [rsp+28h] [rbp-80h]
  __int64 v60; // [rsp+30h] [rbp-78h]
  __int64 *v61; // [rsp+38h] [rbp-70h]
  int v62; // [rsp+40h] [rbp-68h]
  char *v63; // [rsp+48h] [rbp-60h]
  _QWORD *v64; // [rsp+50h] [rbp-58h]
  __int64 *v65; // [rsp+58h] [rbp-50h]
  int v68; // [rsp+C0h] [rbp+18h]
  int v69; // [rsp+C8h] [rbp+20h]

  *a2 = 0LL;
  v2 = *(unsigned int **)(a1 + 24);
  v68 = 0;
  v58 = v2;
  v3 = v2[7];
  if ( !v3 )
    return 0LL;
  v4 = v2 + 8;
  v5 = 0;
  v6 = (unsigned int *)((char *)v2 + *v2);
  v7 = v2 + 8;
  v8 = 0;
  while ( (--v3 & 0x80000000) == 0 )
  {
    v50 = v7 + 2;
    v7 += 8 * v7[1] + 2;
    if ( v50 == v7 )
      return 0LL;
    if ( v50 > v7 || v50 > v6 || v7 > v6 )
      return 3221225485LL;
    if ( *((_BYTE *)v50 + 1) == 0x80 )
      v50 += 8;
    v51 = v50;
LABEL_72:
    v52 = 1;
    while ( 1 )
    {
      v53 = v5;
      if ( v50 >= v7 )
        break;
      v54 = *((_BYTE *)v50 + 1);
      if ( (unsigned __int8)v54 == 128 )
        return 3221225485LL;
      if ( *((unsigned __int8 *)v50 + 1) == 129 )
      {
        while ( v50 < v7 && *((_BYTE *)v50 + 1) == 0x81 )
        {
          if ( v50 == v51 )
            return 3221225485LL;
          ++v5;
          v50 += 8;
        }
        goto LABEL_72;
      }
      v55 = ++v5;
      if ( v54 <= 0 )
      {
        *(_BYTE *)v50 = 1;
        v5 = v53;
        v50 += 8;
        if ( v54 != -16 )
          v5 = v55;
        goto LABEL_72;
      }
      if ( (*(_BYTE *)v50 & 8) != 0 )
      {
        if ( v52 )
          return 3221225485LL;
        ++v8;
      }
      else
      {
        v52 = 0;
      }
      v50 += 8;
    }
  }
  v9 = v58;
  v10 = (unsigned int)(v5 - v8);
  v11 = 296 * v10;
  v12 = (unsigned int)v58[7];
  v57 = -1073741823;
  if ( (unsigned __int64)(296 * v10) > 0xFFFFFFFF )
    return 2147483653LL;
  if ( (unsigned int)v10 <= 1 )
  {
    v14 = 0;
    v15 = 32;
    v16 = 32;
  }
  else
  {
    v13 = 8LL * (unsigned int)(v10 - 1);
    if ( v13 > 0xFFFFFFFF )
      return 2147483653LL;
    v14 = 8 * (v10 - 1);
    v15 = v13 + 32;
    v16 = v14 + 32;
    if ( v14 + 32 < v14 )
      return 2147483653LL;
  }
  if ( v16 < v14 )
    return 2147483653LL;
  v20 = v12 * v15;
  if ( v20 > 0xFFFFFFFF )
    return 2147483653LL;
  if ( (unsigned int)v12 > 1 )
  {
    v17 = 8LL * (unsigned int)(v12 - 1);
    if ( v17 > 0xFFFFFFFF )
      return 2147483653LL;
    v18 = 8 * (v12 - 1);
    v21 = v17 + 48;
    v22 = v17 + 48;
    if ( v18 + 48 < v18 )
      return 2147483653LL;
  }
  else
  {
    v18 = 0;
    v21 = 48;
    v22 = 48;
  }
  if ( v22 < v18 )
    return 2147483653LL;
  v23 = v20 + v21;
  if ( (unsigned int)v20 + v21 < v21 || v23 + v11 < v23 )
    return 2147483653LL;
  v24 = v23 + v11;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  v26 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset_0(Pool2, 0, v24);
  v60 = (__int64)v26 + v21;
  v63 = (char *)((unsigned int)v20 + v60);
  memset_0((void *)v60, 0, (unsigned int)v20);
  memset_0(v63, 0, v11);
  v27 = v26 + 5;
  v61 = v26 + 5;
  v28 = v58[1];
  v29 = v58[2];
  if ( v28 == -1 )
    v28 = 1;
  v56 = v58[2];
  v26[1] = a1;
  v69 = v28;
  *((_DWORD *)v26 + 8) = v12;
  *((_DWORD *)v26 + 1) = v29;
  *(_DWORD *)v26 = v28;
  v26[2] = 0LL;
  memset_0(v26 + 5, 0, 8 * v12);
  v30 = 0;
  v31 = v12 - 1;
  if ( v31 < 0 )
    goto LABEL_51;
  do
  {
    v32 = v60;
    v65 = v27;
    v33 = (int *)v60;
    v34 = v4 + 2;
    v59 = v30;
    v35 = v4[1];
    v36 = (_QWORD *)(v60 + 24);
    *v61 = v60;
    *(_DWORD *)(v60 + 16) = v30;
    v4 = &v34[8 * v35];
    ++v30;
    *(_QWORD *)(v60 + 8) = v26;
    *(_DWORD *)(v60 + 20) = 0;
    v60 += 24LL;
    ++v61;
    if ( *((_BYTE *)v34 + 1) == 0x80 )
    {
      v37 = v34[2];
      v34 += 8;
    }
    else
    {
      v37 = 12288;
    }
    v38 = v63;
    v39 = v36;
    *v33 = v37;
    v40 = 0;
    while ( 1 )
    {
      if ( v34 >= v4 )
      {
LABEL_41:
        v27 = v61;
        goto LABEL_42;
      }
      if ( *((_BYTE *)v34 + 1) == 0xF0 )
      {
        v28 = v34[2];
        if ( v28 == -1 )
          v28 = 1;
        v69 = v28;
        v56 = v34[3];
        goto LABEL_57;
      }
      ++*(_DWORD *)(v32 + 20);
      v41 = v38;
      v38 += 296;
      *v39 = v41;
      v64 = v39 + 1;
      *((_DWORD *)v41 + 6) = v40++;
      *((_QWORD *)v41 + 2) = v32;
      *((_QWORD *)v41 + 4) = v41;
      *((_DWORD *)v41 + 69) = 0;
      *((_QWORD *)v41 + 35) = 0LL;
      *(_DWORD *)v41 = v28;
      *((_DWORD *)v41 + 1) = v56;
      v42 = *((_BYTE *)v34 + 1);
      v63 = v38;
      v62 = v40;
      v43 = v42 == 0;
      if ( v42 < 0 || (v44 = 1, v43) )
        v44 = 0;
      v41[8] = v44;
      v60 = (__int64)(v36 + 1);
      *((_QWORD *)v41 + 6) = v41 + 40;
      *((_QWORD *)v41 + 5) = v41 + 40;
      *((_DWORD *)v41 + 14) = 0;
      *((_QWORD *)v41 + 8) = v34;
      *((_QWORD *)v41 + 9) = *(_QWORD *)a1;
      v45 = v41 + 136;
      *((_DWORD *)v41 + 20) = *(_DWORD *)(a1 + 12);
      *((_QWORD *)v41 + 11) = 0LL;
      *((_DWORD *)v41 + 24) = v28;
      *((_DWORD *)v41 + 25) = v9[3];
      *((_DWORD *)v41 + 26) = v9[2];
      *((_QWORD *)v41 + 14) = v41 + 136;
      *((_DWORD *)v41 + 32) = -1;
      *((_DWORD *)v41 + 21) = 0;
      if ( !v41[8] )
      {
        ++v36;
        *v45 = *((_BYTE *)v34 + 1);
        v39 = v64;
        v41[137] = *((_BYTE *)v34 + 2);
        *((_WORD *)v41 + 69) = *((_WORD *)v34 + 2);
        *((_DWORD *)v41 + 35) = v34[2];
        *((_DWORD *)v41 + 36) = v34[3];
        *((_DWORD *)v41 + 37) = v34[4];
        v49 = v68;
        if ( *((_BYTE *)v34 + 1) == 0x84 )
          v49 = 1;
        v68 = v49;
LABEL_57:
        v34 += 8;
        goto LABEL_40;
      }
      *v45 = 8;
      ++*((_DWORD *)v41 + 14);
      v34 += 8;
      v46 = *((_DWORD *)v41 + 14) + 1;
      v68 = 1;
      while ( v34 < v4 )
      {
        if ( *((_BYTE *)v34 + 1) == 0x81 )
        {
          *((_QWORD *)v41 + 35) = v34;
          do
          {
            if ( *((_BYTE *)v34 + 1) != 0x81 )
              break;
            ++*((_DWORD *)v41 + 69);
            v34 += 8;
          }
          while ( v34 < v4 );
          break;
        }
        if ( (*(_BYTE *)v34 & 8) == 0 )
          break;
        v34 += 8;
        *((_DWORD *)v41 + 14) = v46++;
      }
      v47 = IopSetupArbiterAndTranslators();
      if ( v47 < 0 )
        break;
      v28 = v69;
      v36 = (_QWORD *)v60;
      v39 = v64;
      v40 = v62;
      v38 = v63;
LABEL_40:
      if ( v34 >= v4 )
        goto LABEL_41;
    }
    v27 = v65;
    --*((_DWORD *)v26 + 8);
    v30 = v59;
    v61 = v65;
    IopFreeReqAlternative(v32);
    v57 = v47;
LABEL_42:
    v28 = v69;
    --v31;
  }
  while ( v31 >= 0 );
  if ( !v30 )
  {
LABEL_51:
    v48 = v57;
    IopFreeReqList(v26);
    return v48;
  }
  v48 = 0;
  if ( v68 )
    *a2 = v26;
  else
    IopFreeReqList(v26);
  return v48;
}
