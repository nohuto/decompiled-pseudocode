/*
 * XREFs of RtlpStackDbEntryCreate @ 0x18015B1A4
 * Callers:
 *     RtlStackDbStackAdd @ 0x18011FA2C (RtlStackDbStackAdd.c)
 * Callees:
 *     RtlpStackDbSegmentFindOrCreate @ 0x1800FF554 (RtlpStackDbSegmentFindOrCreate.c)
 *     RtlpStackDbEntryCleanup @ 0x18015B124 (RtlpStackDbEntryCleanup.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpStackDbEntryCreate(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned int v9; // r15d
  void *v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // esi
  unsigned int v13; // ebp
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v19[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+28h] [rbp-30h]

  v5 = *(_DWORD *)a2 + 7;
  v6 = *(_QWORD *)(a1 + 64);
  v7 = 0LL;
  v19[1] = 0;
  v9 = v5 >> 3;
  v10 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 48))(8 * v9 + 24, v6);
  v11 = (__int64)v10;
  if ( v10 )
  {
    memset_thunk_772440563353939046(v10, 0, 8 * v9 + 24);
    *(_QWORD *)(v11 + 8) = a3;
    *(_QWORD *)(v11 + 16) &= 0xFF00000000000001uLL;
    *(_QWORD *)(v11 + 16) |= 1uLL;
    v12 = 0;
    *(_BYTE *)(v11 + 23) = *(_BYTE *)a2;
    v13 = *(_DWORD *)a2;
    while ( v12 < v9 )
    {
      v14 = v13;
      if ( v13 > 8 )
        v14 = 8;
      v20 = *(_QWORD *)(a2 + 8) + 64LL * v12;
      v19[0] = v14;
      v15 = RtlpStackDbSegmentFindOrCreate(a1, v19);
      if ( !v15 )
      {
        RtlpStackDbEntryCleanup(a1, v11);
        return v7;
      }
      v16 = v12++;
      *(_QWORD *)(v11 + 8 * v16 + 24) = v15;
      v17 = v13 - 8;
      if ( v13 <= 8 )
        v17 = v13;
      v13 = v17;
    }
    return v11;
  }
  return v7;
}
