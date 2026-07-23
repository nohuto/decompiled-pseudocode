/*
 * XREFs of MiCheckProtoPtePageState @ 0x14031DB30
 * Callers:
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 *     MiFlushSubsection @ 0x1403CB290 (MiFlushSubsection.c)
 *     MiPurgeSubsection @ 0x1404199B0 (MiPurgeSubsection.c)
 *     MiAnyProtosAreMapped @ 0x1404B66A0 (MiAnyProtosAreMapped.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiInvalidPteConforms @ 0x1402D64B0 (MiInvalidPteConforms.c)
 *     MiAddLockedPageCharge @ 0x1402D7DB0 (MiAddLockedPageCharge.c)
 *     MiIsProtoPoolPfnInNonPagedPool @ 0x14031E250 (MiIsProtoPoolPfnInNonPagedPool.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiGetLeafPfnBuddy @ 0x14040AE80 (MiGetLeafPfnBuddy.c)
 *     MiSpinForProtoPoolLock @ 0x14040AEE0 (MiSpinForProtoPoolLock.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiCheckProtoPtePageState(__int64 a1, ULONG_PTR a2, __int64 a3, _BYTE *a4)
{
  _DWORD *v4; // rbp
  __int64 v5; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 *v9; // r13
  unsigned __int64 v10; // r9
  __int64 v11; // r10
  unsigned __int64 v12; // r11
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  int v15; // eax
  ULONG_PTR ContainingPageTable; // rcx
  int v17; // r15d
  int v18; // r15d
  __int64 v19; // rsi
  unsigned __int8 v20; // al
  unsigned __int64 v21; // r12
  volatile signed __int64 *v22; // r8
  signed __int64 i; // rcx
  signed __int64 v24; // rax
  __int64 LeafPfnBuddy; // rax
  unsigned __int8 v27; // al
  _QWORD *v28; // rcx
  _DWORD v29[16]; // [rsp+60h] [rbp+0h] BYREF
  unsigned int v31; // [rsp+130h] [rbp+D0h]

  v31 = a3;
  v4 = (_DWORD *)((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL);
  LOBYTE(v5) = CLFS_LSN_NULL_EXT;
  v7 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v8 = a1;
  v9 = 0LL;
  while ( 2 )
  {
    v10 = 0xFFFFDE0000000000uLL;
    v11 = 0xFFFFFFFFFFLL;
    v12 = 0xFFFFF68000000000uLL;
    while ( 1 )
    {
      do
      {
        while ( a2 < 0xFFFF800000000000uLL || byte_140E37BF0[((a2 >> 39) & 0x1FF) - 256] != 4 )
        {
          v9 = (__int64 *)(v12 + ((a2 >> 9) & 0x7FFFFFFFF8LL));
          v7 = *v9;
          v13 = *v9 & 1;
          if ( (a3 & 1) != 0 )
          {
            if ( !v13 )
            {
              if ( !v8 || (v7 & 0x400000000000400LL) != 0x400000000000400LL || (*(_BYTE *)(v8 + 56) & 0x20) != 0 )
                goto LABEL_41;
              goto LABEL_35;
            }
            if ( (v7 & 0x200) != 0 )
              goto LABEL_41;
            v14 = *v9;
            goto LABEL_9;
          }
          if ( v13 )
          {
            if ( (v7 & 0x200) != 0 )
              goto LABEL_35;
            v14 = *v9;
            goto LABEL_9;
          }
          if ( (*v9 & 0xC00) != 0x800 )
            goto LABEL_35;
          if ( MiInvalidPteConforms(*v9) )
          {
            v14 = v7;
            if ( qword_140E2D8C0 )
            {
              v14 = v7 & 0xFFFFFFFFFFFFFFEFuLL;
              if ( (v7 & 0x10) == 0 )
                v14 = v7 & qword_140E2D8C8;
            }
LABEL_9:
            v15 = a3;
            ContainingPageTable = v11 & (v14 >> 12);
            v17 = 1;
            goto LABEL_10;
          }
        }
        v17 = v31;
        ContainingPageTable = MiGetContainingPageTable(a2);
        v15 = 1;
        v10 = 0xFFFFDE0000000000uLL;
LABEL_10:
        v18 = v15 & v17;
        v19 = v10 + 48 * ContainingPageTable;
        v20 = MiSafeLockPage(ContainingPageTable, v8, a3);
        a3 = v31;
        v8 = a1;
        v11 = 0xFFFFFFFFFFLL;
        v21 = v20;
        v10 = 0xFFFFDE0000000000uLL;
        v12 = 0xFFFFF68000000000uLL;
      }
      while ( v20 == 17 );
      if ( !v9 )
        break;
      v5 = *v9;
      if ( *v9 == v7 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      a3 = v31;
      v8 = a1;
      v10 = 0xFFFFDE0000000000uLL;
      v12 = 0xFFFFF68000000000uLL;
      if ( v20 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v20);
        __writecr8(v21);
        goto LABEL_58;
      }
    }
    if ( (v5 & 1) == 0 && v9 )
    {
      v27 = *(_BYTE *)(v19 + 34) & 7;
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v27 < 6u )
        goto LABEL_31;
      if ( (unsigned __int8)v21 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v21);
        __writecr8(v21);
      }
LABEL_41:
      MmAccessFault(2uLL, a2);
LABEL_58:
      a3 = v31;
      v8 = a1;
      continue;
    }
    break;
  }
  if ( !v18 && (*(_QWORD *)(v19 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_31:
    if ( (unsigned __int8)v21 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v21);
      __writecr8(v21);
    }
LABEL_35:
    *a4 = 17;
    return 0LL;
  }
  if ( v9 )
    MiAddLockedPageCharge(v19, 1, v31, 0xFFFFDE0000000000uLL);
  *a4 = v21;
  memset_0(v4 + 16, 0, 0x40uLL);
  if ( (*(_BYTE *)(v19 + 34) & 0x20) != 0 )
  {
    *(_DWORD *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0;
    LeafPfnBuddy = MiGetLeafPfnBuddy(v19, 1LL);
    if ( LeafPfnBuddy )
    {
      v28 = *(_QWORD **)(LeafPfnBuddy + 8);
      if ( *v28 != LeafPfnBuddy )
        __fastfail(3u);
      *(_QWORD *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v28;
      *(_QWORD *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = LeafPfnBuddy;
      *v28 = v4 + 16;
      *(_QWORD *)(LeafPfnBuddy + 8) = v4 + 16;
    }
    else
    {
      *(_QWORD *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)v19 = ((unsigned __int64)(v4 + 16) >> 3) ^ (*(_QWORD *)v19 ^ ((unsigned __int64)(v4 + 16) >> 3)) & 0xFFFFF00000000001uLL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiSpinForProtoPoolLock(v4 + 16);
    *v4 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx((_DWORD *)((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL));
      while ( *(__int64 *)(v19 + 24) < 0 );
    }
  }
  else
  {
    *(_DWORD *)(v19 + 32) |= 0x200000u;
  }
  if ( (*(_QWORD *)(v19 + 24) & 0x4000000000000000LL) == 0 && !(unsigned int)MiIsProtoPoolPfnInNonPagedPool(v19) )
  {
    v22 = (volatile signed __int64 *)(*(_QWORD *)(v19 + 8) | 0x8000000000000000uLL);
    if ( (*v22 & 0x20) == 0 )
    {
      for ( i = *v22; ; i = v24 )
      {
        if ( (MiFlags & 0x8000000) != 0 )
          _mm_lfence();
        v24 = _InterlockedCompareExchange64(v22, i | 0x20, i);
        if ( i == v24 )
          break;
      }
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v19;
}
