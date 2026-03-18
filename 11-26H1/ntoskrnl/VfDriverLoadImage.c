/*
 * XREFs of VfDriverLoadImage @ 0x140C46AD0
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A269D4 (MmLoadSystemImageEx.c)
 *     VfInitBootDriversLoaded @ 0x140CDE91C (VfInitBootDriversLoaded.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038A9B0 (MiSectionControlArea.c)
 *     VfTargetDriversAdd @ 0x1403B7B18 (VfTargetDriversAdd.c)
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 *     VfSuspectDriversLoadCallback @ 0x140C38A50 (VfSuspectDriversLoadCallback.c)
 */

void __fastcall VfDriverLoadImage(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  int v3; // edi
  __int64 v5; // rcx
  char v6; // dl

  v3 = a3;
  if ( !_bittest16((const signed __int16 *)(a1 + 110), 9u)
    && (VfXdvEnabled || !RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 88), &XdvName, 1u)) )
  {
    v5 = *(_QWORD *)(a1 + 112);
    if ( v5 )
      v6 = *(_BYTE *)(*(_QWORD *)MiSectionControlArea(v5) + 15LL) & 0xF;
    else
      v6 = 12;
    if ( (_QWORD)ViVerifierDriverAddedThunkListHead )
      VfSuspectDriversLoadCallback(a1, v6, v3);
    else
      VfTargetDriversAdd(a1, v6, 0LL);
  }
}
