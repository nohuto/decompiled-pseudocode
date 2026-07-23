/*
 * XREFs of LdrpResGetResourceDirectory @ 0x1800A8E50
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1800A71F0 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A6E00 (LdrpTraceLoadMUIDll.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall LdrpResGetResourceDirectory(
        unsigned __int64 BaseOfImage,
        ULONG64 Size,
        __int16 a3,
        _QWORD *a4,
        PIMAGE_NT_HEADERS *a5)
{
  int v9; // edi
  char v10; // r15
  _DWORD *SharedData; // rcx
  __int64 v12; // r14
  __int64 v13; // rcx
  char v14; // al
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v16; // r8
  _IMAGE_OPTIONAL_HEADER64 *p_OptionalHeader; // rcx
  unsigned __int16 Magic; // ax
  unsigned int v19; // eax
  char v20; // cl
  __int64 v21; // rdx
  char *v22; // rdx
  __int64 v23; // rbx
  unsigned int *v24; // r9
  int i; // ecx
  unsigned int v26; // r11d
  __int64 v27; // r10
  int v28; // eax
  int v29; // ecx
  _DWORD *v30; // rcx
  __int64 v31; // rcx
  _QWORD v32[2]; // [rsp+40h] [rbp-138h] BYREF
  _QWORD v33[2]; // [rsp+50h] [rbp-128h] BYREF
  __int128 v34; // [rsp+60h] [rbp-118h] BYREF
  __int128 v35; // [rsp+70h] [rbp-108h]
  __int128 v36; // [rsp+80h] [rbp-F8h]
  __int128 v37; // [rsp+90h] [rbp-E8h]
  __int128 v38; // [rsp+A0h] [rbp-D8h]
  __int128 v39; // [rsp+B0h] [rbp-C8h]
  __int128 v40; // [rsp+C0h] [rbp-B8h]
  __int128 v41; // [rsp+D0h] [rbp-A8h]
  __int128 v42; // [rsp+E0h] [rbp-98h]
  __int128 v43; // [rsp+F0h] [rbp-88h]
  __int128 v44; // [rsp+100h] [rbp-78h]
  __int128 v45; // [rsp+110h] [rbp-68h]
  __int128 v46; // [rsp+120h] [rbp-58h]
  __int128 v47; // [rsp+130h] [rbp-48h]
  __int128 v48; // [rsp+140h] [rbp-38h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+180h] [rbp+8h] BYREF
  _QWORD *v50; // [rsp+198h] [rbp+20h]

  v50 = a4;
  v9 = 0;
  OutHeaders = 0LL;
  memset_thunk_772440563353939046(&v34, 0, 0xF0uLL);
  v10 = 1;
  v32[0] = 4456514LL;
  v32[1] = L"LdrpResGetResourceDirectory Enter";
  v33[0] = 4325440LL;
  v33[1] = L"LdrpResGetResourceDirectory Exit";
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v13 = (__int64)NtCurrentPeb()->SharedData + 555;
    v12 = 2147353477LL;
  }
  else
  {
    v12 = 2147353477LL;
    v13 = 2147353477LL;
  }
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v31 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v31 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v32, *(unsigned __int8 *)v31);
  }
  if ( !BaseOfImage || !a4 || !a5 )
    return -1073741811;
  v14 = BaseOfImage & 1;
  if ( (BaseOfImage & 2) != 0 || (BaseOfImage & 1) != 0 )
  {
    BaseOfImage &= 0xFFFFFFFFFFFFFFFCuLL;
    v10 = v14 ^ 1;
  }
  result = RtlImageNtHeaderEx((a3 & 0x1000) == 0, (PVOID)BaseOfImage, Size, &OutHeaders);
  if ( result >= 0 )
  {
    v16 = OutHeaders;
    p_OptionalHeader = &OutHeaders->OptionalHeader;
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      v34 = *(_OWORD *)&p_OptionalHeader->Magic;
      v35 = *(_OWORD *)&OutHeaders->OptionalHeader.AddressOfEntryPoint;
      v36 = *(_OWORD *)&OutHeaders->OptionalHeader.SectionAlignment;
      v37 = *(_OWORD *)&OutHeaders->OptionalHeader.MajorSubsystemVersion;
      v38 = *(_OWORD *)&OutHeaders->OptionalHeader.CheckSum;
      v39 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfStackCommit;
      v40 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit;
      v41 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      v42 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
      v43 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[4].VirtualAddress;
      v44 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[6].VirtualAddress;
      v45 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[8].VirtualAddress;
      v46 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[10].VirtualAddress;
      v47 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[12].VirtualAddress;
      v19 = HIDWORD(v39);
      v20 = 1;
    }
    else
    {
      if ( Magic != 523 )
      {
        v9 = -1073741701;
        v23 = 2147353476LL;
        goto LABEL_47;
      }
      v34 = *(_OWORD *)&p_OptionalHeader->Magic;
      v35 = *(_OWORD *)&OutHeaders->OptionalHeader.AddressOfEntryPoint;
      v36 = *(_OWORD *)&OutHeaders->OptionalHeader.SectionAlignment;
      v37 = *(_OWORD *)&OutHeaders->OptionalHeader.MajorSubsystemVersion;
      v38 = *(_OWORD *)&OutHeaders->OptionalHeader.CheckSum;
      v39 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfStackCommit;
      v40 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit;
      v41 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      v42 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
      v43 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[4].VirtualAddress;
      v44 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[6].VirtualAddress;
      v45 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[8].VirtualAddress;
      v46 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[10].VirtualAddress;
      v47 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[12].VirtualAddress;
      v48 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[14].VirtualAddress;
      v20 = 0;
      v19 = HIDWORD(v40);
    }
    if ( v19 <= 2 )
    {
      v9 = -1073741687;
      v23 = 2147353476LL;
      goto LABEL_47;
    }
    v21 = (unsigned int)v42;
    if ( v20 )
      v21 = (unsigned int)v41;
    if ( !(_DWORD)v21 )
    {
      v9 = -1073741687;
      v23 = 2147353476LL;
      goto LABEL_47;
    }
    if ( !v10 && (unsigned int)v21 >= HIDWORD(v37) )
    {
      LODWORD(OutHeaders) = (a3 & 0x1000) != 0;
      v24 = (unsigned int *)((char *)&v16->OptionalHeader.Magic + v16->FileHeader.SizeOfOptionalHeader);
      if ( v24 )
      {
        for ( i = 0;
              i < v16->FileHeader.NumberOfSections
           && ((a3 & 0x1000) == 0 || (unsigned __int64)(v24 + 10) <= Size + (BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL));
              ++i )
        {
          v26 = v24[4];
          v27 = v24[3];
          if ( (unsigned int)v21 >= (unsigned int)v27 && (unsigned int)v21 < (unsigned int)v27 + v26 )
          {
            if ( v26 )
            {
              v22 = (char *)(BaseOfImage + v24[5] - v27 + v21);
              goto LABEL_39;
            }
            v9 = -1073741687;
            v23 = 2147353476LL;
            goto LABEL_47;
          }
          v24 += 10;
        }
      }
      v9 = -1073741701;
      v23 = 2147353476LL;
      goto LABEL_47;
    }
    v22 = (char *)(BaseOfImage + v21);
    if ( (unsigned __int64)v22 < BaseOfImage )
    {
      v9 = -1073741701;
      v23 = 2147353476LL;
      goto LABEL_47;
    }
LABEL_39:
    if ( !v22 )
    {
      v9 = -1073741687;
      goto LABEL_46;
    }
    if ( (a3 & 0x1000) == 0 )
      goto LABEL_45;
    if ( (unsigned __int64)v22 > BaseOfImage
      && (unsigned __int64)(v22 + 16) <= Size + (BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      v28 = *((unsigned __int16 *)v22 + 6);
      v29 = *((unsigned __int16 *)v22 + 7);
      if ( !__PAIR32__(v29, v28) )
      {
        v9 = -1073741686;
        goto LABEL_46;
      }
      if ( (unsigned __int64)&v22[8 * (v28 + v29)] <= Size + (BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL) )
      {
LABEL_45:
        *v50 = v22;
        *a5 = v16;
LABEL_46:
        v23 = 2147353476LL;
LABEL_47:
        v30 = NtCurrentPeb()->SharedData;
        if ( v30 && *v30 )
          v12 = (__int64)NtCurrentPeb()->SharedData + 555;
        if ( (*(_BYTE *)v12 & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v23 = (__int64)NtCurrentPeb()->SharedData + 554;
          LdrpTraceLoadMUIDll((unsigned __int16 *)v33, *(unsigned __int8 *)v23);
        }
        return v9;
      }
    }
    v9 = -1073741701;
    goto LABEL_46;
  }
  return result;
}
