/*
 * XREFs of MiTryDeleteTransitionPte @ 0x14034050C
 * Callers:
 *     MiDeleteMergedPte @ 0x14033E880 (MiDeleteMergedPte.c)
 *     MiSectionProtectTransitionPte @ 0x140340FE0 (MiSectionProtectTransitionPte.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1402A96FC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiDeleteTransitionPte @ 0x140340870 (MiDeleteTransitionPte.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiTryDeleteTransitionPte(ULONG_PTR BugCheckParameter2, int a2)
{
  ULONG_PTR v2; // rdx
  ULONG_PTR v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  _KPROCESS *v10; // rax
  ULONG_PTR v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  _KPROCESS *v14; // rax
  __int16 v15; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v17; // rax
  _KPROCESS *v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // [rsp+58h] [rbp+10h] BYREF

  v22 = a2;
  v2 = *(_QWORD *)BugCheckParameter2;
  if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
    && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    v14 = MiPteHasShadow();
    if ( v14 )
    {
      KernelWaitTime = v14[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v17 = *(_QWORD *)(KernelWaitTime + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
        if ( (v17 & 0x20) != 0 )
          v15 |= 0x20u;
        LOWORD(v2) = v15 | 0x42;
        if ( (v17 & 0x42) == 0 )
          LOWORD(v2) = v15;
      }
    }
  }
  if ( (v2 & 0x400) == 0 )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)BugCheckParameter2;
      if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
        && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL
        && (v4 & 1) != 0
        && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
      {
        v10 = MiPteHasShadow();
        if ( v10 )
        {
          v12 = v10[2].KernelWaitTime;
          if ( v12 )
          {
            v13 = *(_QWORD *)(v12 + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
            if ( (v13 & 0x20) != 0 )
              v11 |= 0x20uLL;
            v4 = v11 | 0x42;
            if ( (v13 & 0x42) == 0 )
              v4 = v11;
          }
        }
      }
      if ( (v4 & 0x800) == 0 )
        break;
      if ( (v4 & 1) == 0 && (!v4 || !qword_140E2D8C0 || (qword_140E2D8C0 & v4) != 0) )
      {
        v5 = v4;
        if ( qword_140E2D8C0 && (v4 & 0x10) == 0 )
          v5 = qword_140E2D8C8 & v4;
        v6 = (v5 >> 12) & 0xFFFFFFFFFFLL;
        v7 = 48 * v6 - 0x220000000000LL;
        if ( v6 <= qword_140E2D920 && ((*(_QWORD *)(48 * v6 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
        {
          v22 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v22);
            while ( *(__int64 *)(v7 + 24) < 0 );
          }
          v8 = *(_QWORD *)BugCheckParameter2;
          if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
            && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL
            && (v8 & 1) != 0
            && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
          {
            v18 = MiPteHasShadow();
            if ( v18 )
            {
              v20 = v18[2].KernelWaitTime;
              if ( v20 )
              {
                v21 = *(_QWORD *)(v20 + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
                if ( (v21 & 0x20) != 0 )
                  v19 |= 0x20uLL;
                v8 = v19 | 0x42;
                if ( (v21 & 0x42) == 0 )
                  v8 = v19;
              }
            }
          }
          if ( v8 == v4 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) == 0
              || (v7 = MiLockSpecialPurposeMemoryCachedPage(v7, 0)) != 0 )
            {
              if ( (*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL) != BugCheckParameter2
                && (*(_QWORD *)(v7 + 40) & 0x10000000000LL) == 0 )
              {
                KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v4, *(_QWORD *)(v7 + 8));
              }
              if ( v7 )
                return MiDeleteTransitionPte(BugCheckParameter2, v7);
            }
            return 1LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
  }
  return 1LL;
}
