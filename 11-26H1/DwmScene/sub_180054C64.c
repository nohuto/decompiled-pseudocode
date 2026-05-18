/*
 * XREFs of sub_180054C64 @ 0x180054C64
 * Callers:
 *     sub_180054910 @ 0x180054910 (sub_180054910.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

__int64 __fastcall sub_180054C64(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(volatile signed __int32 **)(v2 + 40);
    if ( v3 )
      sub_180010F00(v3);
  }
  return sub_18001D5C8(a1);
}
