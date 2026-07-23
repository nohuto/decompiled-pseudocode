/*
 * XREFs of MiCombineCandidate @ 0x1402D6000
 * Callers:
 *     MiMapArbitraryPage @ 0x1402D4D00 (MiMapArbitraryPage.c)
 *     MiComputeCombineHash @ 0x1402D5A70 (MiComputeCombineHash.c)
 *     MiSharePagesLockPageTable @ 0x1402E932C (MiSharePagesLockPageTable.c)
 *     MiCrcStillIntact @ 0x1402E96C8 (MiCrcStillIntact.c)
 *     MiRecheckCombineVm @ 0x1403FD34C (MiRecheckCombineVm.c)
 *     MiCapturePfnVm @ 0x14050D140 (MiCapturePfnVm.c)
 *     MiCombinePte @ 0x140709100 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x140880C48 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MI_IS_RESET_PTE @ 0x140369B90 (MI_IS_RESET_PTE.c)
 */

__int64 __fastcall MiCombineCandidate(_QWORD *a1, char a2, const __m128i *a3)
{
  __int16 v3; // di
  __int32 v4; // ebp
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  int v10; // eax
  unsigned int v12; // r8d
  int v13; // rax^4
  __m128i v14; // [rsp+20h] [rbp-48h] BYREF
  __m128i v15; // [rsp+30h] [rbp-38h]
  __m128i v16; // [rsp+40h] [rbp-28h]

  v14 = _mm_loadu_si128(a3);
  v16 = _mm_loadu_si128(a3 + 2);
  v3 = v16.m128i_i16[0];
  v4 = v16.m128i_i32[0] & 0x70000;
  v15 = _mm_loadu_si128(a3 + 1);
  if ( (v16.m128i_i32[0] & 0x70000u) <= 0x10000 )
    return 0LL;
  v5 = v14.m128i_u64[1];
  if ( *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * (((unsigned __int64)v16.m128i_i64[1] >> 43) & 0x3FF)) != *a1
    && (a2 & 1) == 0 )
  {
    return 0LL;
  }
  if ( v16.m128i_i64[1] < 0
    || (v16.m128i_i64[1] & 0x10000000000LL) != 0
    || (v16.m128i_i32[0] & 0x8000000) != 0
    || v14.m128i_i64[1] < 0xFFFFF68000000000uLL
    || v14.m128i_i64[1] > 0xFFFFF6FFFFFFFFFFuLL
    || (v15.m128i_i64[1] & 0x4000000000000000LL) != 0
    || (((unsigned __int64)v16.m128i_i64[1] >> 60) & 7) == 4
    || (v14.m128i_i64[1] | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
    && (v14.m128i_i64[1] | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
    && (v16.m128i_i8[3] & 0x20) != 0 )
  {
    return 0LL;
  }
  if ( byte_140E3BEA6 )
  {
    v6 = (unsigned __int64)((__int64)a3[0x22000000000LL].m128i_i64 / 48) >> 9;
    if ( *(_BYTE *)(qword_140E3D240 + 2 * v6) )
    {
      if ( *(_BYTE *)(qword_140E3D240 + 2 * v6) != 10 )
        return 0LL;
    }
  }
  v7 = v15.m128i_i64[0];
  if ( (v15.m128i_i8[0] & 1) != 0 || v15.m128i_i64[0] && qword_140E2D8C0 && (qword_140E2D8C0 & v15.m128i_i64[0]) == 0 )
    return 0LL;
  v8 = ((unsigned __int64)v15.m128i_i64[0] >> 5) & 0x1F;
  if ( (_DWORD)v8 == 24
    || (_DWORD)v8 == 31
    || (((unsigned __int64)v15.m128i_i64[0] >> 5) & 0x18) == 0x10
    || (unsigned int)v8 >= 0x1E
    || (unsigned int)MiGetPagePrivilege((ULONG_PTR)&v14) )
  {
    return 0LL;
  }
  v9 = (__int64)(v5 << 25) >> 16;
  if ( v9 < 0xFFFF800000000000uLL )
    v10 = 0;
  else
    v10 = (unsigned __int8)byte_140E37BF0[((v9 >> 39) & 0x1FF) - 256];
  if ( v5 > 0xFFFFF6BFFFFFFF78uLL )
  {
    if ( v10 != 5 )
      return 0LL;
    v12 = 2;
  }
  else
  {
    v12 = 1;
  }
  if ( (unsigned int)(v4 - 0x20000) > 0x10000 )
  {
    if ( v4 == 393216
      && (v14.m128i_i8[0] & 1) != 0
      && v3 == 1
      && (v16.m128i_i64[1] & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL
      && (v15.m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) == 1
      && (v12 != 1 || !(unsigned int)MI_IS_RESET_PTE(v7) && ((v7 & 0x400) != 0 || (v7 & 0x8000000) == 0)) )
    {
      return v12;
    }
    return 0LL;
  }
  if ( v16.m128i_i16[0] )
    return 0LL;
  if ( v12 == 1 && (v7 & 0x400) == 0 )
  {
    if ( (v7 & 0x800) == 0 && (v7 & 8) == 0 && (v7 & 4) == 0 )
    {
      v13 = HIDWORD(v7);
      if ( qword_140E2D8C0 )
      {
        v13 = HIDWORD(v7);
        if ( (v7 & 0x10) == 0 )
          v13 = HIDWORD(qword_140E2D8C8) & HIDWORD(v7);
      }
      if ( v13 == 1 )
        return 0LL;
    }
    if ( (v7 & 0x8000000) != 0 )
      return 0LL;
  }
  return v12;
}
