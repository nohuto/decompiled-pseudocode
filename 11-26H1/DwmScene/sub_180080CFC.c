/*
 * XREFs of sub_180080CFC @ 0x180080CFC
 * Callers:
 *     sub_1800908AC @ 0x1800908AC (sub_1800908AC.c)
 *     sub_180091B00 @ 0x180091B00 (sub_180091B00.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 */

__int64 *__fastcall sub_180080CFC(__int64 a1, _QWORD *a2)
{
  __int64 *result; // rax
  __int64 v5; // rcx

  result = sub_180013540((__int64 *)(a1 + 48), a2);
  *(_BYTE *)(a1 + 124) = 0;
  v5 = a2[1];
  if ( v5 )
    return (__int64 *)sub_180010EC8(v5);
  return result;
}
