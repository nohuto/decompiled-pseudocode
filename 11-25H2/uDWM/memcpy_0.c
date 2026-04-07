/*
 * XREFs of memcpy_0 @ 0x1800EB118
 * Callers:
 *     ?AddMultipleAndSet@?$DynArray@PEAVCVisual@@$0A@@@QEAAJPEFBQEAVCVisual@@I@Z @ 0x180007000 (-AddMultipleAndSet@-$DynArray@PEAVCVisual@@$0A@@@QEAAJPEFBQEAVCVisual@@I@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800079C0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800082D4 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z @ 0x180008F20 (-FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z.c)
 *     ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x1800113D4 (-HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UD2D_POINT_3F@@$0A@@@QEAAJPEFBUD2D_POINT_3F@@I@Z @ 0x18002F810 (-AddMultipleAndSet@-$DynArray@UD2D_POINT_3F@@$0A@@@QEAAJPEFBUD2D_POINT_3F@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UD2D_POINT_2F@@$0A@@@QEAAJPEFBUD2D_POINT_2F@@I@Z @ 0x18002F8BC (-AddMultipleAndSet@-$DynArray@UD2D_POINT_2F@@$0A@@@QEAAJPEFBUD2D_POINT_2F@@I@Z.c)
 *     memcpy_s @ 0x180056B8C (memcpy_s.c)
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x18005A268 (-SLGetHelper@@YA_NPEBG@Z.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x180062FF8 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180063CF0 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z @ 0x180063F50 (--R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z.c)
 *     memcpy_s_0 @ 0x1800797C8 (memcpy_s_0.c)
 *     ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x180093734 (-PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@.c)
 *     ??$_Construct@$00PEAG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEAG_K@Z @ 0x1800D45B0 (--$_Construct@$00PEAG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEAG_K@Z.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x1800E9E44 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
