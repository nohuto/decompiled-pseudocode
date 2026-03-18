/*
 * XREFs of MiParseImageSectionHeaders @ 0x140A55708
 * Callers:
 *     MiBuildImageControlArea @ 0x140A551FC (MiBuildImageControlArea.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028B2D0 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x1404B5EF8 (MiMakeSubsectionPte.c)
 */

__int64 __fastcall MiParseImageSectionHeaders(__int64 a1, __int64 *a2, int a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v5; // r13
  int v7; // esi
  __int64 v8; // r15
  __int64 v10; // r11
  __int64 v11; // r9
  _QWORD *v12; // rbx
  unsigned int v13; // r10d
  unsigned int v14; // r8d
  unsigned int *v15; // r11
  unsigned int v16; // ebp
  int v17; // edx
  _QWORD *v18; // rax
  unsigned int v19; // edx
  int v20; // eax
  unsigned int v21; // r9d
  unsigned int v22; // r10d
  int v23; // r10d
  int v24; // r8d
  int v25; // edx
  unsigned int v26; // ecx
  __int64 v27; // rax
  char v28; // r15
  unsigned __int64 DemandZeroPte; // rax
  int v30; // r9d
  unsigned __int64 v31; // r10
  _DWORD *v32; // r11
  char v33; // r15
  unsigned int v34; // edx
  unsigned int v35; // r9d
  __int64 v36; // rcx
  _QWORD *v37; // r12
  unsigned int *v39; // rcx
  unsigned int v40; // edx
  unsigned int v41; // r8d
  unsigned int v42; // [rsp+24h] [rbp-74h]
  unsigned int v43; // [rsp+28h] [rbp-70h]
  __int64 v44; // [rsp+30h] [rbp-68h]
  __int64 v45; // [rsp+38h] [rbp-60h]
  __int64 v46; // [rsp+40h] [rbp-58h]
  __int64 v47; // [rsp+48h] [rbp-50h]
  char v49; // [rsp+A8h] [rbp+10h]
  int v50; // [rsp+B0h] [rbp+18h]
  unsigned int v51; // [rsp+B8h] [rbp+20h]

  v50 = a3;
  v4 = *a2;
  v5 = (__int64)(a2 + 16);
  v7 = a3;
  v8 = *(_QWORD *)(a1 + 144);
  v10 = *(_QWORD *)(a1 + 176);
  v11 = a1;
  v47 = v8;
  v45 = a2[17] + 8LL * *((unsigned int *)a2 + 43);
  *(_BYTE *)(*a2 + 14) = *(_BYTE *)(*a2 + 14) & 0xE0 | 7;
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
  {
    v39 = (unsigned int *)(v10 + 16);
    while ( v7 )
    {
      v40 = *(v39 - 2);
      if ( !v40 )
        v40 = *v39;
      v41 = v39[1];
      if ( v41 + *v39 < v41 )
      {
        *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 16;
        return 3221225595LL;
      }
      if ( v41 != *(v39 - 1) || v40 > *v39 )
      {
        *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 17;
        return 3221225595LL;
      }
      v39 += 10;
      --v7;
    }
    a2[15] = *(unsigned int *)(v4 + 8);
  }
  else
  {
    v12 = a2 + 23;
    v13 = *(_DWORD *)(v8 + 12);
    v14 = *(_DWORD *)(*(_QWORD *)(v4 + 56) + 56LL) + 1;
    v44 = *(_QWORD *)(v4 + 32) + (unsigned int)(*((_DWORD *)a2 + 43) << 12);
    v15 = (unsigned int *)(v10 + 20);
    v43 = v13;
    v46 = *(_QWORD *)(v4 + 56);
    while ( v7 )
    {
      v16 = *(v15 - 3);
      if ( !v16 )
        v16 = *(v15 - 1);
      v17 = *(v15 - 1);
      if ( !v17 && *v15 )
      {
        if ( (*(_DWORD *)(v11 + 8) & 0x14000) == 0x4000 )
        {
          *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 18;
          return 3221225595LL;
        }
        *v15 = 0;
      }
      if ( v17 + *v15 < *v15 )
      {
        *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 19;
        return 3221225595LL;
      }
      v18 = v12;
      *(v12 - 5) = v12;
      v5 += 56LL;
      v12 += 7;
      *v18 = a2;
      if ( v44 != *(_QWORD *)v8 + *(v15 - 2) || !v16 )
      {
        *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 20;
        return 3221225595LL;
      }
      if ( v13 + v16 - 1 <= v16 )
      {
        *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 21;
        return 3221225595LL;
      }
      v19 = (~((unsigned __int64)v13 - 1) >> 12) & ((v16 + (unsigned __int64)v13 - 1) >> 12);
      *((_DWORD *)v12 - 3) = v19;
      if ( v19 > a4 )
      {
        *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 22;
        return 3221225595LL;
      }
      v20 = (~((unsigned __int64)v13 - 1) >> 12) & ((v16 + (unsigned __int64)v13 - 1) >> 12);
      if ( v7 == 1 && v19 != a4 )
      {
        *((_DWORD *)v12 - 3) = a4;
        v20 = a4;
      }
      a4 -= v20;
      v21 = *v15 >> 9;
      *((_DWORD *)v12 - 5) = v21;
      v51 = a4;
      v22 = -*(_DWORD *)(v8 + 8) & (*(_DWORD *)(v8 + 8) + *(v15 - 1) + *v15 - 1);
      if ( v22 < *v15 )
      {
        *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 23;
        return 3221225595LL;
      }
      v23 = (v22 & 0x1FF) << 20;
      *((_DWORD *)v12 - 4) = ((-*(_DWORD *)(v8 + 8) & (*(_DWORD *)(v8 + 8) + *(v15 - 1) + *v15 - 1)) >> 9) - v21;
      *(v12 - 6) = v45;
      v24 = v15[4];
      v25 = ((unsigned int)v24 >> 29) & 1 | 2;
      if ( (v24 & 0x40000000) == 0 )
        v25 = (v15[4] >> 29) & 1;
      v26 = v25 | 4;
      if ( v24 >= 0 )
        v26 = v25;
      v27 = v26 | 8;
      if ( (v24 & 0x10000000) == 0 )
        v27 = v26;
      v28 = *((_BYTE *)MiImageProtectionArray + v27);
      if ( (v28 & 2) != 0 )
        *(_BYTE *)(v46 + 50) = 1;
      *((_DWORD *)v12 - 6) = v23 | (2 * (v28 & 0x1F));
      MiMakeSubsectionPte(v5);
      DemandZeroPte = MiMakeDemandZeroPte(v28);
      if ( !*v32 )
        v31 = DemandZeroPte;
      v14 = *v32 + *(v32 - 1);
      v49 = 0;
      if ( (v28 & 4) != 0 )
      {
        if ( (v28 & 5) == 5 )
        {
          v49 = 1;
          v33 = 0;
        }
        else
        {
          v33 = 1;
          *((_DWORD *)v12 - 6) = v30 | 0x20000;
          *((_DWORD *)a2 + 14) |= 0x20000u;
        }
      }
      else
      {
        v33 = 0;
      }
      v34 = 0;
      v35 = 0;
      v42 = *(v32 - 1);
      if ( *((_DWORD *)v12 - 3) )
      {
        v36 = v44;
        v37 = (_QWORD *)v45;
        do
        {
          if ( v34 >= v16 )
          {
            ++*((_DWORD *)v12 - 1);
          }
          else
          {
            if ( v33 )
              ++*(_QWORD *)(v4 + 16);
            if ( v49 )
              ++*(_QWORD *)(v4 + 48);
            if ( v34 >= v42 )
            {
              *v37 = DemandZeroPte;
              v36 = v44;
              if ( !((unsigned __int8)v33 | (unsigned __int8)v49) )
                ++*(_QWORD *)(v4 + 16);
            }
            else
            {
              ++a2[15];
              *v37 = v31;
            }
          }
          v36 += 4096LL;
          v34 += 4096;
          ++v37;
          v44 = v36;
          ++v35;
        }
        while ( v35 < *((_DWORD *)v12 - 3) );
        v7 = v50;
        v45 = (__int64)v37;
        a4 = v51;
      }
      v11 = a1;
      v15 = v32 + 10;
      v8 = v47;
      --v7;
      v13 = v43;
      v50 = v7;
    }
    if ( v14 > *(_DWORD *)(v46 + 56) )
    {
      *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 24;
      return 3221225595LL;
    }
    if ( a4 >= *(_DWORD *)(v8 + 12) >> 12 )
    {
      *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 25;
      return 3221225595LL;
    }
  }
  return 0LL;
}
