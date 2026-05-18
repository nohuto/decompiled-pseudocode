/*
 * XREFs of sub_18008A404 @ 0x18008A404
 * Callers:
 *     sub_18008A530 @ 0x18008A530 (sub_18008A530.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

__int64 __fastcall sub_18008A404(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 32);
  if ( v2 )
    result = sub_180010F00(v2);
  v4 = *(volatile signed __int32 **)(a1 + 16);
  if ( v4 )
    return sub_180010F00(v4);
  return result;
}
