/*
 * XREFs of sub_18001DD44 @ 0x18001DD44
 * Callers:
 *     sub_18001E068 @ 0x18001E068 (sub_18001E068.c)
 *     sub_18001E8A8 @ 0x18001E8A8 (sub_18001E8A8.c)
 *     sub_18001E974 @ 0x18001E974 (sub_18001E974.c)
 *     sub_18001FA78 @ 0x18001FA78 (sub_18001FA78.c)
 *     sub_18001FC54 @ 0x18001FC54 (sub_18001FC54.c)
 *     sub_18005035C @ 0x18005035C (sub_18005035C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18001DD44(__int64 a1, unsigned __int64 a2)
{
  if ( *(_QWORD *)(a1 + 16) < a2 )
  {
    std::_Xout_of_range("invalid string position");
    __debugbreak();
  }
}
