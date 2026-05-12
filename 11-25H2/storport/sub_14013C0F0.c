/*
 * XREFs of sub_14013C0F0 @ 0x14013C0F0
 * Callers:
 *     sub_140136240 @ 0x140136240 (sub_140136240.c)
 *     sub_1401362A0 @ 0x1401362A0 (sub_1401362A0.c)
 *     sub_1401362F0 @ 0x1401362F0 (sub_1401362F0.c)
 *     sub_140136390 @ 0x140136390 (sub_140136390.c)
 *     sub_140137730 @ 0x140137730 (sub_140137730.c)
 *     sub_140138500 @ 0x140138500 (sub_140138500.c)
 * Callees:
 *     sub_14013BE4C @ 0x14013BE4C (sub_14013BE4C.c)
 *     sub_14013C04C @ 0x14013C04C (sub_14013C04C.c)
 */

__int64 __fastcall sub_14013C0F0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rcx

  result = sub_14013C04C(a1, a2);
  if ( (int)result >= 0 )
  {
    result = sub_14013BE4C(a1, a3);
    if ( (int)result >= 0 )
    {
      v6 = *(unsigned int *)(a1 + 12);
      if ( (unsigned int)(v6 + 1) <= *(_DWORD *)(a1 + 8) )
      {
        *(_BYTE *)(v6 + *(_QWORD *)a1) = -13;
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
