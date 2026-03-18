/*
 * XREFs of BiExportBcdObjects @ 0x140B43AB8
 * Callers:
 *     BiExportStoreAlterationsToEfi @ 0x140893E58 (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     BiIsPortableWorkspaceBoot @ 0x140892E08 (BiIsPortableWorkspaceBoot.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140893620 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x140893C10 (BiCreateEfiEntry.c)
 *     BiDeleteBootEntry @ 0x140893DD8 (BiDeleteBootEntry.c)
 *     BiUpdateEfiEntry @ 0x1409D298C (BiUpdateEfiEntry.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 */

__int64 __fastcall BiExportBcdObjects(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  int v6; // edx
  int v7; // eax
  int EfiEntry; // esi
  bool IsPortableWorkspaceBoot; // bp
  int updated; // eax

  v2 = *a2;
  v3 = 0;
  if ( (__int64 *)*a2 == a2 )
    return v3;
  do
  {
    v6 = *(_DWORD *)(v2 + 48);
    if ( (v6 & 4) != 0 || (v6 & 1) != 0 )
    {
      if ( (v6 & 0x10) != 0 )
      {
        if ( (v6 & 1) == 0 )
          goto LABEL_26;
        v7 = BiDeleteBootEntry(*(_DWORD *)(v2 + 32));
        if ( v7 >= 0 )
        {
          *(_DWORD *)(v2 + 48) &= ~1u;
          goto LABEL_26;
        }
LABEL_11:
        v3 = v7;
        goto LABEL_26;
      }
      if ( (*(_DWORD *)(v2 + 48) & 4) == 0 && (v6 & 1) != 0 )
      {
        v7 = BiDeleteBootEntry(*(_DWORD *)(v2 + 32));
        if ( v7 >= 0 )
          goto LABEL_26;
        goto LABEL_11;
      }
      if ( (v6 & 4) == 0 || (v6 & 1) != 0 )
      {
        updated = BiUpdateEfiEntry(a1, v2);
        if ( updated < 0 )
        {
          v3 = updated;
          if ( (*(_BYTE *)(v2 + 48) & 8) != 0 )
            v3 = -2143748093;
        }
      }
      else
      {
        EfiEntry = 0;
        IsPortableWorkspaceBoot = BiIsPortableWorkspaceBoot();
        if ( (*(_DWORD *)(v2 + 48) & 8) != 0 || !IsPortableWorkspaceBoot )
          EfiEntry = BiCreateEfiEntry(a1, v2);
        if ( (*(_DWORD *)(v2 + 48) & 8) != 0 || IsPortableWorkspaceBoot )
        {
          if ( EfiEntry < 0 )
            v3 = -2143748095;
        }
        else if ( EfiEntry >= 0 )
        {
          BiAddBootEntryToEfiBootManagerDisplayOrder(a1, v2);
        }
      }
    }
LABEL_26:
    v2 = *(_QWORD *)v2;
  }
  while ( (__int64 *)v2 != a2 );
  if ( (v3 & 0x80000000) != 0 )
    BiLogMessage(4LL, L"BiExportBcdObjects failed %x", v3);
  return v3;
}
