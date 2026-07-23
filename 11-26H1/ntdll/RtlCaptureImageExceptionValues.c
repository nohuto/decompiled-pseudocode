/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x180079550
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x180078C94 (RtlInsertInvertedFunctionTable.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x180076C30 (RtlAddressInSectionTable.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1800C0490 (RtlpImageDirectoryEntryToData32.c)
 */

__int64 __fastcall RtlCaptureImageExceptionValues(unsigned __int64 BaseOfImage, char **a2, unsigned int *a3)
{
  char *v3; // rbx
  char *v6; // rdi
  bool v7; // bp
  NTSTATUS v8; // eax
  PIMAGE_NT_HEADERS v9; // rcx
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rdx
  __int64 result; // rax
  int v13; // ecx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp+8h] BYREF
  char *v15; // [rsp+68h] [rbp+10h] BYREF

  OutHeaders = 0LL;
  v3 = 0LL;
  v15 = 0LL;
  v6 = (char *)BaseOfImage;
  v7 = 1;
  if ( (BaseOfImage & 2) != 0 || (BaseOfImage & 1) != 0 )
  {
    v6 = (char *)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v7 = !(BaseOfImage & 1);
  }
  v8 = RtlImageNtHeaderEx(1u, v6, 0LL, &OutHeaders);
  v9 = OutHeaders;
  if ( !OutHeaders )
  {
LABEL_10:
    if ( v8 >= 0 )
      goto LABEL_12;
    goto LABEL_11;
  }
  Magic = OutHeaders->OptionalHeader.Magic;
  if ( Magic == 267 )
  {
    v8 = RtlpImageDirectoryEntryToData32((_DWORD)v6, v7, 3, (_DWORD)a3, (__int64)OutHeaders, (__int64)&v15);
    v3 = v15;
    goto LABEL_10;
  }
  if ( Magic == 523 )
  {
    if ( OutHeaders->OptionalHeader.NumberOfRvaAndSizes <= 3 )
    {
      v8 = -1073741811;
    }
    else
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[3].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        *a3 = OutHeaders->OptionalHeader.DataDirectory[3].Size;
        if ( v7 || (unsigned int)VirtualAddress < v9->OptionalHeader.SizeOfHeaders )
        {
          v3 = &v6[VirtualAddress];
          v8 = 0;
        }
        else
        {
          v3 = (char *)RtlAddressInSectionTable(v9, v6, VirtualAddress);
          v13 = 0;
          if ( !v3 )
            v13 = -1073741811;
          v8 = v13;
        }
      }
      else
      {
        v8 = -1073741822;
      }
    }
    goto LABEL_10;
  }
LABEL_11:
  v3 = 0LL;
LABEL_12:
  result = 0LL;
  *a2 = v3;
  if ( !v3 )
    *a3 = 0;
  return result;
}
