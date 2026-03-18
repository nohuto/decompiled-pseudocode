/*
 * XREFs of GetOldRedirectionBitmap @ 0x14005DC14
 * Callers:
 *     DeleteOldRedirectionBitmap @ 0x14005DBBC (DeleteOldRedirectionBitmap.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x140234300 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 */

__int64 __fastcall GetOldRedirectionBitmap(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 UserSessionState; // rax
  __int64 Prop; // rax

  v3 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 41358), 1u);
  if ( Prop )
    return *(_QWORD *)(Prop + 8);
  return v3;
}
