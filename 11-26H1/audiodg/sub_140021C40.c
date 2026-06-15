/*
 * XREFs of sub_140021C40 @ 0x140021C40
 * Callers:
 *     sub_140021570 @ 0x140021570 (sub_140021570.c)
 * Callees:
 *     sub_140021CC8 @ 0x140021CC8 (sub_140021CC8.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_140021C40(__int64 a1, int a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 v7; // rdx

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v7 = a1 + 152;
  if ( a2 != 1 )
    v7 = a1 + 160;
  sub_140021CC8(a1, v7, a3);
  if ( v6 )
    LeaveCriticalSection(v6);
}
