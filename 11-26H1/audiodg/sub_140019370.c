/*
 * XREFs of sub_140019370 @ 0x140019370
 * Callers:
 *     sub_1400346B4 @ 0x1400346B4 (sub_1400346B4.c)
 * Callees:
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_140019370(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  sub_1400B6010(a2);
  sub_140019444(a1 + 304);
  sub_140007CC0();
  if ( v4 )
    LeaveCriticalSection(v4);
}
