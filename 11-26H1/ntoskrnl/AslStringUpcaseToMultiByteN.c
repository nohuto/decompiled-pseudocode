/*
 * XREFs of AslStringUpcaseToMultiByteN @ 0x1409D88D0
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x1409D5500 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1409D84BC (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x1409D2F80 (RtlUpcaseUnicodeString.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 */

__int64 __fastcall AslStringUpcaseToMultiByteN(__int64 a1, __int64 a2, const WCHAR *a3)
{
  unsigned __int16 MaximumLength; // bx
  wchar_t *Buffer; // rdi
  NTSTATUS v6; // ebx
  unsigned __int64 v7; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  wchar_t v11; // dx
  __int16 v12; // dx
  UNICODE_STRING v13; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  *(_QWORD *)&v13.Length = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  MaximumLength = DestinationString.MaximumLength;
  v13.Buffer = (wchar_t *)AslAlloc();
  Buffer = v13.Buffer;
  if ( v13.Buffer )
  {
    v13.MaximumLength = MaximumLength;
    v13.Length = 0;
    v6 = RtlUpcaseUnicodeString(&v13, &DestinationString, 0);
    if ( v6 < 0 )
    {
      AslLogCallPrintf(1LL, (__int64)"AslStringUpcaseToMultiByteN");
      Buffer = v13.Buffer;
    }
    else
    {
      v9 = 0LL;
      Buffer = v13.Buffer;
      v7 = 0LL;
      v10 = (unsigned __int64)v13.Length >> 1;
      while ( 1 )
      {
        if ( v7 >= v10 )
        {
          *(_BYTE *)(a1 + v9) = 0;
          v6 = 0;
          goto LABEL_3;
        }
        v11 = Buffer[v7];
        *(_BYTE *)(a1 + v9) = v11;
        if ( (unsigned __int64)++v9 >= 0x104 )
          break;
        v12 = HIBYTE(v11);
        if ( (_BYTE)v12 )
        {
          *(_BYTE *)(v9 + a1) = v12;
          if ( (unsigned __int64)++v9 >= 0x104 )
            break;
        }
        ++v7;
      }
      v6 = -1073741789;
      AslLogCallPrintf(1LL, (__int64)"AslStringUpcaseToMultiByteN");
    }
  }
  else
  {
    v6 = -1073741801;
    AslLogCallPrintf(1LL, (__int64)"AslStringUpcaseToMultiByteN");
  }
LABEL_3:
  AslFree(v7, Buffer);
  return (unsigned int)v6;
}
