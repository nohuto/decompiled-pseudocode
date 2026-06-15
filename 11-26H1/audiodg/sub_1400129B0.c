/*
 * XREFs of sub_1400129B0 @ 0x1400129B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140012A30 @ 0x140012A30 (sub_140012A30.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_1400129B0(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 8), 0xFFFFFFFF) == 1 )
  {
    sub_1400B6010(a1 - 8);
    sub_140012A30(a1 + 56, a2);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
