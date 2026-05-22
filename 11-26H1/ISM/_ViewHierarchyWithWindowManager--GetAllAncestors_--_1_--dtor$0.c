/*
 * XREFs of _ViewHierarchyWithWindowManager::GetAllAncestors_::_1_::dtor$0 @ 0x1801D6A2C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x180065228 (--1-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall ViewHierarchyWithWindowManager::GetAllAncestors_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 192) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 192) &= ~1u;
    return std::vector<Windows::UI::Color>::~vector<Windows::UI::Color>();
  }
  return result;
}
