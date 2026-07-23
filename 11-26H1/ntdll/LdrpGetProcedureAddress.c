/*
 * XREFs of LdrpGetProcedureAddress @ 0x180030D90
 * Callers:
 *     LdrpApplyPatchImage @ 0x1800915AC (LdrpApplyPatchImage.c)
 *     LdrpCorInitialize @ 0x1800BC06C (LdrpCorInitialize.c)
 *     LdrpResolveProcedureAddress @ 0x1800C3200 (LdrpResolveProcedureAddress.c)
 *     AvrfMiniLoadDll @ 0x180116018 (AvrfMiniLoadDll.c)
 *     LdrHotPatchNotify @ 0x18015B7C0 (LdrHotPatchNotify.c)
 *     LdrpBuildImportRedirection @ 0x18015E0F4 (LdrpBuildImportRedirection.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x180076C30 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall LdrpGetProcedureAddress(unsigned __int64 BaseOfImage, const char *a2, int a3, char **a4)
{
  int v4; // r14d
  unsigned int Size; // r13d
  bool v9; // bp
  char *v10; // rdi
  char *v11; // rbx
  NTSTATUS v12; // eax
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rax
  char *v15; // rdi
  int v16; // esi
  int v17; // r10d
  int i; // eax
  int v19; // eax
  int v20; // ebx
  __int64 v21; // r9
  int v22; // edx
  unsigned int v23; // esi
  char *v24; // rcx
  __int64 SizeOfHeapCommit_low; // r10
  unsigned int v27; // r8d
  unsigned int *v28; // rdx
  __int64 v29; // r9
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+80h] [rbp+8h] BYREF
  char **v31; // [rsp+98h] [rbp+20h]

  v31 = a4;
  v4 = 0;
  OutHeaders = 0LL;
  Size = 0;
  v9 = 1;
  v10 = (char *)BaseOfImage;
  v11 = 0LL;
  if ( (BaseOfImage & 2) != 0 || (BaseOfImage & 1) != 0 )
  {
    v10 = (char *)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v9 = !(BaseOfImage & 1);
  }
  v12 = RtlImageNtHeaderEx(1u, v10, 0LL, &OutHeaders);
  if ( OutHeaders )
  {
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic != 267 )
    {
      if ( Magic != 523 )
        return 3221225594LL;
      if ( !OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
      {
        v12 = -1073741811;
        goto LABEL_11;
      }
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      if ( !(_DWORD)VirtualAddress )
      {
        v12 = -1073741822;
        goto LABEL_11;
      }
      Size = OutHeaders->OptionalHeader.DataDirectory[0].Size;
      if ( !v9 && (unsigned int)VirtualAddress >= OutHeaders->OptionalHeader.SizeOfHeaders )
      {
        v11 = (char *)RtlAddressInSectionTable(OutHeaders, v10, VirtualAddress);
        v12 = 0;
        if ( !v11 )
          v12 = -1073741811;
        goto LABEL_11;
      }
      v11 = &v10[VirtualAddress];
LABEL_10:
      v12 = 0;
      goto LABEL_11;
    }
    if ( !HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) )
    {
      v12 = -1073741811;
      goto LABEL_11;
    }
    SizeOfHeapCommit_low = LODWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
    if ( !(_DWORD)SizeOfHeapCommit_low )
    {
      v12 = -1073741822;
      goto LABEL_11;
    }
    Size = HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
    if ( v9 || (unsigned int)SizeOfHeapCommit_low < OutHeaders->OptionalHeader.SizeOfHeaders )
    {
      v11 = &v10[SizeOfHeapCommit_low];
      goto LABEL_10;
    }
    v27 = 0;
    v28 = (unsigned int *)((char *)&OutHeaders->OptionalHeader.Magic + OutHeaders->FileHeader.SizeOfOptionalHeader);
    while ( v27 < OutHeaders->FileHeader.NumberOfSections )
    {
      v29 = v28[3];
      if ( (unsigned int)SizeOfHeapCommit_low >= (unsigned int)v29
        && (unsigned int)SizeOfHeapCommit_low < (unsigned int)v29 + v28[4] )
      {
        v11 = &v10[v28[5] - v29 + SizeOfHeapCommit_low];
        if ( v11 )
        {
          v12 = 0;
          goto LABEL_11;
        }
        break;
      }
      v28 += 10;
      ++v27;
    }
    v12 = -1073741811;
  }
LABEL_11:
  v15 = 0LL;
  if ( v12 >= 0 )
    v15 = v11;
  if ( !v15 )
    return 3221225594LL;
  if ( a2 )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrsnap.c",
      838LL,
      "LdrpGetProcedureAddress",
      2LL,
      "Locating procedure \"%s\" by name\n",
      a2);
    v16 = 0;
    v17 = *((_DWORD *)v15 + 6) - 1;
    for ( i = v17; ; i = v16 + v17 )
    {
      v19 = i / 2;
      v20 = v19;
      if ( v17 < v16 )
        break;
      v21 = v19;
      v22 = strcmp(
              a2,
              (const char *)(BaseOfImage + *(unsigned int *)(BaseOfImage + *((unsigned int *)v15 + 8) + 4LL * v19)));
      if ( !v22 )
      {
        v23 = *(unsigned __int16 *)(BaseOfImage + *((unsigned int *)v15 + 9) + 2 * v21);
        goto LABEL_19;
      }
      if ( v22 >= 0 )
        v16 = v20 + 1;
      else
        v17 = v20 - 1;
    }
    LdrpLogInternal(
      "minkernel\\ldr\\ldrsnap.c",
      2286LL,
      "LdrpNameToOrdinal",
      1LL,
      "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
      a2,
      (const void *)BaseOfImage);
    return 3221225594LL;
  }
  LdrpLogInternal(
    "minkernel\\ldr\\ldrsnap.c",
    856LL,
    "LdrpGetProcedureAddress",
    2LL,
    "Loading procedure 0x%lx by ordinal\n",
    a3);
  if ( !a3 )
    return 3221225485LL;
  v23 = a3 - *((_DWORD *)v15 + 4);
LABEL_19:
  if ( v23 >= *((_DWORD *)v15 + 5) )
  {
    LOBYTE(v4) = a2 != 0LL;
    return (unsigned int)(v4 - 1073741512);
  }
  else
  {
    v24 = (char *)(BaseOfImage + *(unsigned int *)(BaseOfImage + *((unsigned int *)v15 + 7) + 4LL * (int)v23));
    *v31 = v24;
    if ( v24 >= v15 )
      return v24 < &v15[Size] ? 0xC000022D : 0;
    else
      return 0LL;
  }
}
