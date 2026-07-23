/*
 * XREFs of LdrpResGetMappingSize @ 0x1800A6EF0
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 *     LdrResGetRCConfig @ 0x1800A68D0 (LdrResGetRCConfig.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A71F0 (LdrpResSearchResourceMappedFile.c)
 *     LdrResSearchResource @ 0x1800AA2E0 (LdrResSearchResource.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x18001D0F0 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A6E00 (LdrpTraceLoadMUIDll.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpResGetMappingSize(__int64 a1, unsigned __int64 *a2, int a3, char a4)
{
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r14
  unsigned __int64 v9; // r13
  unsigned __int64 FileSizeFromLoadAsDataTable; // rdi
  NTSTATUS result; // eax
  unsigned __int64 SizeOfImage; // rsi
  NTSTATUS v13; // ebx
  __int64 v14; // rcx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp-90h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-88h]
  _QWORD v17[2]; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-70h] BYREF
  __int128 MemoryInformation; // [rsp+68h] [rbp-60h] BYREF
  __int128 v20; // [rsp+78h] [rbp-50h]
  __int128 v21; // [rsp+88h] [rbp-40h]

  OutHeaders = 0LL;
  MemoryInformation = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v17[0] = 3670070LL;
  v17[1] = L"LdrpResGetMappingSize Enter";
  v18[0] = 3538996LL;
  v18[1] = L"LdrpResGetMappingSize Exit";
  v6 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v7 = 2147353477LL;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    v8 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v14 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v17, *(unsigned __int8 *)v14);
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( !a1 || !a2 )
    return -1073741811;
  v9 = 0LL;
  if ( (a3 & 0x80000) != 0 )
  {
    FileSizeFromLoadAsDataTable = *a2;
    goto LABEL_30;
  }
  if ( (a3 & 0x20000) != 0 )
    v9 = *a2;
  *a2 = 0LL;
  FileSizeFromLoadAsDataTable = 0LL;
  result = RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &OutHeaders);
  if ( result >= 0 )
  {
    if ( OutHeaders->OptionalHeader.Magic == 267 || OutHeaders->OptionalHeader.Magic == 523 )
    {
      SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
      v16 = SizeOfImage;
    }
    else
    {
      SizeOfImage = 0LL;
      v16 = 0LL;
      result = -1073741701;
    }
    if ( result >= 0 )
    {
      if ( NtCurrentPeb()->ImageBaseAddress != (void *)a1 || (a3 & 0x100) == 0 || (a1 & 1) != 0 || !SizeOfImage )
      {
        if ( !a4 )
          FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(a1);
        if ( FileSizeFromLoadAsDataTable )
        {
          v13 = 0;
        }
        else
        {
          v13 = ZwQueryVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL),
                  MemoryRegionInformation,
                  &MemoryInformation,
                  0x30uLL,
                  0LL);
          if ( v13 >= 0 )
            FileSizeFromLoadAsDataTable = v20;
        }
        if ( !FileSizeFromLoadAsDataTable && SizeOfImage )
        {
          FileSizeFromLoadAsDataTable = SizeOfImage;
          v13 = 0;
        }
        if ( v13 < 0 )
          goto LABEL_24;
        goto LABEL_31;
      }
      FileSizeFromLoadAsDataTable = SizeOfImage;
LABEL_30:
      v13 = 0;
LABEL_31:
      if ( v9 && v9 < FileSizeFromLoadAsDataTable )
        v13 = -1073741793;
      else
        *a2 = FileSizeFromLoadAsDataTable;
LABEL_24:
      if ( RtlGetCurrentServiceSessionId() )
        v6 = (__int64)NtCurrentPeb()->SharedData + 555;
      if ( (*(_BYTE *)v6 & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v8 = (__int64)NtCurrentPeb()->SharedData + 554;
        LdrpTraceLoadMUIDll((unsigned __int16 *)v18, *(unsigned __int8 *)v8);
      }
      return v13;
    }
  }
  return result;
}
