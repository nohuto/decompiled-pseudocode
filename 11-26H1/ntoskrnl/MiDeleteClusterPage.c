/*
 * XREFs of MiDeleteClusterPage @ 0x1403D0168
 * Callers:
 *     MiDecommitFreePagesTail @ 0x1402BC510 (MiDecommitFreePagesTail.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiIsPageOnBadList @ 0x14028EF30 (MiIsPageOnBadList.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiClearPfnReuseFields @ 0x14031C280 (MiClearPfnReuseFields.c)
 *     MiConvertLockedSmallPageToLarge @ 0x1403CFBF0 (MiConvertLockedSmallPageToLarge.c)
 *     MiClearPfnImageVerified @ 0x1404691E4 (MiClearPfnImageVerified.c)
 */

__int64 __fastcall MiDeleteClusterPage(unsigned __int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  ULONG_PTR v3; // rsi
  __int64 v5; // rbx
  ULONG_PTR v6; // rbp
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int64 v13; // r15
  unsigned int *v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // ebp
  struct _KEVENT *v19; // r12
  _DWORD *i; // rdi
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  ULONG_PTR v25; // rcx
  __int64 v26; // rbx
  __int64 j; // rcx
  int v29; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-60h]
  ULONG_PTR v31; // [rsp+30h] [rbp-58h]
  unsigned __int64 ContainingPageTable; // [rsp+38h] [rbp-50h]
  _OWORD v33[4]; // [rsp+40h] [rbp-48h] BYREF

  v30 = a1;
  v31 = a3;
  v33[0] = 0LL;
  v3 = a3;
  ContainingPageTable = MiGetContainingPageTable(a2);
  v5 = 48 * a3 - 0x220000000000LL;
  v6 = a3 + 16;
  v7 = v5;
  v8 = v5;
  MiPageToNode(a3);
  v9 = -1LL;
  v10 = v5 + 24;
  LODWORD(v11) = 1;
  while ( v3 < v6 )
  {
    if ( v3 == a3 )
    {
      v29 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v29);
        while ( *(__int64 *)v10 < 0 );
      }
      LOWORD(v11) = 1;
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0x3FuLL) )
    {
      goto LABEL_41;
    }
    v9 = v3;
    if ( (*(_BYTE *)(v10 + 10) & 7) != 6 )
      MiBadShareCount(v5);
    if ( (unsigned __int16)*(_DWORD *)(v10 + 8) != (_WORD)v11
      || ((*(_DWORD *)(v10 + 8) >> 30) & (unsigned __int8)v11) != 0
      || MiIsPageOnBadList(v5) )
    {
      goto LABEL_41;
    }
    v3 += v11;
    v5 += 48LL;
    v12 = (*(_DWORD *)(v10 + 8) >> 22) & 3;
    *((_DWORD *)v33 + v12) += v11;
    v10 += 48LL;
  }
  if ( v3 == v6 )
  {
    v13 = v5;
    v14 = (unsigned int *)v33;
    v15 = v5 - 768;
    v16 = 0;
    v17 = 0;
    v18 = v11;
    do
    {
      if ( *v14 && v17 != 3 && v16 < *v14 )
      {
        v16 = *v14;
        v18 = v17;
      }
      v17 += v11;
      ++v14;
    }
    while ( v17 < 4 );
    v19 = (struct _KEVENT *)v30;
    for ( i = (_DWORD *)(v15 + 32); ; i += 12 )
    {
      *(_DWORD *)(v15 + 32) = *i & 0xFFFF0000 | 2;
      if ( ((*(_QWORD *)(v15 + 40) >> 60) & 7) == 3 )
      {
        MiClearPfnImageVerified(v15, 12LL);
        LODWORD(v11) = 1;
      }
      v30 = *(_QWORD *)(v15 + 16);
      if ( (v30 & 0x400) != 0 )
        goto LABEL_40;
      v21 = v30;
      v22 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      if ( (((unsigned __int8)v30 >> 3) & (unsigned __int8)v11) == 0 )
      {
        v23 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        if ( (((unsigned __int8)v30 >> 2) & (unsigned __int8)v11) != 0 )
          v23 = v30;
        v21 = v23;
      }
      if ( v21 )
        break;
LABEL_27:
      *(_QWORD *)(v15 + 16) = v22;
      if ( ((*(_DWORD *)(v15 + 32) >> 22) & 3) != v18 )
        MiChangePageAttribute(v15, v18);
      if ( (*(_BYTE *)(v15 + 35) & 0x10) != 0 )
        *(_DWORD *)(v15 + 32) &= ~0x10000000u;
      MiClearPfnReuseFields(v15);
      MiConvertLockedSmallPageToLarge(v24, v7, 2, 0);
      if ( v15 != v7 )
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v15 += 48LL;
      if ( v15 >= v13 )
      {
        v25 = v31;
        *(_QWORD *)(v7 + 24) = *(_QWORD *)(v8 + 24) & 0xC000000000000000uLL;
        *(_DWORD *)(v7 + 32) = *(_DWORD *)(v8 + 32) & 0xFFFF0000;
        MiInsertPageInFreeOrZeroedList(v25);
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v26 = 48 * ContainingPageTable;
        v29 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 - 0x220000000000LL + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v29);
          while ( *(__int64 *)(v26 - 0x220000000000LL + 24) < 0 );
        }
        *(_QWORD *)(v26 - 0x220000000000LL + 24) = (*(_QWORD *)(v26 - 0x220000000000LL + 24) - 16LL) ^ (*(_QWORD *)(v26 - 0x220000000000LL + 24) ^ (*(_QWORD *)(v26 - 0x220000000000LL + 24) - 16LL)) & 0xC000000000000000uLL;
        _InterlockedAnd64((volatile signed __int64 *)(v26 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return 1LL;
      }
      LODWORD(v11) = 1;
    }
    MiReleasePageFileInfo(v19, v21, (unsigned int)v11);
LABEL_40:
    v22 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    goto LABEL_27;
  }
LABEL_41:
  if ( v9 != -1 )
  {
    for ( j = 48 * v9 - 0x220000000000LL; ; j -= 48LL )
    {
      _InterlockedAnd64((volatile signed __int64 *)(j + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( j == v7 )
        break;
    }
  }
  return 0LL;
}
