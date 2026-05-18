/*
 * XREFs of sub_18003E864 @ 0x18003E864
 * Callers:
 *     sub_1800403B8 @ 0x1800403B8 (sub_1800403B8.c)
 * Callees:
 *     sub_18003E908 @ 0x18003E908 (sub_18003E908.c)
 *     sub_18003EA38 @ 0x18003EA38 (sub_18003EA38.c)
 */

__int64 __fastcall sub_18003E864(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  bool v5; // zf
  __int64 result; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_18003E908(a1, v7);
  v5 = (unsigned __int8)sub_18003EA38(v4, v8, a2) == 0;
  result = v8;
  if ( v5 )
    return *(_QWORD *)a1;
  return result;
}
