/*
 * XREFs of sub_14004B4E0 @ 0x14004B4E0
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x1400492B8 (j__o_free.c)
 *     sub_14004AE5C @ 0x14004AE5C (sub_14004AE5C.c)
 */

__int64 __fastcall sub_14004B4E0(__int64 a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 8));
  if ( !v2 && a1 )
  {
    sub_14004AE5C((_QWORD *)a1);
    j__o_free(a1);
  }
  return v2;
}
