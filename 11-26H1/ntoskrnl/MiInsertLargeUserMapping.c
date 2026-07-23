/*
 * XREFs of MiInsertLargeUserMapping @ 0x14042D264
 * Callers:
 *     MiMapUserLargePages @ 0x1402F1DE0 (MiMapUserLargePages.c)
 *     MiCommitVadFillPageTables @ 0x140312F04 (MiCommitVadFillPageTables.c)
 * Callees:
 *     MiSimpleUnlinkPageEx @ 0x14028D6D0 (MiSimpleUnlinkPageEx.c)
 *     MiWriteLargePte @ 0x1402A0630 (MiWriteLargePte.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 *     MiGetLargePteAddress @ 0x14042D440 (MiGetLargePteAddress.c)
 *     MiInitializeLargeUserBasePfn @ 0x140716D78 (MiInitializeLargeUserBasePfn.c)
 */

__int64 __fastcall MiInsertLargeUserMapping(
        __int64 a1,
        unsigned __int64 a2,
        __int64 *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rdi
  unsigned __int64 v7; // r15
  __int64 v8; // r13
  unsigned int v9; // r9d
  unsigned __int64 LeafVa; // r14
  __int64 v11; // r8
  __int64 v12; // r10
  _QWORD *LargePteAddress; // r12
  __int64 v14; // rsi
  unsigned int v15; // r8d
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // edi
  __int64 result; // rax
  unsigned int i; // edx
  unsigned int v21; // ecx
  __int64 v22; // rcx
  _KPROCESS *Process; // [rsp+20h] [rbp-58h]
  unsigned __int64 v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+30h] [rbp-48h]
  int v28; // [rsp+A0h] [rbp+28h]

  v5 = a4;
  v7 = a2;
  v8 = MiPageSizes[a4];
  Process = KeGetCurrentThread()->ApcState.Process;
  LeafVa = MiGetLeafVa(a2);
  LargePteAddress = (_QWORD *)MiGetLargePteAddress(LeafVa, v9, v11);
  v14 = *a3;
  v15 = a5 | 0x80000000;
  v25 = (unsigned __int64)LargePteAddress;
  if ( (*(_DWORD *)(v12 + 48) & 0x180000) == 0x180000 )
    v15 = a5;
  v16 = v15 | 0x800000;
  v24 = MiPtesToSupportLargePageSizes[v5];
  if ( (*(_DWORD *)(v12 + 48) & 0x8080000) != 0x8080000 )
    v16 = v15;
  v17 = v16 | 0x4000000;
  if ( (_DWORD)v5 == 2 )
    v17 = v16;
  v18 = 0;
  result = 0x3FFFFFFFFFLL;
  v28 = v17;
  if ( v14 != 0x3FFFFFFFFFLL )
  {
    do
    {
      MiSimpleUnlinkPageEx((__int64)a3, v14);
      MiInitializeLargeUserBasePfn(48 * v14 - 0x220000000000LL, v7, Process);
      for ( i = 0; i < v24; v18 = v21 )
      {
        v21 = v18 + 1;
        if ( *LargePteAddress )
          v21 = v18;
        ++i;
        ++LargePteAddress;
      }
      MiWriteLargePte(LeafVa, v14, a4, v28);
      v14 = *a3;
      result = 0x3FFFFFFFFFLL;
      LeafVa += v8 << 12;
      v7 += 8 * v8;
    }
    while ( *a3 != 0x3FFFFFFFFFLL );
    if ( v18 )
      return MiIncreaseUsedPtes(v22, ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v18, 2);
  }
  return result;
}
