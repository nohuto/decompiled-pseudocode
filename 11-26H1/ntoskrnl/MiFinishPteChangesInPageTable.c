/*
 * XREFs of MiFinishPteChangesInPageTable @ 0x14052A40C
 * Callers:
 *     MiWriteAwePtes @ 0x140471690 (MiWriteAwePtes.c)
 *     MiWriteAwePtesNewPageTable @ 0x140707B34 (MiWriteAwePtesNewPageTable.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiUpdateAwePageTable @ 0x140342494 (MiUpdateAwePageTable.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiWalkAllBitmapRanges @ 0x140443A20 (MiWalkAllBitmapRanges.c)
 *     MiApplyLazyStampToAwePtes @ 0x1407056BC (MiApplyLazyStampToAwePtes.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiFinishPteChangesInPageTable(__int64 **a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned __int64 LeafVa; // rax
  unsigned __int64 *v9; // r10
  __int64 *v10; // rcx
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r9
  volatile signed __int32 *v15; // r8
  unsigned int v16; // eax
  int v17; // r11d
  unsigned __int64 v18; // rcx
  void **v19; // rbx

  v2 = (__int64)a1[8];
  if ( v2 )
  {
    MiFlushTbList(v2);
    MiReleaseProcessorFlushList();
    a1[8] = 0LL;
  }
  if ( (a1[31][1] & 8) != 0 && (*((_DWORD *)a1 + 5) & 1) != 0 && a1[6] )
    MiApplyLazyStampToAwePtes(a1);
  MiWalkAllBitmapRanges((unsigned __int64 *)a1 + 19, (__int64)MiApplyBreakMakeToAwePtes, (__int64)a1);
  result = MiUpdateAwePageTable(*a1, (__int64)a1[1], *((_DWORD *)a1 + 4));
  v4 = result;
  if ( a1[6] )
  {
    if ( a1[3] )
      a1[3] = 0LL;
    v5 = **a1;
    if ( (unsigned __int64)*a1 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)*a1 <= 0xFFFFF6FB7DBED7F8uLL
      && (v5 & 1) != 0
      && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
    {
      MiPteHasShadow();
    }
    MiUnlockPageTableInternal((__int64)a1[5], (unsigned __int64)*a1);
    v7 = 2LL;
    if ( ((_DWORD)a1[29] & 1) == 0 || *((_DWORD *)a1 + 59) || v4 != 1 && (v4 != 2 || (*((_DWORD *)a1 + 5) & 2) != 0) )
      goto LABEL_32;
    if ( !*a1[7] )
      goto LABEL_32;
    LeafVa = MiGetLeafVa((unsigned __int64)*a1);
    v10 = a1[6];
    v6 = *((unsigned int *)v10 + 6);
    v11 = (LeafVa - ((v6 & 0xFFFFFFFFFFFFFE00uLL | ((unsigned __int64)*((unsigned __int8 *)v10 + 32) << 32)) << 12)) >> 21;
    if ( v11 >= *v9 )
      goto LABEL_32;
    v12 = v9[1];
    v13 = v11 & 0x1F;
    LOBYTE(v14) = 1;
    v15 = (volatile signed __int32 *)(v12 + 4 * (v11 >> 5));
    if ( v13 + 1 > 0x20 )
    {
      if ( (v11 & 0x1F) != 0 )
      {
        v17 = v11 & 0x1F;
        v6 = (unsigned int)(32 - v17);
        _InterlockedOr(v15, ((1 << (32 - v17)) - 1) << v13);
        v14 = 1 - v6;
        ++v15;
        if ( (unsigned __int64)(1 - v6) >= 0x20 )
        {
          v18 = v14 >> 5;
          v14 += -32LL * (v14 >> 5);
          do
          {
            *v15++ = -1;
            --v18;
          }
          while ( v18 );
        }
        if ( !v14 )
          goto LABEL_32;
      }
      v16 = (1 << v14) - 1;
    }
    else
    {
      v16 = 1 << v13;
    }
    _InterlockedOr(v15, v16);
LABEL_32:
    LOBYTE(v6) = *((_BYTE *)a1 + 256);
    MiUnlockWorkingSetShared((__int64)a1[5], v6);
    *((_DWORD *)a1 + 5) &= ~4u;
    *a1 = 0LL;
    a1[1] = 0LL;
    *((_DWORD *)a1 + 4) = 0;
    v19 = (void **)(a1 + 10);
    do
    {
      result = (__int64)memset_0(
                          *v19,
                          0,
                          4 * (((unsigned __int64)*(v19 - 1) >> 5) + (((unsigned __int8)*(v19 - 1) & 0x1F) != 0)));
      v19 += 10;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
