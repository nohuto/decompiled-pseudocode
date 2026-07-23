/*
 * XREFs of RtlDnsHostNameToComputerName @ 0x18009EE40
 * Callers:
 *     <none>
 * Callees:
 *     UpcaseUnicodeToUTF8NHelper @ 0x18001EB00 (UpcaseUnicodeToUTF8NHelper.c)
 *     NLS_UPCASE @ 0x180021F40 (NLS_UPCASE.c)
 *     RtlpIsUtf8Process @ 0x18007A650 (RtlpIsUtf8Process.c)
 *     RtlOemStringToUnicodeString @ 0x18009EC30 (RtlOemStringToUnicodeString.c)
 *     RtlpDidUnicodeToOemWork @ 0x18009F254 (RtlpDidUnicodeToOemWork.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlDnsHostNameToComputerName(
        PUNICODE_STRING ComputerNameString,
        PUNICODE_STRING DnsHostNameString,
        BOOLEAN AllocateComputerNameString)
{
  NTSTATUS v3; // ebx
  BOOLEAN v4; // r12
  _UNICODE_STRING *v5; // r13
  unsigned int v6; // ecx
  _UNICODE_STRING v7; // xmm0
  unsigned __int16 v8; // dx
  wchar_t *Buffer; // r14
  unsigned int v10; // esi
  __int64 v11; // r8
  unsigned int v12; // r11d
  _BYTE *WideCharTable; // r13
  unsigned int v14; // eax
  unsigned __int16 v15; // di
  NTSTATUS result; // eax
  int v17; // eax
  unsigned __int16 *v18; // rbx
  CHAR *v19; // r15
  __int64 v20; // r12
  __int64 v21; // r10
  unsigned __int16 *MultiByteTable; // r13
  CHAR *v23; // rdi
  _WORD *v24; // r15
  unsigned __int16 *DBCSOffsets; // r12
  __int64 v26; // rax
  unsigned __int16 v27; // cx
  unsigned __int64 v28; // rax
  int v29; // edx
  __int64 v30; // r10
  __int16 v31; // dx
  unsigned int v32; // eax
  signed __int32 v33[8]; // [rsp+0h] [rbp-80h] BYREF
  BOOLEAN v34; // [rsp+30h] [rbp-50h]
  int v35; // [rsp+34h] [rbp-4Ch] BYREF
  PUNICODE_STRING v36; // [rsp+38h] [rbp-48h]
  _STRING SourceString; // [rsp+40h] [rbp-40h] BYREF
  _UNICODE_STRING v38; // [rsp+50h] [rbp-30h] BYREF
  CHAR UTF8StringDestination[16]; // [rsp+60h] [rbp-20h] BYREF

  v3 = 0;
  v34 = AllocateComputerNameString;
  v36 = ComputerNameString;
  v4 = AllocateComputerNameString;
  v35 = 0;
  SourceString = 0LL;
  v5 = ComputerNameString;
  v6 = 0;
  v7 = *DnsHostNameString;
  v8 = _mm_cvtsi128_si32(*(__m128i *)DnsHostNameString);
  v38 = v7;
  Buffer = v7.Buffer;
  while ( v6 < v8 >> 1 )
  {
    if ( v7.Buffer[v6] == 46 )
    {
      v8 = 2 * v6;
      v38.Length = 2 * v6;
      break;
    }
    ++v6;
  }
  if ( v8 < 2u )
    return -1073741534;
  v10 = v8 >> 1;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v33, 0);
    v12 = v11 + 13;
    WideCharTable = CodePageTable.WideCharTable;
    if ( CodePageTable.DBCSCodePage )
    {
      MultiByteTable = GlobalRtlNlsState.MultiByteTable;
      v23 = UTF8StringDestination;
      v24 = GlobalRtlNlsState.WideCharTable;
      if ( v10 )
      {
        DBCSOffsets = GlobalRtlNlsState.DBCSOffsets;
        do
        {
          if ( !v12 )
            break;
          v26 = *Buffer;
          Buffer = (wchar_t *)((char *)Buffer + v11);
          v27 = v24[v26];
          v28 = (unsigned __int64)v27 >> 8;
          if ( *(_WORD *)(qword_1801C5020 + 2 * v28) )
            v29 = DBCSOffsets[*(unsigned __int16 *)(qword_1801C5020 + 2 * v28) + (unsigned __int64)(unsigned __int8)v27];
          else
            v29 = MultiByteTable[(unsigned __int8)v27];
          v30 = (unsigned __int16)NLS_UPCASE(qword_1801C5038, v29);
          v11 = 2LL;
          v31 = v24[v30];
          if ( HIBYTE(v31) )
          {
            v32 = v12--;
            if ( v32 < 2 )
              break;
            *v23++ = HIBYTE(v31);
          }
          *v23 = v31;
          --v12;
          ++v23;
          --v10;
        }
        while ( v10 );
        v4 = v34;
      }
      v15 = (_WORD)v23 - (unsigned __int16)UTF8StringDestination;
      goto LABEL_12;
    }
    if ( v10 < v12 )
    {
      v15 = v10;
      v14 = v10;
      if ( !v10 )
      {
LABEL_12:
        v5 = v36;
        result = v12 < v10 ? 0x80000005 : 0;
        goto LABEL_13;
      }
    }
    else
    {
      v14 = v11 + 13;
      v15 = v11 + 13;
    }
    v18 = CodePageTable.MultiByteTable;
    v19 = UTF8StringDestination;
    v20 = v14;
    do
    {
      v21 = (unsigned __int16)NLS_UPCASE(qword_1801C5038, v18[(unsigned __int8)WideCharTable[*Buffer++]]);
      *v19++ = WideCharTable[v21];
      --v20;
    }
    while ( v20 );
    v4 = v34;
    v3 = 0;
    goto LABEL_12;
  }
  result = UpcaseUnicodeToUTF8NHelper(UTF8StringDestination, 0xFu, &v35, (__int64)v7.Buffer, v10);
  v15 = v35;
LABEL_13:
  if ( result < 0 && result != -2147483643 )
    return result;
  SourceString.Length = v15;
  SourceString.Buffer = UTF8StringDestination;
  SourceString.MaximumLength = 16;
  if ( !(unsigned __int8)RtlpDidUnicodeToOemWork(&SourceString, &v38) )
    return -1073741534;
  v17 = RtlOemStringToUnicodeString(v5, &SourceString, v4);
  if ( v17 < 0 )
    return v17;
  return v3;
}
