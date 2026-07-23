/*
 * XREFs of MiInitializeTransitionPfn @ 0x14036C744
 * Callers:
 *     MiInitializeImageProtos @ 0x14033A684 (MiInitializeImageProtos.c)
 *     MiCopyDataPageToImagePage @ 0x14036E218 (MiCopyDataPageToImagePage.c)
 *     MiInitializeNewImageSectionProtos @ 0x1404A7DCC (MiInitializeNewImageSectionProtos.c)
 *     MiCopyFileOnlyPage @ 0x1404AF42C (MiCopyFileOnlyPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiSwizzleInvalidPte @ 0x1402B1EF0 (MiSwizzleInvalidPte.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiSetPfnTbFlushStamp @ 0x14036D880 (MiSetPfnTbFlushStamp.c)
 *     MiProtectionToCacheAttribute @ 0x140374020 (MiProtectionToCacheAttribute.c)
 */

__int64 __fastcall MiInitializeTransitionPfn(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rsi
  unsigned __int64 ContainingPageTable; // r15
  __int64 PteShadow; // rax
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r9
  signed __int64 v10; // rcx
  signed __int64 v11; // rdx
  signed __int64 i; // rax
  int v13; // eax
  unsigned int v14; // eax
  unsigned __int64 v15; // rbx
  __int64 v16; // rbx
  unsigned int v17; // edx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 result; // rax
  __int64 v23; // [rsp+60h] [rbp+18h] BYREF

  v23 = a3;
  v5 = 48 * a1 - 0x220000000000LL;
  ContainingPageTable = MiGetContainingPageTable((ULONG_PTR)a2);
  *(_QWORD *)v5 = 0LL;
  PteShadow = *a2;
  v8 = 0xFFFFF6FB7DBED000uLL;
  v9 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow((unsigned __int64)a2, *a2);
  if ( (PteShadow & 0x400) == 0 && (PteShadow & 0x800) != 0 )
    PteShadow = MEMORY[0xFFFFDDFFFFFFFFE0];
  *(_QWORD *)(v5 + 16) = PteShadow;
  *(_QWORD *)(v5 + 40) |= 0x8000000000000000uLL;
  v10 = *(_QWORD *)(v5 + 40);
  v11 = v10;
  for ( i = v10; ; v11 = i )
  {
    i = _InterlockedCompareExchange64(
          (volatile signed __int64 *)(v5 + 40),
          ContainingPageTable ^ (ContainingPageTable ^ v11) & 0xFFFFFF0000000000uLL,
          i);
    if ( v10 == i )
      break;
    v10 = i;
  }
  *(_QWORD *)(v5 + 8) = a2;
  *(_QWORD *)(v5 + 24) &= ~0x4000000000000000uLL;
  v13 = *(_DWORD *)(v5 + 32);
  if ( (*(_BYTE *)(v5 + 34) & 0x10) != 0 )
    v14 = v13 & 0xFFF8FFFF | 0x30000;
  else
    v14 = v13 & 0xFFF8FFFF | 0x20000;
  *(_DWORD *)(v5 + 32) = v14;
  v15 = *a2;
  if ( (unsigned __int64)a2 >= v8 && (unsigned __int64)a2 <= v9 )
    v15 = MiReadPteShadow((unsigned __int64)a2, *a2);
  v16 = (v15 >> 5) & 0x1F;
  v17 = MiProtectionToCacheAttribute((unsigned int)v16);
  if ( ((*(_DWORD *)(v5 + 32) >> 22) & 3) != v17 )
    MiChangePageAttribute(v5, v17);
  MiSetPfnTbFlushStamp(v5, 0LL, 1LL);
  *(_QWORD *)(v5 + 24) &= 0xC000000000000000uLL;
  *a2 = MiSwizzleInvalidPte((32 * ((unsigned int)v16 | ((a1 & 0xFFFFFFFFFFLL) << 7) | 0x40)) | *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFF0000000000C1FuLL);
  v18 = 48 * ContainingPageTable;
  LODWORD(v23) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 - 0x220000000000LL + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v23);
    while ( *(__int64 *)(v18 - 0x220000000000LL + 24) < 0 );
  }
  v19 = *(_QWORD *)(v18 - 0x220000000000LL + 24);
  v20 = v19 + 1;
  v21 = v19 ^ (v19 + 1);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v18 - 0x220000000000LL + 24) = v20 ^ v21 & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v18 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
