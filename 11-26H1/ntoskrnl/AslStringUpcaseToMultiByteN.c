/*
 * XREFs of AslStringUpcaseToMultiByteN @ 0x1409E418C
 * Callers:
 *     SdbpFindNextIndexedWildCardTag @ 0x1409E4454 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1409E7480 (SdbpFindFirstIndexedWildCardTag.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     AslAlloc @ 0x1409E4C90 (AslAlloc.c)
 *     AslFree @ 0x1409E6BD8 (AslFree.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 *     RtlUpcaseUnicodeString @ 0x1409E9B60 (RtlUpcaseUnicodeString.c)
 */

__int64 __fastcall AslStringUpcaseToMultiByteN(__int64 a1, __int64 a2, const WCHAR *a3)
{
  unsigned __int16 MaximumLength; // bx
  __int64 v5; // rcx
  wchar_t *Buffer; // rdi
  NTSTATUS v7; // ebx
  unsigned __int64 v8; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  wchar_t v12; // dx
  __int16 v13; // dx
  UNICODE_STRING v14; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  *(_QWORD *)&v14.Length = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  MaximumLength = DestinationString.MaximumLength;
  v14.Buffer = (wchar_t *)AslAlloc(v5, DestinationString.MaximumLength);
  Buffer = v14.Buffer;
  if ( v14.Buffer )
  {
    v14.MaximumLength = MaximumLength;
    v14.Length = 0;
    v7 = RtlUpcaseUnicodeString(&v14, &DestinationString, 0);
    if ( v7 < 0 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslStringUpcaseToMultiByteN",
        1152,
        (unsigned int)"RtlUpcaseUnicodeString failed [%x]");
      Buffer = v14.Buffer;
    }
    else
    {
      v10 = 0LL;
      Buffer = v14.Buffer;
      v8 = 0LL;
      v11 = (unsigned __int64)v14.Length >> 1;
      while ( 1 )
      {
        if ( v8 >= v11 )
        {
          *(_BYTE *)(a1 + v10) = 0;
          v7 = 0;
          goto LABEL_3;
        }
        v12 = Buffer[v8];
        *(_BYTE *)(a1 + v10) = v12;
        if ( (unsigned __int64)++v10 >= 0x104 )
          break;
        v13 = HIBYTE(v12);
        if ( (_BYTE)v13 )
        {
          *(_BYTE *)(v10 + a1) = v13;
          if ( (unsigned __int64)++v10 >= 0x104 )
            break;
        }
        ++v8;
      }
      v7 = -1073741789;
      AslLogCallPrintf(
        1,
        (unsigned int)"AslStringUpcaseToMultiByteN",
        1190,
        (unsigned int)"Failed to convert to ANSI [%x]");
    }
  }
  else
  {
    v7 = -1073741801;
    AslLogCallPrintf(1, (unsigned int)"AslStringUpcaseToMultiByteN", 1143, (unsigned int)"Out of memory");
  }
LABEL_3:
  AslFree(v8, Buffer);
  return (unsigned int)v7;
}
