/*
 * XREFs of PfpPrefetchPrivatePages @ 0x140A57EF4
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x14098034C (PfpPrefetchRequestPerform.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x14034A628 (MmQueryMemoryListInformation.c)
 *     PfpCheckPrefetchAbort @ 0x1404B8380 (PfpCheckPrefetchAbort.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     PfpSourceBuildVaArray @ 0x140A57A78 (PfpSourceBuildVaArray.c)
 *     PfpSourceGetPrefetchSupport @ 0x140A57B64 (PfpSourceGetPrefetchSupport.c)
 *     MmPrefetchVirtualMemory @ 0x140A57D94 (MmPrefetchVirtualMemory.c)
 *     PfpAvailablePagesForPrefetch @ 0x140A59E14 (PfpAvailablePagesForPrefetch.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x140A59E4C (PfpUpdateRepurposedByPrefetch.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpPrefetchPrivatePages(_QWORD *a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // r12
  int v3; // r13d
  PVOID v4; // rsi
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // r15d
  __int64 v10; // r14
  __int64 v11; // rax
  int *v12; // rdi
  unsigned int v13; // r15d
  _QWORD *v14; // r14
  HANDLE v15; // rdi
  unsigned int v16; // r12d
  unsigned int v17; // ebx
  __int64 result; // rax
  unsigned __int64 v19; // rdx
  unsigned int v20; // [rsp+30h] [rbp-48h]
  char *v21; // [rsp+38h] [rbp-40h]
  _QWORD *v22; // [rsp+40h] [rbp-38h]
  int v23; // [rsp+48h] [rbp-30h]
  PVOID P[2]; // [rsp+50h] [rbp-28h] BYREF
  HANDLE Handle[2]; // [rsp+60h] [rbp-18h] BYREF
  int v27; // [rsp+C8h] [rbp+50h]
  int v28; // [rsp+D0h] [rbp+58h]
  __int64 v29; // [rsp+D8h] [rbp+60h] BYREF

  v1 = *a1;
  v2 = a1;
  v3 = 0;
  LODWORD(v29) = 0;
  *(_OWORD *)P = 0LL;
  v4 = 0LL;
  v5 = *(_DWORD *)(v1 + 80);
  v20 = *(unsigned __int16 *)(*a1 + 30LL);
  v23 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v6 = (8 * (v20 & 7)) | *(_DWORD *)(*a1 + 28LL) & 7;
  v7 = v6 | 0x100;
  if ( (v5 & 0x10) != 0 )
    v7 = v6;
  v8 = v7 | 0x200;
  if ( (v5 & 8) == 0 )
    v8 = v7;
  v9 = v8 | 0x800;
  if ( (v5 & 0x20) == 0 )
    v9 = v8;
  v10 = 0LL;
  v28 = v9;
  while ( 1 )
  {
    v27 = v10;
    if ( (unsigned int)v10 >= *(_DWORD *)(v1 + 20) )
    {
      v17 = 0;
      goto LABEL_28;
    }
    v11 = *(_QWORD *)(v1 + 56);
    *(_OWORD *)Handle = 0LL;
    v12 = (int *)(v11 + 40 * v10);
    if ( (unsigned int)PfpCheckPrefetchAbort(v2) )
    {
      v3 = 1;
LABEL_37:
      v15 = Handle[1];
      goto LABEL_23;
    }
    if ( (int)PfpSourceBuildVaArray((__int64)v12, (unsigned int *)P) < 0
      || (int)PfpSourceGetPrefetchSupport(v12, (__int64)Handle) < 0 )
    {
      v4 = P[1];
      goto LABEL_37;
    }
    v4 = P[1];
    if ( (*(_DWORD *)(v1 + 80) & 4) != 0 )
    {
      v13 = (unsigned int)P[0];
      v14 = v2 + 6;
      v21 = (char *)P[1];
      v22 = v2 + 6;
      MmQueryMemoryListInformation(0xFFFFFFFFFFFFFFFFuLL, v2 + 6, 0xB0u, 0, &v29);
      v15 = Handle[1];
      while ( v13 )
      {
        if ( (unsigned int)PfpCheckPrefetchAbort(v2) || !(unsigned int)PfpAvailablePagesForPrefetch(v14, v20) )
        {
          LODWORD(v10) = v27;
          v3 = 1;
          goto LABEL_23;
        }
        v16 = v13;
        if ( v13 > 0x10 )
          v16 = 16;
        if ( (int)MmPrefetchVirtualMemory((ULONG_PTR)v15, v16, (__int64)v21, v28) >= 0 )
          *(_DWORD *)(v1 + 104) += v16;
        PfpUpdateRepurposedByPrefetch(v22, v16);
        v21 += 16 * v16;
        v14 = v22;
        v13 -= v16;
        v2 = a1;
      }
      LODWORD(v10) = v27;
    }
    else
    {
      v15 = Handle[1];
      v19 = LODWORD(P[0]);
      *(_DWORD *)(v1 + 104) += LODWORD(P[0]);
      MmPrefetchVirtualMemory((ULONG_PTR)v15, v19, (__int64)v4, v9);
    }
    ++*(_DWORD *)(v1 + 92);
LABEL_23:
    if ( v15 )
      NtClose(v15);
    if ( v3 )
      break;
    v9 = v28;
    v10 = (unsigned int)(v10 + 1);
  }
  v17 = -1073741248;
LABEL_28:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  result = v17;
  *(_DWORD *)(*v2 + 120LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v23;
  return result;
}
