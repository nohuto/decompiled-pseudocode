/*
 * XREFs of MiPfnRangeIsZero @ 0x1406EE840
 * Callers:
 *     MiFreedUnusedPfnPagesDpc @ 0x1406ED820 (MiFreedUnusedPfnPagesDpc.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiFreeLargeZeroPages @ 0x1402A4B50 (MiFreeLargeZeroPages.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiTransformValidPteInPlace @ 0x1403444D8 (MiTransformValidPteInPlace.c)
 *     MiSimpleInsertPage @ 0x1403CF00C (MiSimpleInsertPage.c)
 *     MiInitializeLargePfnList @ 0x14045A7B0 (MiInitializeLargePfnList.c)
 *     MiPreparePfnDatabasePageForFree @ 0x1406EECD0 (MiPreparePfnDatabasePageForFree.c)
 *     MiClearSystemAccessBits @ 0x1406F7100 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F720C (MiDemoteValidLargePageOneLevel.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiPfnRangeIsZero(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r15
  int v6; // eax
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // ecx
  __int64 *v16; // r12
  unsigned __int64 v17; // rbx
  ULONG_PTR ValidPte; // rax
  _QWORD *v19; // rcx
  unsigned int i; // edx
  unsigned __int64 LeafVa; // rax
  int v22; // [rsp+30h] [rbp-B8h]
  _QWORD v23[12]; // [rsp+40h] [rbp-A8h] BYREF

  result = (__int64)memset_0(v23, 0, sizeof(v23));
  if ( a2 > qword_140E2D890 )
    a2 = qword_140E2D890;
  if ( a1 < a2 )
  {
    MiInitializeLargePfnList((__int64)v23);
    v5 = 0LL;
    while ( 1 )
    {
      v6 = MI_IS_PHYSICAL_ADDRESS(a1);
      v7 = v6;
      v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v9 = 1LL;
      LODWORD(v10) = 3;
      if ( v6 > 0 )
      {
        v11 = (unsigned int)v6;
        do
        {
          LODWORD(v10) = v10 - 1;
          v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v11;
        }
        while ( v11 );
        if ( (_DWORD)v10 != 3 )
        {
          v10 = (unsigned int)(v10 - 1);
          v9 = MiPageSizes[v10];
        }
      }
      if ( (((v9 << 12) - 1) & a1) == 0 && a2 - a1 >= v9 << 12 )
        break;
      if ( !(unsigned int)MiDemoteValidLargePageOneLevel(a1) )
      {
        LeafVa = MiGetLeafVa(v8 + 8);
LABEL_36:
        a1 = LeafVa;
      }
      if ( a1 >= a2 )
      {
        MiFreeLargeZeroPages((__int64)&MiSystemPartition, (__int64)v23, 0);
        result = MiReleaseNonPagedResources((__int64)&MiSystemPartition, v5);
        _InterlockedAdd64((volatile signed __int64 *)&stru_140E366D8.WaitBlock[0].Thread, -v5);
        return result;
      }
    }
    if ( (*(_QWORD *)v8 & 0x20) != 0 && ((unsigned __int8)(1 << v6) & (unsigned __int8)byte_140E2D809) != 0 )
    {
      v12 = 512 - ((v8 >> 3) & 0x1FF);
      v13 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v6 > 0 )
      {
        v14 = (unsigned int)v6;
        do
        {
          v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v14;
        }
        while ( v14 );
      }
      if ( ((v13 ^ v8) & 0xFFFFFFFFF000LL) == 0 )
        v12 = (__int64)(v13 - v8) >> 3;
      MiClearSystemAccessBits(v8, v12, (unsigned int)v6);
    }
    v15 = v7;
    v22 = v7;
    v16 = (__int64 *)&qword_140E36180[v7];
LABEL_21:
    if ( (int)v7 < 3 )
    {
      v17 = *(_QWORD *)v8;
      if ( (_DWORD)v7 != v15 && (v17 & 0x20) != 0 && ((unsigned __int8)(1 << v7) & (unsigned __int8)byte_140E2D809) != 0 )
        MiClearSystemAccessBits(v8, 1LL, 0LL);
      MiPreparePfnDatabasePageForFree(v8, (unsigned int)v7, (unsigned int)v10);
      v5 += v9;
      MiSimpleInsertPage((__int64)&v23[3 * (unsigned int)v10], (v17 >> 12) & 0xFFFFFFFFFFLL, 2);
      ValidPte = MiMakeValidPte(v8, *v16, (_DWORD)v7 != 0 ? -1476395004 : 536870913);
      MiTransformValidPteInPlace((volatile __int64 *)v8, v8, ValidPte, (_DWORD)v7 != 0 ? 116 : 68, v7);
      v19 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFF000uLL);
      for ( i = 0; ; ++i )
      {
        if ( i >= 0x200 )
        {
          v9 = 1LL;
          LODWORD(v10) = 3;
          v15 = v22;
          v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          LODWORD(v7) = v7 + 1;
          ++v16;
          goto LABEL_21;
        }
        if ( *v19 && ((*v19 >> 12) & 0xFFFFFFFFFFLL) != *v16 )
          break;
        ++v19;
      }
      v8 += 8LL;
    }
    LeafVa = MiGetLeafVa(v8);
    goto LABEL_36;
  }
  return result;
}
