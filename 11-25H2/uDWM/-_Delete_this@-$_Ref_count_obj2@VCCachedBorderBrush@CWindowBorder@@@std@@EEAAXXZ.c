/*
 * XREFs of ?_Delete_this@?$_Ref_count_obj2@VCCachedBorderBrush@CWindowBorder@@@std@@EEAAXXZ @ 0x18007CDE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Ref_count_obj2<CWindowBorder::CCachedBorderBrush>::_Delete_this(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, 1LL);
  return result;
}
