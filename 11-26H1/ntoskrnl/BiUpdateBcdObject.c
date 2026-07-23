/*
 * XREFs of BiUpdateBcdObject @ 0x1409A1B44
 * Callers:
 *     BiBindEfiEntries @ 0x1409A0C88 (BiBindEfiEntries.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     BiSaveFirmwareVariable @ 0x14077DAE0 (BiSaveFirmwareVariable.c)
 *     BiModifyBootEntry @ 0x14089A48C (BiModifyBootEntry.c)
 *     BiDeleteElement @ 0x1409A1958 (BiDeleteElement.c)
 *     BiAreBootEntriesEqual @ 0x1409A1ECC (BiAreBootEntriesEqual.c)
 *     BiGetFilePathFromEfiPath @ 0x1409A1EF8 (BiGetFilePathFromEfiPath.c)
 *     BiCreateMergedBootEntry @ 0x1409A2090 (BiCreateMergedBootEntry.c)
 *     BiGetDeviceFromEfiPath @ 0x1409A2424 (BiGetDeviceFromEfiPath.c)
 *     BcdSetElementDataWithFlags @ 0x1409A40A4 (BcdSetElementDataWithFlags.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BcdGetElementData @ 0x1409A5B40 (BcdGetElementData.c)
 *     BcdCloseObject @ 0x1409A5E18 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409A64B8 (BcdOpenObject.c)
 *     BiGetRegistryValue @ 0x1409A6CB4 (BiGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUpdateBcdObject(void *a1, const GUID *a2)
{
  __int64 v3; // rdi
  void *v4; // r12
  wchar_t *v5; // r15
  PBOOT_ENTRY v6; // rsi
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  HANDLE v9; // r14
  int v10; // ebx
  __int64 v11; // rax
  _WORD *v12; // r13
  SIZE_T v13; // rbx
  NTSTATUS ElementData; // eax
  __int64 v15; // rax
  PVOID v16; // r13
  __int64 v18; // rbx
  int v19; // eax
  unsigned int v20; // eax
  BCD_FLAGS v21; // r8d
  wchar_t *Pool2; // rax
  const wchar_t *v23; // r8
  BCD_FLAGS v24; // r8d
  BCD_FLAGS v25; // r8d
  int v26; // eax
  __int64 v27; // rdx
  ULONG BufferSize; // [rsp+30h] [rbp-89h] BYREF
  int v29; // [rsp+34h] [rbp-85h] BYREF
  ULONG v30; // [rsp+38h] [rbp-81h]
  ULONG v31; // [rsp+3Ch] [rbp-7Dh] BYREF
  PVOID Buffer; // [rsp+40h] [rbp-79h]
  void *Source2; // [rsp+48h] [rbp-71h] BYREF
  PBOOT_ENTRY BootEntry; // [rsp+50h] [rbp-69h] BYREF
  PVOID P; // [rsp+58h] [rbp-61h] BYREF
  HANDLE BcdObjectHandle; // [rsp+60h] [rbp-59h] BYREF
  const GUID *v37; // [rsp+68h] [rbp-51h]
  __int64 v38; // [rsp+70h] [rbp-49h]
  char *v39; // [rsp+78h] [rbp-41h]
  char v40; // [rsp+80h] [rbp-39h] BYREF

  v37 = a2;
  v38 = 5111808LL;
  v30 = 0;
  v31 = 0;
  v3 = *(_QWORD *)a2[2].Data4;
  v4 = 0LL;
  Buffer = 0LL;
  v5 = 0LL;
  P = 0LL;
  v6 = 0LL;
  Source2 = 0LL;
  v29 = 0;
  BcdObjectHandle = 0LL;
  BufferSize = 0;
  BootEntry = 0LL;
  v39 = &v40;
  v7 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  v9 = BcdObjectHandle;
  v10 = v7;
  if ( v7 < 0 )
    goto LABEL_21;
  if ( (a2[3].Data1 & 2) != 0 )
  {
    if ( (int)BiGetRegistryValue(BcdObjectHandle, L"FirmwareVariable", L"Description", 3LL, &Source2, &v29) >= 0
      && (v20 = *(_DWORD *)(v3 + 4), v20 == v29) )
    {
      v4 = Source2;
      if ( RtlCompareMemory((const void *)v3, Source2, v20) == v20 )
        goto LABEL_5;
    }
    else
    {
      v4 = Source2;
    }
  }
  v10 = BiSaveFirmwareVariable((__int64)v9, v8, v3, *(_DWORD *)(v3 + 4));
  if ( v10 >= 0 )
  {
    a2[3].Data1 |= 2u;
LABEL_5:
    v11 = -1LL;
    v12 = (_WORD *)(v3 + *(unsigned int *)(v3 + 16));
    do
      ++v11;
    while ( v12[v11] );
    v13 = (unsigned int)(2 * v11 + 2);
    ElementData = BcdGetElementData(v9, 0x12000004u, 0LL, &BufferSize);
    if ( ElementData == -1073741789 )
    {
      Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL);
      v5 = Pool2;
      if ( !Pool2 )
        goto LABEL_45;
      ElementData = BcdGetElementData(v9, 0x12000004u, Pool2, &BufferSize);
    }
    if ( ElementData >= 0 )
    {
      if ( !v5 )
        goto LABEL_45;
      if ( BufferSize != (_DWORD)v13 )
      {
LABEL_44:
        v23 = v5;
LABEL_46:
        BiLogMessage(1LL, L"BiUpdateObject: Updating descriptions %ws %ws", v23, v12);
        BiDeleteElement((__int64)v9, 0x12000004u);
        BcdSetElementDataWithFlags(v9, 0x12000004u, v25, v12, v13);
LABEL_12:
        v15 = *(unsigned int *)(v3 + 20);
        if ( *(_DWORD *)(v15 + v3 + 8) == 4 )
        {
          v18 = v15 + v3;
          if ( (int)BiGetDeviceFromEfiPath((void *)(v15 + v3 + 12)) >= 0 )
          {
            BiDeleteElement((__int64)v9, 0x11000001u);
            v16 = Buffer;
            BcdSetElementDataWithFlags(v9, 0x11000001u, v21, Buffer, v30);
          }
          else
          {
            v16 = Buffer;
          }
          if ( (int)BiGetFilePathFromEfiPath(v18 + 12, &P, &v31) >= 0 )
          {
            BiDeleteElement((__int64)v9, 0x12000002u);
            BcdSetElementDataWithFlags(v9, 0x12000002u, v24, P, v31);
          }
          v19 = BiCreateMergedBootEntry(v3, 0LL, v16, 0LL, &BootEntry);
          v6 = BootEntry;
          if ( v19 >= 0 && !(unsigned __int8)BiAreBootEntriesEqual(v3, BootEntry) )
          {
            BiLogMessage(
              2LL,
              L"Updating BootEntry: %d '%ws'",
              *(unsigned int *)(v3 + 8),
              v3 + *(unsigned int *)(v3 + 16));
            v26 = BiModifyBootEntry(v6);
            v10 = v26;
            if ( v26 < 0 )
              goto LABEL_15;
            v10 = BiSaveFirmwareVariable((__int64)v9, v27, (__int64)v6, v6->Length);
            if ( v10 < 0 )
              goto LABEL_15;
            ExFreePoolWithTag((PVOID)v3, 0x4B444342u);
            *(_QWORD *)v37[2].Data4 = v6;
            v6 = 0LL;
          }
        }
        else
        {
          v16 = Buffer;
        }
        v10 = 0;
LABEL_15:
        if ( v16 )
          ExFreePoolWithTag(v16, 0x4B444342u);
        if ( P )
          ExFreePoolWithTag(P, 0x4B444342u);
        goto LABEL_19;
      }
      if ( RtlCompareMemory(v12, v5, v13) == v13 )
        goto LABEL_12;
    }
    if ( v5 )
      goto LABEL_44;
LABEL_45:
    v23 = L"<NULL>";
    goto LABEL_46;
  }
LABEL_19:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
LABEL_21:
  if ( v9 )
    BcdCloseObject(v9);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  return (unsigned int)v10;
}
