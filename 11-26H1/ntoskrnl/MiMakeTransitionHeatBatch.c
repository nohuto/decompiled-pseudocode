/*
 * XREFs of MiMakeTransitionHeatBatch @ 0x140503EE0
 * Callers:
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 *     MiHandleTransitionFault @ 0x1402D85D0 (MiHandleTransitionFault.c)
 *     MiCachedPagesMakeHot @ 0x1406FA5F0 (MiCachedPagesMakeHot.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MiInitializePageHeatList @ 0x1404655D0 (MiInitializePageHeatList.c)
 *     MiTryLockLeafPage @ 0x140478BFC (MiTryLockLeafPage.c)
 *     MiAddPageToHeatRanges @ 0x14048AFA8 (MiAddPageToHeatRanges.c)
 *     MiGetTransitionPageHeatList @ 0x140709A44 (MiGetTransitionPageHeatList.c)
 *     MiGetPrototypePteBoundaries @ 0x140714CA0 (MiGetPrototypePteBoundaries.c)
 */

unsigned int *__fastcall MiMakeTransitionHeatBatch(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 PteShadow; // rax
  __int64 v7; // r10
  unsigned __int64 v9; // rsi
  unsigned int *v10; // r15
  int v11; // r12d
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  ULONG_PTR v17; // rbx
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  unsigned __int64 v20; // r14
  unsigned __int64 PrototypePteBoundaries; // rax
  unsigned __int64 v22; // rdx
  unsigned int *TransitionPageHeatList; // rax
  unsigned int *v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r8
  unsigned int v27; // ecx
  __int64 v28; // rdx
  _KPROCESS *v29; // rax
  __int16 v30; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v32; // rax
  __int64 v33; // r9
  unsigned __int64 v34; // r10
  __int64 v35; // r11
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r8
  __int64 v39; // rdx
  _KPROCESS *v40; // rax
  __int64 v41; // r8
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  _KPROCESS *v45; // rax
  __int64 v46; // r8
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // [rsp+60h] [rbp+8h] BYREF
  __int64 v50; // [rsp+78h] [rbp+20h] BYREF

  v3 = a1 + 16;
  v50 = 0LL;
  PteShadow = *(_QWORD *)(a1 + 16);
  v49 = 0LL;
  v7 = a2;
  if ( (unsigned __int64)(a1 + 16) >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v3, PteShadow);
  *(_QWORD *)v3 = PteShadow & ((PteShadow & 0x400) != 0 ? -5LL : -65537LL);
  if ( (stru_140E366D8.WaitRegister.Flags & 1) == 0 )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v10 = 0LL;
  if ( *(__int64 *)(a1 + 40) < 0 )
  {
    v11 = 1;
    PrototypePteBoundaries = MiGetPrototypePteBoundaries(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL, &v50);
    if ( !PrototypePteBoundaries )
      return v10;
    v17 = v9 & 0xFFFFFFFFFFFFF000uLL;
    v20 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( (v9 & 0xFFFFFFFFFFFFF000uLL) < PrototypePteBoundaries )
      v17 = PrototypePteBoundaries;
    v22 = PrototypePteBoundaries + 8 * v50;
    if ( v20 >= v22 )
      v20 = v22 - 8;
  }
  else
  {
    v11 = 0;
    v12 = (__int64)(v9 << 25) >> 16;
    if ( v12 >= 0x7FFFFFFF0000LL )
    {
      if ( (unsigned int)MiGetSystemRegionType((__int64)(v9 << 25) >> 16) != 5 )
        return v10;
      v17 = v9 & 0xFFFFFFFFFFFFF000uLL;
      v20 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    }
    else
    {
      if ( !v7 )
        return v10;
      v13 = *(unsigned int *)(v7 + 24);
      v14 = v12 & 0xFFFFFFFFFFE00000uLL;
      if ( v14 >= (v13 | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) << 12 )
        v15 = (v14 >> 9) & 0x7FFFFFFFF8LL;
      else
        v15 = 8 * ((v13 | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) & 0xFFFFFFFFFLL);
      v16 = *(unsigned int *)(v7 + 28);
      v17 = v15 - 0x98000000000LL;
      v18 = v14 + 2093056;
      if ( v18 <= (v16 | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) << 12 )
        v19 = (v18 >> 9) & 0x7FFFFFFFF8LL;
      else
        v19 = 8 * ((v16 | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) & 0xFFFFFFFFFLL);
      v20 = v19 - 0x98000000000LL;
    }
  }
  TransitionPageHeatList = (unsigned int *)MiGetTransitionPageHeatList();
  v10 = TransitionPageHeatList;
  if ( TransitionPageHeatList )
  {
    if ( TransitionPageHeatList != (unsigned int *)-1LL )
    {
      MiInitializePageHeatList((__int64)TransitionPageHeatList, 1, 2, *TransitionPageHeatList >> 3);
      v25 = a3;
      v26 = (unsigned __int64)*v24 >> 3;
      v27 = -1;
      if ( a3 >= 0xFFFFFFFF )
        v25 = 0xFFFFFFFFLL;
      if ( v26 <= v25 )
      {
        if ( a3 < 0xFFFFFFFF )
          v27 = a3;
      }
      else
      {
        v27 = v26;
      }
      if ( a3 > v26 )
        v17 = v9;
      if ( (unsigned int)((__int64)(v20 - v9) >> 3) + 1 < v27 )
      {
        if ( (unsigned int)((__int64)(v20 - v17) >> 3) + 1 > v27 )
          v17 = v20 - 8LL * v27 + 8;
      }
      else
      {
        v17 = v9;
        v20 = v9 + 8 * (v27 - 1LL);
      }
      while ( 1 )
      {
        if ( v17 > v20 )
          return v10;
        v28 = *(_QWORD *)v17;
        if ( v17 >= 0xFFFFF6FB7DBED000uLL
          && v17 <= 0xFFFFF6FB7DBED7F8uLL
          && (v28 & 1) != 0
          && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
        {
          v29 = MiPteHasShadow();
          if ( v29 )
          {
            KernelWaitTime = v29[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v32 = *(_QWORD *)(KernelWaitTime + 8 * ((v17 >> 3) & 0x1FF));
              if ( (v32 & 0x20) != 0 )
                v30 |= 0x20u;
              LOWORD(v28) = v30 | 0x42;
              if ( (v32 & 0x42) == 0 )
                LOWORD(v28) = v30;
            }
          }
        }
        if ( (v28 & 0xC01) == 0x800 )
        {
          if ( v17 == v9 )
          {
            v33 = a1;
            v49 = a1;
          }
          else
          {
            if ( v11 )
            {
              MiTryLockLeafPage((__int64 *)v17, 3, &v49);
              v33 = v49;
            }
            else
            {
              v33 = MiLockTransitionLeafPageEx(v17, (char *)1, 1);
              v49 = v33;
            }
            if ( !v33 )
              goto LABEL_73;
            v34 = v33 + 16;
            v35 = 1024LL;
            v36 = *(_QWORD *)(v33 + 16);
            v37 = v36 >> 2;
            v38 = v36 >> 16;
            if ( (*(_QWORD *)(v33 + 16) & 0x400LL) != 0 )
              LOBYTE(v38) = v37;
            if ( (v38 & 1) == 0 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_73;
            }
            v39 = *(_QWORD *)v34;
            if ( v34 >= 0xFFFFF6FB7DBED000uLL
              && v34 <= 0xFFFFF6FB7DBED7F8uLL
              && (v39 & 1) != 0
              && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
            {
              v40 = MiPteHasShadow();
              if ( v40 )
              {
                v42 = v40[2].KernelWaitTime;
                if ( v42 )
                {
                  v43 = *(_QWORD *)(v42 + 8 * ((v34 >> 3) & 0x1FF));
                  if ( (v43 & 0x20) != 0 )
                    v41 |= 0x20uLL;
                  v39 = v41 | 0x42;
                  if ( (v43 & 0x42) == 0 )
                    v39 = v41;
                }
              }
            }
            *(_QWORD *)v34 = v39 & ((v35 & v39) != 0 ? -5LL : -65537LL);
            _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          if ( (unsigned int)MiAddPageToHeatRanges(v10, (v33 + 0x220000000000LL) / 48, 3) )
            return v10;
        }
LABEL_73:
        v17 += 8LL;
      }
    }
    if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
      _InterlockedIncrement(&dword_140E34A84);
    v44 = *(_QWORD *)v3;
    if ( v3 >= 0xFFFFF6FB7DBED000uLL
      && v3 <= 0xFFFFF6FB7DBED7F8uLL
      && (v44 & 1) != 0
      && ((v44 & 0x20) == 0 || (v44 & 0x42) == 0) )
    {
      v45 = MiPteHasShadow();
      if ( v45 )
      {
        v47 = v45[2].KernelWaitTime;
        if ( v47 )
        {
          v48 = *(_QWORD *)(v47 + 8 * ((v3 >> 3) & 0x1FF));
          if ( (v48 & 0x20) != 0 )
            v46 |= 0x20uLL;
          v44 = v46 | 0x42;
          if ( (v48 & 0x42) == 0 )
            v44 = v46;
        }
      }
    }
    *(_QWORD *)v3 = v44 | ((-(__int64)((v44 & 0x400) != 0) & 0xFFFFFFFFFFFF0004uLL) + 0x10000);
  }
  return v10;
}
