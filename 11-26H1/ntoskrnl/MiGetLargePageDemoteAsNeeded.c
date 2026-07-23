/*
 * XREFs of MiGetLargePageDemoteAsNeeded @ 0x1403D1EE0
 * Callers:
 *     MiGetFastLargePages @ 0x1403D0A5C (MiGetFastLargePages.c)
 *     MiGetLargePageChain @ 0x1403D1D00 (MiGetLargePageChain.c)
 *     MiFindLargeNodePage @ 0x1403D3884 (MiFindLargeNodePage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiAssignDefaultChannel @ 0x140283900 (MiAssignDefaultChannel.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiPageIndexToMoveInProgress @ 0x1403D21F0 (MiPageIndexToMoveInProgress.c)
 *     MiWaitForPageMoveComplete @ 0x1403D2500 (MiWaitForPageMoveComplete.c)
 *     MiPerformOnDemandLargePageCoalesce @ 0x1403D2D74 (MiPerformOnDemandLargePageCoalesce.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiGetLargePageDemoteAsNeeded(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // r15
  int v9; // r13d
  __int64 Page; // r12
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rbp
  unsigned __int8 v18; // al
  int v19; // r9d
  int v20; // ecx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v24; // rbx
  unsigned __int8 CurrentIrql; // di
  int v26; // eax
  __int64 v27; // [rsp+30h] [rbp-58h]
  __int128 v28; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v31; // [rsp+A8h] [rbp+20h] BYREF

  v31 = a4;
  v6 = a2;
  v7 = (a2 >> 9) & 0x3F;
  v8 = HIWORD(a2) & 3;
  v9 = 0;
  Page = -1LL;
  v27 = *(_QWORD *)(a1 + 16) + 56320LL * v7;
  v11 = a3 | 0x33400;
  v12 = MiPageIndexToMoveInProgress(1LL);
  v17 = *(_QWORD *)(v16 + 8LL * v12 + 14104);
  while ( (unsigned int)v8 <= (unsigned int)v15 )
  {
    if ( a5 )
    {
      v6 ^= (unsigned __int8)(v6 ^ (a5 / (MiPageSizes[v8] << 12)));
    }
    else
    {
      v28 = 0LL;
      MiInitializePageColorBase(0LL, v8, v7 + 1, (__int64)&v28);
      v18 = MiAssignDefaultChannel(((v6 & 0x8000 | DWORD2(v28) & 0xFFF37FFF | a2 & 0xC0000) >> 9) & 0x3F);
      v20 = v19 ^ ((unsigned __int16)v19 ^ (unsigned __int16)(v18 << 8)) & 0x100;
      DWORD2(v28) = v20;
      v6 = v20 ^ (unsigned __int8)(v20 ^ _InterlockedExchangeAdd(
                                           (volatile signed __int32 *)(v27 + ((unsigned __int64)(unsigned int)v8 << 10)),
                                           1u));
    }
    Page = MiGetPage(a1, v6, v11);
    if ( Page != -1 )
      break;
    if ( !v9 )
    {
      v9 = 1;
      v26 = MiPerformOnDemandLargePageCoalesce(a1, v8, v7, (v6 >> 15) & 1, a6);
      v15 = v31;
      if ( v26 )
        continue;
    }
    v22 = MiWaitForPageMoveComplete(v27, 1LL, v21, v15);
    LODWORD(v15) = v31;
    v14 = v22 ^ v17;
    if ( ((v22 ^ v17) & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v17 = v22;
    }
    else
    {
      if ( (_DWORD)v8 == v31 )
        return 0LL;
      v8 = (unsigned int)(v8 + 1);
    }
    v9 = 0;
  }
  v24 = 48 * Page - 0x220000000000LL;
  if ( (v11 & 1) != 0 )
  {
    CurrentIrql = 17;
    v31 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v31);
      while ( *(__int64 *)(v24 + 24) < 0 );
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v13) = 2;
      LOBYTE(v14) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v14, v13);
    }
    v31 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v31);
      while ( *(__int64 *)(v24 + 24) < 0 );
    }
  }
  *(_QWORD *)(v24 + 24) = *(_QWORD *)(v24 + 24) & 0xC000000000000000uLL | 1;
  *(_DWORD *)(v24 + 32) = *(_DWORD *)(v24 + 32) & 0xFFFF0000 | 2;
  _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return 48 * Page - 0x220000000000LL;
}
