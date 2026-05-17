/*
 * XREFs of KiUserCallbackDispatcher @ 0x180162F70
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     ZwCallbackReturn @ 0x18015EFE0 (ZwCallbackReturn.c)
 *     KiUserCallForwarder @ 0x180162E00 (KiUserCallForwarder.c)
 */

void __fastcall __noreturn KiUserCallbackDispatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // eax

  KiUserCallForwarder();
  v5 = ZwCallbackReturn();
  RtlRaiseStatus(v5);
}
