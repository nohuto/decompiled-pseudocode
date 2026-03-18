/*
 * XREFs of ?replace@?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@AEAAPEADPEAU?$aligned_storage_for@PEAVCBaseExpression@@@2@@Z @ 0x18004FAE4
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@IEAAPEAPEAVCBaseExpression@@_K0@Z @ 0x18004DA10 (-reserve_region@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ @ 0x18004D640 (-first@-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<CBaseExpression *,0>::replace(__int64 *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(_DWORD *)a1 & 3) != 0 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1LL )
    {
      result = detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1) - 16;
      *a1 = a2 | 1;
      return result;
    }
    if ( (unsigned __int64)(*(_DWORD *)a1 & 3) - 2 >= 2 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  *a1 = a2 | 1;
  return 0LL;
}
