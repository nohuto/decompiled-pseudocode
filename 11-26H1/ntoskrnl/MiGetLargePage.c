/*
 * XREFs of MiGetLargePage @ 0x1405209D4
 * Callers:
 *     MiGetLargePagesForChain @ 0x140283FC4 (MiGetLargePagesForChain.c)
 *     MiGetClusterPage @ 0x140508040 (MiGetClusterPage.c)
 *     MiPrefetchPreallocatePages @ 0x1406FBE0C (MiPrefetchPreallocatePages.c)
 *     MiProcessVaContiguityInformation @ 0x1407104C0 (MiProcessVaContiguityInformation.c)
 *     MiSoftFaultClusterTradeGetPage @ 0x140717154 (MiSoftFaultClusterTradeGetPage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiZeroLargePage @ 0x1402A0F54 (MiZeroLargePage.c)
 *     MiIssuePageHeatList @ 0x1402D58BC (MiIssuePageHeatList.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiPerformOnDemandLargePageCoalesce @ 0x1403D2D74 (MiPerformOnDemandLargePageCoalesce.c)
 *     MiInitializePageHeatList @ 0x1404655D0 (MiInitializePageHeatList.c)
 *     MiConvertBaseLargePage @ 0x140476F40 (MiConvertBaseLargePage.c)
 *     MiAddPageToHeatList @ 0x14048AF80 (MiAddPageToHeatList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiGetLargePage(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        _QWORD *a7,
        __int64 a8)
{
  __int64 v9; // rbx
  __int64 v11; // r14
  unsigned int v12; // edi
  __int64 v13; // r15
  char v14; // dl
  __int64 v15; // rbx
  unsigned int v16; // r8d
  volatile signed __int32 *v17; // rcx
  unsigned int v18; // ebx
  __int64 Page; // r11
  int v20; // r13d
  int v21; // r15d
  __int64 v22; // rbx
  __int64 v23; // rax
  int v25; // r15d
  _DWORD *v26; // r14
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r11
  bool v30; // zf
  unsigned int v31; // r15d
  unsigned __int64 v32; // rdx
  unsigned __int8 CurrentIrql; // di
  unsigned int v34; // [rsp+30h] [rbp-C9h] BYREF
  unsigned int v35; // [rsp+34h] [rbp-C5h]
  int v36; // [rsp+38h] [rbp-C1h]
  int v37; // [rsp+3Ch] [rbp-BDh] BYREF
  _QWORD *v38; // [rsp+40h] [rbp-B9h]
  __int64 v39; // [rsp+48h] [rbp-B1h]
  __int128 v40; // [rsp+50h] [rbp-A9h] BYREF
  _BYTE v41[144]; // [rsp+60h] [rbp-99h] BYREF

  v9 = a3;
  v39 = a8;
  v38 = a7;
  v11 = a4;
  v35 = a3;
  memset_0(v41, 0, sizeof(v41));
  v37 = 0;
  v34 = (a6 >> 4) & 1;
  v12 = v34 | 0x33400;
  v36 = 0;
  v40 = 0LL;
  if ( (a6 & 2) != 0 || (a6 & 4) == 0 )
    v12 = v34 | 0x33410;
  v13 = v9;
  v14 = v9;
  v15 = MiPageSizes[v9];
  MiInitializePageColorBase(0LL, v14, v11 + 1, (__int64)&v40);
  if ( a2 )
  {
    v17 = &v37;
    v37 = a2 / (v15 << 12);
  }
  else
  {
    v17 = (volatile signed __int32 *)(a1[2] + ((v13 + 55 * v11) << 10));
  }
  v16 = DWORD2(v40) & 0xFFF3FFFF | ((a5 & 3) << 18);
  v18 = v16 ^ (unsigned __int8)(v16 ^ _InterlockedExchangeAdd(v17, 1u));
  Page = MiGetPage((__int64)a1, v18, v12);
  if ( Page == -1 )
  {
    v20 = v36;
    do
    {
      v21 = (v18 >> 15) & 1;
      if ( v38 && !v20 && (unsigned int)MiPerformOnDemandLargePageCoalesce(a1, v35, v11, v21, v38) )
      {
        v36 = 1;
        v20 = 1;
      }
      else
      {
        if ( v21 || (a6 & 1) != 0 )
          return 0LL;
        v18 |= 0x8000u;
      }
      Page = MiGetPage((__int64)a1, v18, v12);
    }
    while ( Page == -1 );
  }
  v22 = 48 * Page - 0x220000000000LL;
  v23 = *(_QWORD *)(v22 + 16);
  if ( qword_140E2D8C0 && (v23 & 0x10) == 0 )
    HIDWORD(v23) &= HIDWORD(qword_140E2D8C8);
  if ( HIDWORD(v23) != -3 || (v25 = 1, (stru_140E366D8.WaitRegister.Flags & 1) == 0) )
    v25 = 0;
  v26 = v41;
  MiInitializePageHeatList((__int64)v41, 1, 0, 16);
  v30 = v25 == 0;
  v31 = v35;
  if ( !v30 )
  {
    v26 = v41;
    if ( v39 )
      v26 = (_DWORD *)v39;
    MiAddPageToHeatList(v26, v29, v35);
    if ( v26[1] && v26 == (_DWORD *)v41 )
      MiIssuePageHeatList(v26, v32);
    *(_QWORD *)(v22 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v22 + 16), 0);
  }
  if ( (a6 & 4) == 0 && (*(_QWORD *)(v22 + 16) & 0x3E0LL) != 0 )
  {
    if ( v26[1] )
      MiIssuePageHeatList(v26, v27);
    MiZeroLargePage(0LL, v22, v31, a5, v34);
    *(_QWORD *)(v22 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
  }
  if ( (v12 & 1) != 0 )
  {
    CurrentIrql = 17;
    v34 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v34);
      while ( *(__int64 *)(v22 + 24) < 0 );
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v27) = 2;
      LOBYTE(v28) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v28, v27);
    }
    v34 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v34);
      while ( *(__int64 *)(v22 + 24) < 0 );
    }
  }
  MiConvertBaseLargePage(v22, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v22;
}
