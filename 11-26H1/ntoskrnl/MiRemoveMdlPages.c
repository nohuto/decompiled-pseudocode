/*
 * XREFs of MiRemoveMdlPages @ 0x14086E5A4
 * Callers:
 *     MiAllocatePagesForMdl @ 0x14034AA0C (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiSetPfnOwnedAndActive @ 0x14033D0DC (MiSetPfnOwnedAndActive.c)
 *     MiFreeContiguousPages @ 0x1403CD758 (MiFreeContiguousPages.c)
 *     MiRemovePhysicalMemoryBatchComplete @ 0x1406EEDE8 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiSortMdlFrames @ 0x1406F3A84 (MiSortMdlFrames.c)
 *     MiRemovePhysicalMemory @ 0x14086D13C (MiRemovePhysicalMemory.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall MiRemoveMdlPages(char *P, __int64 a2)
{
  __int64 *v2; // r15
  unsigned __int64 v3; // r14
  __int64 v4; // r13
  _DWORD *v5; // rdi
  int v6; // eax
  char *v7; // rdx
  _DWORD *v8; // rbx
  __int64 v9; // r12
  int v10; // r8d
  unsigned __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rcx
  bool v14; // zf
  int v15; // edi
  ULONG_PTR v16; // r14
  __int64 v17; // r13
  unsigned __int64 v18; // rdi
  char *v20; // [rsp+30h] [rbp-68h]
  unsigned __int64 v21; // [rsp+40h] [rbp-58h]
  int v24; // [rsp+B0h] [rbp+18h]
  int v25; // [rsp+B8h] [rbp+20h]

  v2 = (__int64 *)(P + 48);
  v3 = (unsigned __int64)*((unsigned int *)P + 10) >> 12;
  v4 = a2;
  v5 = P;
  v21 = v3;
  v6 = *(_DWORD *)(a2 + 56);
  v7 = &P[8 * v3 + 48];
  v20 = v7;
  if ( (v6 & 0x60) == 0 || *(_QWORD *)(v4 + 24) < 0x200uLL )
  {
    MiSortMdlFrames((__int64)P);
    v7 = v20;
  }
  v8 = 0LL;
  v9 = -1LL;
  v25 = 0;
  v10 = 0;
  v24 = (*(_DWORD *)(v4 + 56) >> 15) & 0x10 | 0x680000;
  v11 = 0LL;
  v12 = 0LL;
  v13 = -1LL;
  v14 = v2 == (__int64 *)v7;
  if ( v2 <= (__int64 *)v7 )
  {
    v15 = (*(_DWORD *)(v4 + 56) >> 15) & 0x10 | 0x680000;
    v16 = -1LL;
    do
    {
      if ( v14 || (v9 = *v2, *v2 != v13) )
      {
        if ( v11 )
        {
          if ( v10 < 0 || (v25 = MiRemovePhysicalMemory(v16, v11, v15), v10 = v25, v25 < 0) )
          {
            v17 = 48 * v16 - 0x220000000000LL;
            v18 = v11;
            do
            {
              MiSetPfnOwnedAndActive(v17, 1, -8LL, (*(_DWORD *)(v17 + 32) >> 22) & 3, 2u);
              v17 += 48LL;
              --v18;
            }
            while ( v18 );
            v15 = v24;
            MiFreeContiguousPages(v16, v11, 32);
            v10 = v25;
            v12 += v11;
          }
          v7 = v20;
        }
        v16 = v9;
        v11 = 1LL;
      }
      else
      {
        ++v11;
      }
      ++v2;
      v13 = v9 + 1;
      v14 = v2 == (__int64 *)v7;
    }
    while ( v2 <= (__int64 *)v7 );
    v5 = P;
    v3 = v21;
    v4 = a2;
  }
  _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)v4 + 23488LL), -(__int64)v3);
  if ( !v12 )
  {
    v8 = v5;
    if ( !v3 )
      return v8;
LABEL_24:
    MiRemovePhysicalMemoryBatchComplete();
    return v5;
  }
  if ( v12 != v3 )
  {
    v5[10] -= (_DWORD)v12 << 12;
    goto LABEL_24;
  }
  ExFreePoolWithTag(v5, 0);
  return v8;
}
