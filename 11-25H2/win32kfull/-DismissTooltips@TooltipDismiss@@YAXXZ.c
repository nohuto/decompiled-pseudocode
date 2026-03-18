/*
 * XREFs of ?DismissTooltips@TooltipDismiss@@YAXXZ @ 0x14022C174
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401B2F08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x1400208B0 (_PostMessage.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?ClearTooltipRegisteredList@TooltipDismiss@@YAXXZ @ 0x14026E5E0 (-ClearTooltipRegisteredList@TooltipDismiss@@YAXXZ.c)
 */

void __fastcall TooltipDismiss::DismissTooltips(TooltipDismiss *this, __int64 a2)
{
  __int64 v2; // rdx
  TooltipDismiss *v3; // rcx
  __int64 *i; // rbx
  __int64 v5; // rax

  for ( i = *(__int64 **)(W32GetUserSessionState(this, a2) + 71200); i; i = (__int64 *)i[1] )
  {
    LOBYTE(v2) = 1;
    v5 = HMValidateHandleNoSecure(*i, v2);
    if ( v5 )
      PostMessage(v5, 837, 0, 0);
  }
  TooltipDismiss::ClearTooltipRegisteredList(v3);
}
