/*
 * XREFs of PopPepStartActivity @ 0x14045722C
 * Callers:
 *     PopPepProcessEvent @ 0x1403B9A00 (PopPepProcessEvent.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPepStartActivity(__int64 a1, __int64 a2, __int64 a3, int a4, volatile signed __int32 *a5)
{
  __int64 v6; // rbx
  __int64 result; // rax

  v6 = a4;
  _InterlockedDecrement(a5);
  result = guard_dispatch_icall_no_overrides(a1, a2);
  **(_DWORD **)(a3 + 8 * v6) &= ~2u;
  **(_DWORD **)(a3 + 8 * v6) &= ~8u;
  **(_DWORD **)(a3 + 8 * v6) |= 4u;
  return result;
}
