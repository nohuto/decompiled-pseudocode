/*
 * XREFs of sub_140021110 @ 0x140021110
 * Callers:
 *     sub_14000A648 @ 0x14000A648 (sub_14000A648.c)
 *     sub_140010CA0 @ 0x140010CA0 (sub_140010CA0.c)
 *     sub_140011C50 @ 0x140011C50 (sub_140011C50.c)
 *     sub_140015BC8 @ 0x140015BC8 (sub_140015BC8.c)
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     sub_140016AA8 @ 0x140016AA8 (sub_140016AA8.c)
 *     sub_14001F6B0 @ 0x14001F6B0 (sub_14001F6B0.c)
 *     sub_14001F93C @ 0x14001F93C (sub_14001F93C.c)
 *     sub_140020420 @ 0x140020420 (sub_140020420.c)
 *     sub_140021A00 @ 0x140021A00 (sub_140021A00.c)
 *     sub_140022AC0 @ 0x140022AC0 (sub_140022AC0.c)
 *     sub_1400306EC @ 0x1400306EC (sub_1400306EC.c)
 *     sub_1400308A8 @ 0x1400308A8 (sub_1400308A8.c)
 *     sub_1400388F8 @ 0x1400388F8 (sub_1400388F8.c)
 *     sub_140039918 @ 0x140039918 (sub_140039918.c)
 *     sub_14003AF90 @ 0x14003AF90 (sub_14003AF90.c)
 *     sub_14003E980 @ 0x14003E980 (sub_14003E980.c)
 *     sub_14003EC20 @ 0x14003EC20 (sub_14003EC20.c)
 *     sub_1400436D0 @ 0x1400436D0 (sub_1400436D0.c)
 *     sub_1400605C0 @ 0x1400605C0 (sub_1400605C0.c)
 *     sub_140060AF4 @ 0x140060AF4 (sub_140060AF4.c)
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 *     sub_1400772D0 @ 0x1400772D0 (sub_1400772D0.c)
 *     sub_140078D60 @ 0x140078D60 (sub_140078D60.c)
 *     CompletionFunction @ 0x140079310 (CompletionFunction.c)
 *     sub_140079F70 @ 0x140079F70 (sub_140079F70.c)
 *     sub_14007A988 @ 0x14007A988 (sub_14007A988.c)
 *     sub_14008562C @ 0x14008562C (sub_14008562C.c)
 *     sub_140099564 @ 0x140099564 (sub_140099564.c)
 *     sub_1400BC450 @ 0x1400BC450 (sub_1400BC450.c)
 *     sub_14017869C @ 0x14017869C (sub_14017869C.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 *     sub_1401AC4FC @ 0x1401AC4FC (sub_1401AC4FC.c)
 *     sub_1401ACC34 @ 0x1401ACC34 (sub_1401ACC34.c)
 *     sub_1401ADED0 @ 0x1401ADED0 (sub_1401ADED0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140021110(__int64 a1, __int64 a2, __int64 a3)
{
  PoFxIdleComponent(**(_QWORD **)(a1 + 4960), a2, a3);
  return (*(_DWORD *)(*(_QWORD *)(a1 + 4960) + 20LL) & 1) == 0;
}
