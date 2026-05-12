/*
 * XREFs of sub_140077AD0 @ 0x140077AD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140077D58 @ 0x140077D58 (sub_140077D58.c)
 */

__int64 __fastcall sub_140077AD0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  LOBYTE(a3) = 1;
  return sub_140077D58(a1, &v4, a3);
}
