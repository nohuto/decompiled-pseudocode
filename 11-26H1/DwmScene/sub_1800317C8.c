/*
 * XREFs of sub_1800317C8 @ 0x1800317C8
 * Callers:
 *     sub_18002EC44 @ 0x18002EC44 (sub_18002EC44.c)
 *     sub_1800315AC @ 0x1800315AC (sub_1800315AC.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

__int64 __fastcall sub_1800317C8(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    result = sub_180010EC8(v2);
  v4 = *(volatile signed __int32 **)(a1 + 8);
  if ( v4 )
    return sub_180010F00(v4);
  return result;
}
