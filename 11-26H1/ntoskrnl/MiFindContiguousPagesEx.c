/*
 * XREFs of MiFindContiguousPagesEx @ 0x14028E660
 * Callers:
 *     MiRebuildLargePage @ 0x14028F484 (MiRebuildLargePage.c)
 *     MiAllocateSkipPagesForMdl @ 0x140339B7C (MiAllocateSkipPagesForMdl.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x14033A374 (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiAllocateContiguousMemory @ 0x14034C30C (MiAllocateContiguousMemory.c)
 *     MiWaitForInPageComplete @ 0x14038FFA0 (MiWaitForInPageComplete.c)
 *     MiSoftFaultClusterTradeGetPage @ 0x140717154 (MiSoftFaultClusterTradeGetPage.c)
 *     MmRemovePhysicalMemory @ 0x14086D840 (MmRemovePhysicalMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140870810 (MmMarkPhysicalMemoryAsBad.c)
 *     MiCreatePagefileMemoryExtents @ 0x140884604 (MiCreatePagefileMemoryExtents.c)
 *     MiAllocateDriverPage @ 0x140AEDA3C (MiAllocateDriverPage.c)
 *     MiFindLargePageMemory @ 0x140B64898 (MiFindLargePageMemory.c)
 * Callees:
 *     MiFindContiguousPagesInOptimizedCandidates @ 0x14028E0B8 (MiFindContiguousPagesInOptimizedCandidates.c)
 *     MiFindContiguousPagesValidate @ 0x14028E82C (MiFindContiguousPagesValidate.c)
 *     MiFindContiguousPagesPrepare @ 0x14028E928 (MiFindContiguousPagesPrepare.c)
 *     MiFindContiguousPagesRetry @ 0x14028EE8C (MiFindContiguousPagesRetry.c)
 *     MiFindContiguousPagesNode @ 0x14028FA50 (MiFindContiguousPagesNode.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 *     MiFindContiguousPagesLarge @ 0x1403D366C (MiFindContiguousPagesLarge.c)
 *     MiFindContiguousPagesFinish @ 0x1404F063C (MiFindContiguousPagesFinish.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiFindContiguousPagesEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        char a9,
        int a10,
        int a11,
        __int64 a12,
        __int64 a13,
        _QWORD *a14)
{
  __int64 result; // rax
  int v19; // eax
  int ContiguousPagesLarge; // ebx
  _QWORD v21[6]; // [rsp+20h] [rbp-E0h] BYREF
  int v22; // [rsp+50h] [rbp-B0h]
  int v23; // [rsp+54h] [rbp-ACh]
  char v24; // [rsp+58h] [rbp-A8h]
  __int16 v25; // [rsp+59h] [rbp-A7h]
  char v26; // [rsp+5Bh] [rbp-A5h]
  int v27; // [rsp+5Ch] [rbp-A4h]
  int v28; // [rsp+60h] [rbp-A0h]
  int v29; // [rsp+64h] [rbp-9Ch]
  __int64 v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  __int64 *v32; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v33[248]; // [rsp+88h] [rbp-78h] BYREF
  int v34; // [rsp+180h] [rbp+80h]

  memset_0(v33, 0, 0x100uLL);
  v21[2] = a3;
  v25 = 0;
  v26 = 0;
  v29 = 0;
  v21[4] = 0LL;
  v22 = a7;
  v23 = a8;
  v24 = a9;
  v28 = a11;
  v21[1] = a2;
  v32 = v21;
  v21[0] = a1;
  v21[3] = a4;
  v21[5] = a6;
  v27 = a10;
  v30 = a12;
  v31 = a13;
  result = MiFindContiguousPagesValidate(&v32);
  if ( (int)result >= 0 )
  {
    if ( (a10 & 0x20000000) != 0 )
    {
      v19 = v34;
    }
    else
    {
      if ( (int)MiAcquireNonPagedResources(
                  a1,
                  a6,
                  (unsigned __int64)(~(unsigned __int8)*(_DWORD *)(a1 + 4) & 0x10) << 6,
                  2LL) < 0 )
      {
        ContiguousPagesLarge = -1073741670;
LABEL_13:
        MiFindContiguousPagesFinish(&v32, *a14, (unsigned int)ContiguousPagesLarge);
        return (unsigned int)ContiguousPagesLarge;
      }
      v19 = v34 | 1;
      v34 |= 1u;
    }
    if ( (a10 & 0x40) != 0 )
    {
      v34 = v19 | 2;
      ContiguousPagesLarge = MiFindContiguousPagesLarge(&v32, a14);
    }
    else
    {
      ContiguousPagesLarge = MiFindContiguousPagesPrepare(&v32);
      if ( ContiguousPagesLarge >= 0 )
      {
        ContiguousPagesLarge = MiFindContiguousPagesInOptimizedCandidates(&v32, a14);
        if ( ContiguousPagesLarge < 0 )
        {
          do
          {
            ContiguousPagesLarge = MiFindContiguousPagesNode(&v32, a14);
            if ( ContiguousPagesLarge >= 0 )
              break;
            ContiguousPagesLarge = MiFindContiguousPagesRetry(&v32);
          }
          while ( ContiguousPagesLarge >= 0 );
        }
      }
    }
    goto LABEL_13;
  }
  return result;
}
