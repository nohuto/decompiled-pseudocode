/*
 * XREFs of ??1SystemCursorShapeBitmap2@@QEAA@XZ @ 0x1800FAAE0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VSystemCursorShapeBitmap2@@@std@@EEAAXXZ @ 0x1800FD190 (-_Destroy@-$_Ref_count_obj2@VSystemCursorShapeBitmap2@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BE0C (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall SystemCursorShapeBitmap2::~SystemCursorShapeBitmap2(SystemCursorShapeBitmap2 *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 3);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v3 )
    std::_Ref_count_base::_Decwref(v3);
}
