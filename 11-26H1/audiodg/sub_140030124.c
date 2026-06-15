/*
 * XREFs of sub_140030124 @ 0x140030124
 * Callers:
 *     sub_14000A8A0 @ 0x14000A8A0 (sub_14000A8A0.c)
 *     sub_14000ACA0 @ 0x14000ACA0 (sub_14000ACA0.c)
 *     sub_14000AFD0 @ 0x14000AFD0 (sub_14000AFD0.c)
 *     sub_14000B7C0 @ 0x14000B7C0 (sub_14000B7C0.c)
 *     sub_14000BF70 @ 0x14000BF70 (sub_14000BF70.c)
 *     sub_14000CB10 @ 0x14000CB10 (sub_14000CB10.c)
 *     sub_14002B8B0 @ 0x14002B8B0 (sub_14002B8B0.c)
 *     sub_140031EE0 @ 0x140031EE0 (sub_140031EE0.c)
 *     sub_140075568 @ 0x140075568 (sub_140075568.c)
 *     sub_140080F10 @ 0x140080F10 (sub_140080F10.c)
 *     sub_140081650 @ 0x140081650 (sub_140081650.c)
 *     sub_140081AE0 @ 0x140081AE0 (sub_140081AE0.c)
 *     sub_140082240 @ 0x140082240 (sub_140082240.c)
 *     sub_140082410 @ 0x140082410 (sub_140082410.c)
 *     sub_1400825E0 @ 0x1400825E0 (sub_1400825E0.c)
 *     sub_140082DA0 @ 0x140082DA0 (sub_140082DA0.c)
 *     sub_1400837C0 @ 0x1400837C0 (sub_1400837C0.c)
 *     sub_140083A90 @ 0x140083A90 (sub_140083A90.c)
 *     sub_140084920 @ 0x140084920 (sub_140084920.c)
 *     sub_140084B80 @ 0x140084B80 (sub_140084B80.c)
 *     sub_140085AA0 @ 0x140085AA0 (sub_140085AA0.c)
 *     sub_1400AE5C0 @ 0x1400AE5C0 (sub_1400AE5C0.c)
 *     sub_1400AE694 @ 0x1400AE694 (sub_1400AE694.c)
 *     sub_1400AE9CE @ 0x1400AE9CE (sub_1400AE9CE.c)
 *     sub_1400B361E @ 0x1400B361E (sub_1400B361E.c)
 *     sub_1400B3A7A @ 0x1400B3A7A (sub_1400B3A7A.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140030124(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)a1);
    *(_BYTE *)(a1 + 8) = 0;
  }
}
