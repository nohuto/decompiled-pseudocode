/*
 * XREFs of FsepPropagateGovernedFeatureEffectiveState @ 0x1408AB298
 * Callers:
 *     FseInitializeGovernedFeaturesEffectiveStates @ 0x1408AB1E8 (FseInitializeGovernedFeaturesEffectiveStates.c)
 * Callees:
 *     AllocateZeroMemory @ 0x14072300C (AllocateZeroMemory.c)
 *     SafeFree @ 0x140723068 (SafeFree.c)
 */

__int64 __fastcall FsepPropagateGovernedFeatureEffectiveState(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  size_t v6; // rdx
  int v8; // r14d
  int v9; // r10d
  __int64 v10; // r13
  _QWORD *v11; // r15
  __int64 v12; // r11
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  int v15; // ebx
  unsigned __int64 v16; // r9
  unsigned int v17; // edx
  unsigned int v18; // r12d
  int v19; // r9d
  int v20; // eax
  __int16 v21; // dx
  __int64 v22; // r10
  unsigned int v23; // ecx
  unsigned int v24; // eax
  int v25; // ecx
  unsigned int v26; // r11d
  unsigned int v27; // eax
  unsigned __int64 v28; // rax
  unsigned int v29; // esi
  __int64 v31; // [rsp+20h] [rbp-60h]
  unsigned __int64 v32; // [rsp+20h] [rbp-60h]
  __int64 v33; // [rsp+28h] [rbp-58h]
  _QWORD *v34; // [rsp+38h] [rbp-48h] BYREF
  int v35; // [rsp+40h] [rbp-40h]
  int v36; // [rsp+44h] [rbp-3Ch]
  unsigned int v37; // [rsp+48h] [rbp-38h]
  unsigned __int64 v38; // [rsp+50h] [rbp-30h]
  __int128 v39; // [rsp+58h] [rbp-28h]
  __int128 v40; // [rsp+68h] [rbp-18h]
  int v41; // [rsp+D8h] [rbp+58h]

  v6 = 8LL * (unsigned __int16)*(_DWORD *)a4;
  v34 = 0LL;
  v8 = AllocateZeroMemory(&v34, v6);
  if ( v8 >= 0 )
  {
    v9 = *(_DWORD *)(a4 + 4);
    v10 = a4 + *(_QWORD *)(a4 + 8);
    v11 = v34;
    v12 = a4 + *(_QWORD *)(a4 + 16);
    HIDWORD(v31) = (unsigned __int16)v9;
    LODWORD(v31) = a2;
    v37 = (unsigned __int16)v9;
    *v34 = v31;
    LODWORD(v13) = 1;
    v33 = v12;
    v41 = v9;
    v36 = 1;
    v35 = 2;
    while ( 1 )
    {
      v13 = (unsigned int)(v13 - 1);
      v14 = v11[v13];
      v15 = (unsigned __int16)v14;
      v32 = v14;
      v39 = *(_OWORD *)(v10 + 16LL * (unsigned __int16)v14);
      v40 = *(_OWORD *)(v10 + 16LL * ((unsigned int)(unsigned __int16)v14 + 1));
      if ( (int)v14 >> 16 )
        break;
      if ( WORD2(v39) != WORD2(v40) )
      {
        LODWORD(v32) = (unsigned __int16)v14 | 0x10000;
        v11[v13] = v32;
        LODWORD(v13) = v13 + 1;
      }
LABEL_43:
      if ( !(_DWORD)v13 )
        goto LABEL_54;
    }
    if ( (int)v14 >> 16 == 1 )
    {
      v16 = HIDWORD(v14);
      if ( (unsigned __int16)v16 == v9 )
        v17 = v16 ^ (unsigned __int16)(v16 ^ WORD2(v39));
      else
        v17 = HIDWORD(v32) & 0xFFFF0000 | (unsigned __int16)(WORD2(v32) + 1);
      while ( 1 )
      {
        HIDWORD(v32) = v17;
        if ( (unsigned __int16)v17 >= (unsigned int)WORD2(v40) )
          goto LABEL_43;
        if ( (unsigned __int16)(*(_WORD *)(v12 + 4LL * (unsigned __int16)v17 + 2) - 1) <= 1u )
          break;
        v17 ^= (unsigned __int16)(v17 ^ (v17 + 1));
      }
      if ( (unsigned __int16)v17 >= (unsigned int)WORD2(v40) )
        goto LABEL_43;
      v18 = HIDWORD(v39);
      v11[v13] = v32;
      v13 = (unsigned int)(v13 + 1);
      v19 = (v18 >> 1) & 3;
      v20 = *(_DWORD *)(v12 + 4LL * (unsigned __int16)v17);
      v21 = *(_WORD *)(v12 + 4LL * (unsigned __int16)v17 + 2);
      v22 = (unsigned __int16)v20;
      v23 = *(_DWORD *)(v10 + 16LL * (unsigned __int16)v20 + 12);
      if ( (v23 & 1) != 0 || (v24 = *(_DWORD *)(a1 + 4LL * (unsigned __int16)v20), (v24 & 1) == 0) )
        v24 = (16 * (v23 & 0xFFFFFFFE)) | (v23 >> 2) & 0x1E;
      v25 = v24 & 0x60;
      v26 = (v18 >> 3) & 0xF;
      if ( v19 == 2 )
      {
        if ( v26 == 15 )
          v26 = 0;
      }
      else if ( !v19 )
      {
        goto LABEL_42;
      }
      v27 = (v24 >> 1) & 0xF;
      if ( v26 <= v27 )
      {
        if ( v26 != v27 )
        {
          if ( v21 != 2 || v19 != 1 || v25 == 32 )
            goto LABEL_42;
          goto LABEL_48;
        }
        if ( v21 != (_WORD)v36 )
        {
          if ( v21 != 2 || v19 != 1 )
            goto LABEL_42;
          goto LABEL_48;
        }
        if ( v19 == 2 )
        {
          if ( v25 == 32 && !v27 )
            goto LABEL_38;
        }
        else if ( v19 == 1 && v25 != 32 )
        {
          goto LABEL_49;
        }
        if ( (*(_DWORD *)(a1 + 4 * v22) & 0x60) != 0 && (*(_DWORD *)(a1 + 4 * v22) & 1) != 0 )
          goto LABEL_42;
      }
      else
      {
        if ( (v21 != 2 || v19 != 1) && v21 != 1 )
          goto LABEL_42;
        if ( v21 == (_WORD)v35 )
        {
          if ( v19 == 1 )
LABEL_48:
            *(_DWORD *)(a1 + 4 * v22) |= 0x100u;
LABEL_49:
          v38 = __PAIR64__(v37, (unsigned int)v22 | 0x10000);
          v28 = __PAIR64__(v37, (unsigned int)v22 | 0x10000);
          v29 = (v15 << 7) | (((8 * v26) | (*(_DWORD *)(v10 + 16 * v22 + 12) & 0xFFFFFFFE ^ 1) & 0xFFFFFF81) ^ (2 * ((v18 >> 1) & 3))) & 0xFF80007F;
          *(_DWORD *)(v10 + 16 * v22 + 12) = v29 ^ (v29 ^ v18 & 0xFF800000) & 0x800000;
          v11[v13] = v28;
          LODWORD(v13) = v13 + 1;
LABEL_42:
          v12 = v33;
          v9 = v41;
          goto LABEL_43;
        }
        if ( v21 != 1 )
          goto LABEL_49;
      }
      if ( v19 != 2 )
        goto LABEL_49;
LABEL_38:
      if ( (*(_DWORD *)(a1 + 4 * v22) & 0x100) != 0 )
        goto LABEL_42;
      goto LABEL_49;
    }
    v8 = -1073741811;
  }
LABEL_54:
  SafeFree((void **)&v34);
  return (unsigned int)v8;
}
