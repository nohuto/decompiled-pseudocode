/*
 * XREFs of PfpVolumePrefetchMetadata @ 0x14097F124
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x14098034C (PfpPrefetchRequestPerform.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x14034A628 (MmQueryMemoryListInformation.c)
 *     PfpCheckPrefetchAbort @ 0x1404B8380 (PfpCheckPrefetchAbort.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     PfpPrefetchDirectoryStream @ 0x14097F5AC (PfpPrefetchDirectoryStream.c)
 *     PfpAvailablePagesForPrefetch @ 0x140A59E14 (PfpAvailablePagesForPrefetch.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x140A59E4C (PfpUpdateRepurposedByPrefetch.c)
 */

__int64 __fastcall PfpVolumePrefetchMetadata(__int64 *a1, unsigned int a2)
{
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 Src; // rsi
  __int64 v6; // rax
  unsigned int v7; // r10d
  __int64 v8; // r9
  int v9; // r8d
  __int64 v10; // r8
  int v11; // ecx
  unsigned int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  __int64 v18; // rbx
  unsigned int v19; // r15d
  unsigned int i; // esi
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // r9d
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  int v28; // ebx
  unsigned int v29; // r10d
  unsigned int v30; // r8d
  __int64 v31; // rax
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r11
  unsigned __int64 v35; // rax
  char *Address; // r11
  __int64 result; // rax
  unsigned int v38; // r10d
  char *v39; // r11
  size_t Size; // [rsp+38h] [rbp-71h]
  __int64 v41; // [rsp+60h] [rbp-49h]
  int v42; // [rsp+68h] [rbp-41h]
  __int128 v43; // [rsp+70h] [rbp-39h] BYREF
  __int64 v44[2]; // [rsp+80h] [rbp-29h] BYREF
  __int128 v45; // [rsp+90h] [rbp-19h] BYREF
  __int128 v46; // [rsp+A0h] [rbp-9h]
  __int128 v47; // [rsp+B0h] [rbp+7h]
  unsigned int v48; // [rsp+110h] [rbp+67h]
  __int64 v50; // [rsp+120h] [rbp+77h] BYREF
  __int64 v51; // [rsp+128h] [rbp+7Fh]

  v3 = a2;
  *(_QWORD *)&v47 = 0LL;
  DWORD2(v47) = 0;
  *(_OWORD *)v44 = 0LL;
  LODWORD(v50) = 0;
  v43 = 0LL;
  v4 = 0LL;
  v45 = 0LL;
  Src = a1[3];
  v6 = *a1;
  v46 = 0LL;
  v7 = *(unsigned __int16 *)(v6 + 30);
  v8 = *(_QWORD *)(v6 + 32);
  v9 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
     + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  *(_DWORD *)Src = 3;
  v42 = v9;
  v10 = 5LL * a2;
  v48 = v7;
  v41 = v10;
  v11 = *(_DWORD *)(*a1 + 28);
  v51 = v8;
  *(_QWORD *)(Src + 8) = (8 * (v7 & 7)) | (unsigned __int64)(v11 & 7);
  if ( (*(_DWORD *)(*a1 + 80) & 4) != 0 )
  {
    MmQueryMemoryListInformation(0xFFFFFFFFFFFFFFFFuLL, a1 + 6, 0xB0u, 0, &v50);
    v10 = v41;
    v8 = v51;
  }
  v12 = 0;
  while ( v12 < *(_DWORD *)(v8 + 8 * v10 + 12) >> 1 )
  {
    *(_DWORD *)(Src + 4) = 0;
    while ( v12 < *(_DWORD *)(v8 + 8 * v10 + 12) >> 1 )
    {
      v13 = v12++;
      v14 = *(_QWORD *)(v8 + 8 * v10 + 16) + 48 * v13;
      v15 = *(_QWORD *)(v14 + 8);
      if ( (*(_BYTE *)v14 & 0x10) != 0 )
        v4 = *(_QWORD *)(v8 + 8 * v10 + 16) + 48 * v13;
      if ( v15 )
      {
        *(_QWORD *)(Src + 8LL * (unsigned int)(*(_DWORD *)(Src + 4))++ + 16) = v15;
        if ( *(_DWORD *)(Src + 4) >= *((_DWORD *)a1 + 8) )
          break;
      }
    }
    if ( !*(_DWORD *)(Src + 4) )
      break;
    if ( (unsigned int)PfpCheckPrefetchAbort(a1)
      || (*(_DWORD *)(*a1 + 80) & 4) != 0 && !(unsigned int)PfpAvailablePagesForPrefetch(a1 + 6, v38) )
    {
LABEL_50:
      v28 = -1073741248;
      goto LABEL_44;
    }
    LODWORD(Size) = 8 * *(_DWORD *)(Src + 4) + 16;
    v28 = IopXxxControlFile(
            *(HANDLE *)(a1[2] + (v3 << 6)),
            0LL,
            0LL,
            0LL,
            v44,
            0x90120u,
            (unsigned int *)Src,
            Size,
            v39,
            (unsigned int)v39,
            (char)v39);
    if ( (*(_DWORD *)(*a1 + 80) & 4) != 0 )
      PfpUpdateRepurposedByPrefetch(a1 + 6, *(unsigned int *)(Src + 4));
    if ( v28 < 0 )
      goto LABEL_44;
    if ( v28 == 259 )
      KeBugCheckEx(0x191u, 0x1769uLL, 0LL, 0LL, 0LL);
    v10 = v41;
    v8 = v51;
  }
  if ( v4 )
  {
    v16 = *a1;
    v17 = 0LL;
    v18 = a2;
    v19 = 0;
    v50 = a2;
    ++*(_DWORD *)(v16 + 88);
    while ( v19 < *(_DWORD *)(v4 + 16) )
    {
      *(_DWORD *)(Src + 4) = 0;
      if ( v19 >= *(_DWORD *)(v4 + 16) )
        break;
      v29 = *((_DWORD *)a1 + 8);
      v30 = 0;
      do
      {
        v31 = *(_QWORD *)(v4 + 24);
        v32 = v17;
        v33 = *(_QWORD *)(v31 + 16LL * v19);
        v34 = v33 + *(unsigned int *)(v31 + 16LL * v19 + 8);
        if ( v33 >= v17 )
          v32 = *(_QWORD *)(v31 + 16LL * v19);
        while ( v32 < v34 )
        {
          *(_QWORD *)(Src + 8LL * v30 + 16) = v32 >> 10;
          v35 = v32 + 4096;
          v32 += 4096LL;
          v30 = *(_DWORD *)(Src + 4) + 1;
          *(_DWORD *)(Src + 4) = v30;
          v29 = *((_DWORD *)a1 + 8);
          if ( v30 >= v29 )
          {
            v17 = v35;
            goto LABEL_35;
          }
        }
        if ( v30 >= v29 )
          break;
        ++v19;
      }
      while ( v19 < *(_DWORD *)(v4 + 16) );
LABEL_35:
      if ( !v30 )
        break;
      if ( (unsigned int)PfpCheckPrefetchAbort(a1)
        || (*(_DWORD *)(*a1 + 80) & 4) != 0 && !(unsigned int)PfpAvailablePagesForPrefetch(a1 + 6, v48) )
      {
        goto LABEL_50;
      }
      LODWORD(Size) = 8 * *(_DWORD *)(Src + 4) + 16;
      v28 = IopXxxControlFile(
              *(HANDLE *)(a1[2] + (v18 << 6)),
              0LL,
              0LL,
              0LL,
              v44,
              0x90120u,
              (unsigned int *)Src,
              Size,
              Address,
              (unsigned int)Address,
              (char)Address);
      if ( (*(_DWORD *)(*a1 + 80) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch(a1 + 6, *(unsigned int *)(Src + 4));
      if ( v28 < 0 )
        goto LABEL_44;
      if ( v28 == 259 )
        KeBugCheckEx(0x191u, 0x17CEuLL, 0LL, 0LL, 0LL);
      v18 = v50;
    }
    v10 = v41;
    v8 = v51;
  }
  for ( i = 0; i < *(_DWORD *)(v8 + 8 * v10 + 12) >> 1; ++i )
  {
    v21 = 48LL * i + *(_QWORD *)(v8 + 8 * v10 + 16);
    if ( (*(_DWORD *)v21 & 2) != 0 )
    {
      v22 = *(_QWORD *)(v21 + 32);
      if ( !v22 || (*(_DWORD *)v21 & 4) != 0 )
      {
        v24 = a1[2];
        *((_QWORD *)&v43 + 1) = v21 + 8;
        v23 = 24609;
        LODWORD(v43) = 524296;
        v25 = a2 << 6;
        v26 = *(_QWORD *)(v24 + ((unsigned __int64)a2 << 6));
      }
      else
      {
        v23 = 16417;
        *((_QWORD *)&v43 + 1) = v22 + 2;
        WORD1(v43) = 2 * *(_WORD *)(v21 + 40);
        v24 = a1[2];
        LOWORD(v43) = WORD1(v43) - 2;
        v25 = a2 << 6;
        v26 = *(_QWORD *)(v24 + ((unsigned __int64)a2 << 6) + 32);
      }
      *((_QWORD *)&v45 + 1) = v26;
      *(_QWORD *)&v46 = &v43;
      LODWORD(v45) = 48;
      DWORD2(v46) = 576;
      v47 = 0LL;
      v27 = PfpPrefetchDirectoryStream((_DWORD)a1, v25 + (int)v24, v21, v23, (__int64)&v45, v23);
      v28 = v27;
      if ( v27 >= 0 )
      {
        ++*(_DWORD *)(*a1 + 88);
      }
      else if ( v27 == -1073741248 )
      {
        goto LABEL_44;
      }
      v8 = v51;
    }
    v10 = v41;
  }
  v28 = 0;
LABEL_44:
  result = (unsigned int)v28;
  *(_DWORD *)(*a1 + 108) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                          - v42;
  return result;
}
