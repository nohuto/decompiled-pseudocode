/*
 * XREFs of sub_14013C088 @ 0x14013C088
 * Callers:
 *     sub_140136390 @ 0x140136390 (sub_140136390.c)
 *     sub_140138500 @ 0x140138500 (sub_140138500.c)
 *     sub_1401398D0 @ 0x1401398D0 (sub_1401398D0.c)
 * Callees:
 *     sub_14013BDC4 @ 0x14013BDC4 (sub_14013BDC4.c)
 *     sub_14013C04C @ 0x14013C04C (sub_14013C04C.c)
 */

__int64 __fastcall sub_14013C088(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // rcx

  result = sub_14013C04C(a1, a2);
  if ( (int)result >= 0 )
  {
    result = sub_14013BDC4(a1, a3, a4, v8);
    if ( (int)result >= 0 )
    {
      v9 = *(unsigned int *)(a1 + 12);
      if ( (unsigned int)(v9 + 1) <= *(_DWORD *)(a1 + 8) )
      {
        *(_BYTE *)(v9 + *(_QWORD *)a1) = -13;
        ++*(_DWORD *)(a1 + 12);
        return 0LL;
      }
      else
      {
        return 3221225507LL;
      }
    }
  }
  return result;
}
