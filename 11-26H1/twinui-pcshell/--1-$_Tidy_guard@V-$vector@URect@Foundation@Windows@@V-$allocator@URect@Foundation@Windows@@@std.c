/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@@std@@QEAA@XZ @ 0x18046893C
 * Callers:
 *     ??0ViewOptions@@QEAA@AEBU0@@Z @ 0x180026E24 (--0ViewOptions@@QEAA@AEBU0@@Z.c)
 *     ??0?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801B2A8C (--0-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA@AE.c)
 *     ?StartGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x180293FA0 (-StartGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJIPEAURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x180028798 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Tidy_guard<std::vector<Windows::Foundation::Rect>>::~_Tidy_guard<std::vector<Windows::Foundation::Rect>>(
        __int64 **a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return std::vector<Geometry::CRect>::_Tidy(v1);
  return result;
}
