/*
 * XREFs of sub_14004E950 @ 0x14004E950
 * Callers:
 *     sub_1400B1500 @ 0x1400B1500 (sub_1400B1500.c)
 * Callees:
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14004E950(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rbp
  int v4; // eax
  int v5; // ecx
  __int64 *v6; // rdx
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  std::exception *v8; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+18h]

  result = sub_1400B6010(a1);
  if ( (int)result >= 0 )
    goto LABEL_14;
  while ( a1 )
  {
LABEL_14:
    try
    {
      throw;
    }
    catch ( std::exception *v8 )
    {
      v6 = &v7;
      v3 = v6;
      sub_14004E480(v6[4], (_WORD *)v6[8], v6[9]);
      v4 = *((_DWORD *)v3 + 20);
      v5 = -2147024322;
      if ( v4 >= 0 )
        v4 = v5;
      *((_DWORD *)v3 + 20) = v4;
      return v9;
    }
    catch ( ... )
    {
      return v9;
    }
  }
  return result;
}
