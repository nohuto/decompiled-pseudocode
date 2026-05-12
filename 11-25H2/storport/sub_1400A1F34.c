/*
 * XREFs of sub_1400A1F34 @ 0x1400A1F34
 * Callers:
 *     sub_14009641C @ 0x14009641C (sub_14009641C.c)
 *     sub_1401AFF24 @ 0x1401AFF24 (sub_1401AFF24.c)
 * Callees:
 *     sub_14017BE10 @ 0x14017BE10 (sub_14017BE10.c)
 */

__int64 __fastcall sub_1400A1F34(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // ecx
  __int64 result; // rax
  int v8; // edx
  __int64 v9; // r9
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v6 = 0;
  if ( !a1 )
    return 3221225473LL;
  v8 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( *(_DWORD *)(a2 + 184) )
    goto LABEL_12;
  v9 = *(_QWORD *)(a1 + 4288);
  if ( !v9 )
  {
    if ( *(_DWORD *)(a1 + 904) == 3 )
    {
      if ( *(_BYTE *)(a2 + 144) == 4 )
        v9 = *(_QWORD *)(a1 + 4320);
      else
        LODWORD(v9) = -1;
    }
    else
    {
      LODWORD(v9) = -1;
    }
  }
  result = sub_14017BE10(
             (int)a1 + 880,
             a3,
             *(_QWORD *)(a1 + 4296),
             v9,
             *(_QWORD *)(a1 + 4304),
             *(_DWORD *)(a1 + 4280),
             0x80000000,
             (__int64)&v10);
  v6 = result;
  if ( (int)result >= 0 )
  {
    v8 = v11;
LABEL_12:
    *(_OWORD *)(a2 + 168) = v10;
    result = v6;
    *(_DWORD *)(a2 + 184) = v8;
  }
  return result;
}
