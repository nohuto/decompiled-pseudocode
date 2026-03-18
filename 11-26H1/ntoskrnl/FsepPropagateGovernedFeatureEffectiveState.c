/*
 * XREFs of FsepPropagateGovernedFeatureEffectiveState @ 0x1408A4E88
 * Callers:
 *     FseInitializeGovernedFeaturesEffectiveStates @ 0x1408A4DD8 (FseInitializeGovernedFeaturesEffectiveStates.c)
 * Callees:
 *     AllocateZeroMemory @ 0x14071E37C (AllocateZeroMemory.c)
 *     SafeFree @ 0x14071E3D8 (SafeFree.c)
 */

__int64 __fastcall FsepPropagateGovernedFeatureEffectiveState(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  size_t v6; // rdx
  int v7; // esi
  int v8; // r10d
  __int64 v9; // r12
  _QWORD *v10; // r14
  __int64 v11; // r13
  __int64 v12; // r9
  unsigned __int64 v13; // r8
  int v14; // r11d
  unsigned __int64 v15; // r8
  unsigned int v16; // edx
  unsigned int v17; // r15d
  int v18; // r8d
  __int16 v19; // r10
  __int64 v20; // rdi
  unsigned int v21; // ecx
  unsigned int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // edx
  bool v26; // zf
  bool v27; // r10
  BOOL v28; // eax
  unsigned int v29; // ebx
  __int64 v31; // [rsp+20h] [rbp-40h]
  unsigned __int64 v32; // [rsp+20h] [rbp-40h]
  _QWORD *v33; // [rsp+38h] [rbp-28h] BYREF
  __int128 v34; // [rsp+40h] [rbp-20h]
  __int128 v35; // [rsp+50h] [rbp-10h]
  int v37; // [rsp+B0h] [rbp+50h]
  unsigned int v38; // [rsp+B8h] [rbp+58h]

  v6 = 8LL * (unsigned __int16)*(_DWORD *)a4;
  v33 = 0LL;
  v7 = AllocateZeroMemory(&v33, v6);
  if ( v7 >= 0 )
  {
    v8 = *(_DWORD *)(a4 + 4);
    v9 = a4 + *(_QWORD *)(a4 + 8);
    v10 = v33;
    v11 = a4 + *(_QWORD *)(a4 + 16);
    HIDWORD(v31) = (unsigned __int16)v8;
    LODWORD(v31) = a2;
    v38 = (unsigned __int16)v8;
    *v33 = v31;
    LODWORD(v12) = 1;
    v37 = v8;
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_6:
        if ( !(_DWORD)v12 )
          goto LABEL_47;
        v12 = (unsigned int)(v12 - 1);
        v13 = v10[v12];
        v14 = (unsigned __int16)v13;
        v32 = v13;
        v34 = *(_OWORD *)(v9 + 16LL * (unsigned __int16)v13);
        v35 = *(_OWORD *)(v9 + 16LL * ((unsigned int)(unsigned __int16)v13 + 1));
        if ( (int)v13 >> 16 )
          break;
        if ( WORD2(v34) != WORD2(v35) )
        {
          LODWORD(v32) = (unsigned __int16)v13 | 0x10000;
          v10[v12] = v32;
          LODWORD(v12) = v12 + 1;
        }
      }
      if ( (int)v13 >> 16 != 1 )
        break;
      v15 = HIDWORD(v13);
      if ( (unsigned __int16)v15 == v8 )
        v16 = v15 ^ (unsigned __int16)(v15 ^ WORD2(v34));
      else
        v16 = HIDWORD(v32) & 0xFFFF0000 | (unsigned __int16)(WORD2(v32) + 1);
      while ( 1 )
      {
        HIDWORD(v32) = v16;
        if ( (unsigned __int16)v16 >= (unsigned int)WORD2(v35) )
          goto LABEL_6;
        if ( (unsigned __int16)(*(_WORD *)(v11 + 4LL * (unsigned __int16)v16 + 2) - 1) <= 1u )
          break;
        v16 ^= (unsigned __int16)(v16 ^ (v16 + 1));
      }
      if ( (unsigned __int16)v16 >= (unsigned int)WORD2(v35) )
        goto LABEL_6;
      v17 = HIDWORD(v34);
      v10[v12] = v32;
      v12 = (unsigned int)(v12 + 1);
      v18 = (v17 >> 1) & 3;
      v19 = *(_WORD *)(v11 + 4LL * (unsigned __int16)v16 + 2);
      v20 = (unsigned __int16)*(_DWORD *)(v11 + 4LL * (unsigned __int16)v16);
      v21 = *(_DWORD *)(v9 + 16 * v20 + 12);
      if ( (v21 & 1) != 0 || (v22 = *(_DWORD *)(a1 + 4 * v20), (v22 & 1) == 0) )
        v22 = (16 * (v21 & 0xFFFFFFFE)) | (v21 >> 2) & 0x1E;
      v23 = v22 & 0x60;
      if ( !v18 )
      {
        v8 = v37;
        goto LABEL_6;
      }
      v24 = (v22 >> 1) & 0xF;
      v25 = (v17 >> 3) & 0xF;
      if ( v25 <= v24 )
      {
        if ( v25 == v24 )
        {
          if ( v19 == 1 )
          {
            if ( v18 == 2 )
            {
              if ( v23 == 32 && !v24 )
                goto LABEL_42;
LABEL_33:
              v27 = (*(_DWORD *)(a1 + 4 * v20) & 1) == 0 || (*(_DWORD *)(a1 + 4 * v20) & 0x60) == 0;
LABEL_37:
              if ( !v27 )
              {
                v8 = v37;
                goto LABEL_6;
              }
            }
            else
            {
              if ( v18 != 1 || v23 == 32 )
                goto LABEL_33;
LABEL_42:
              v27 = 1;
            }
            v28 = v27;
            v8 = v37;
            v29 = ((v28 | *(_DWORD *)(v9 + 16 * v20 + 12) & 0xFFFFFFFE) ^ ((v28 | *(_BYTE *)(v9 + 16 * v20 + 12) & 0xFE) ^ (unsigned __int8)(8 * (v17 >> 3))) & 0x78) & 0xFFFFFFF9 ^ (2 * ((v17 >> 1) & 3));
            *(_DWORD *)(v9 + 16 * v20 + 12) = ((v14 << 7) | v29 & 0xFF80007F) ^ (((v14 << 7) | v29 & 0xFF80007F) ^ v17 & 0xFF800000) & 0x800000;
            v10[v12] = __PAIR64__(v38, (unsigned int)v20 | 0x10000);
            LODWORD(v12) = v12 + 1;
            goto LABEL_6;
          }
          v26 = v19 == 2;
          v8 = v37;
          if ( v26 && v18 == 1 )
            goto LABEL_36;
        }
        else
        {
          v26 = v19 == 2;
          v8 = v37;
          if ( v26 && v18 == 1 && v23 != 32 )
            goto LABEL_42;
        }
      }
      else if ( v19 == 2 && v18 == 1 || (v26 = v19 == 1, v8 = v37, v26) )
      {
LABEL_36:
        v27 = 1;
        goto LABEL_37;
      }
    }
    v7 = -1073741811;
  }
LABEL_47:
  SafeFree((void **)&v33);
  return (unsigned int)v7;
}
