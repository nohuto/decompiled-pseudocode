/*
 * XREFs of BiUpdateEfiEntry @ 0x1409D298C
 * Callers:
 *     BiCreateEfiEntry @ 0x140893C10 (BiCreateEfiEntry.c)
 *     BiExportBcdObjects @ 0x140B43AB8 (BiExportBcdObjects.c)
 * Callees:
 *     BiModifyBootEntry @ 0x14089408C (BiModifyBootEntry.c)
 *     BiAreBootEntriesEqual @ 0x1409D0EEC (BiAreBootEntriesEqual.c)
 *     BiCreateMergedBootEntry @ 0x1409D10B0 (BiCreateMergedBootEntry.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     BiGetElement @ 0x1409D4A9C (BiGetElement.c)
 *     BcdCloseObject @ 0x1409D4E38 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409D54D8 (BcdOpenObject.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUpdateEfiEntry(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdi
  _WORD *v4; // r15
  _DWORD *v5; // r13
  _WORD *v6; // r12
  int v7; // ebx
  int v9; // eax
  PVOID v10; // r14
  __int64 v11; // [rsp+20h] [rbp-40h]
  int v12; // [rsp+30h] [rbp-30h] BYREF
  HANDLE v13; // [rsp+38h] [rbp-28h] BYREF
  _DWORD *v14; // [rsp+40h] [rbp-20h] BYREF
  _WORD *v15; // [rsp+48h] [rbp-18h] BYREF
  _WORD *v16; // [rsp+50h] [rbp-10h] BYREF
  PVOID P; // [rsp+58h] [rbp-8h] BYREF
  int v19; // [rsp+B0h] [rbp+50h] BYREF
  int v20; // [rsp+B8h] [rbp+58h] BYREF

  v2 = *(_DWORD **)(a2 + 40);
  v19 = 0;
  v20 = 0;
  v4 = 0LL;
  v12 = 0;
  v5 = 0LL;
  v16 = 0LL;
  v6 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  P = 0LL;
  v13 = 0LL;
  v7 = BcdOpenObject(a1, a2 + 16, &v13);
  if ( v7 < 0 )
    goto LABEL_2;
  BiGetElement(v13, 301989892LL, &v16, &v19);
  if ( (*(_DWORD *)(a2 + 48) & 8) == 0 )
  {
    BiGetElement(v13, 285212673LL, &v14, &v20);
    BiGetElement(v13, 301989890LL, &v15, &v12);
    v5 = v14;
    v6 = v15;
  }
  v4 = v16;
  v9 = BiCreateMergedBootEntry(v2, v16, v5, v6, &P);
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
  v10 = P;
  if ( !BiAreBootEntriesEqual(v2, P) )
  {
    BiLogMessage(2LL, L"Updating BootEntry: %d '%ws'", (unsigned int)v2[2], (char *)v2 + (unsigned int)v2[4]);
    v7 = BiModifyBootEntry((__int64)v10);
    if ( v7 < 0 )
    {
      ExFreePoolWithTag(v10, 0x4B444342u);
      goto LABEL_2;
    }
  }
  ExFreePoolWithTag(v2, 0x4B444342u);
  *(_QWORD *)(a2 + 40) = v10;
LABEL_3:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( v13 )
    BcdCloseObject(v13);
  return (unsigned int)v7;
}
