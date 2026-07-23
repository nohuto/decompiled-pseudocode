/*
 * XREFs of BiExportBcdObjects @ 0x140B459A8
 * Callers:
 *     BiExportStoreAlterationsToEfi @ 0x14089A258 (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     BiIsPortableWorkspaceBoot @ 0x140899208 (BiIsPortableWorkspaceBoot.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140899A20 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x14089A010 (BiCreateEfiEntry.c)
 *     BiDeleteBootEntry @ 0x14089A1D8 (BiDeleteBootEntry.c)
 *     BiUpdateEfiEntry @ 0x1409A396C (BiUpdateEfiEntry.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 */

__int64 __fastcall BiExportBcdObjects(void *a1, const GUID **a2)
{
  const GUID *v2; // rbx
  unsigned int v3; // edi
  unsigned int Data1; // edx
  int v7; // eax
  int EfiEntry; // esi
  bool IsPortableWorkspaceBoot; // bp
  int updated; // eax

  v2 = *a2;
  v3 = 0;
  if ( *a2 == (const GUID *)a2 )
    return v3;
  do
  {
    Data1 = v2[3].Data1;
    if ( (Data1 & 4) != 0 || (Data1 & 1) != 0 )
    {
      if ( (Data1 & 0x10) != 0 )
      {
        if ( (Data1 & 1) == 0 )
          goto LABEL_26;
        v7 = BiDeleteBootEntry(v2[2].Data1);
        if ( v7 >= 0 )
        {
          v2[3].Data1 &= ~1u;
          goto LABEL_26;
        }
LABEL_11:
        v3 = v7;
        goto LABEL_26;
      }
      if ( (v2[3].Data1 & 4) == 0 && (Data1 & 1) != 0 )
      {
        v7 = BiDeleteBootEntry(v2[2].Data1);
        if ( v7 >= 0 )
          goto LABEL_26;
        goto LABEL_11;
      }
      if ( (Data1 & 4) == 0 || (Data1 & 1) != 0 )
      {
        updated = BiUpdateEfiEntry(a1, v2);
        if ( updated < 0 )
        {
          v3 = updated;
          if ( (v2[3].Data1 & 8) != 0 )
            v3 = -2143748093;
        }
      }
      else
      {
        EfiEntry = 0;
        IsPortableWorkspaceBoot = BiIsPortableWorkspaceBoot();
        if ( (v2[3].Data1 & 8) != 0 || !IsPortableWorkspaceBoot )
          EfiEntry = BiCreateEfiEntry(a1, v2);
        if ( (v2[3].Data1 & 8) != 0 || IsPortableWorkspaceBoot )
        {
          if ( EfiEntry < 0 )
            v3 = -2143748095;
        }
        else if ( EfiEntry >= 0 )
        {
          BiAddBootEntryToEfiBootManagerDisplayOrder(a1, (__int64)v2);
        }
      }
    }
LABEL_26:
    v2 = *(const GUID **)&v2->Data1;
  }
  while ( v2 != (const GUID *)a2 );
  if ( (v3 & 0x80000000) != 0 )
    BiLogMessage(4LL, L"BiExportBcdObjects failed %x", v3);
  return v3;
}
