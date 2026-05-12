/*
 * XREFs of sub_14001F93C @ 0x14001F93C
 * Callers:
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     sub_140016AA8 @ 0x140016AA8 (sub_140016AA8.c)
 *     sub_140021A00 @ 0x140021A00 (sub_140021A00.c)
 *     DeferredRoutine @ 0x140022C70 (DeferredRoutine.c)
 *     sub_14002C400 @ 0x14002C400 (sub_14002C400.c)
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     sub_1400605C0 @ 0x1400605C0 (sub_1400605C0.c)
 *     sub_140060AF4 @ 0x140060AF4 (sub_140060AF4.c)
 *     sub_14008562C @ 0x14008562C (sub_14008562C.c)
 *     sub_14008BB38 @ 0x14008BB38 (sub_14008BB38.c)
 *     sub_1400BC450 @ 0x1400BC450 (sub_1400BC450.c)
 *     sub_14017869C @ 0x14017869C (sub_14017869C.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 *     sub_1401AC4FC @ 0x1401AC4FC (sub_1401AC4FC.c)
 *     sub_1401ADED0 @ 0x1401ADED0 (sub_1401ADED0.c)
 * Callees:
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 */

__int64 __fastcall sub_14001F93C(__int64 a1, __int64 a2)
{
  char v3; // al

  v3 = sub_140021110(a1, a2, 0LL);
  _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 4960) + 80LL));
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 4960) + 96LL));
  return v3 == 0 ? 0xC100000C : 0;
}
