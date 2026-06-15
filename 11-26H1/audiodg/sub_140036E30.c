/*
 * XREFs of sub_140036E30 @ 0x140036E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140036EB4 @ 0x140036EB4 (sub_140036EB4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_140036E30(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 8), 0xFFFFFFFF) == 1 )
  {
    sub_1400B6010(a1 - 8);
    sub_140036EB4(a1 + 200, a2);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
