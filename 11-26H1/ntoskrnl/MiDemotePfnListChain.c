/*
 * XREFs of MiDemotePfnListChain @ 0x1407164C4
 * Callers:
 *     MiCreateSlabEntry @ 0x140206364 (MiCreateSlabEntry.c)
 *     MiMapUserLargePages @ 0x1402F1DE0 (MiMapUserLargePages.c)
 *     MiPopLargePfnList @ 0x1404E6218 (MiPopLargePfnList.c)
 *     MiMakeLargePageTable @ 0x14052D62C (MiMakeLargePageTable.c)
 *     MiMakeMdlPfnsDesiredSize @ 0x1406F36C0 (MiMakeMdlPfnsDesiredSize.c)
 *     MiFillUserPhysicalMdl @ 0x1407061B4 (MiFillUserPhysicalMdl.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiSimpleUnlinkPageEx @ 0x14028D6D0 (MiSimpleUnlinkPageEx.c)
 *     MiSimpleInsertPage @ 0x1403CF00C (MiSimpleInsertPage.c)
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 *     MiUpdateDemotedSubPage @ 0x14042BCD0 (MiUpdateDemotedSubPage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDemotePfnListChain(__int64 a1, int a2)
{
  int v2; // r13d
  __int64 result; // rax
  unsigned int i; // ebx
  __int64 *v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  __int64 v9; // r15
  unsigned __int8 CurrentIrql; // di
  char v11; // r9
  unsigned __int64 v12; // rdx
  __int64 v13; // r12
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rtt
  __int64 v18; // rsi
  __int64 v19; // rbp
  unsigned __int64 v20; // r14
  __int64 v21; // rbp
  __int64 v22; // rbx
  unsigned __int8 v23; // [rsp+20h] [rbp-58h]
  __int64 v24; // [rsp+80h] [rbp+8h]
  unsigned int v26; // [rsp+90h] [rbp+18h]
  unsigned __int64 v27; // [rsp+98h] [rbp+20h] BYREF

  v24 = a1;
  v2 = a2;
  LODWORD(result) = a2 - 1;
  do
  {
    for ( i = result; ; --i )
    {
      v5 = (__int64 *)(a1 + 24LL * i);
      result = 0x3FFFFFFFFFLL;
      v6 = *v5;
      if ( *v5 != 0x3FFFFFFFFFLL )
        break;
      if ( !i )
        return result;
      a1 = v24;
    }
    MiSimpleUnlinkPageEx((__int64)v5, *v5);
    v7 = 48 * v6;
    v8 = MiPageSizes[i];
    v9 = 48 * v6 - 0x220000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    v23 = CurrentIrql;
    if ( i == 1 )
    {
      v11 = 6;
      if ( CurrentIrql != 2 )
        v11 = 2;
      v12 = (__int64)((unsigned __int128)(v7 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
      MiUpdateLargePageBitMap(
        *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)),
        (v12 >> 63) + v12,
        v8,
        v11);
    }
    v13 = i + 1;
    v14 = MiPageSizes[v13];
    v17 = v8;
    v15 = v8 / v14;
    v16 = v8 % v14;
    v18 = v9 + 48 * v8;
    v27 = v17 / v14;
    if ( CurrentIrql != 2 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v16) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v16);
        v15 = v27;
      }
      v23 = CurrentIrql;
    }
    v26 = 0;
    if ( v15 )
    {
      v19 = 3 * v14;
      v20 = v27;
      v21 = 16 * v19;
      v22 = v18 + 24;
      do
      {
        v18 -= v21;
        LODWORD(v27) = 0;
        v22 -= v21;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v27);
          while ( *(__int64 *)v22 < 0 );
        }
        MiUpdateDemotedSubPage(v9, v18, (unsigned int)v13);
        if ( v18 != v9 )
        {
          *(_DWORD *)(v22 + 8) = *(_DWORD *)(v22 + 8) & 0xFFF8FFFF | 0x50000;
          *(_QWORD *)(v22 - 8) = *(_QWORD *)(v9 + 16);
        }
        MiSimpleInsertPage(v24 + 24 * v13, (v22 + 0x21FFFFFFFFE8LL) / 48, 1);
        _InterlockedAnd64((volatile signed __int64 *)v22, 0x7FFFFFFFFFFFFFFFuLL);
        ++v26;
      }
      while ( v26 < v20 );
      CurrentIrql = v23;
      v2 = a2;
    }
    if ( CurrentIrql != 2 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    a1 = v24;
    result = (unsigned int)(v2 - 1);
  }
  while ( (_DWORD)v13 != v2 );
  return result;
}
