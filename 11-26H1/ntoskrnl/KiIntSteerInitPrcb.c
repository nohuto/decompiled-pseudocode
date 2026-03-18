/*
 * XREFs of KiIntSteerInitPrcb @ 0x1405F79C0
 * Callers:
 *     KiInitPrcb @ 0x140BF3C24 (KiInitPrcb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIntSteerInitPrcb(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 11672) = 0;
  result = 0LL;
  *(_QWORD *)(a1 + 11664) = 1LL;
  return result;
}
