/*
 * XREFs of LdrInitializeThunk @ 0x1800CE970
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     LdrpInitialize @ 0x1800CE998 (LdrpInitialize.c)
 *     ZwContinue @ 0x18015F7A0 (ZwContinue.c)
 */

void __fastcall __noreturn LdrInitializeThunk(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // eax

  LdrpInitialize();
  LOBYTE(v2) = 1;
  v3 = ZwContinue(a1, v2);
  RtlRaiseStatus(v3);
}
