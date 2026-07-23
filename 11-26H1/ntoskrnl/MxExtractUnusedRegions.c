/*
 * XREFs of MxExtractUnusedRegions @ 0x140CFCB98
 * Callers:
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140CFAF3C (MiHotAddBootDeferredDescriptorsDiscardable.c)
 *     MxCreatePfnsForPfns @ 0x140CFC488 (MxCreatePfnsForPfns.c)
 *     MxInsertUsedRegionsInLoaderTree @ 0x140CFDC88 (MxInsertUsedRegionsInLoaderTree.c)
 *     MxReducePhysicalPageCount @ 0x140CFE55C (MxReducePhysicalPageCount.c)
 * Callees:
 *     qsort @ 0x140539380 (qsort.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MxExtractUnusedRegions(_QWORD *a1, int *a2)
{
  _DWORD *v4; // r8
  __int64 v5; // r11
  unsigned int v6; // ecx
  int v7; // r10d
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  int v12; // r9d
  __int64 v13; // rax
  int v14; // ecx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax

  memset_0(a2, 0, 0x188uLL);
  v4 = a2 + 2;
  v5 = a1[19];
  v6 = 0;
  v7 = *(_DWORD *)(a1[24] + 24LL);
  if ( v5 != -1 )
  {
    v8 = a1[17];
    v4 = a2 + 14;
    v9 = v5 & 0xFFFFFFFFFFFFFE00uLL;
    v10 = v8;
    if ( v9 > v8 )
      v10 = v9;
    *((_QWORD *)a2 + 5) = v10;
    v11 = a1[19] - v10;
    a2[8] = v7;
    *((_QWORD *)a2 + 6) = v11 + 1;
    v12 = *a2 + 1;
    *a2 = v12;
    if ( v9 > v8 )
    {
      v13 = a1[17];
      if ( (v13 & 0x1FF) != 0 )
      {
        *((_QWORD *)a2 + 11) = v13;
        v14 = *((_DWORD *)a1 + 34);
        a2[20] = v7;
        *((_QWORD *)a2 + 12) = 512LL - (v14 & 0x1FF);
        v12 = ++*a2;
        v4 = a2 + 26;
      }
    }
    v15 = a1[20];
    v6 = v12;
    v16 = a1[19];
    if ( v16 < v15 && v15 != -1LL )
    {
      v17 = v16 & 0xFFFFFFFFFFFFFE00uLL;
      v18 = (a1[17] + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
      if ( v18 < v17 )
      {
        *((_QWORD *)v4 + 4) = v18;
        *((_QWORD *)v4 + 5) = v17 - v18;
        v4[6] = v7;
        v6 = ++*a2;
        v4 += 12;
      }
    }
  }
  v19 = a1[20];
  if ( v19 != -1LL )
  {
    v20 = a1[19];
    if ( v19 >= v20 || v20 == -1LL )
    {
      v21 = a1[20];
      v22 = 512LL;
    }
    else
    {
      v21 = (a1[17] + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
      v22 = v19 - v21 + 512;
    }
    *((_QWORD *)v4 + 4) = v21;
    *((_QWORD *)v4 + 5) = v22;
    v4[6] = v7;
    v6 = ++*a2;
  }
  if ( v6 )
    qsort(a2 + 2, v6, 0x30uLL, (int (__cdecl *)(const void *, const void *))MxConsumedBootDescriptorSort);
}
