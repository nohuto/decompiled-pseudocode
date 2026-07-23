/*
 * XREFs of BiUpdateEfiEntry @ 0x1409A396C
 * Callers:
 *     BiCreateEfiEntry @ 0x14089A010 (BiCreateEfiEntry.c)
 *     BiExportBcdObjects @ 0x140B459A8 (BiExportBcdObjects.c)
 * Callees:
 *     BiModifyBootEntry @ 0x14089A48C (BiModifyBootEntry.c)
 *     BiAreBootEntriesEqual @ 0x1409A1ECC (BiAreBootEntriesEqual.c)
 *     BiCreateMergedBootEntry @ 0x1409A2090 (BiCreateMergedBootEntry.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiGetElement @ 0x1409A5A7C (BiGetElement.c)
 *     BcdCloseObject @ 0x1409A5E18 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409A64B8 (BcdOpenObject.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUpdateEfiEntry(void *a1, const GUID *a2)
{
  _DWORD *v2; // rdi
  _WORD *v4; // r15
  _DWORD *v5; // r13
  _WORD *v6; // r12
  NTSTATUS v7; // ebx
  int v9; // eax
  _BOOT_ENTRY *v10; // r14
  __int64 v11; // [rsp+20h] [rbp-40h]
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp-28h] BYREF
  _DWORD *v13; // [rsp+40h] [rbp-20h]
  _WORD *v14; // [rsp+48h] [rbp-18h]
  _WORD *v15; // [rsp+50h] [rbp-10h]
  PVOID P; // [rsp+58h] [rbp-8h] BYREF

  v2 = *(_DWORD **)a2[2].Data4;
  v4 = 0LL;
  v5 = 0LL;
  v15 = 0LL;
  v6 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  P = 0LL;
  BcdObjectHandle = 0LL;
  v7 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  if ( v7 < 0 )
    goto LABEL_2;
  BiGetElement(BcdObjectHandle, 0x12000004u);
  if ( (a2[3].Data1 & 8) == 0 )
  {
    BiGetElement(BcdObjectHandle, 0x11000001u);
    BiGetElement(BcdObjectHandle, 0x12000002u);
    v5 = v13;
    v6 = v14;
  }
  v4 = v15;
  v9 = BiCreateMergedBootEntry(v2, v15, v5, v6, &P);
  v7 = v9;
  if ( v9 == -1073741766 )
  {
    v7 = 0;
    goto LABEL_3;
  }
  if ( v9 < 0 )
  {
LABEL_2:
    LODWORD(v11) = v7;
    BiLogMessage(
      4LL,
      L"BiUpdateEfiEntry %d '%ws' failed 0x%x",
      (unsigned int)v2[2],
      (char *)v2 + (unsigned int)v2[4],
      v11);
    goto LABEL_3;
  }
  v10 = (_BOOT_ENTRY *)P;
  if ( !BiAreBootEntriesEqual(v2, P) )
  {
    BiLogMessage(2LL, L"Updating BootEntry: %d '%ws'", (unsigned int)v2[2], (char *)v2 + (unsigned int)v2[4]);
    v7 = BiModifyBootEntry(v10);
    if ( v7 < 0 )
    {
      ExFreePoolWithTag(v10, 0x4B444342u);
      goto LABEL_2;
    }
  }
  ExFreePoolWithTag(v2, 0x4B444342u);
  *(_QWORD *)a2[2].Data4 = v10;
LABEL_3:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( BcdObjectHandle )
    BcdCloseObject(BcdObjectHandle);
  return (unsigned int)v7;
}
