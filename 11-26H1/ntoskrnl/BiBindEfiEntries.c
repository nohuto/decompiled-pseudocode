/*
 * XREFs of BiBindEfiEntries @ 0x1409A0C88
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x1409A4844 (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     BcdDeleteObject @ 0x140897504 (BcdDeleteObject.c)
 *     BiIsPortableWorkspaceBoot @ 0x140899208 (BiIsPortableWorkspaceBoot.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140899B78 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x14089A010 (BiCreateEfiEntry.c)
 *     BiDeleteBootEntry @ 0x14089A1D8 (BiDeleteBootEntry.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x14089A4FC (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BiBindEfiEntryToBcdObject @ 0x1409A0B80 (BiBindEfiEntryToBcdObject.c)
 *     BiUpdateBcdObject @ 0x1409A1B44 (BiUpdateBcdObject.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BcdOpenObject @ 0x1409A64B8 (BcdOpenObject.c)
 */

__int64 __fastcall BiBindEfiEntries(HANDLE BcdStoreHandle, GUID **a2)
{
  GUID *v2; // rbx
  int updated; // edi
  unsigned int Data1; // ecx
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  updated = 0;
  BcdObjectHandle = 0LL;
  if ( v2 != (GUID *)a2 )
  {
    while ( 1 )
    {
      Data1 = v2[3].Data1;
      if ( (Data1 & 0x10) != 0 )
        break;
      if ( (Data1 & 1) != 0 )
      {
        if ( (Data1 & 4) == 0 && (Data1 & 0x20) != 0 && !BiIsPortableWorkspaceBoot() )
        {
          if ( (int)BiDeleteBootEntry(v2[2].Data1) < 0 )
            goto LABEL_22;
          goto LABEL_6;
        }
        updated = BiBindEfiEntryToBcdObject((int)BcdStoreHandle, v2);
        if ( updated < 0 || (updated = BiUpdateBcdObject(BcdStoreHandle, v2), updated < 0) )
        {
LABEL_24:
          BiLogMessage(4LL, L"BiBindEfiEntries failed %x", (unsigned int)updated);
          return (unsigned int)updated;
        }
      }
      else if ( (Data1 & 4) != 0 )
      {
        if ( (Data1 & 8) != 0 )
        {
          updated = BcdOpenObject(BcdStoreHandle, v2 + 1, &BcdObjectHandle);
          if ( updated < 0 )
            goto LABEL_24;
          BcdDeleteObject(BcdObjectHandle);
          v2[3].Data1 &= 0xFFFFFFF9;
        }
        else if ( !BiIsPortableWorkspaceBoot() && (int)BiCreateEfiEntry(BcdStoreHandle, v2) >= 0 )
        {
          BiAddBootEntryToNvramDisplayOrder((__int64)v2);
        }
      }
LABEL_22:
      v2 = *(GUID **)&v2->Data1;
      if ( v2 == (GUID *)a2 )
        return (unsigned int)updated;
    }
    if ( (Data1 & 1) == 0 )
      goto LABEL_22;
    BiLogMessage(3LL, L"Boot entry exists for DontSync with ID 0x%x", v2[2].Data1);
    if ( (int)BiDeleteBootEntry(v2[2].Data1) < 0 )
      goto LABEL_22;
    v2[3].Data1 &= ~1u;
LABEL_6:
    BiRemoveBootEntryFromNvramDisplayOrder((__int64)v2);
    goto LABEL_22;
  }
  return (unsigned int)updated;
}
