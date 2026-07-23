/*
 * XREFs of MiCopyPageTablePageContents @ 0x14033F050
 * Callers:
 *     MiReplacePageTablePage @ 0x14033E3DC (MiReplacePageTablePage.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MiIsPdeOrAboveAccessible @ 0x140482E0C (MiIsPdeOrAboveAccessible.c)
 */

__int64 __fastcall MiCopyPageTablePageContents(__int64 a1, _QWORD *a2)
{
  ULONG_PTR v2; // rbx
  __int64 v4; // rsi
  __int64 v6; // rbp
  unsigned __int64 *v7; // rdi
  unsigned __int64 v8; // r10
  unsigned __int64 PteShadow; // rdx
  _KPROCESS *v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // r9

  v2 = a2[1];
  v4 = *(_QWORD *)(a1 + 24);
  v6 = a2[3];
  v7 = *(unsigned __int64 **)(a1 + 32);
  v8 = 0xFFFFF6FFFFFFFFFFuLL;
  do
  {
    while ( 1 )
    {
      PteShadow = *(_QWORD *)v2;
      if ( v2 >= 0xFFFFF6FB7DBED000uLL
        && v2 <= 0xFFFFF6FB7DBED7F8uLL
        && (PteShadow & 1) != 0
        && ((PteShadow & 0x20) == 0 || (PteShadow & 0x42) == 0) )
      {
        v11 = MiPteHasShadow();
        if ( v11 )
        {
          KernelWaitTime = v11[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v14 = *(_QWORD *)(KernelWaitTime + 8 * ((v2 >> 3) & 0x1FF));
            if ( (v14 & 0x20) != 0 )
              v12 |= 0x20uLL;
            PteShadow = v12 | 0x42;
            if ( (v14 & 0x42) == 0 )
              PteShadow = v12;
          }
        }
      }
      if ( (PteShadow & 1) != 0 )
      {
        ++*(_DWORD *)a1;
        if ( (PteShadow & 0x80u) != 0LL )
        {
          ++*(_DWORD *)(a1 + 4);
        }
        else
        {
          v15 = (PteShadow >> 12) & 0xFFFFFFFFFFLL;
          if ( v15 == qword_140E361B8 )
          {
            ++*(_DWORD *)(a1 + 16);
          }
          else if ( v15 <= qword_140E2D920 )
          {
            if ( (*(_QWORD *)(48 * v15 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
            {
              v8 = 0xFFFFF6FFFFFFFFFFuLL;
              if ( (*(_QWORD *)(48 * v15 - 0x21FFFFFFFFD8LL) & 0x10000000000LL) != 0 )
                ++*(_DWORD *)(a1 + 4);
            }
            else
            {
              v8 = 0xFFFFF6FFFFFFFFFFuLL;
            }
          }
        }
        if ( v4 == v6 )
          goto LABEL_6;
        PteShadow = *(_QWORD *)(a2[9] + 8 * ((__int64)(v2 - a2[1]) >> 3));
LABEL_28:
        if ( (PteShadow & 1) == 0 )
          PteShadow = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        goto LABEL_6;
      }
      if ( (PteShadow & 0xC00) == 0x800 )
        break;
LABEL_5:
      if ( v4 != v6 )
        goto LABEL_28;
LABEL_6:
      *v7 = PteShadow;
      v2 += 8LL;
      ++v7;
      if ( (v2 & 0xFFF) == 0 )
        return 0LL;
    }
    v16 = (__int64)(v2 << 25) >> 16;
    if ( v16 >= 0xFFFFF68000000000uLL
      && v16 <= v8
      && !(unsigned int)MiIsPdeOrAboveAccessible(v2, PteShadow, 0xFFFFF68000000000uLL) )
    {
      _InterlockedIncrement(&dword_140EF9084);
      return 3221225473LL;
    }
    v17 = MiLockTransitionLeafPageEx(v2);
    v8 = 0xFFFFF6FFFFFFFFFFuLL;
  }
  while ( !v17 );
  PteShadow = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v2, PteShadow);
  if ( (*(_QWORD *)(v17 + 40) & 0xFFFFFFFFFFLL) != v4 && (*(_QWORD *)(v17 + 40) & 0x10000000000LL) != 0 )
    ++*(_DWORD *)(a1 + 12);
  if ( (*(_BYTE *)(v17 + 34) & 0x20) == 0 )
  {
    ++*(_DWORD *)(a1 + 8);
    v8 = 0xFFFFF6FFFFFFFFFFuLL;
    goto LABEL_5;
  }
  _InterlockedIncrement(&dword_140EF9080);
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 3221225473LL;
}
