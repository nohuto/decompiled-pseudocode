/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@@std@@QEAA@XZ @ 0x1801A5600
 * Callers:
 *     ??$_Construct_n@AEBQEAUVirtualTouchpadRect@@AEBQEAU1@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAX_KAEBQEAUVirtualTouchpadRect@@1@Z @ 0x1801A53EC (--$_Construct_n@AEBQEAUVirtualTouchpadRect@@AEBQEAU1@@-$vector@UVirtualTouchpadRect@@V-$allocato.c)
 * Callees:
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x180046678 (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Tidy_guard<std::vector<VirtualTouchpadRect>>::~_Tidy_guard<std::vector<VirtualTouchpadRect>>(
        __int64 **a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return std::vector<INPUT_SPACE_PAYLOAD>::_Tidy(v1);
  return result;
}
