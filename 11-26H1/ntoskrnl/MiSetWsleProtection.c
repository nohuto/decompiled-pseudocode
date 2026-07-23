/*
 * XREFs of MiSetWsleProtection @ 0x14036DE30
 * Callers:
 *     MiSectionProtectValidPte @ 0x1402E64E0 (MiSectionProtectValidPte.c)
 *     MiCombineInitialFinish @ 0x1402EC334 (MiCombineInitialFinish.c)
 *     MiHandleForkValidPrivatePte @ 0x1402ECE40 (MiHandleForkValidPrivatePte.c)
 *     MiCopyOnWriteInitializeTargetPage @ 0x14036D3E8 (MiCopyOnWriteInitializeTargetPage.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036D8F4 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 */

signed __int64 __fastcall MiSetWsleProtection(__int64 a1, unsigned __int64 a2, char a3)
{
  char v3; // r10
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rdx
  signed __int64 v6; // r8
  __int64 v7; // rdx
  signed __int64 result; // rax
  _KPROCESS *v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v12; // rax

  v3 = a3;
  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = *(_QWORD *)v4;
  if ( v4 >= 0xFFFFF6FB7DBED000uLL
    && v4 <= 0xFFFFF6FB7DBED7F8uLL
    && (v5 & 1) != 0
    && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
  {
    v9 = MiPteHasShadow();
    if ( v9 )
    {
      KernelWaitTime = v9[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v12 = *(_QWORD *)(KernelWaitTime + 8 * ((v4 >> 3) & 0x1FF));
        if ( (v12 & 0x20) != 0 )
          v10 |= 0x20uLL;
        v5 = v10 | 0x42;
        if ( (v12 & 0x42) == 0 )
          v5 = v10;
      }
    }
  }
  v6 = *(_QWORD *)v4;
  v7 = ((unsigned __int8)(16 * (v3 & 7)) | HIBYTE(v5) & 0xF) << 56;
  while ( 1 )
  {
    if ( (MiFlags & 0x8000000) != 0 )
      _mm_lfence();
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v4, v7 | v6 & 0x80FFFFFFFFFFFFFFuLL, v6);
    if ( v6 == result )
      break;
    v6 = result;
  }
  return result;
}
