/*
 * XREFs of MiAllocateDriverPage @ 0x140AEDA3C
 * Callers:
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x14038C790 (MiMakeDriverPagesPrivate.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     MiHandleBootImage @ 0x140D0637C (MiHandleBootImage.c)
 * Callees:
 *     MiGetSlabCurrentTime @ 0x140207480 (MiGetSlabCurrentTime.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiFindContiguousPagesEx @ 0x14028E660 (MiFindContiguousPagesEx.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiWaitForFreePage @ 0x1403D4D84 (MiWaitForFreePage.c)
 *     MiGetNextPageColor @ 0x140442ED0 (MiGetNextPageColor.c)
 *     MiUseProtectedSlabAllocatorForDriverPage @ 0x1404D03F0 (MiUseProtectedSlabAllocatorForDriverPage.c)
 *     MiPreInitializeSystemImagePage @ 0x14052282C (MiPreInitializeSystemImagePage.c)
 */

__int64 __fastcall MiAllocateDriverPage(__int64 a1, char a2, char a3)
{
  unsigned int NextPageColor; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // [rsp+70h] [rbp+27h] BYREF
  __int128 v14; // [rsp+78h] [rbp+2Fh] BYREF
  int v15; // [rsp+C8h] [rbp+7Fh] BYREF

  v15 = 0;
  v14 = 0LL;
  MiInitializePageColorBase(0LL, 3, 0, (__int64)&v14);
  NextPageColor = MiGetNextPageColor((__int64)&v14);
  v7 = MiUseProtectedSlabAllocatorForDriverPage(a1, a2, &v15);
  v9 = -1LL;
  if ( !v7
    || (result = MiGetSlabPage(v8, v15, NextPageColor, 2u, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0),
        v13 = result,
        result == -1) )
  {
    result = MiGetSlabPage(a1, 5, NextPageColor, 2u, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0);
    v13 = result;
    if ( result == -1 )
    {
      if ( (a3 & 1) != 0 )
      {
        return -1LL;
      }
      else
      {
        if ( !*(_QWORD *)(a1 + 17088) )
          *(_QWORD *)(a1 + 17088) = MiGetSlabCurrentTime();
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 17080));
        if ( (int)MiFindContiguousPagesEx(
                    a1,
                    0LL,
                    *(_QWORD *)(a1 + 17072),
                    0LL,
                    0,
                    1LL,
                    1,
                    0x80000000,
                    255,
                    1610612737,
                    0,
                    0LL,
                    0LL,
                    &v13) < 0 )
        {
          *(_QWORD *)(a1 + 17072) = -1LL;
          while ( 1 )
          {
            result = MiGetPage(a1, NextPageColor, 0);
            v13 = result;
            if ( result != -1 )
              break;
            if ( KeGetCurrentIrql() == 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
              return -1LL;
            MiWaitForFreePage(a1, 0);
          }
        }
        else
        {
          ++*(_QWORD *)(a1 + 17064);
          v12 = v13;
          if ( (*(_QWORD *)(a1 + 17064) & 0x1FFLL) != 0 )
            v9 = v13 - 1;
          *(_QWORD *)(a1 + 17072) = v9;
          MiPreInitializeSystemImagePage(v12, v11);
          return v13;
        }
      }
    }
  }
  return result;
}
