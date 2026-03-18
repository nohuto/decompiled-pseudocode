/*
 * XREFs of ??$_Destroy_range@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAXPEAUSuperWetStroke@CSuperWetInkManager@@QEAU12@AEAV?$allocator@USuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x180229220
 * Callers:
 *     ??1CSuperWetInkManager@@QEAA@XZ @ 0x18022A180 (--1CSuperWetInkManager@@QEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAUSuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAPEAUSuperWetStroke@CSuperWetInkManager@@QEAU12@0PEAU12@AEAV?$allocator@USuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x18023003C (--$_Uninitialized_move@PEAUSuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetStroke@CSup.c)
 *     ??1_Reallocation_guard@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAA@XZ @ 0x1802301AC (--1_Reallocation_guard@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetStrok.c)
 *     ?_Change_array@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@AEAAXQEAUSuperWetStroke@CSuperWetInkManager@@_K1@Z @ 0x18023138C (-_Change_array@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetStroke@CSuper.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<CSuperWetInkManager::SuperWetStroke>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(v3 + 8));
      v3 += 104LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
