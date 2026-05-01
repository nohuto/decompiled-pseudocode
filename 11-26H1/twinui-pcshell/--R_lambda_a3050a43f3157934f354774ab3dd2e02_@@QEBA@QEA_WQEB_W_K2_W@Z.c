/*
 * XREFs of ??R_lambda_a3050a43f3157934f354774ab3dd2e02_@@QEBA@QEA_WQEB_W_K2_W@Z @ 0x18069E6F0
 * Callers:
 *     ??$_Reallocate_grow_by@V_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAAEAV01@_KV_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@Z @ 0x18069E4A0 (--$_Reallocate_grow_by@V_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@-$basic_string@_WU-$char.c)
 * Callees:
 *     wmemset @ 0x1801C35CC (wmemset.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

__int64 __fastcall _lambda_a3050a43f3157934f354774ab3dd2e02_::operator()(
        __int64 a1,
        char *a2,
        const void *a3,
        __int64 a4,
        size_t N)
{
  __int64 v5; // rbx
  __int64 v8; // r8
  __int64 result; // rax

  v5 = 2 * a4;
  memcpy_0(a2, a3, 2 * a4);
  wmemset((wchar_t *)&a2[v5], 0, N);
  result = 0LL;
  *(_WORD *)&a2[2 * a4 + 2 * v8] = 0;
  return result;
}
