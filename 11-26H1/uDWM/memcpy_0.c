/*
 * XREFs of memcpy_0 @ 0x18008EF24
 * Callers:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180008110 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18000CE30 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800181AC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x18001B2A4 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z @ 0x18001D450 (-FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCVisual@@$0A@@@QEAAJPEFBQEAVCVisual@@I@Z @ 0x18001E210 (-AddMultipleAndSet@-$DynArray@PEAVCVisual@@$0A@@@QEAAJPEFBQEAVCVisual@@I@Z.c)
 *     ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x1800353F4 (-PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@.c)
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x180045EA8 (-SLGetHelper@@YA_NPEBG@Z.c)
 *     ??$_Reallocate_for@V_lambda_1_@?1??assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV34@QEBG_K@Z@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_1_@?1??assign@01@QEAAAEAV01@QEBG0@Z@PEBG@Z @ 0x18005AB64 (--$_Reallocate_for@V_lambda_1_@-1--assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 *     memcpy_s @ 0x18005C508 (memcpy_s.c)
 *     memcpy_s_0 @ 0x18005D5C0 (memcpy_s_0.c)
 *     ??R_lambda_1_@?1??append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV23@_KG@Z@QEBA@QEAGQEBG00G@Z @ 0x180072C14 (--R_lambda_1_@-1--append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV23.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800AA010 (--1CDesktopManager@@EEAA@XZ.c)
 *     ??$_Construct@$00PEAG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEAG_K@Z @ 0x1800D1B48 (--$_Construct@$00PEAG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEAG_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
