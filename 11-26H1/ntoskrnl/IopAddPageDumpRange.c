/*
 * XREFs of IopAddPageDumpRange @ 0x1405CB010
 * Callers:
 *     IopDumpCallAddPagesCallbacks @ 0x1405CB4D8 (IopDumpCallAddPagesCallbacks.c)
 * Callees:
 *     IoSetDumpRange @ 0x1405CA2F0 (IoSetDumpRange.c)
 */

__int64 __fastcall IopAddPageDumpRange(__int64 a1, char *a2)
{
  int v4; // edx
  int v5; // ecx
  __int64 result; // rax
  char v7; // di
  __int64 v8; // r8
  char v9; // r9
  _QWORD v10[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v11[3]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h]
  __int128 v13; // [rsp+50h] [rbp-10h]

  v11[0] = 0LL;
  v11[1] = 0LL;
  v13 = 0LL;
  if ( a2 )
    *a2 = 0;
  v4 = *(_DWORD *)(a1 + 8) & 0xFF0;
  v5 = *(_DWORD *)(a1 + 8) ^ v4;
  *(_DWORD *)(a1 + 8) = v5;
  if ( (v5 & 0x7FFFFFCC) != 0 )
    return 3221225714LL;
  if ( v5 >= 0 )
  {
    v7 = 0;
  }
  else
  {
    v5 &= ~0x80000000;
    v7 = 1;
    *(_DWORD *)(a1 + 8) = v5;
  }
  if ( ((v5 - 1) & v5) != 0 )
    return 3221225485LL;
  v8 = *(_QWORD *)(a1 + 24);
  if ( !v8 )
    return 0LL;
  v9 = v4 | 2;
  if ( (v5 & 1) != 0 )
    v9 = v4;
  v12 = *(_QWORD *)(CrashdmpDumpBlock + 8);
  v10[0] = *(_QWORD *)(v12 + 48);
  v10[1] = v12 + 56;
  v11[2] = v10;
  if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 4) != 0 )
  {
    DWORD2(v13) |= 3u;
    *(_QWORD *)&v13 = &AvailablePagesForPartialDump;
  }
  result = IoSetDumpRange((__int64)v11, *(char **)(a1 + 16), v8, v9);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      *a2 = v7;
  }
  return result;
}
