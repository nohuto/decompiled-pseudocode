/*
 * XREFs of sub_18005DA34 @ 0x18005DA34
 * Callers:
 *     sub_18005E0AC @ 0x18005E0AC (sub_18005E0AC.c)
 *     sub_180091B00 @ 0x180091B00 (sub_180091B00.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18004E0D4 @ 0x18004E0D4 (sub_18004E0D4.c)
 *     sub_18005DD64 @ 0x18005DD64 (sub_18005DD64.c)
 */

__int64 __fastcall sub_18005DA34(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // r9
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v2 = (__int64 *)sub_18005DD64(a1, v7);
  v4 = (unsigned int)sub_18004E0D4(*v2, v3);
  if ( v8 )
    sub_180010EC8(v8);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !_bittest64(&v5, v4) )
    LODWORD(v4) = -1;
  return (unsigned int)v4;
}
