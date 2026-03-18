/*
 * XREFs of BiBindEfiEntries @ 0x1409CFCA8
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x1409D3864 (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     BcdDeleteObject @ 0x140891108 (BcdDeleteObject.c)
 *     BiIsPortableWorkspaceBoot @ 0x140892E08 (BiIsPortableWorkspaceBoot.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140893778 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x140893C10 (BiCreateEfiEntry.c)
 *     BiDeleteBootEntry @ 0x140893DD8 (BiDeleteBootEntry.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x1408940FC (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BiBindEfiEntryToBcdObject @ 0x1409CFBA0 (BiBindEfiEntryToBcdObject.c)
 *     BiUpdateBcdObject @ 0x1409D0B64 (BiUpdateBcdObject.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     BcdOpenObject @ 0x1409D54D8 (BcdOpenObject.c)
 */

__int64 __fastcall BiBindEfiEntries(__int64 a1, GUID **a2)
{
  GUID *v2; // rbx
  int updated; // edi
  unsigned int Data1; // ecx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  updated = 0;
  v8 = 0LL;
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
        updated = BiBindEfiEntryToBcdObject(a1, v2);
        if ( updated < 0 || (updated = BiUpdateBcdObject(a1, v2), updated < 0) )
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
          updated = BcdOpenObject(a1, &v2[1], &v8);
          if ( updated < 0 )
            goto LABEL_24;
          BcdDeleteObject(v8);
          v2[3].Data1 &= 0xFFFFFFF9;
        }
        else if ( !BiIsPortableWorkspaceBoot() && (int)BiCreateEfiEntry(a1, (__int64)v2) >= 0 )
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
