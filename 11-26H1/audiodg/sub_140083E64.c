/*
 * XREFs of sub_140083E64 @ 0x140083E64
 * Callers:
 *     sub_140083CA0 @ 0x140083CA0 (sub_140083CA0.c)
 * Callees:
 *     sub_140083D90 @ 0x140083D90 (sub_140083D90.c)
 */

__int64 __fastcall sub_140083E64(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx

  v2 = a1 + 232;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 352);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 352));
  v6 = sub_140083D90(v5, (_QWORD *)(v2 + 48 * (*(unsigned __int16 *)(v2 + 112) ^ 1LL)), a2);
  LeaveCriticalSection(v4);
  return v6;
}
