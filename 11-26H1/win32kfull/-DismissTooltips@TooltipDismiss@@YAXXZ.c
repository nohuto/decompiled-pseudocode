/*
 * XREFs of ?DismissTooltips@TooltipDismiss@@YAXXZ @ 0x14025F64C
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401E3D68 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?ClearTooltipRegisteredList@TooltipDismiss@@YAXXZ @ 0x140295E50 (-ClearTooltipRegisteredList@TooltipDismiss@@YAXXZ.c)
 */

void __fastcall TooltipDismiss::DismissTooltips(TooltipDismiss *this, __int64 a2)
{
  TooltipDismiss *v2; // rcx
  __int64 *i; // rbx
  __int64 v4; // rax

  for ( i = *(__int64 **)(W32GetUserSessionState(this, a2) + 71184); i; i = (__int64 *)i[1] )
  {
    v4 = HMValidateHandleNoSecure(*i, 1);
    if ( v4 )
      PostMessage(v4, 837, 0, 0);
  }
  TooltipDismiss::ClearTooltipRegisteredList(v2);
}
