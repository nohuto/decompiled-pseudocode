/*
 * XREFs of CmpIsFileInSystemConfig @ 0x140A80290
 * Callers:
 *     CmpStartRMLog @ 0x1408B2784 (CmpStartRMLog.c)
 *     CmpInitCmRM @ 0x140A7E4A0 (CmpInitCmRM.c)
 * Callees:
 *     RtlUnicodeStringCat @ 0x1403E78F0 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringValidateWorker @ 0x140427DB0 (RtlUnicodeStringValidateWorker.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateFile @ 0x140728A60 (ZwCreateFile.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     CmpQueryNameString @ 0x140A80688 (CmpQueryNameString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall CmpIsFileInSystemConfig(PCUNICODE_STRING String2, BOOLEAN *a2)
{
  wchar_t *v4; // rdi
  NTSTATUS v5; // ebx
  unsigned __int16 Length; // cx
  wchar_t *Buffer; // rsi
  size_t v8; // rdx
  ULONG v9; // r8d
  NTSTATUS v10; // eax
  const wchar_t *v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int16 v14; // r10
  unsigned __int64 v15; // rcx
  __m128i v16; // xmm1
  UNICODE_STRING v17; // xmm0
  char *v19; // r9
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-39h] BYREF
  UNICODE_STRING SourceString; // [rsp+78h] [rbp-29h] BYREF
  _QWORD v22[2]; // [rsp+88h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp+7h] BYREF
  HANDLE FileHandle; // [rsp+110h] [rbp+6Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *a2 = 0;
  v22[1] = L"\\SystemRoot\\System32\\Config\\";
  FileHandle = 0LL;
  v4 = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  IoStatusBlock = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v22[0] = 3801144LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v22;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwCreateFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 7u, 1u, 1u, 0LL, 0);
  if ( v5 < 0 )
    goto LABEL_21;
  v5 = CmpQueryNameString(FileHandle, &SourceString);
  if ( v5 >= 0 && (Length = SourceString.Length) != 0 )
  {
    Buffer = SourceString.Buffer;
    if ( SourceString.Buffer[((unsigned __int64)SourceString.Length >> 1) - 1] == 92 )
    {
LABEL_15:
      if ( String2->Length <= Length )
        *a2 = 0;
      else
        *a2 = RtlPrefixUnicodeString(&SourceString, String2, 1u);
      goto LABEL_17;
    }
    DestinationString.Length = 0;
    if ( (unsigned __int16)(SourceString.MaximumLength + 2) < SourceString.MaximumLength )
    {
      v5 = -1073741675;
      DestinationString.MaximumLength = -1;
    }
    else
    {
      DestinationString.MaximumLength = SourceString.MaximumLength + 2;
      DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
      v4 = DestinationString.Buffer;
      if ( DestinationString.Buffer )
      {
        v5 = RtlUnicodeStringCat(&DestinationString, &SourceString);
        if ( v5 >= 0 )
        {
          v10 = RtlUnicodeStringValidateWorker(&DestinationString, v8, v9);
          v4 = DestinationString.Buffer;
          v5 = v10;
          if ( v10 < 0 )
            goto LABEL_17;
          v11 = L"\\";
          v12 = 0x7FFFLL;
          v13 = (unsigned __int64)DestinationString.Length >> 1;
          v5 = 0;
          v14 = 0;
          v15 = ((unsigned __int64)DestinationString.MaximumLength >> 1) - v13;
          if ( v15 )
          {
            v19 = (char *)DestinationString.Buffer + 2 * v13 - (_QWORD)L"\\";
            while ( v12 )
            {
              if ( *v11 )
              {
                *(const wchar_t *)((char *)v11 + (_QWORD)v19) = *v11;
                --v12;
                ++v11;
                ++v14;
                if ( --v15 )
                  continue;
              }
              if ( v15 || !v12 || !*v11 )
                break;
              goto LABEL_10;
            }
          }
          else
          {
LABEL_10:
            v5 = -2147483643;
          }
          DestinationString.Length = 2 * (v14 + v13);
          if ( v5 < 0 )
            goto LABEL_17;
          if ( Buffer )
            ExFreePool(Buffer);
          v16 = (__m128i)DestinationString;
          v17 = DestinationString;
          DestinationString = 0LL;
          Buffer = (wchar_t *)_mm_srli_si128((__m128i)v17, 8).m128i_u64[0];
          SourceString = (UNICODE_STRING)v16;
          v4 = (wchar_t *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
          Length = _mm_cvtsi128_si32(v16);
          goto LABEL_15;
        }
        v4 = DestinationString.Buffer;
      }
      else
      {
        v5 = -1073741801;
      }
    }
  }
  else
  {
    Buffer = SourceString.Buffer;
  }
LABEL_17:
  if ( Buffer )
    RtlFreeAnsiString(&SourceString);
  if ( v4 )
    RtlFreeAnsiString(&DestinationString);
LABEL_21:
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v5;
}
