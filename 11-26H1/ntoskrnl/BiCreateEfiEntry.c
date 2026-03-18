/*
 * XREFs of BiCreateEfiEntry @ 0x140893C10
 * Callers:
 *     BiBindEfiEntries @ 0x1409CFCA8 (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x140B43AB8 (BiExportBcdObjects.c)
 * Callees:
 *     BiSaveFirmwareVariable @ 0x14077ABB0 (BiSaveFirmwareVariable.c)
 *     BiAddBootEntry @ 0x14089359C (BiAddBootEntry.c)
 *     BiCreateBootEntry @ 0x140893864 (BiCreateBootEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140894258 (BiUpdateObjectReferenceInEfiEntry.c)
 *     BiUpdateEfiEntry @ 0x1409D298C (BiUpdateEfiEntry.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     BcdCloseObject @ 0x1409D4E38 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409D54D8 (BcdOpenObject.c)
 *     BiGetSavedBootEntry @ 0x140B4C960 (BiGetSavedBootEntry.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiCreateEfiEntry(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rdi
  int v5; // eax
  void *v6; // r14
  int SavedBootEntry; // ebx
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rdx
  unsigned int v13; // [rsp+58h] [rbp+38h] BYREF
  PVOID P; // [rsp+60h] [rbp+40h] BYREF
  void *v15; // [rsp+68h] [rbp+48h] BYREF

  v13 = 0;
  v3 = 0LL;
  v15 = 0LL;
  P = 0LL;
  v5 = BcdOpenObject(a1, a2 + 16, &v15);
  v6 = v15;
  SavedBootEntry = v5;
  if ( v5 < 0 )
    goto LABEL_16;
  if ( (*(_DWORD *)(a2 + 48) & 2) == 0 )
  {
    SavedBootEntry = BiCreateBootEntry((__int64)v15, &P);
    if ( SavedBootEntry >= 0 )
    {
      v3 = P;
      SavedBootEntry = BiAddBootEntry((__int64)P, (__int64)&v13);
      if ( SavedBootEntry >= 0 )
      {
        BiLogMessage(2LL, L"Created new boot entry %d '%ws'", v13, (char *)v3 + (unsigned int)v3[4]);
        v3[2] = v13;
        v10 = v13;
        *(_DWORD *)(a2 + 48) |= 0x21u;
        *(_DWORD *)(a2 + 32) = v10;
        *(_QWORD *)(a2 + 40) = v3;
        SavedBootEntry = BiSaveFirmwareVariable((__int64)v6, v11, (__int64)v3, v3[1]);
        if ( SavedBootEntry >= 0 )
        {
          *(_DWORD *)(a2 + 48) |= 2u;
          goto LABEL_17;
        }
      }
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  SavedBootEntry = BiGetSavedBootEntry(v15, &P);
  if ( SavedBootEntry < 0 )
  {
LABEL_15:
    v3 = P;
    goto LABEL_16;
  }
  v3 = P;
  if ( (*(_DWORD *)(a2 + 48) & 8) == 0 )
  {
    SavedBootEntry = BiUpdateObjectReferenceInEfiEntry(P, v6);
    if ( SavedBootEntry >= 0 )
    {
      *(_DWORD *)(a2 + 48) |= 0x20u;
      goto LABEL_7;
    }
LABEL_16:
    BiLogMessage(4LL, L"BiCreateEfiEntry failed %x", (unsigned int)SavedBootEntry);
    goto LABEL_17;
  }
LABEL_7:
  SavedBootEntry = BiAddBootEntry((__int64)v3, (__int64)&v13);
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
  BiLogMessage(2LL, L"Created boot entry %d '%ws' using cached variable", v13, (char *)v3 + (unsigned int)v3[4]);
  v3[2] = v13;
  v8 = v13;
  *(_DWORD *)(a2 + 48) |= 1u;
  *(_DWORD *)(a2 + 32) = v8;
  *(_QWORD *)(a2 + 40) = v3;
  SavedBootEntry = BiSaveFirmwareVariable((__int64)v6, v9, (__int64)v3, v3[1]);
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
  SavedBootEntry = BiUpdateEfiEntry(a1, a2);
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
LABEL_17:
  if ( v6 )
    BcdCloseObject(v6);
  if ( (*(_DWORD *)(a2 + 48) & 1) == 0 && v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  return (unsigned int)SavedBootEntry;
}
