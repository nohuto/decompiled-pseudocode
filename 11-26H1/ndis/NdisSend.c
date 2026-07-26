/*
 * XREFs of NdisSend @ 0x14009EC10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisSend(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64, __int64))(a2 + 96))(a2, a3);
  *a1 = result;
  return result;
}
