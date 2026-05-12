/*
 * XREFs of sub_140138500 @ 0x140138500
 * Callers:
 *     <none>
 * Callees:
 *     sub_1401352EC @ 0x1401352EC (sub_1401352EC.c)
 *     sub_14013BE4C @ 0x14013BE4C (sub_14013BE4C.c)
 *     sub_14013C088 @ 0x14013C088 (sub_14013C088.c)
 *     sub_14013C0F0 @ 0x14013C0F0 (sub_14013C0F0.c)
 *     sub_14013C148 @ 0x14013C148 (sub_14013C148.c)
 *     sub_14013C188 @ 0x14013C188 (sub_14013C188.c)
 */

__int64 __fastcall sub_140138500(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4)
{
  __int64 result; // rax
  unsigned int i; // edi
  char v9[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)v9 = 0x80200000000LL;
  sub_1401352EC(v9, 8u);
  result = sub_14013C088(a3, 393216LL, v9);
  if ( (int)result >= 0 )
  {
    result = sub_14013C0F0(a3, 393217LL, *a4);
    if ( (int)result >= 0 )
    {
      result = sub_14013C148(a3, 393218LL);
      if ( (int)result >= 0 )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 36); ++i )
        {
          result = sub_14013BE4C(a3, *(unsigned int *)(a1 + 40));
          if ( (int)result < 0 )
            return result;
        }
        return sub_14013C188(a3);
      }
    }
  }
  return result;
}
