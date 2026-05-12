/*
 * XREFs of sub_1400212C0 @ 0x1400212C0
 * Callers:
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     sub_140016AA8 @ 0x140016AA8 (sub_140016AA8.c)
 *     sub_14001F7CC @ 0x14001F7CC (sub_14001F7CC.c)
 *     sub_14001F980 @ 0x14001F980 (sub_14001F980.c)
 *     sub_140020420 @ 0x140020420 (sub_140020420.c)
 *     sub_140021150 @ 0x140021150 (sub_140021150.c)
 *     sub_140021A00 @ 0x140021A00 (sub_140021A00.c)
 *     sub_140027FB4 @ 0x140027FB4 (sub_140027FB4.c)
 *     sub_1400306EC @ 0x1400306EC (sub_1400306EC.c)
 *     sub_1400388F8 @ 0x1400388F8 (sub_1400388F8.c)
 *     sub_1400537EC @ 0x1400537EC (sub_1400537EC.c)
 *     sub_1400605C0 @ 0x1400605C0 (sub_1400605C0.c)
 *     sub_140060AF4 @ 0x140060AF4 (sub_140060AF4.c)
 *     sub_14007A150 @ 0x14007A150 (sub_14007A150.c)
 *     sub_14008562C @ 0x14008562C (sub_14008562C.c)
 *     sub_14017869C @ 0x14017869C (sub_14017869C.c)
 *     sub_14017A040 @ 0x14017A040 (sub_14017A040.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 *     sub_1401AC4FC @ 0x1401AC4FC (sub_1401AC4FC.c)
 *     sub_1401ACC34 @ 0x1401ACC34 (sub_1401ACC34.c)
 *     sub_1401ADED0 @ 0x1401ADED0 (sub_1401ADED0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1400212C0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (*(_BYTE *)(a1 + 108) & 1) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5280));
    if ( (*(_BYTE *)(a1 + 108) & 2) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5288));
  }
  if ( *(_DWORD *)(a1 + 92) && (a3 & 1) != 0 )
    a3 = (unsigned int)a3 | 4;
  PoFxActivateComponent(**(_QWORD **)(a1 + 4960), a2, a3);
  return *(_DWORD *)(*(_QWORD *)(a1 + 4960) + 20LL) & 1;
}
