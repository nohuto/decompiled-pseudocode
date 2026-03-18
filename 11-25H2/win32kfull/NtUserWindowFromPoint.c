/*
 * XREFs of NtUserWindowFromPoint @ 0x14002D200
 * Callers:
 *     <none>
 * Callees:
 *     xxxWindowFromPoint @ 0x14002E584 (xxxWindowFromPoint.c)
 */

__int64 __fastcall NtUserWindowFromPoint(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rbx

  EnterCrit(0LL, 0LL);
  v2 = (__int64 *)xxxWindowFromPoint(a1);
  v3 = 0LL;
  if ( v2 )
    v3 = *v2;
  UserSessionSwitchLeaveCrit();
  return v3;
}
