/*
 * XREFs of sub_140066280 @ 0x140066280
 * Callers:
 *     sub_140082A00 @ 0x140082A00 (sub_140082A00.c)
 *     sub_1400861E0 @ 0x1400861E0 (sub_1400861E0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000D4D0 @ 0x14000D4D0 (sub_14000D4D0.c)
 *     sub_14000D640 @ 0x14000D640 (sub_14000D640.c)
 */

__int64 __fastcall sub_140066280(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // r8
  unsigned int v8; // ebx
  int v9; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a1 + 7;
  v5 = a1 + 15;
  try
  {
    sub_14000D4D0(v5, v4, a3);
    sub_14000D4D0(a1 + 19, a1 + 11, v6);
    sub_14000D640(a1 + 31, a1 + 23);
    sub_14000D640(a1 + 35, a1 + 27);
  }
  catch ( ATL::CAtlException v9 )
  {
    v8 = v9;
    if ( v9 >= 0 )
      return 0LL;
    sub_14000C2A8((int)retaddr, 805, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp", v9);
    return v8;
  }
  return 0LL;
}
