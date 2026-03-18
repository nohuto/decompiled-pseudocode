/*
 * XREFs of MiPrefetchPreallocatePages @ 0x1406F719C
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x1403A0710 (MiPrefetchVirtualMemory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14027DA30 (MiUnlockAndDereferenceVadShared.c)
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     MiObtainReferencedVadEx @ 0x1402D0160 (MiObtainReferencedVadEx.c)
 *     MiAcquireNonPagedResources @ 0x1402F4A50 (MiAcquireNonPagedResources.c)
 *     MiThreadIdealNode @ 0x14030EB24 (MiThreadIdealNode.c)
 *     MiProtectionToCacheAttribute @ 0x140372270 (MiProtectionToCacheAttribute.c)
 *     MiConvertLargeActivePageToChain @ 0x14040A4E0 (MiConvertLargeActivePageToChain.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x140505F80 (MiPrefetchReleasePreallocatedPages.c)
 *     MiGetLargePage @ 0x14051E3C4 (MiGetLargePage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall MiPrefetchPreallocatePages(
        __int64 a1,
        _QWORD *a2,
        ULONG *a3,
        __int64 a4,
        _QWORD *a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  int *v13; // rbx
  ULONG_PTR v14; // rax
  ULONG_PTR v15; // r8
  unsigned int v16; // r9d
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  BOOL v24; // eax
  int v25; // ebx
  unsigned int v26; // ebx
  unsigned __int8 CurrentIrql; // r14
  __int64 LargePage; // rax
  __int64 v29; // rbx
  int v30; // [rsp+78h] [rbp+20h] BYREF

  if ( a4 != 1 )
  {
    v30 = 0;
    if ( (*(_DWORD *)(a4 + 184) & 0xF) == 0 )
    {
      v11 = a6;
      v12 = a6 & 0xFFFFFFFFFFE00000uLL;
      if ( *(_QWORD *)a1 && v12 == *(_QWORD *)a1 )
        goto LABEL_39;
      if ( a6 - 1 <= 0x7FFFFFFEFFFELL && v12 == a6 && *a5 + a5[1] - a6 >= 0x200000 )
      {
        *(_QWORD *)a1 = 0LL;
        if ( v11 >= *(_QWORD *)(a1 + 24) && v11 <= *(_QWORD *)(a1 + 32) )
        {
          v13 = (int *)(a1 + 40);
          goto LABEL_17;
        }
        v14 = MiObtainReferencedVadEx(v11, 6LL, &v30);
        v15 = v14;
        if ( !v14 )
          goto LABEL_39;
        v16 = *(unsigned __int8 *)(v14 + 33);
        v17 = *(_DWORD *)(v14 + 48);
        v18 = *(unsigned int *)(v14 + 28);
        if ( (*(_DWORD *)(v15 + 48) & 0x8001C) == 0x80000
          && (((v18 | ((unsigned __int64)v16 << 32)) << 12) | 0xFFF) - v11 + 1 >= 0x200000
          && (*(_DWORD *)(v15 + 48) & 0x1FC00) != 0
          && (unsigned int)MiProtectionToCacheAttribute((v17 >> 5) & 0x1F) == 1 )
        {
          v13 = (int *)(a1 + 40);
          v20 = *(unsigned int *)(v15 + 28);
          *(_QWORD *)(a1 + 24) = (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) << 12;
          v21 = v19 | ((v20 | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) << 12);
          *(_DWORD *)(a1 + 40) = (*(_DWORD *)(v15 + 48) >> 10) & 0x7F;
          *(_QWORD *)(a1 + 32) = v21;
          MiUnlockAndDereferenceVadShared(v15);
LABEL_17:
          if ( a2[13] )
          {
            v22 = a2[11];
            if ( v22 == *(_QWORD *)(a1 + 8) )
            {
              if ( (unsigned int)MiPageToNode((v22 + 0x220000000000LL) / 48) == *v13 - 1 )
              {
                *(_QWORD *)a1 = v11;
                goto LABEL_39;
              }
              v13 = (int *)(a1 + 40);
            }
            MiPrefetchReleasePreallocatedPages(a1, (__int64)a2, (__int64)a3, 0);
          }
          v23 = *(_DWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 8) = 0LL;
          if ( v23
            || (v24 = (int)MiAcquireNonPagedResources(a3, 0x200uLL, 1024LL, 6LL) >= 0, (*(_DWORD *)(a1 + 16) = v24) != 0) )
          {
            v25 = *v13;
            if ( v25 )
              v26 = v25 - 1;
            else
              v26 = MiThreadIdealNode(a4, 0LL);
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql != 2 )
              __writecr8(2uLL);
            if ( KiIrqlFlags )
              KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
            LargePage = MiGetLargePage(a3, v11, 1u, v26, 1u, 0x12u, a7, 0LL);
            v29 = LargePage;
            if ( LargePage )
            {
              MiConvertLargeActivePageToChain(LargePage);
              a2[11] = v29;
              a2[12] = v29 + 24528;
              a2[13] = 512LL;
            }
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
            *(_QWORD *)a1 = v11;
            *(_QWORD *)(a1 + 8) = v29;
          }
          goto LABEL_39;
        }
        MiUnlockAndDereferenceVadShared(v15);
      }
      else
      {
        *(_QWORD *)a1 = 0LL;
      }
LABEL_39:
      if ( !*(_QWORD *)a1 )
        MiPrefetchReleasePreallocatedPages(a1, (__int64)a2, (__int64)a3, 0);
    }
  }
}
