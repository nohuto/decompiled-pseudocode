/*
 * XREFs of BiCreateEfiEntry @ 0x14089A010
 * Callers:
 *     BiBindEfiEntries @ 0x1409A0C88 (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x140B459A8 (BiExportBcdObjects.c)
 * Callees:
 *     BiSaveFirmwareVariable @ 0x14077DAE0 (BiSaveFirmwareVariable.c)
 *     BiAddBootEntry @ 0x14089999C (BiAddBootEntry.c)
 *     BiCreateBootEntry @ 0x140899C64 (BiCreateBootEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x14089A658 (BiUpdateObjectReferenceInEfiEntry.c)
 *     BiUpdateEfiEntry @ 0x1409A396C (BiUpdateEfiEntry.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BcdCloseObject @ 0x1409A5E18 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409A64B8 (BcdOpenObject.c)
 *     BiGetSavedBootEntry @ 0x140B4E6F0 (BiGetSavedBootEntry.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiCreateEfiEntry(void *a1, const GUID *a2)
{
  _BOOT_ENTRY *v3; // rdi
  NTSTATUS v5; // eax
  HANDLE v6; // r14
  int SavedBootEntry; // ebx
  ULONG v8; // eax
  __int64 v9; // rdx
  ULONG v10; // eax
  __int64 v11; // rdx
  ULONG Id; // [rsp+58h] [rbp+38h] BYREF
  PVOID P; // [rsp+60h] [rbp+40h] BYREF
  HANDLE BcdObjectHandle; // [rsp+68h] [rbp+48h] BYREF

  Id = 0;
  v3 = 0LL;
  BcdObjectHandle = 0LL;
  P = 0LL;
  v5 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  v6 = BcdObjectHandle;
  SavedBootEntry = v5;
  if ( v5 < 0 )
    goto LABEL_16;
  if ( (a2[3].Data1 & 2) == 0 )
  {
    SavedBootEntry = BiCreateBootEntry(BcdObjectHandle, &P);
    if ( SavedBootEntry >= 0 )
    {
      v3 = (_BOOT_ENTRY *)P;
      SavedBootEntry = BiAddBootEntry((PBOOT_ENTRY)P, &Id);
      if ( SavedBootEntry >= 0 )
      {
        BiLogMessage(2LL, L"Created new boot entry %d '%ws'", Id, (char *)v3 + v3->FriendlyNameOffset);
        v3->Id = Id;
        v10 = Id;
        a2[3].Data1 |= 0x21u;
        a2[2].Data1 = v10;
        *(_QWORD *)a2[2].Data4 = v3;
        SavedBootEntry = BiSaveFirmwareVariable((__int64)v6, v11, (__int64)v3, v3->Length);
        if ( SavedBootEntry >= 0 )
        {
          a2[3].Data1 |= 2u;
          goto LABEL_17;
        }
      }
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  SavedBootEntry = BiGetSavedBootEntry(BcdObjectHandle, &P);
  if ( SavedBootEntry < 0 )
  {
LABEL_15:
    v3 = (_BOOT_ENTRY *)P;
    goto LABEL_16;
  }
  v3 = (_BOOT_ENTRY *)P;
  if ( (a2[3].Data1 & 8) == 0 )
  {
    SavedBootEntry = BiUpdateObjectReferenceInEfiEntry(P, v6);
    if ( SavedBootEntry >= 0 )
    {
      a2[3].Data1 |= 0x20u;
      goto LABEL_7;
    }
LABEL_16:
    BiLogMessage(4LL, L"BiCreateEfiEntry failed %x", (unsigned int)SavedBootEntry);
    goto LABEL_17;
  }
LABEL_7:
  SavedBootEntry = BiAddBootEntry(v3, &Id);
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
  BiLogMessage(2LL, L"Created boot entry %d '%ws' using cached variable", Id, (char *)v3 + v3->FriendlyNameOffset);
  v3->Id = Id;
  v8 = Id;
  a2[3].Data1 |= 1u;
  a2[2].Data1 = v8;
  *(_QWORD *)a2[2].Data4 = v3;
  SavedBootEntry = BiSaveFirmwareVariable((__int64)v6, v9, (__int64)v3, v3->Length);
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
  SavedBootEntry = BiUpdateEfiEntry(a1, a2);
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
LABEL_17:
  if ( v6 )
    BcdCloseObject(v6);
  if ( (a2[3].Data1 & 1) == 0 && v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  return (unsigned int)SavedBootEntry;
}
