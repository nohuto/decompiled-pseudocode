/*
 * XREFs of MiInsertPhysicalPteMapping @ 0x140367EF0
 * Callers:
 *     MiInsertViewOfPhysicalSection @ 0x140317984 (MiInsertViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403684CC (MiMapLockedPagesInUserSpaceHelper.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiAssignInitialPageAttribute @ 0x1402A2190 (MiAssignInitialPageAttribute.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 *     MiShowBadMapper @ 0x14036876C (MiShowBadMapper.c)
 *     MiLookupIoPageNode @ 0x140369BEC (MiLookupIoPageNode.c)
 *     MiProtectionToCacheAttribute @ 0x140374020 (MiProtectionToCacheAttribute.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     KeChangeMemoryAttributes @ 0x140453D18 (KeChangeMemoryAttributes.c)
 */

__int64 __fastcall MiInsertPhysicalPteMapping(_QWORD *a1)
{
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // r14
  unsigned int v4; // edi
  int v5; // ebx
  int v6; // ebp
  __int64 v7; // rsi
  unsigned int v8; // r8d
  __int64 v9; // rcx
  unsigned __int64 ContainingPageTable; // rax
  __int64 v11; // rbx
  __int64 result; // rax
  int v13; // eax
  int v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1[1];
  v3 = a1[2];
  v4 = *((_DWORD *)a1 + 6);
  v5 = *(_DWORD *)(*a1 + 48LL);
  v6 = MiProtectionToCacheAttribute(v4);
  if ( v3 <= qword_140E2D920 && ((*(_QWORD *)(48 * v3 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
  {
    v7 = 48 * v3 - 0x220000000000LL;
    if ( !(unsigned __int16)*(_DWORD *)(v7 + 32) )
      MiShowBadMapper(v3, 3uLL);
    if ( (*(_DWORD *)(v7 + 32) & 0xC00000) == 0xC00000 )
      MiAssignInitialPageAttribute(48 * v3 - 0x220000000000LL, v6);
    if ( ((*(_DWORD *)(v7 + 32) >> 22) & 3) != v6 )
    {
      v4 &= 7u;
      if ( (*(_DWORD *)(v7 + 32) & 0xC00000) != 0 )
      {
        if ( (*(_DWORD *)(v7 + 32) & 0xC00000) == 0x800000 )
          v4 |= 0x18u;
      }
      else
      {
        v4 |= 8u;
      }
    }
  }
  else
  {
    v13 = MiLookupIoPageNode(v3);
    v4 &= 7u;
    if ( v13 )
    {
      if ( v13 == 2 )
      {
        v4 |= 0x18u;
      }
      else if ( v13 == 1 )
      {
        goto LABEL_11;
      }
    }
    else
    {
      v4 |= 0x10u;
    }
    if ( !*((_DWORD *)a1 + 7) )
    {
      KeChangeMemoryAttributes();
      *((_DWORD *)a1 + 7) = 1;
      if ( (v5 & 0x1C) == 0x10 )
        _InterlockedOr((volatile signed __int32 *)(MiLocateLockedVadEvent(*a1, 8LL) + 32), 1u);
    }
  }
LABEL_11:
  v8 = v4 | 0x80000000;
  if ( (v5 & 0x180000) == 0x180000 )
    v8 = v4;
  *(_QWORD *)v2 = MiMakeValidPte(v2, v3, v8);
  MiIncreaseUsedPtes(v9, ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u, 2);
  ContainingPageTable = MiGetContainingPageTable(v2);
  v14 = 0;
  v11 = 48 * ContainingPageTable;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v14);
    while ( *(__int64 *)(v11 - 0x21FFFFFFFFE8LL) < 0 );
  }
  *(_QWORD *)(v11 - 0x21FFFFFFFFE8LL) = (*(_QWORD *)(v11 - 0x21FFFFFFFFE8LL) + 1LL) ^ (*(_QWORD *)(v11 - 0x21FFFFFFFFE8LL) ^ (*(_QWORD *)(v11 - 0x21FFFFFFFFE8LL) + 1LL)) & 0xC000000000000000uLL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v11 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
