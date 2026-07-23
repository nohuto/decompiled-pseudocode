/*
 * XREFs of MiLocateKernelSections @ 0x140D06F30
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140463C90 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall MiLocateKernelSections(__int64 a1)
{
  char *v1; // rbx
  __int64 result; // rax
  int NumberOfSections; // r8d
  unsigned int *v4; // rdx
  unsigned int v5; // r10d
  unsigned int v6; // r9d
  char *v7; // rcx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(char **)(a1 + 48);
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, v1, 0LL, &OutHeaders);
  result = OutHeaders->FileHeader.SizeOfOptionalHeader;
  NumberOfSections = OutHeaders->FileHeader.NumberOfSections;
  v4 = (unsigned int *)((char *)&OutHeaders->OptionalHeader.Magic + result);
  if ( OutHeaders->FileHeader.NumberOfSections )
  {
    do
    {
      result = *v4;
      v5 = v4[2];
      v6 = v4[4];
      if ( (_DWORD)result == 1987011374 || (_DWORD)result == 1953655086 )
      {
        MiFlags |= 0x1000uLL;
      }
      else if ( (_DWORD)result == 1280266064 )
      {
        v7 = &v1[v4[3]];
        if ( v4[1] == 1162104643 )
        {
          ExPoolCodeStart = (__int64)&v1[v4[3]];
          if ( v6 < v5 )
            v6 = v5;
          result = v6;
          ExPoolCodeEnd = ((unsigned __int64)&v7[v6 + 4095] & 0xFFFFFFFFFFFFF000uLL) - 1;
        }
      }
      --NumberOfSections;
      v4 += 10;
    }
    while ( NumberOfSections > 0 );
  }
  return result;
}
