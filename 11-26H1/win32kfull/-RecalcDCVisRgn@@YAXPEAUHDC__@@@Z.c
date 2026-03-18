/*
 * XREFs of ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1402FA3AC
 * Callers:
 *     xxxMNInvertItem @ 0x140120C3C (xxxMNInvertItem.c)
 *     xxxMenuBarDraw @ 0x14024FBA4 (xxxMenuBarDraw.c)
 * Callees:
 *     RevalidateDCE @ 0x1400137B0 (RevalidateDCE.c)
 */

void __fastcall RecalcDCVisRgn(HDC a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  GreLockVisRgn(a1, a2, a3);
  v4 = LookupDC(a1, 1LL);
  if ( v4 )
    RevalidateDCE(v4);
  GreUnlockVisRgn(v5);
}
