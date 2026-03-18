/*
 * XREFs of NtUserValidateHandleSecure @ 0x1401950C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall NtUserValidateHandleSecure(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx

  EnterCrit(0LL, 0LL);
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v3, v2);
  v6 = 0;
  if ( CurrentThreadNonPaged )
    v7 = *CurrentThreadNonPaged;
  else
    v7 = 0LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 528), 0, 0) & 0x20000000) != 0 )
    v6 = ValidateHandleSecure(a1, 3LL);
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
