/*
 * XREFs of sub_140039F20 @ 0x140039F20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_140039F20(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  if ( *(_QWORD *)(a1 - 8 + 280) )
    sub_1400B6010(a1 - 8);
  if ( v1 )
    LeaveCriticalSection(v1);
}
