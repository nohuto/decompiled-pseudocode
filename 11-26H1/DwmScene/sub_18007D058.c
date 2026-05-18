/*
 * XREFs of sub_18007D058 @ 0x18007D058
 * Callers:
 *     sub_1800451CC @ 0x1800451CC (sub_1800451CC.c)
 *     sub_180079644 @ 0x180079644 (sub_180079644.c)
 *     sub_18007CDA4 @ 0x18007CDA4 (sub_18007CDA4.c)
 * Callees:
 *     sub_18007B8E4 @ 0x18007B8E4 (sub_18007B8E4.c)
 */

_DWORD *__fastcall sub_18007D058(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  _DWORD *result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx

  result = (_DWORD *)sub_18007B8E4(a1, a2);
  v5 = a3 - (_QWORD)result;
  v6 = 16LL;
  do
  {
    *result = *(_DWORD *)((char *)result + v5);
    ++result;
    --v6;
  }
  while ( v6 );
  return result;
}
