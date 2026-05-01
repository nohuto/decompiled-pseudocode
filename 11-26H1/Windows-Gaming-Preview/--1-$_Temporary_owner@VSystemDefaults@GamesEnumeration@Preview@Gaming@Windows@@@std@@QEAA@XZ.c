/*
 * XREFs of ??1?$_Temporary_owner@VSystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x18003A874
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateAsync_::_1_::dtor$5 @ 0x180044394 (_Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--PopulateAsync_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Temporary_owner<Windows::Gaming::Preview::GamesEnumeration::SystemDefaults>::~_Temporary_owner<Windows::Gaming::Preview::GamesEnumeration::SystemDefaults>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
