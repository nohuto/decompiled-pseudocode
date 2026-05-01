/*
 * XREFs of ?_Delete_this@?$_Ref_count@VSystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@EEAAXXZ @ 0x18003B660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Ref_count<Windows::Gaming::Preview::GamesEnumeration::SystemDefaults>::_Delete_this(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, 1LL);
  return result;
}
