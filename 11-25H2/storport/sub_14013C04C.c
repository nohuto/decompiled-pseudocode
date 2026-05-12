/*
 * XREFs of sub_14013C04C @ 0x14013C04C
 * Callers:
 *     sub_14013C088 @ 0x14013C088 (sub_14013C088.c)
 *     sub_14013C0F0 @ 0x14013C0F0 (sub_14013C0F0.c)
 *     sub_14013C148 @ 0x14013C148 (sub_14013C148.c)
 * Callees:
 *     sub_14013BE4C @ 0x14013BE4C (sub_14013BE4C.c)
 */

__int64 __fastcall sub_14013C04C(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rcx

  v3 = *(unsigned int *)(a1 + 12);
  if ( (unsigned int)(v3 + 1) > *(_DWORD *)(a1 + 8) )
    return 3221225507LL;
  *(_BYTE *)(v3 + *(_QWORD *)a1) = -14;
  ++*(_DWORD *)(a1 + 12);
  return sub_14013BE4C(a1, a2);
}
