/*
 * XREFs of RtlpStackDbEntryCreate @ 0x14043C31C
 * Callers:
 *     RtlStackDbStackAdd @ 0x14043BB88 (RtlStackDbStackAdd.c)
 * Callees:
 *     RtlpStackDbSegmentFindOrCreate @ 0x14043C888 (RtlpStackDbSegmentFindOrCreate.c)
 *     RtlpStackDbEntryCleanup @ 0x140626640 (RtlpStackDbEntryCleanup.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

_QWORD *__fastcall RtlpStackDbEntryCreate(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r15d
  __int64 v5; // rdx
  __int64 v7; // rbx
  unsigned int v9; // r15d
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // esi
  unsigned int v14; // ebp
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // eax
  _DWORD v20[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+28h] [rbp-30h]

  v3 = *(_DWORD *)a2;
  v5 = *(_QWORD *)(a1 + 64);
  v7 = 0LL;
  v20[1] = 0;
  v9 = (v3 + 7) >> 3;
  v10 = (_QWORD *)guard_dispatch_icall_no_overrides(8 * v9 + 24, v5);
  v11 = v10;
  if ( v10 )
  {
    memset_0(v10, 0, 8 * v9 + 24);
    v12 = v11[2];
    v11[1] = a3;
    v13 = 0;
    v11[2] = v12 & 0xFF00000000000000uLL | 1;
    *((_BYTE *)v11 + 23) = *(_BYTE *)a2;
    v14 = *(_DWORD *)a2;
    while ( v13 < v9 )
    {
      v15 = v14;
      if ( v14 > 8 )
        v15 = 8;
      v21 = *(_QWORD *)(a2 + 8) + 64LL * v13;
      v20[0] = v15;
      v16 = RtlpStackDbSegmentFindOrCreate(a1, v20);
      if ( !v16 )
      {
        RtlpStackDbEntryCleanup(a1, v11);
        return (_QWORD *)v7;
      }
      v17 = v13++;
      v11[v17 + 3] = v16;
      v18 = v14 - 8;
      if ( v14 <= 8 )
        v18 = v14;
      v14 = v18;
    }
    return v11;
  }
  return (_QWORD *)v7;
}
