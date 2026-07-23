/*
 * XREFs of MiCreateSystemPageTable @ 0x14033B880
 * Callers:
 *     <none>
 * Callees:
 *     MiLockNestedPageTable @ 0x14029E130 (MiLockNestedPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiIsPageAGapPage @ 0x14033BB90 (MiIsPageAGapPage.c)
 *     MiGetPageTablePages @ 0x14033BE80 (MiGetPageTablePages.c)
 *     MiInitializeSystemPageTable @ 0x14033CC0C (MiInitializeSystemPageTable.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiFillPteHierarchy @ 0x1403A17B0 (MiFillPteHierarchy.c)
 *     MiMakeSystemLeavesNonZero @ 0x1405129C0 (MiMakeSystemLeavesNonZero.c)
 *     MiArePageContentsZero @ 0x140522A28 (MiArePageContentsZero.c)
 *     MiMakeLargePageTable @ 0x14052D62C (MiMakeLargePageTable.c)
 */

__int64 __fastcall MiCreateSystemPageTable(__int64 a1, unsigned __int64 *a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rbx
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // r8
  int PageTablePages; // eax
  _QWORD *v13; // rbx
  unsigned __int64 *i; // r13
  _QWORD *v15; // r12
  signed __int64 *v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int128 v21; // [rsp+20h] [rbp-40h] BYREF
  __int64 v22; // [rsp+30h] [rbp-30h]
  _OWORD v23[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+40h]
  unsigned __int64 v25; // [rsp+B8h] [rbp+58h]

  v3 = *(_QWORD *)(a1 + 184);
  v4 = (int)a3;
  v22 = 0LL;
  v5 = (unsigned __int64)a2;
  v21 = 0LL;
  memset(v23, 0, sizeof(v23));
  if ( _bittest((const signed __int32 *)(v3 + 128), 0xEu) )
  {
    MiFillPteHierarchy(a2, v23);
    v5 = *((_QWORD *)v23 + v4);
    LOBYTE(v25) = CLFS_LSN_NULL_EXT;
  }
  else
  {
    v7 = *a2;
    v25 = *a2;
    if ( (*a2 & 1) != 0 )
    {
      if ( (v7 & 0x80u) != 0LL )
        return 0LL;
      if ( !(unsigned int)MiIsPageAGapPage((v7 >> 12) & 0xFFFFFFFFFFLL, a3) && ((v7 & 0x800) != 0 || (v7 & 0x42) != 0) )
      {
        if ( (_DWORD)v4 == ((*(_DWORD *)(a1 + 4) >> 6) & 7) )
        {
LABEL_7:
          if ( (int)v4 > 1 )
            MiMakeSystemLeavesNonZero(a1, v5, (unsigned int)v4);
        }
        return 0LL;
      }
    }
  }
  if ( (*(_DWORD *)(v3 + 128) & 0x80u) != 0 && (unsigned int)MiMakeLargePageTable(a1, v5, (unsigned int)v4) )
    return 0LL;
  v9 = 1LL;
  v24 = 1LL;
  v10 = 2;
  if ( (_DWORD)v4 )
  {
    if ( !_bittest((const signed __int32 *)(v3 + 128), 0xEu) )
      goto LABEL_14;
    v9 = (int)v4 + 1;
    v24 = v9;
  }
  v10 = 3;
LABEL_14:
  v11 = v10 | 0x2000;
  if ( (*(_DWORD *)(v3 + 128) & 0x2000) == 0 )
    v11 = v10;
  PageTablePages = MiGetPageTablePages(v3, v9, v11, &v21);
  if ( PageTablePages < 0 )
  {
    if ( PageTablePages == -1073741801
      && (*(_DWORD *)a1 & 2) != 0
      && *(_BYTE *)(a1 + 9) < 2u
      && KeGetCurrentThread()->Priority < 16
      && (*(_DWORD *)(v3 + 128) & 0x400) == 0 )
    {
      return 3LL;
    }
    else
    {
      *(_DWORD *)(v3 + 144) = PageTablePages;
      return 5LL;
    }
  }
  else
  {
    v13 = (_QWORD *)v21;
    for ( i = (unsigned __int64 *)v23 + v4; ; v5 = *i )
    {
      v15 = v13;
      if ( v13 )
      {
        v13 = (_QWORD *)*v13;
        --v22;
      }
      if ( (MiFlags & 0x80u) != 0LL
        && (++*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[40] & MmPageValidationFrequency) == 0 )
      {
        MiArePageContentsZero((__int64)(v15 + 0x44000000000LL) / 48);
      }
      MiInitializeSystemPageTable(a1, (unsigned int)v4, v5, v15);
      v16 = *(signed __int64 **)(v3 + 176);
      if ( v16 && v16[4] && (int)v4 >= 1 )
      {
        MiLockNestedPageTable(*v16, v5);
        MiUnlockPageTableInternal(*v16, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v16[4] = v5;
      }
      if ( !v22 )
        break;
      LODWORD(v4) = v4 - 1;
      --i;
    }
    *(_QWORD *)(v3 + 112) += v24;
    if ( (*(_DWORD *)(v3 + 128) & 0x4000) != 0 )
      return 0LL;
    if ( (int)v4 <= ((*(_DWORD *)(a1 + 4) >> 6) & 7) )
      goto LABEL_7;
    if ( (v25 & 1) != 0 )
    {
      v17 = *(_QWORD *)(v3 + 136);
      if ( v17 )
      {
        MiFlushTbList(v17);
        MiReleaseProcessorFlushList(v19, v18, v20);
        *(_QWORD *)(v3 + 136) = 0LL;
      }
    }
    return 2LL;
  }
}
