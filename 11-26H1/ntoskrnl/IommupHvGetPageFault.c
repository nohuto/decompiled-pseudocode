/*
 * XREFs of IommupHvGetPageFault @ 0x1405A0CA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvGetPageFault(
        unsigned int *a1,
        _DWORD *a2,
        _QWORD *a3,
        _WORD *a4,
        unsigned __int64 *a5,
        __int64 *a6)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // r9
  int v13; // eax
  __m128i v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // xmm1_8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v23; // [rsp+20h] [rbp-28h]

  v9 = **((_QWORD **)a1 + 1);
  if ( (_DWORD)v9 == HIDWORD(v9) )
  {
    if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 9LL) )
      guard_dispatch_icall_no_overrides(*a1, a2);
    return 0LL;
  }
  else
  {
    v10 = *((_QWORD *)a1 + 2);
    v11 = 0;
    v12 = 32LL * (unsigned int)v9;
    v13 = v9 + 1;
    v14 = *(__m128i *)(v12 + v10);
    if ( v13 != 128 )
      v11 = v13;
    v15 = *(_OWORD *)(v12 + v10 + 16);
    v23 = *(_QWORD *)(v12 + v10);
    **((_DWORD **)a1 + 1) = v11;
    v16 = _mm_srli_si128(v14, 8).m128i_u64[0];
    if ( v16 >= 0 )
    {
      if ( (v16 & 0x400) != 0 )
        v18 = ((unsigned __int64)v16 >> 11) & 0xFFFFF;
      else
        LODWORD(v18) = -1;
      *a2 = v18;
      *a3 = v23;
      *a4 = v16 & 0x1FF;
      *a5 = v15 & 0xFFFFFFFFFFFFF000uLL;
      v19 = v15 & 1 | 2;
      if ( (v15 & 2) == 0 )
        v19 = v15 & 1;
      v20 = v19 | 4;
      if ( (v15 & 4) == 0 )
        v20 = v19;
      v21 = v20 | 8;
      if ( (v15 & 8) == 0 )
        v21 = v20;
      v17 = v21 | 0x10;
      if ( (v16 & 0x200) == 0 )
        v17 = v21;
    }
    else
    {
      *a2 = -1;
      *a3 = 0LL;
      *a4 = -1;
      *a5 = 0LL;
      v17 = 32LL;
    }
    *a6 = v17;
    return 1LL;
  }
}
