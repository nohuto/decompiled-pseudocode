/*
 * XREFs of PfpPfnPrioRequest @ 0x140A5C74C
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140A5C19C (PfQuerySuperfetchInformation.c)
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 * Callees:
 *     MmSetPfnListInfo @ 0x1402D4250 (MmSetPfnListInfo.c)
 *     MmQueryMemoryListInformation @ 0x14034A628 (MmQueryMemoryListInformation.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     PfpCopyUserPfnPrioRequest @ 0x140A5C958 (PfpCopyUserPfnPrioRequest.c)
 *     MmQueryPfnList @ 0x140A5CB60 (MmQueryPfnList.c)
 *     MmRelocatePfnList @ 0x140B705C4 (MmRelocatePfnList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpPfnPrioRequest(__int64 a1, char a2, unsigned int *a3)
{
  _DWORD *v6; // rbx
  SIZE_T v7; // rdx
  int PfnList; // edi
  size_t v9; // r8
  unsigned int v10; // r14d
  void *v11; // rcx
  void *v12; // rdx
  SIZE_T v14; // rdx
  int v15; // eax
  int v16; // eax
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  void *Src; // [rsp+88h] [rbp+20h]

  LODWORD(v17) = 0;
  v6 = 0LL;
  Src = 0LL;
  if ( *(_DWORD *)(a1 + 8) == 6 )
  {
    v7 = *(unsigned int *)(a1 + 24);
    if ( (unsigned int)v7 >= 0xD8 )
    {
      PfnList = PfpCopyUserPfnPrioRequest(*(void **)(a1 + 16), v7, a2, 1);
      if ( PfnList >= 0 )
      {
        v6 = Src;
        PfnList = MmQueryPfnList(*((_QWORD *)Src + 1), (char *)Src + 192);
        if ( PfnList >= 0 && (v6[1] & 1) != 0 )
          MmQueryMemoryListInformation(0xFFFFFFFFFFFFFFFFuLL, v6 + 4, 0xB0u, 0, &v17);
        if ( a2 )
          ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
        v9 = (unsigned int)(24 * (v6[2] + 8));
        v10 = 24 * (v6[2] + 8);
        v11 = *(void **)(a1 + 16);
        v12 = v6;
        if ( !a2 )
        {
          RtlCopyVolatileMemory(v11, v6, v9);
          goto LABEL_12;
        }
LABEL_10:
        RtlCopyToUser(v11, v12, v9);
LABEL_12:
        *a3 = v10;
        goto LABEL_13;
      }
LABEL_16:
      v6 = Src;
      goto LABEL_13;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 8) != 7 && *(_DWORD *)(a1 + 8) != 22 && *(_DWORD *)(a1 + 8) != 29 )
    {
      PfnList = -1073741821;
      goto LABEL_13;
    }
    v14 = *(unsigned int *)(a1 + 24);
    if ( (unsigned int)v14 >= 0xD8 )
    {
      PfnList = PfpCopyUserPfnPrioRequest(*(void **)(a1 + 16), v14, a2, 0);
      if ( PfnList >= 0 )
      {
        v15 = *(_DWORD *)(a1 + 8);
        if ( v15 == 7 || v15 == 29 )
        {
          v6 = Src;
          v16 = MmSetPfnListInfo(*((_QWORD *)Src + 1), (unsigned __int64 *)Src + 24, v15 == 29);
        }
        else
        {
          v6 = Src;
          v16 = MmRelocatePfnList(
                  *((_QWORD *)Src + 1),
                  (char *)Src + 192,
                  *((unsigned __int16 *)Src + 2),
                  *((unsigned __int16 *)Src + 3));
        }
        PfnList = v16;
        v10 = 0;
        if ( *(_DWORD *)(a1 + 8) != 22 && v16 >= 0 )
          goto LABEL_12;
        if ( a2 )
          ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
        v10 = 24 * (v6[2] + 8);
        v11 = *(void **)(a1 + 16);
        v9 = v10;
        v12 = v6;
        if ( !a2 )
        {
          RtlCopyVolatileMemory(v11, v6, v10);
          goto LABEL_12;
        }
        goto LABEL_10;
      }
      goto LABEL_16;
    }
  }
  PfnList = -1073741306;
LABEL_13:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)PfnList;
}
