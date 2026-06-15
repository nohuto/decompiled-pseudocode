/*
 * XREFs of sub_140032444 @ 0x140032444
 * Callers:
 *     sub_14000CB10 @ 0x14000CB10 (sub_14000CB10.c)
 *     sub_140082DA0 @ 0x140082DA0 (sub_140082DA0.c)
 * Callees:
 *     sub_140032480 @ 0x140032480 (sub_140032480.c)
 */

__int64 __fastcall sub_140032444(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = sub_140032480();
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 336));
  return v2;
}
