/*
 * XREFs of MxMapVa @ 0x140CFE330
 * Callers:
 *     MxMapPfnRange @ 0x140CFE128 (MxMapPfnRange.c)
 * Callees:
 *     MiFillPhysicalPages @ 0x140288AC0 (MiFillPhysicalPages.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiFillPteHierarchy @ 0x1403A17B0 (MiFillPteHierarchy.c)
 *     MiGetLargePteAddress @ 0x14042D440 (MiGetLargePteAddress.c)
 *     MxMapLargeVa @ 0x1406EC0F4 (MxMapLargeVa.c)
 *     MxGetPage @ 0x140CFD0F0 (MxGetPage.c)
 *     MxMarkPfnChannelHot @ 0x140CFE504 (MxMarkPfnChannelHot.c)
 */

__int64 __fastcall MxMapVa(__int64 a1)
{
  int v2; // ebp
  __int64 i; // rdi
  unsigned __int64 *v4; // r14
  unsigned __int64 LargePteAddress; // rax
  _QWORD *v6; // r10
  __int64 j; // rcx
  __int64 Page; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 *v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v17[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v17, 0, 32);
  v2 = *(_DWORD *)(a1 + 16) != 0 ? 8 : 0;
  MiFillPteHierarchy(*(_QWORD *)a1, v17);
  for ( i = 3LL; ; --i )
  {
    v4 = (unsigned __int64 *)v17[i];
    if ( (*v4 & 1) == 0 )
      break;
    if ( (*v4 & 0x80u) != 0LL )
    {
      LargePteAddress = MiGetLargePteAddress(*(_QWORD *)a1, 1u);
      *(_QWORD *)a1 = MiGetLeafVa(LargePteAddress) + 0x200000;
      return 1LL;
    }
LABEL_16:
    if ( !i )
    {
      *(_QWORD *)a1 += 4096LL;
      return 1LL;
    }
  }
  if ( i == 1 )
  {
    v6 = (_QWORD *)MiGetLargePteAddress(*(_QWORD *)a1, 1u);
    for ( j = 1LL; j; --j )
    {
      if ( *v6 )
        goto LABEL_11;
      ++v6;
    }
    Page = MxGetPage(*(_DWORD *)(a1 + 8), v2 | 1u);
    v9 = Page;
    if ( Page != -1 )
    {
      MxMarkPfnChannelHot(Page);
      if ( *(_DWORD *)(a1 + 16) )
      {
        v13 = (__int64 *)qword_14101FC88;
        v14 = *(_QWORD *)a1 + 0x220000000000LL;
        v15 = v14 >> 21;
        if ( !qword_14101FC88 )
        {
          v13 = qword_14101FC90;
          qword_14101FC80 = 0x80000LL;
          qword_14101FC88 = (__int64)qword_14101FC90;
        }
        if ( v15 < qword_14101FC80 )
          *((_BYTE *)v13 + (v14 >> 24)) |= 1 << (v15 & 7);
      }
      MxMapLargeVa(a1, v9);
      return 1LL;
    }
  }
LABEL_11:
  v10 = MxGetPage(*(_DWORD *)(a1 + 8), v2);
  v11 = v10;
  if ( v10 != -1 )
  {
    MxMarkPfnChannelHot(v10);
    if ( i || *(_DWORD *)(a1 + 12) )
      MiFillPhysicalPages(0LL, v11, v12, 0LL);
    *v4 = MiMakeValidPte((unsigned __int64)v4, v11, i != 0 ? -1744830460 : -1342177276);
    _InterlockedAdd64((volatile signed __int64 *)&stru_140E366D8.WaitBlock[0].Thread, 1uLL);
    goto LABEL_16;
  }
  return 0LL;
}
