/*
 * XREFs of GetRedirectionFlags @ 0x140053D08
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x14005335C (zzzUpdateLayeredWindow.c)
 *     NtUserGetLayeredWindowAttributes @ 0x1400540B0 (NtUserGetLayeredWindowAttributes.c)
 *     RecreateRedirectionBitmap @ 0x140057DF8 (RecreateRedirectionBitmap.c)
 *     _SetLayeredWindowAttributes @ 0x1400E1004 (_SetLayeredWindowAttributes.c)
 *     zzzUpdateShadowAlpha @ 0x1400E12FC (zzzUpdateShadowAlpha.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1400E1A4C (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxPrintWindow @ 0x140241E1C (xxxPrintWindow.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1402876B4 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 */

__int64 __fastcall GetRedirectionFlags(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 UserSessionState; // rax
  __int64 Prop; // rax

  v3 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 41358), 1u);
  if ( Prop )
    return *(unsigned int *)(Prop + 32);
  return v3;
}
