/*
 * XREFs of MiParseImageSectionHeaders @ 0x140A62CA8
 * Callers:
 *     MiBuildImageControlArea @ 0x140A6279C (MiBuildImageControlArea.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x1404AF348 (MiMakeSubsectionPte.c)
 */

__int64 __fastcall MiParseImageSectionHeaders(__int64 a1, __int64 *a2, int a3, unsigned int a4)
{
  __int64 v4; // rdi
  _DWORD *v5; // r11
  int v7; // esi
  __int64 v8; // r13
  __int64 v10; // rbx
  unsigned int v11; // r10d
  __int64 v12; // r15
  unsigned int v13; // r8d
  unsigned int *v14; // rbx
  _DWORD *v15; // r9
  unsigned int v16; // ebp
  int v17; // edx
  __int64 v18; // r11
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
  char v32; // r13
  unsigned int v33; // ecx
  unsigned int v34; // edx
  unsigned int v35; // r9d
  _QWORD *v36; // r12
  unsigned int *v38; // rcx
  unsigned int v39; // edx
  unsigned int v40; // r8d
  unsigned int v41; // [rsp+20h] [rbp-78h]
  unsigned int v42; // [rsp+24h] [rbp-74h]
  __int64 v43; // [rsp+28h] [rbp-70h]
  __int64 v44; // [rsp+30h] [rbp-68h]
  __int64 v45; // [rsp+38h] [rbp-60h]
  __int64 v46; // [rsp+40h] [rbp-58h]
  __int64 v47; // [rsp+A0h] [rbp+8h]
  char v48; // [rsp+A8h] [rbp+10h]
  int v49; // [rsp+B0h] [rbp+18h]
  unsigned int v50; // [rsp+B8h] [rbp+20h]

  v49 = a3;
  v47 = a1;
  v4 = *a2;
  v5 = a2 + 16;
  v7 = a3;
  v8 = *(_QWORD *)(a1 + 144);
  v10 = *(_QWORD *)(a1 + 176);
  v46 = v8;
  v43 = a2[17] + 8LL * *((unsigned int *)a2 + 43);
  *(_BYTE *)(*a2 + 14) = *(_BYTE *)(*a2 + 14) & 0xE0 | 7;
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
  {
    v38 = (unsigned int *)(v10 + 16);
    while ( v7 )
    {
      v39 = *(v38 - 2);
      if ( !v39 )
        v39 = *v38;
      v40 = v38[1];
      if ( v40 + *v38 < v40 )
      {
        *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 16;
        return 3221225595LL;
      }
      if ( v40 != *(v38 - 1) || v39 > *v38 )
      {
        *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 17;
        return 3221225595LL;
      }
      v38 += 10;
      --v7;
    }
    a2[15] = *(unsigned int *)(v4 + 8);
  }
  else
  {
    v11 = *(_DWORD *)(v8 + 12);
    v12 = *(_QWORD *)(v4 + 32) + (unsigned int)(*((_DWORD *)a2 + 43) << 12);
    v13 = *(_DWORD *)(*(_QWORD *)(v4 + 56) + 56LL) + 1;
    v44 = v12;
    v14 = (unsigned int *)(v10 + 20);
    v42 = v11;
    v45 = *(_QWORD *)(v4 + 56);
    while ( 1 )
    {
      v15 = v5;
      if ( !v7 )
        break;
      v16 = *(v14 - 3);
      if ( !v16 )
        v16 = *(v14 - 1);
      v17 = *(v14 - 1);
      if ( !v17 && *v14 )
      {
        if ( (*(_DWORD *)(a1 + 8) & 0x14000) == 0x4000 )
        {
          *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 18;
          return 3221225595LL;
        }
        *v14 = 0;
      }
      if ( v17 + *v14 < *v14 )
      {
        *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 19;
        return 3221225595LL;
      }
      v18 = (__int64)(v5 + 14);
      *((_QWORD *)v15 + 2) = v18;
      *(_QWORD *)v18 = a2;
      if ( v12 != *(_QWORD *)v8 + *(v14 - 2) || !v16 )
      {
        *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 20;
        return 3221225595LL;
      }
      if ( v11 + v16 - 1 <= v16 )
      {
        *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 21;
        return 3221225595LL;
      }
      v19 = (~((unsigned __int64)v11 - 1) >> 12) & ((v16 + (unsigned __int64)v11 - 1) >> 12);
      *(_DWORD *)(v18 + 44) = v19;
      if ( v19 > a4 )
      {
        *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 22;
        return 3221225595LL;
      }
      v20 = (~((unsigned __int64)v11 - 1) >> 12) & ((v16 + (unsigned __int64)v11 - 1) >> 12);
      if ( v7 == 1 && v19 != a4 )
      {
        *(_DWORD *)(v18 + 44) = a4;
        v20 = a4;
      }
      a4 -= v20;
      v21 = *v14 >> 9;
      *(_DWORD *)(v18 + 36) = v21;
      v50 = a4;
      v22 = -*(_DWORD *)(v8 + 8) & (*(_DWORD *)(v8 + 8) + *v14 + *(v14 - 1) - 1);
      if ( v22 < *v14 )
      {
        *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 23;
        return 3221225595LL;
      }
      v23 = (v22 & 0x1FF) << 20;
      *(_DWORD *)(v18 + 40) = ((-*(_DWORD *)(v8 + 8) & (*(_DWORD *)(v8 + 8) + *v14 + *(v14 - 1) - 1)) >> 9) - v21;
      *(_QWORD *)(v18 + 8) = v43;
      v24 = v14[4];
      v25 = ((unsigned int)v24 >> 29) & 1 | 2;
      if ( (v24 & 0x40000000) == 0 )
        v25 = (v14[4] >> 29) & 1;
      v26 = v25 | 4;
      if ( v24 >= 0 )
        v26 = v25;
      v27 = v26 | 8;
      if ( (v24 & 0x10000000) == 0 )
        v27 = v26;
      v28 = *((_BYTE *)MiImageProtectionArray + v27);
      if ( (v28 & 2) != 0 )
        *(_BYTE *)(v45 + 50) = 1;
      *(_DWORD *)(v18 + 32) = v23 | (2 * (v28 & 0x1F));
      MiMakeSubsectionPte(v18);
      DemandZeroPte = MiMakeDemandZeroPte(v28);
      if ( !*v14 )
        v31 = DemandZeroPte;
      v13 = *v14 + *(v14 - 1);
      v48 = 0;
      v32 = 0;
      if ( (v28 & 4) != 0 )
      {
        if ( (v28 & 5) == 5 )
        {
          v32 = 1;
        }
        else
        {
          v48 = 1;
          v5[8] = v30 | 0x20000;
          *((_DWORD *)a2 + 14) |= 0x20000u;
        }
      }
      v33 = *(v14 - 1);
      v34 = 0;
      v12 = v44;
      v35 = 0;
      v41 = v33;
      if ( v5[11] )
      {
        v36 = (_QWORD *)v43;
        do
        {
          if ( v34 >= v16 )
          {
            ++v5[13];
          }
          else
          {
            if ( v48 )
              ++*(_QWORD *)(v4 + 16);
            if ( v32 )
              ++*(_QWORD *)(v4 + 48);
            if ( v34 >= v33 )
            {
              *v36 = DemandZeroPte;
              v33 = v41;
              if ( !((unsigned __int8)v48 | (unsigned __int8)v32) )
                ++*(_QWORD *)(v4 + 16);
            }
            else
            {
              ++a2[15];
              *v36 = v31;
            }
          }
          v34 += 4096;
          ++v36;
          v12 += 4096LL;
          ++v35;
        }
        while ( v35 < v5[11] );
        v7 = v49;
        v43 = (__int64)v36;
        a4 = v50;
        v44 = v12;
      }
      v8 = v46;
      v14 += 10;
      a1 = v47;
      --v7;
      v11 = v42;
      v49 = v7;
    }
    if ( v13 > *(_DWORD *)(v45 + 56) )
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 24;
      return 3221225595LL;
    }
    if ( a4 >= *(_DWORD *)(v8 + 12) >> 12 )
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 25;
      return 3221225595LL;
    }
  }
  return 0LL;
}
