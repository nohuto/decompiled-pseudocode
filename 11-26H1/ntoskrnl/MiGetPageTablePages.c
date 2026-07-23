/*
 * XREFs of MiGetPageTablePages @ 0x14033BE80
 * Callers:
 *     MiCreateSystemPageTable @ 0x14033B880 (MiCreateSystemPageTable.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F720C (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x14087BD54 (MmCreateShadowMapping.c)
 * Callees:
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiSufficientAvailablePages @ 0x14028E010 (MiSufficientAvailablePages.c)
 *     MiFreePageChain @ 0x140292004 (MiFreePageChain.c)
 *     MiInsertPageChainHead @ 0x14033C0E0 (MiInsertPageChainHead.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 *     MiObtainSystemCharges @ 0x14033CB70 (MiObtainSystemCharges.c)
 *     MiSetPfnTbFlushStamp @ 0x14036D880 (MiSetPfnTbFlushStamp.c)
 *     MiReturnSystemCharges @ 0x1404AC8F8 (MiReturnSystemCharges.c)
 */

__int64 __fastcall MiGetPageTablePages(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  __int16 v5; // r9
  __int64 v8; // rbp
  int v9; // r12d
  int v10; // r14d
  int v11; // ebx
  unsigned __int64 i; // r8
  int v13; // edx
  unsigned int v14; // edi
  __int64 SlabPage; // rax
  __int64 v16; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // ebx
  unsigned __int64 v21; // [rsp+70h] [rbp+8h]
  __int16 v22; // [rsp+80h] [rbp+18h]

  v22 = a3;
  v5 = a3;
  *(_OWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 16) = 0LL;
  v8 = *(_QWORD *)(a1 + 96);
  if ( (*(_DWORD *)(a1 + 128) & 8) != 0 || !*(_QWORD *)(v8 + 23448) )
  {
    v9 = 0;
  }
  else
  {
    if ( !(unsigned int)MiObtainSystemCharges(*(_QWORD *)(a1 + 96), a2, *(unsigned int *)(a1 + 120), a3) )
      return 3221225773LL;
    *(_QWORD *)(a1 + 104) += a2;
    v9 = 1;
    v5 = v22;
  }
  v10 = ((*(_DWORD *)(a1 + 128) & 0x400) != 0) + 12;
  v11 = (*(_DWORD *)(a1 + 128) & 0x400) != 0 ? 4272 : 176;
  if ( (v5 & 2) != 0 )
  {
    v11 |= 1u;
    v10 |= 0x10u;
  }
  for ( i = 0LL; ; i = v21 + 1 )
  {
    v21 = i;
    if ( i >= a2 )
      return 0LL;
    v13 = *(_DWORD *)(a1 + 160);
    v14 = v13 ^ (unsigned __int8)(v13 ^ _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 152), 1u));
    if ( (v5 & 0x2000) != 0 )
      break;
    if ( (v5 & 1) == 0 || i )
    {
      SlabPage = MiGetSlabPage(v8, 7, v14, v10, 0LL, 0);
      if ( SlabPage != -1 )
        goto LABEL_12;
      if ( (MiFlags & 0x1000000000LL) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(v8 + 17160));
      break;
    }
    if ( *(_DWORD *)(a1 + 120) != 3 )
      break;
    SlabPage = MiGetSlabPage(v8, 7, v14, v10, 0LL, 0);
    if ( SlabPage == -1 )
      break;
LABEL_12:
    v16 = 48 * SlabPage - 0x220000000000LL;
    MiSetPfnTbFlushStamp(v16, 0LL, 0LL);
    MiInsertPageChainHead(a4, v16);
    v5 = v22;
  }
  SlabPage = MiGetPage(v8, v14, v11);
  if ( SlabPage != -1 )
    goto LABEL_12;
  if ( (*(_DWORD *)(a1 + 128) & 0x10) != 0 )
  {
    if ( (unsigned int)MiSufficientAvailablePages(v8, 0x29uLL) )
    {
      v20 = v11 | 0x200;
      SlabPage = MiGetPage(v8, v14, v20);
      v11 = v20 & 0xFFFFFDFF;
      if ( SlabPage != -1 )
        goto LABEL_12;
    }
  }
  if ( v9 )
  {
    MiReturnSystemCharges(v8, a2, a2, *(unsigned int *)(a1 + 120));
    *(_QWORD *)(a1 + 104) -= a2;
  }
  MiFreePageChain(a4, v18, v19);
  return 3221225495LL;
}
