/*
 * XREFs of MiValidateInPagePrepare @ 0x14038DF70
 * Callers:
 *     MiValidateInPage @ 0x14038DF04 (MiValidateInPage.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402516EC (MiFlushEntireTbDueToAttributeChange.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     MiCanPageMove @ 0x1402DFD1C (MiCanPageMove.c)
 *     MiControlAreaHasHostRelocationsApplied @ 0x1404CE974 (MiControlAreaHasHostRelocationsApplied.c)
 */

__int64 __fastcall MiValidateInPagePrepare(__int64 a1, __int64 a2)
{
  __int64 *v4; // r15
  __int64 v5; // rsi
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  int v8; // r8d
  __int64 v9; // rbp
  int v10; // ecx
  __int64 v11; // rdx
  unsigned int v12; // r8d
  int v13; // edx
  int *v14; // r8
  __int64 v15; // rax
  int v16; // r9d
  __int64 v17; // r10
  __int64 v18; // rcx
  int v19; // edx
  int *v20; // r9
  int v21; // edx
  int *v22; // rdi
  int *v23; // rdx
  __int64 result; // rax

  *(_DWORD *)(a2 + 52) = 0;
  *(_QWORD *)(a2 + 64) = 0LL;
  v4 = *(__int64 **)(a1 + 192);
  v5 = *v4;
  v6 = *(_QWORD *)(*v4 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (*(_DWORD *)(a1 + 188) & 0x400000) != 0 )
    v7 = 0LL;
  else
    v7 = *(_QWORD *)(a1 + 208);
  v8 = *(_DWORD *)(a1 + 184);
  v9 = a1 + 272;
  *(_DWORD *)(a2 + 16) = v8;
  *(_QWORD *)a2 = a1;
  if ( v7 )
    v9 = v7;
  *(_QWORD *)(a2 + 24) = v4;
  *(_QWORD *)(a2 + 8) = v9;
  *(_QWORD *)(a2 + 32) = v5;
  *(_QWORD *)(a2 + 40) = v6;
  v10 = *(_DWORD *)(v9 + 44);
  v11 = *(unsigned int *)(v9 + 40);
  *(_DWORD *)(a2 + 20) = (v11 + ((v10 + *(_DWORD *)(v9 + 32)) & 0xFFFuLL) + 4095) >> 12;
  *(_QWORD *)(a1 + 96) += (unsigned int)(v8 - v10 - v11);
  v12 = v8 - *(_DWORD *)(v9 + 40) - *(_DWORD *)(v9 + 44);
  v13 = 0;
  *(_DWORD *)(a1 + 216) += (v12 >> 12) + ((v12 & 0xFFF) != 0);
  v14 = (int *)(a2 + 64);
  v15 = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(a2 + 56) = v15;
  if ( (v15 & 0xFFFFFFFFFFFFFFF8uLL) <= 0x7FFFFFFFFFFFFFF8LL )
  {
    v16 = 0;
  }
  else
  {
    *v14 |= 2u;
    v13 = *v14;
    v16 = *v14;
  }
  v17 = 48LL * *(_QWORD *)(v9 + 48) - 0x220000000000LL;
  v18 = *(_QWORD *)(v17 + 16) >> 5;
  *(_DWORD *)(a2 + 48) = v18 & 0x1F;
  if ( (*(_DWORD *)(v5 + 92) & 0xC0000) != 0 && (v13 & 2) != 0 )
  {
    v19 = v13 | 1;
    *v14 = v19;
  }
  else
  {
    v19 = v16;
    if ( _bittest64(&MiFlags, 0x13u) && (v18 & 2) != 0 )
    {
      *(_DWORD *)(a2 + 52) |= 3u;
      v14 = (int *)(a2 + 64);
    }
  }
  v20 = v14;
  if ( *(_QWORD *)(v6 + 32) )
  {
    if ( !_bittest64(&MiFlags, 0x13u) )
    {
      if ( (v18 & 2) != 0 && (*(_DWORD *)(v5 + 92) & 0xC0000) != 0 || !MiCanPageMove(v17) )
        goto LABEL_24;
      v19 = *(_DWORD *)(a2 + 64);
    }
    v21 = v19 | 4;
    v20 = (int *)(a2 + 64);
    *(_DWORD *)(a2 + 64) = v21;
    if ( (v21 & 1) == 0 || (MiFlags & 0x8000) == 0 )
      *v20 = v21 | 8;
  }
LABEL_24:
  if ( (*(_BYTE *)(v5 + 96) & 1) != 0 )
    *v20 |= 0x10u;
  v22 = v20;
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0 && _bittest64(&MiFlags, 0x13u) )
  {
    if ( (*(_BYTE *)(v9 + 10) & 1) != 0 )
    {
      MmUnmapLockedPages(*(PVOID *)(v9 + 24), (PMDL)v9);
      v22 = (int *)(a2 + 64);
    }
    MiFlushEntireTbDueToAttributeChange();
  }
  v23 = v22;
  if ( (*v22 & 2) != 0
    && *(_DWORD *)(a2 + 20) > 1u
    && _bittest16((const signed __int16 *)(v9 + 10), 0xEu)
    && !(unsigned int)MiControlAreaHasHostRelocationsApplied(v5, v22) )
  {
    *v22 |= 0x40u;
    v23 = (int *)(a2 + 64);
  }
  result = v5 + 128;
  if ( v4 == (__int64 *)(v5 + 128) && (*(_DWORD *)(v6 + 56) & 0xFFF) != 0 )
    *v23 |= 0x100u;
  return result;
}
