/*
 * XREFs of MiTryUnlinkNodeLargePages @ 0x140520D5C
 * Callers:
 *     MiGetFastLargePages @ 0x1403D0A5C (MiGetFastLargePages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     MiPageToChannel @ 0x140294DD0 (MiPageToChannel.c)
 *     MiSimpleInsertPage @ 0x1403CF00C (MiSimpleInsertPage.c)
 *     MiSnapPageMoveInProgress @ 0x1403D24D0 (MiSnapPageMoveInProgress.c)
 *     MiWaitForPageMoveComplete @ 0x1403D2500 (MiWaitForPageMoveComplete.c)
 *     MiConvertBaseLargePage @ 0x140476F40 (MiConvertBaseLargePage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiTryUnlinkNodeLargePages(__int64 a1, ULONG_PTR a2, int a3, __int64 a4, int a5, __int64 a6)
{
  unsigned __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v16; // r12
  __int64 v17; // rsi
  _QWORD *v18; // r15
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+28h] [rbp-50h]
  char v23; // [rsp+88h] [rbp+10h]
  char v25; // [rsp+98h] [rbp+20h]

  v8 = a2;
  v9 = MiPageSizes[a3];
  v20 = v9;
  v10 = (unsigned int)MiPageToNode(a2);
  v11 = 48 * v8 - 0x220000000000LL;
  v23 = MiPageToChannel(v8);
  v21 = *(_QWORD *)(a1 + 16) + 56320 * v10;
  result = MiSnapPageMoveInProgress(v21, 1);
  v14 = result;
  if ( a5 )
  {
    CurrentIrql = 17;
    v25 = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v25 = CurrentIrql;
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v13) = CurrentIrql;
      result = KiRaiseIrqlProcessIrqlFlags(v13, 2LL);
    }
  }
  if ( a4 )
  {
    v16 = 48 * v9;
    result = 0xFFFFDE0000000028uLL;
    v17 = a6;
    v18 = (_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL);
    do
    {
      if ( v8 > qword_140E2D920 )
        break;
      result = *v18 >> 54;
      if ( (*v18 & 0x40000000000000LL) == 0 )
        break;
      a5 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&a5);
        while ( *(__int64 *)(v11 + 24) < 0 );
      }
      if ( (*(_BYTE *)(v11 + 34) & 7u) <= 1
        && (unsigned int)MiGetPfnPageSizeIndex(v11) == a3
        && ((*(_QWORD *)(v11 + 40) >> 43) & 0x3FF) == *(_WORD *)a1
        && (unsigned int)MiPageToNode(v8) == (_DWORD)v10
        && MiPageToChannel(v8) == v23 )
      {
        MiUnlinkFreeOrZeroedPage(v8, 0LL, 0);
        MiConvertBaseLargePage(v11, 1);
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        result = MiSimpleInsertPage(v17, v8, 6);
        v8 += v20;
        --a4;
        v18 = (_QWORD *)((char *)v18 + v16);
        v11 += v16;
      }
      else
      {
        result = 0x7FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( *(_QWORD *)(v17 + 16) )
          break;
        result = MiWaitForPageMoveComplete(v21, 1);
        if ( ((result ^ v14) & 0xFFFFFFFFFFFF0000uLL) == 0 )
          break;
        v14 = result;
        v19 = KeGetCurrentIrql();
        if ( (_BYTE)v19 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
          result = KiRaiseIrqlProcessIrqlFlags(v19, 2LL);
      }
    }
    while ( a4 );
    CurrentIrql = v25;
  }
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
