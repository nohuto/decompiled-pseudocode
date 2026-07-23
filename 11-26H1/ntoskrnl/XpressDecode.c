/*
 * XREFs of XpressDecode @ 0x1407240DC
 * Callers:
 *     CMFReadCompressedSegment @ 0x140848D94 (CMFReadCompressedSegment.c)
 * Callees:
 *     do_decode @ 0x140724264 (do_decode.c)
 */

__int64 __fastcall XpressDecode(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6)
{
  unsigned __int64 v6; // rdi
  __int64 v8; // rsi
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned __int64 v11; // rax

  v6 = a4;
  if ( !a1 || *(_DWORD *)(a1 + 104) != 903790814 )
    return 0xFFFFFFFFLL;
  if ( a6 == a3 )
    return (unsigned int)v6;
  if ( a6 > a3 || a6 < 0 || a3 <= 8 || a6 < 8 )
    return 0xFFFFFFFFLL;
  if ( a3 > 0x10000 || a4 <= 0 )
    return (unsigned int)v6;
  v8 = a4 + a2;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = a2 + a3;
  *(_QWORD *)(a1 + 24) = v8;
  v9 = a6 + a5;
  *(_QWORD *)(a1 + 40) = v9;
  *(_QWORD *)(a1 + 64) = v9 - 1;
  *(_QWORD *)(a1 + 72) = v9 - 3;
  *(_QWORD *)(a1 + 80) = v9 - 1;
  *(_QWORD *)(a1 + 16) = a2;
  if ( v6 > 0x108 )
    *(_QWORD *)(a1 + 16) = v8 - 264;
  v10 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 56) = v10;
  if ( (unsigned __int64)(a5 + a6 - v10) > 0xE8 )
    *(_QWORD *)(a1 + 56) = v9 - 232;
  *(_QWORD *)(a1 + 48) = a5;
  *(_QWORD *)(a1 + 96) = 0LL;
  do_decode(a1);
  if ( *(_DWORD *)(a1 + 96)
    && (v11 = *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32) <= v11)
    && (v11 != *(_QWORD *)a1 || *(_DWORD *)(a1 + 100)) )
  {
    return (unsigned int)v6;
  }
  else
  {
    return 0xFFFFFFFFLL;
  }
}
