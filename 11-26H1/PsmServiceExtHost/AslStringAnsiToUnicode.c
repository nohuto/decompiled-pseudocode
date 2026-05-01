/*
 * XREFs of AslStringAnsiToUnicode @ 0x18009970C
 * Callers:
 *     AslpFileGet16BitDescription @ 0x18009B3C4 (AslpFileGet16BitDescription.c)
 *     AslpFileGet16BitModuleName @ 0x18009B4AC (AslpFileGet16BitModuleName.c)
 *     AslpFileGetClrVersionAttribute @ 0x18009B9F4 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExportName @ 0x18009C004 (AslpFileGetExportName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 */

__int64 __fastcall AslStringAnsiToUnicode(PWSTR *a1, const char *a2)
{
  ULONG v3; // eax
  USHORT v4; // di
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  struct _UNICODE_STRING v8; // [rsp+30h] [rbp-20h] BYREF
  _STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  DestinationString = 0LL;
  RtlInitString(&DestinationString, a2);
  v3 = RtlxAnsiStringToUnicodeSize(&DestinationString);
  v4 = v3;
  *a1 = 0LL;
  v8 = 0LL;
  if ( v3 <= 0xFFFF )
  {
    v8.Buffer = (PWSTR)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v3);
    if ( v8.Buffer )
    {
      v8.MaximumLength = v4;
      v8.Length = 0;
      v6 = RtlAnsiStringToUnicodeString(&v8, &DestinationString, 0);
      v5 = v6;
      if ( v6 >= 0 )
      {
        v5 = 0;
        *a1 = v8.Buffer;
        v8.Buffer = 0LL;
      }
      else
      {
        AslLogCallPrintf(1LL, "AslStringAnsiToUnicode", 413LL, "RtlAnsiStringToUnicodeString failed [%x]", v6);
      }
    }
    else
    {
      v5 = -1073741801;
      AslLogCallPrintf(1LL, "AslStringAnsiToUnicode", 404LL, "Out of memory");
    }
  }
  else
  {
    v5 = -1073741811;
    AslLogCallPrintf(1LL, "AslStringAnsiToUnicode", 397LL, "Ansi string is too long to convert at %d", v3);
  }
  AslFree(NtCurrentPeb()->ProcessHeap, v8.Buffer);
  return v5;
}
