/*
 * XREFs of MiFindLargePageMemory @ 0x140B64898
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x1403D0630 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x14028E010 (MiSufficientAvailablePages.c)
 *     MiFindContiguousPagesEx @ 0x14028E660 (MiFindContiguousPagesEx.c)
 *     MiUpdateCacheAttributeListsForPage @ 0x1402A12B8 (MiUpdateCacheAttributeListsForPage.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     MiInitializeBestCandidatesContext @ 0x140339D94 (MiInitializeBestCandidatesContext.c)
 *     MiPfnZeroingNeeded @ 0x14033CB30 (MiPfnZeroingNeeded.c)
 *     MiProtectionToCacheAttribute @ 0x140374020 (MiProtectionToCacheAttribute.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiCreatePageChains @ 0x1403CD4B8 (MiCreatePageChains.c)
 *     MiInsertMdlPageNeedsZero @ 0x1403CE638 (MiInsertMdlPageNeedsZero.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403CF990 (MiConvertSmallPageRangeToLarge.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiGetLargestPageIndex @ 0x1404C630C (MiGetLargestPageIndex.c)
 *     MiCleanupBestCandidatesContext @ 0x1404C9184 (MiCleanupBestCandidatesContext.c)
 *     MiReadHighestPhysicalPage @ 0x1404D023C (MiReadHighestPhysicalPage.c)
 *     MiChangePageAttributeAndZeroBatch @ 0x140711F9C (MiChangePageAttributeAndZeroBatch.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFindLargePageMemory(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // r14
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r15
  unsigned __int64 v6; // r13
  __int64 result; // rax
  int v8; // r12d
  _DWORD *PoolMm; // rsi
  int v10; // r8d
  unsigned int v11; // ebx
  unsigned __int64 v12; // rdi
  int CurrentProcessorColor; // eax
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r15
  _DWORD *v17; // r12
  unsigned __int64 *v18; // rcx
  bool v19; // r8
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  unsigned __int64 v22; // rdx
  _QWORD *i; // rbx
  _QWORD **v24; // rcx
  _QWORD *v25; // r8
  _QWORD *v26; // rax
  _QWORD *j; // rcx
  int v28; // [rsp+20h] [rbp-E0h]
  int v29; // [rsp+70h] [rbp-90h]
  unsigned int LargestPageIndex; // [rsp+74h] [rbp-8Ch]
  unsigned int v31; // [rsp+78h] [rbp-88h]
  _DWORD *v32; // [rsp+80h] [rbp-80h] BYREF
  __int64 HighestPhysicalPage; // [rsp+88h] [rbp-78h]
  int v34; // [rsp+90h] [rbp-70h]
  unsigned __int64 v35; // [rsp+98h] [rbp-68h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-60h]
  _DWORD *v37; // [rsp+A8h] [rbp-58h]
  unsigned __int64 *v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  _BYTE v40[96]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v41; // [rsp+120h] [rbp+20h] BYREF
  char v42[88]; // [rsp+128h] [rbp+28h] BYREF

  v38 = a2;
  v2 = a1;
  v39 = a1;
  v35 = 0LL;
  memset_0(v40, 0, 0x58uLL);
  memset_0(v42, 0, sizeof(v42));
  v3 = &v41;
  v4 = 4LL;
  do
  {
    *v3 = 0x7FFFFFFFFFLL;
    v3 += 3;
    --v4;
  }
  while ( v4 );
  v6 = *(_QWORD *)(v2 + 16) - *(_QWORD *)(v2 + 72);
  v36 = *(_QWORD *)(v2 + 8);
  v5 = v36;
  result = MiSufficientAvailablePages(v5, v6 + ((*(_DWORD *)(v5 + 4) & 0x10) == 0 ? 0x32 : 0));
  if ( (_DWORD)result )
  {
    v31 = MiProtectionToCacheAttribute(*(_DWORD *)(v2 + 36));
    v8 = v31;
    result = MiCreatePageChains(v36, *(_DWORD *)(v2 + 32), v31, 0LL, 0);
    v37 = (_DWORD *)result;
    if ( result )
    {
      *(_DWORD *)(result + 16) |= 1u;
      PoolMm = 0LL;
      v32 = 0LL;
      v29 = 0;
      HighestPhysicalPage = MiReadHighestPhysicalPage(v5);
      v34 = *(_DWORD *)(v2 + 52) | 0x60100000;
      LargestPageIndex = MiGetLargestPageIndex();
      v11 = LargestPageIndex;
      if ( LargestPageIndex < 3 )
      {
        while ( 1 )
        {
          v12 = MiPageSizes[v11];
          if ( v6 < v12 )
            goto LABEL_36;
          if ( v12 < *(_QWORD *)(v2 + 24) )
            break;
          if ( !PoolMm )
          {
            CurrentProcessorColor = MmGetCurrentProcessorColor();
            PoolMm = (_DWORD *)ExAllocatePoolMm(64LL, 0x28uLL, 1816948045, CurrentProcessorColor | 0x80000000);
            if ( !PoolMm )
              goto LABEL_41;
            v10 = v29;
          }
          if ( !v10 )
          {
            MiInitializeBestCandidatesContext((__int64 *)&v32, (__int64)v40, v12, v6 / v12, v12);
            v29 = 1;
          }
          if ( (int)MiFindContiguousPagesEx(
                      v5,
                      v12,
                      HighestPhysicalPage,
                      v12,
                      v28,
                      v12,
                      v8,
                      *(_DWORD *)(v2 + 32),
                      255,
                      v34,
                      0,
                      0LL,
                      (__int64)v32,
                      &v35) < 0 )
            goto LABEL_36;
          v6 -= v12;
          v14 = v35;
          if ( (*(_DWORD *)v2 & 4) == 0 )
          {
            v15 = 48 * v35 - 0x220000000000LL;
            v16 = v15 + 48 * v12;
            if ( v15 < v16 )
            {
              v17 = v37;
              do
              {
                if ( MiPfnZeroingNeeded(v15, v31) )
                {
                  MiInsertMdlPageNeedsZero(v17, v15, 1LL);
                  MiUpdateCacheAttributeListsForPage(&v41, v15, v31, 1);
                }
                v15 += 48LL;
              }
              while ( v15 < v16 );
              v2 = v39;
              v14 = v35;
            }
            v5 = v36;
            v11 = LargestPageIndex;
          }
          v18 = v38;
          v19 = 0;
          *(_QWORD *)PoolMm = v14;
          PoolMm[2] = v11;
          v20 = (_QWORD *)*v18;
          if ( *v18 )
          {
            while ( 1 )
            {
              if ( v14 >= *(v20 - 2) )
              {
                v21 = (_QWORD *)v20[1];
                if ( !v21 )
                {
                  v19 = 1;
                  break;
                }
              }
              else
              {
                v21 = (_QWORD *)*v20;
                if ( !*v20 )
                  break;
              }
              v20 = v21;
            }
          }
          RtlAvlInsertNodeEx(v18, (unsigned __int64)v20, v19, (_QWORD *)PoolMm + 2);
          PoolMm = 0LL;
          if ( !v6 )
            goto LABEL_41;
          if ( v32[3] )
          {
            v22 = HighestPhysicalPage;
          }
          else
          {
            v22 = v14 - 1;
            HighestPhysicalPage = v14 - 1;
          }
          if ( v22 > v12 )
          {
            v10 = v29;
          }
          else
          {
LABEL_36:
            LargestPageIndex = ++v11;
            HighestPhysicalPage = MiReadHighestPhysicalPage(v5);
            MiCleanupBestCandidatesContext((void **)&v32, v40);
            v10 = 0;
            v29 = 0;
          }
          if ( v11 >= 3 )
            break;
          v8 = v31;
        }
        if ( PoolMm )
          ExFreePoolWithTag(PoolMm, 0);
      }
LABEL_41:
      MiChangePageAttributeAndZeroBatch((__int64)&v41, (__int64)v37, v31);
      MiCleanupBestCandidatesContext((void **)&v32, v40);
      result = (__int64)v38;
      for ( i = 0LL; ; i = (_QWORD *)result )
      {
        result = *(_QWORD *)result;
        if ( !result )
          break;
      }
      while ( i )
      {
        v24 = (_QWORD **)i[1];
        v25 = i - 2;
        v26 = i;
        if ( v24 )
        {
          i = (_QWORD *)i[1];
          for ( j = *v24; j; j = (_QWORD *)*j )
            i = j;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v26 )
              break;
            v26 = i;
          }
        }
        result = MiConvertSmallPageRangeToLarge(*v25, *((_DWORD *)v25 + 2));
      }
    }
  }
  return result;
}
