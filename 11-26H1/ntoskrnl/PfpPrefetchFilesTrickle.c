/*
 * XREFs of PfpPrefetchFilesTrickle @ 0x140A59AEC
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x14098034C (PfpPrefetchRequestPerform.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x14034A628 (MmQueryMemoryListInformation.c)
 *     PfpCheckPrefetchAbort @ 0x1404B8380 (PfpCheckPrefetchAbort.c)
 *     PfpReadSupportInitialize @ 0x1404D5E80 (PfpReadSupportInitialize.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PfpFileBuildReadSupport @ 0x140A589EC (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x140A58DF0 (PfpReadSupportCleanup.c)
 *     PfpAvailablePagesForPrefetch @ 0x140A59E14 (PfpAvailablePagesForPrefetch.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x140A59E4C (PfpUpdateRepurposedByPrefetch.c)
 *     MmPrefetchPagesEx @ 0x140A5AD88 (MmPrefetchPagesEx.c)
 */

__int64 __fastcall PfpPrefetchFilesTrickle(_QWORD *a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edi
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // r9
  unsigned int i; // r8d
  int *v9; // r12
  int v10; // eax
  char j; // r15
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // r13d
  unsigned int *v15; // rbx
  unsigned int v16; // r11d
  unsigned int v17; // eax
  _QWORD *v18; // rbx
  int v19; // eax
  __int64 result; // rax
  unsigned int v21; // [rsp+30h] [rbp-59h]
  int v22; // [rsp+34h] [rbp-55h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-51h]
  __int64 v24; // [rsp+40h] [rbp-49h]
  __int64 v25; // [rsp+48h] [rbp-41h]
  __int64 v26; // [rsp+50h] [rbp-39h]
  __int64 v27; // [rsp+58h] [rbp-31h] BYREF
  __int64 v28; // [rsp+60h] [rbp-29h]
  __int128 v29; // [rsp+68h] [rbp-21h] BYREF
  __int128 v30; // [rsp+78h] [rbp-11h]
  __int128 v31; // [rsp+88h] [rbp-1h]
  __int64 v32; // [rsp+98h] [rbp+Fh]
  char v33; // [rsp+F0h] [rbp+67h]
  int v34; // [rsp+F8h] [rbp+6Fh]
  unsigned int v35; // [rsp+100h] [rbp+77h]
  unsigned int v36; // [rsp+108h] [rbp+7Fh]

  v1 = *a1;
  v32 = 0LL;
  v3 = 0;
  v22 = 0;
  v29 = 0LL;
  v33 = 0;
  v30 = 0LL;
  v31 = 0LL;
  v4 = 0;
  v21 = *(unsigned __int16 *)(*a1 + 30LL);
  v28 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  while ( 1 )
  {
    v36 = v4;
    if ( v4 >= *(_DWORD *)(v1 + 8) )
      break;
    v5 = a1[2];
    v6 = *(_QWORD *)(v1 + 32);
    v26 = v6;
    v7 = 5LL * v4;
    v25 = v7;
    if ( _bittest64((const signed __int64 *)(((unsigned __int64)v4 << 6) + v5 + 24), 0x22u) )
    {
      for ( i = 0; ; ++i )
      {
        v35 = i;
        if ( i >= *(_DWORD *)(v6 + 8 * v7 + 12) >> 1 )
          break;
        v9 = (int *)(*(_QWORD *)(v6 + 8 * v7 + 16) + 48LL * i);
        v10 = *v9;
        if ( (*v9 & 2) != 0 || !v9[4] )
          continue;
        for ( j = 0; (unsigned __int8)j <= 1u; ++j )
        {
          if ( j )
          {
            if ( (v10 & 1) == 0 )
              continue;
          }
          else if ( (v10 & 1) != 0 )
          {
            continue;
          }
          PfpReadSupportInitialize((__int64)&v29);
          if ( (int)PfpFileBuildReadSupport(a1, (__int64)v9, v12, j, (__int64)&v29) >= 0 )
          {
            v13 = v29;
            v24 = v29;
            v27 = v29;
            v14 = 0;
            *(_QWORD *)v29 = v30;
            v15 = (unsigned int *)(v13 + 8);
            v23 = *(_DWORD *)(v13 + 8);
            v34 = 0;
            MmQueryMemoryListInformation(0xFFFFFFFFFFFFFFFFuLL, a1 + 6, 0xB0u, 0, &v22);
            while ( v14 < v23 )
            {
              if ( (unsigned int)PfpCheckPrefetchAbort(a1) || !(unsigned int)PfpAvailablePagesForPrefetch(a1 + 6, v21) )
              {
                v33 = 1;
                break;
              }
              if ( v14 + 16 > v16 )
                v17 = v16 - v14;
              else
                v17 = 16;
              *v15 = v17;
              v18 = (_QWORD *)(v24 + 16);
              memmove((void *)(v24 + 16), (const void *)(v24 + 16 + 8LL * v14), 8LL * v17);
              *v18 |= (8 * (v21 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
              LODWORD(v18) = MmPrefetchPagesEx(1LL, &v27, 0LL);
              PfpUpdateRepurposedByPrefetch(a1 + 6, *(unsigned int *)(v24 + 8));
              if ( (int)v18 < 0 )
                break;
              v15 = (unsigned int *)(v24 + 8);
              v19 = *(_DWORD *)(v24 + 8);
              v34 += v19;
              v14 += v19;
            }
            if ( j )
              *(_DWORD *)(v1 + 100) += v34;
            else
              *(_DWORD *)(v1 + 96) += v34;
          }
          PfpReadSupportCleanup(a1[5], (__int64)&v29);
          if ( v33 || (unsigned int)PfpCheckPrefetchAbort(a1) )
          {
            v3 = -1073741248;
            goto LABEL_26;
          }
          v10 = *v9;
          v4 = v36;
          if ( (*v9 & 8) != 0 )
            break;
        }
        i = v35;
        v7 = v25;
        v6 = v26;
        if ( (*v9 & 8) == 0 )
          ++*(_DWORD *)(v1 + 84);
      }
    }
    ++v4;
  }
LABEL_26:
  result = v3;
  *(_DWORD *)(*a1 + 112LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v28;
  return result;
}
