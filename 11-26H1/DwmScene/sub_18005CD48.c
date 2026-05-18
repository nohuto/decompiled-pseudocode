/*
 * XREFs of sub_18005CD48 @ 0x18005CD48
 * Callers:
 *     sub_18005C26C @ 0x18005C26C (sub_18005C26C.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

__int64 __fastcall sub_18005CD48(__int64 a1)
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
  return sub_1800313C4(a1);
}
