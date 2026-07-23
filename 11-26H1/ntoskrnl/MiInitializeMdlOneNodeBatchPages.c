/*
 * XREFs of MiInitializeMdlOneNodeBatchPages @ 0x1406F32E0
 * Callers:
 *     MiInitializeMdlBatchPages @ 0x14050888C (MiInitializeMdlBatchPages.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiZeroAndConvertPage @ 0x1402A0A00 (MiZeroAndConvertPage.c)
 *     MiUpdateCacheAttributeListsForPage @ 0x1402A12B8 (MiUpdateCacheAttributeListsForPage.c)
 *     MiPfnZeroingNeeded @ 0x14033CB30 (MiPfnZeroingNeeded.c)
 *     MiCreatePageChains @ 0x1403CD4B8 (MiCreatePageChains.c)
 *     MiInsertMdlPageNeedsZero @ 0x1403CE638 (MiInsertMdlPageNeedsZero.c)
 *     MiChangePageAttributeAndZeroBatch @ 0x140711F9C (MiChangePageAttributeAndZeroBatch.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall MiInitializeMdlOneNodeBatchPages(__int64 a1, ULONG_PTR *a2, __int64 a3)
{
  ULONG_PTR *v3; // rdi
  __int64 v4; // r12
  void *result; // rax
  char v7; // dl
  __int64 v8; // r8
  __int64 *v9; // rax
  unsigned int v10; // ebp
  _DWORD *v11; // rbx
  __int64 v12; // rcx
  unsigned int v13; // r13d
  int v14; // esi
  ULONG_PTR v15; // r14
  __int64 v16; // rdi
  int v17; // r12d
  __int64 v18; // rbx
  unsigned int v19; // eax
  __int64 PageChains; // rax
  int v21; // [rsp+30h] [rbp-D8h]
  __int64 v22; // [rsp+38h] [rbp-D0h]
  ULONG_PTR *v23; // [rsp+40h] [rbp-C8h]
  __int64 v24; // [rsp+48h] [rbp-C0h]
  __int64 v25; // [rsp+50h] [rbp-B8h]
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  char v27[88]; // [rsp+68h] [rbp-A0h] BYREF

  v3 = a2;
  v23 = a2;
  v24 = a3;
  v4 = a3;
  result = memset_0(v27, 0, sizeof(v27));
  v21 = *(_DWORD *)(a1 + 56);
  v7 = v21;
  if ( (v21 & 0x800) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 48);
    v9 = &v26;
    v10 = *(_DWORD *)(a1 + 144);
    v11 = 0LL;
    v25 = v8;
    v12 = 4LL;
    do
    {
      *v9 = 0x7FFFFFFFFFLL;
      v9 += 3;
      --v12;
    }
    while ( v12 );
    v13 = ((v21 & 8 | 4u) >> 2) | 4;
    if ( (*(_DWORD *)(a1 + 148) & 4) == 0 )
      v13 = (v21 & 8 | 4u) >> 2;
    if ( !v4 )
      return (void *)MiChangePageAttributeAndZeroBatch(&v26, v11, v10);
    v14 = (*(_DWORD *)(a1 + 148) & 4) != 0 ? 2 : 0;
    while ( 1 )
    {
      v15 = *v3;
      v16 = 48 * *v3 - 0x220000000000LL;
      if ( !v8 )
        goto LABEL_21;
      v22 = v8;
      v17 = v7 & 1;
      do
      {
        v14 &= ~1u;
        if ( v17 || !MiPfnZeroingNeeded(v16, v10) )
        {
          if ( ((*(_DWORD *)(v16 + 32) >> 22) & 3) == v10 )
            goto LABEL_19;
        }
        else
        {
          if ( !v11 )
          {
            v18 = *(_QWORD *)a1;
            v19 = MiPageToNode(v15);
            PageChains = MiCreatePageChains(v18, v19, v10, 0LL, 1);
            v11 = (_DWORD *)PageChains;
            if ( !PageChains )
            {
              MiZeroAndConvertPage(0LL, v16, 3, v10, v13);
              goto LABEL_19;
            }
            *(_DWORD *)(PageChains + 16) = v13;
          }
          MiInsertMdlPageNeedsZero(v11, v16, 1LL);
          v14 |= 1u;
        }
        MiUpdateCacheAttributeListsForPage(&v26, v16, v10, v14);
LABEL_19:
        ++v15;
        v16 += 48LL;
        --v22;
      }
      while ( v22 );
      v4 = v24;
      v7 = v21;
      v8 = v25;
LABEL_21:
      v3 = v23 + 1;
      --v4;
      ++v23;
      v24 = v4;
      if ( !v4 )
        return (void *)MiChangePageAttributeAndZeroBatch(&v26, v11, v10);
    }
  }
  return result;
}
