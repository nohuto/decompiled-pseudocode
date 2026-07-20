/*
 * XREFs of SmpParseSwapOrPageFileArguments @ 0x140011204
 * Callers:
 *     SmpCreatePagingFileDescriptor @ 0x14000FA78 (SmpCreatePagingFileDescriptor.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x1400103C0 (SmpCreateWorkingSetSwapPagingFile.c)
 * Callees:
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 */

__int64 __fastcall SmpParseSwapOrPageFileArguments(PCUNICODE_STRING String, PULONG Value, PULONG a3)
{
  PWSTR Buffer; // r9
  USHORT Length; // dx
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // dx
  __int64 v10; // r10
  NTSTATUS v11; // edi
  int v12; // edx
  WCHAR *v14; // rsi
  WCHAR *v15; // rcx
  WCHAR v16; // ax
  NTSTATUS v17; // eax

  *Value = 0;
  *a3 = 0;
  Buffer = String->Buffer;
  if ( Buffer )
  {
    Length = String->Length;
    v8 = 0;
    v9 = Length >> 1;
    while ( v8 < v9 )
    {
      if ( Buffer[v8] > 0x30u || (v10 = 0x1000100000200LL, !_bittest64(&v10, Buffer[v8])) )
      {
        v11 = RtlUnicodeStringToInteger(String, 0, Value);
        if ( v11 < 0 )
        {
          v12 = 4884;
LABEL_9:
          SmpLogFailure((__int64)"SmpParseSwapOrPageFileArguments", v12, v11);
          return (unsigned int)v11;
        }
        v14 = String->Buffer;
        v15 = v14;
        while ( 1 )
        {
          v16 = *v15;
          if ( !*v15 )
            return 0LL;
          ++v15;
          if ( v16 == 32 )
          {
            String->Buffer = v15;
            String->Length += (_WORD)v14 - (_WORD)v15;
            String->MaximumLength = String->Length;
            v17 = RtlUnicodeStringToInteger(String, 0, a3);
            String->Buffer = v14;
            v11 = v17;
            if ( v17 >= 0 )
              return 0LL;
            v12 = 4906;
            goto LABEL_9;
          }
        }
      }
      ++v8;
    }
  }
  return 0LL;
}
