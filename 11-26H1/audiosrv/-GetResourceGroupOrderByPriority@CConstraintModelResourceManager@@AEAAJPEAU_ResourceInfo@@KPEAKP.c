/*
 * XREFs of ?GetResourceGroupOrderByPriority@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KPEAKPEAPEAU2@@Z @ 0x1800F3574
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800F1D7C (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CConstraintModelResourceManager::GetResourceGroupOrderByPriority(
        CConstraintModelResourceManager *this,
        struct _ResourceInfo *a2,
        unsigned int a3,
        unsigned int *a4,
        struct _ResourceInfo **a5)
{
  unsigned int v5; // ebx
  struct _ResourceInfo *v7; // rsi
  unsigned int v8; // edi
  _DWORD *v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rdx
  unsigned int v12; // eax
  struct _ResourceInfo *v13; // r10
  unsigned int v14; // r8d
  struct _ResourceInfo *v15; // rcx
  __int64 v16; // rax
  char *v17; // rdx
  __int128 v18; // xmm1
  unsigned int v19; // edx
  struct _ResourceInfo *v20; // r11
  __int64 v21; // r9
  unsigned int v22; // r8d
  _DWORD *v23; // rsi
  unsigned int v24; // ecx
  struct _ResourceInfo *v25; // rcx
  _BYTE *v26; // r8
  __int64 v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int64 v35; // rax
  struct _ResourceInfo *v36; // rcx
  __int64 v37; // rax
  char *v38; // r8
  char *v39; // r9
  __int128 v40; // xmm1
  _BYTE *v41; // rcx
  __int64 v42; // rax
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int64 v51; // rax
  int v52; // ecx
  _BYTE v54[544]; // [rsp+20h] [rbp-248h] BYREF

  v5 = 0;
  v7 = a2;
  v8 = 0;
  *a5 = 0LL;
  *a4 = 0;
  if ( a3 )
  {
    v9 = (_DWORD *)((char *)a2 + 524);
    v10 = a3;
    v11 = a3;
    do
    {
      v12 = v8 + 1;
      if ( !*v9 )
        v12 = v8;
      v9 += 135;
      v8 = v12;
      --v11;
    }
    while ( v11 );
    if ( v12 )
    {
      v13 = (struct _ResourceInfo *)operator new(saturated_mul(v12, 0x21CuLL));
      if ( v13 )
      {
        v14 = 0;
        do
        {
          if ( *((_DWORD *)v7 + 131) )
          {
            v15 = v7;
            v16 = 4LL;
            v17 = (char *)v13 + 540 * v14;
            do
            {
              *(_OWORD *)v17 = *(_OWORD *)v15;
              *((_OWORD *)v17 + 1) = *((_OWORD *)v15 + 1);
              *((_OWORD *)v17 + 2) = *((_OWORD *)v15 + 2);
              *((_OWORD *)v17 + 3) = *((_OWORD *)v15 + 3);
              *((_OWORD *)v17 + 4) = *((_OWORD *)v15 + 4);
              *((_OWORD *)v17 + 5) = *((_OWORD *)v15 + 5);
              *((_OWORD *)v17 + 6) = *((_OWORD *)v15 + 6);
              v17 += 128;
              v18 = *((_OWORD *)v15 + 7);
              v15 = (struct _ResourceInfo *)((char *)v15 + 128);
              *((_OWORD *)v17 - 1) = v18;
              --v16;
            }
            while ( v16 );
            ++v14;
            *(_OWORD *)v17 = *(_OWORD *)v15;
            *((_QWORD *)v17 + 2) = *((_QWORD *)v15 + 2);
            *((_DWORD *)v17 + 6) = *((_DWORD *)v15 + 6);
          }
          v7 = (struct _ResourceInfo *)((char *)v7 + 540);
          --v10;
        }
        while ( v10 );
        v19 = 0;
        v20 = v13;
        do
        {
          LODWORD(v21) = v19;
          v22 = v19;
          if ( v19 < v8 )
          {
            v23 = (_DWORD *)((char *)v13 + 540 * v19 + 536);
            do
            {
              v24 = v22;
              if ( *v23 >= *((_DWORD *)v13 + 135 * (unsigned int)v21 + 134) )
                v24 = v21;
              ++v22;
              v23 += 135;
              v21 = v24;
            }
            while ( v22 < v8 );
            if ( v24 != v19 )
            {
              v25 = v20;
              v26 = v54;
              v27 = 4LL;
              do
              {
                v28 = *((_OWORD *)v25 + 1);
                *(_OWORD *)v26 = *(_OWORD *)v25;
                v29 = *((_OWORD *)v25 + 2);
                *((_OWORD *)v26 + 1) = v28;
                v30 = *((_OWORD *)v25 + 3);
                *((_OWORD *)v26 + 2) = v29;
                v31 = *((_OWORD *)v25 + 4);
                *((_OWORD *)v26 + 3) = v30;
                v32 = *((_OWORD *)v25 + 5);
                *((_OWORD *)v26 + 4) = v31;
                v33 = *((_OWORD *)v25 + 6);
                *((_OWORD *)v26 + 5) = v32;
                v34 = *((_OWORD *)v25 + 7);
                v25 = (struct _ResourceInfo *)((char *)v25 + 128);
                *((_OWORD *)v26 + 6) = v33;
                v26 += 128;
                *((_OWORD *)v26 - 1) = v34;
                --v27;
              }
              while ( v27 );
              v35 = *((_QWORD *)v25 + 2);
              *(_OWORD *)v26 = *(_OWORD *)v25;
              *((_QWORD *)v26 + 2) = v35;
              LODWORD(v35) = *((_DWORD *)v25 + 6);
              v36 = v20;
              *((_DWORD *)v26 + 6) = v35;
              v37 = 4LL;
              v38 = (char *)v13 + 540 * v21;
              v39 = v38;
              do
              {
                *(_OWORD *)v36 = *(_OWORD *)v39;
                *((_OWORD *)v36 + 1) = *((_OWORD *)v39 + 1);
                *((_OWORD *)v36 + 2) = *((_OWORD *)v39 + 2);
                *((_OWORD *)v36 + 3) = *((_OWORD *)v39 + 3);
                *((_OWORD *)v36 + 4) = *((_OWORD *)v39 + 4);
                *((_OWORD *)v36 + 5) = *((_OWORD *)v39 + 5);
                *((_OWORD *)v36 + 6) = *((_OWORD *)v39 + 6);
                v36 = (struct _ResourceInfo *)((char *)v36 + 128);
                v40 = *((_OWORD *)v39 + 7);
                v39 += 128;
                *((_OWORD *)v36 - 1) = v40;
                --v37;
              }
              while ( v37 );
              *(_OWORD *)v36 = *(_OWORD *)v39;
              *((_QWORD *)v36 + 2) = *((_QWORD *)v39 + 2);
              *((_DWORD *)v36 + 6) = *((_DWORD *)v39 + 6);
              v41 = v54;
              v42 = 4LL;
              do
              {
                v43 = *((_OWORD *)v41 + 1);
                *(_OWORD *)v38 = *(_OWORD *)v41;
                v44 = *((_OWORD *)v41 + 2);
                *((_OWORD *)v38 + 1) = v43;
                v45 = *((_OWORD *)v41 + 3);
                *((_OWORD *)v38 + 2) = v44;
                v46 = *((_OWORD *)v41 + 4);
                *((_OWORD *)v38 + 3) = v45;
                v47 = *((_OWORD *)v41 + 5);
                *((_OWORD *)v38 + 4) = v46;
                v48 = *((_OWORD *)v41 + 6);
                *((_OWORD *)v38 + 5) = v47;
                v49 = *((_OWORD *)v41 + 7);
                v41 += 128;
                *((_OWORD *)v38 + 6) = v48;
                v38 += 128;
                *((_OWORD *)v38 - 1) = v49;
                --v42;
              }
              while ( v42 );
              v50 = *(_OWORD *)v41;
              v51 = *((_QWORD *)v41 + 2);
              v52 = *((_DWORD *)v41 + 6);
              *(_OWORD *)v38 = v50;
              *((_QWORD *)v38 + 2) = v51;
              *((_DWORD *)v38 + 6) = v52;
            }
          }
          ++v19;
          v20 = (struct _ResourceInfo *)((char *)v20 + 540);
        }
        while ( v19 < v8 );
        *a4 = v8;
        *a5 = v13;
      }
      else
      {
        return (unsigned int)-2147024882;
      }
    }
  }
  return v5;
}
