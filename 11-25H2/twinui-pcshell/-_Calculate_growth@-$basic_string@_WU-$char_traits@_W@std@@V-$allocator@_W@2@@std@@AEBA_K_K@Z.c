/*
 * XREFs of ?_Calculate_growth@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBA_K_K@Z @ 0x18017CCE8
 * Callers:
 *     ??$_Reallocate_grow_by@V_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@$$V@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@@Z @ 0x180385088 (--$_Reallocate_grow_by@V_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@$$V@-$basic_string@GU-$char_t.c)
 *     ??$_Reallocate_for@V_lambda_8317d86ccc4fc543e8e6132f798c706e_@@G@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_8317d86ccc4fc543e8e6132f798c706e_@@G@Z @ 0x18039F9F4 (--$_Reallocate_for@V_lambda_8317d86ccc4fc543e8e6132f798c706e_@@G@-$basic_string@GU-$char_traits@.c)
 *     ??$_Construct@$00PEB_W@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXQEB_W_K@Z @ 0x180677948 (--$_Construct@$00PEB_W@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXQEB_.c)
 *     ??$_Reallocate_grow_by@V_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAAEAV01@_KV_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@Z @ 0x180677A10 (--$_Reallocate_grow_by@V_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@-$basic_string@_WU-$char.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::wstring::_Calculate_growth(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = a2 | 7;
  v4 = 0x7FFFFFFFFFFFFFFELL;
  if ( (a2 | 7uLL) <= 0x7FFFFFFFFFFFFFFELL )
  {
    v5 = v2 >> 1;
    if ( v2 <= 0x7FFFFFFFFFFFFFFELL - (v2 >> 1) )
    {
      v4 = v5 + v2;
      if ( v3 >= v5 + v2 )
        return v3;
    }
  }
  return v4;
}
