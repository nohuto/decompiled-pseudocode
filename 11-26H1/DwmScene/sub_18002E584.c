/*
 * XREFs of sub_18002E584 @ 0x18002E584
 * Callers:
 *     sub_18002D748 @ 0x18002D748 (sub_18002D748.c)
 *     sub_18005F93C @ 0x18005F93C (sub_18005F93C.c)
 * Callees:
 *     sub_18002EB58 @ 0x18002EB58 (sub_18002EB58.c)
 *     sub_18002F140 @ 0x18002F140 (sub_18002F140.c)
 */

__int64 __fastcall sub_18002E584(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  bool v5; // zf
  __int64 result; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_18002EB58(a1, v7, a2);
  v5 = (unsigned __int8)sub_18002F140(v4, v8, a2) == 0;
  result = v8;
  if ( v5 )
    return *(_QWORD *)a1;
  return result;
}
