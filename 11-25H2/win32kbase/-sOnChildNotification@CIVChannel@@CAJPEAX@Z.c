/*
 * XREFs of ?sOnChildNotification@CIVChannel@@CAJPEAX@Z @ 0x14021EF10
 * Callers:
 *     <none>
 * Callees:
 *     ?OnChildNotification@CIVChannel@@AEAAJPEAX@Z @ 0x14021EB58 (-OnChildNotification@CIVChannel@@AEAAJPEAX@Z.c)
 */

__int64 __fastcall CIVChannel::sOnChildNotification(unsigned int *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return CIVChannel::OnChildNotification(*(CIVChannel **)(UserSessionState + 8LL * a1[4] + 19456), a1);
}
