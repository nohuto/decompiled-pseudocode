/*
 * XREFs of sub_14000C6F0 @ 0x14000C6F0
 * Callers:
 *     sub_14000C180 @ 0x14000C180 (sub_14000C180.c)
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 *     sub_140010C10 @ 0x140010C10 (sub_140010C10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14000C6F0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v6; // r8
  __int64 result; // rax

  v4 = a1[32];
  if ( v4 )
  {
    result = StorPortExtendedFunction(1LL, a1, v4, a4);
    a1[32] = 0LL;
  }
  v6 = a1[33];
  if ( v6 )
  {
    result = StorPortExtendedFunction(1LL, a1, v6, a4);
    a1[33] = 0LL;
  }
  *(_QWORD *)((char *)a1 + 236) = 0LL;
  return result;
}
