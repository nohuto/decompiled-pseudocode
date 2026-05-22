/*
 * XREFs of ?_Change_array@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@AEAAXQEAUGestureRegistration@ShellGesturesProcessor@@_K1@Z @ 0x180079500
 * Callers:
 *     ??$_Emplace_reallocate@AEBUGestureRegistration@ShellGesturesProcessor@@@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@AEAAPEAUGestureRegistration@ShellGesturesProcessor@@QEAU23@AEBU23@@Z @ 0x18002F918 (--$_Emplace_reallocate@AEBUGestureRegistration@ShellGesturesProcessor@@@-$vector@UGestureRegistr.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAXPEAUGestureRegistration@ShellGesturesProcessor@@QEAU12@AEAV?$allocator@UGestureRegistration@ShellGesturesProcessor@@@0@@Z @ 0x18002F8C4 (--$_Destroy_range@V-$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAXPEAUG.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<ShellGesturesProcessor::GestureRegistration>::_Change_array(
        __int64 **a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<ShellGesturesProcessor::GestureRegistration>>(v6, a1[1]);
    result = std::_Deallocate<16>(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  *a1 = a2;
  a1[1] = &a2[4 * a3];
  a1[2] = &a2[4 * a4];
  return result;
}
