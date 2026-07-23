/*
 * XREFs of MiRebuildPageTableAges @ 0x14029D740
 * Callers:
 *     MiSetVaAgeListEx @ 0x14029C850 (MiSetVaAgeListEx.c)
 *     MiRemoveWsleList @ 0x1402CC5B0 (MiRemoveWsleList.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1402CCE50 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiAddWorkingSetEntries @ 0x1402CDB00 (MiAddWorkingSetEntries.c)
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 * Callees:
 *     MiCountWslesInPageTableRange @ 0x14029D9E0 (MiCountWslesInPageTableRange.c)
 *     MiInsertActivePageTableLinksTail @ 0x1402CE660 (MiInsertActivePageTableLinksTail.c)
 *     MiRemoveActivePageTableLinks @ 0x1402CE8C0 (MiRemoveActivePageTableLinks.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall MiRebuildPageTableAges(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v4; // r10
  unsigned __int64 *v6; // r9
  int v7; // r11d
  unsigned __int64 v8; // r8
  __int64 v9; // r14
  int v10; // eax
  int v11; // r8d
  unsigned __int64 v12; // rbx
  unsigned __int8 v13; // di
  int v14; // ebp
  __int64 v15; // rbx
  __int64 HasShadow; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  _OWORD v22[2]; // [rsp+30h] [rbp-58h] BYREF

  v4 = a2;
  v6 = (unsigned __int64 *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v7 = 2109657088;
  v8 = *v6;
  if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    HasShadow = MiPteHasShadow(0xFFFFF6FB40000000uLL, *v6, v8);
    if ( HasShadow )
    {
      v19 = *(_QWORD *)(HasShadow + 1288);
      if ( v19 )
      {
        v20 = *(_QWORD *)(v19 + 8 * ((v18 >> 3) & 0x1FF));
        if ( (v20 & 0x20) != 0 )
          v17 |= 0x20uLL;
        v8 = v17 | 0x42;
        if ( (v20 & 0x42) == 0 )
          v8 = v17;
      }
    }
  }
  v9 = 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  LOBYTE(v10) = (a3 & 1) == 0;
  if ( ((((*(_QWORD *)v9 >> 49) & 0x3FF) != 0) & (unsigned __int8)v10) == 0 )
  {
    memset(v22, 0, sizeof(v22));
    v11 = 512;
    v12 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( ((v12 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
    {
      MiCountWslesInPageTableRange(
        a1,
        v7 + 8 * (((unsigned __int64)qword_140E2DFC0 >> 39) & 0x1FF),
        ((__int64)(8 * (((unsigned __int64)qword_140E2DFD0 >> 39) & 0x1FF)
                 - 8 * (((unsigned __int64)qword_140E2DFC0 >> 39) & 0x1FF)) >> 3)
      + 1,
        (unsigned int)v22,
        a3);
      v11 = 256;
    }
    MiCountWslesInPageTableRange(a1, v12 & 0xFFFFF000, v11, (unsigned int)v22, a3);
    v13 = 8;
    while ( v13 )
    {
      v14 = *((_DWORD *)v22 + --v13);
      if ( v14 )
      {
        v15 = *(_QWORD *)v9;
        if ( (*(_DWORD *)(v9 + 36) & 0x4000000) != 0 )
          MiRemoveActivePageTableLinks(a1, v9, 0LL);
        *(_QWORD *)v9 = v15 & 0xC001FFFFFFFFFFFFuLL | ((v14 & 0x3FF | ((unsigned __int64)(v13 & 7) << 10)) << 49);
        LOBYTE(v10) = MiInsertActivePageTableLinksTail(a1, v9, v13, 0LL);
        return v10;
      }
    }
    v10 = *(_DWORD *)(v9 + 36);
    if ( (v10 & 0x4000000) != 0 )
      LOBYTE(v10) = MiRemoveActivePageTableLinks(a1, v9, 0LL);
  }
  return v10;
}
