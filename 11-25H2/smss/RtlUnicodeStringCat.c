/*
 * XREFs of RtlUnicodeStringCat @ 0x140013454
 * Callers:
 *     SmpRunSecureKernelTrustlets @ 0x140017E00 (SmpRunSecureKernelTrustlets.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1400135EC (RtlUnicodeStringValidateDestWorker.c)
 *     RtlUnicodeStringValidateWorker @ 0x140013658 (RtlUnicodeStringValidateWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCat(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  size_t v4; // rdx
  ULONG v5; // r8d
  int v6; // r9d
  NTSTATUS v7; // eax
  PWSTR Buffer; // r10
  unsigned __int64 v9; // rdx
  __int16 v10; // bx
  __int16 v11; // r8
  size_t v12; // r11
  char *v13; // rcx
  size_t v15; // [rsp+20h] [rbp-28h]
  ULONG v16; // [rsp+28h] [rbp-20h]
  wchar_t *v17; // [rsp+30h] [rbp-18h] BYREF
  size_t v18; // [rsp+60h] [rbp+18h] BYREF
  size_t v19; // [rsp+68h] [rbp+20h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v6 = RtlUnicodeStringValidateDestWorker(DestinationString, &v17, &v18, &v19, v15, v16);
  if ( v6 >= 0 )
  {
    v7 = RtlUnicodeStringValidateWorker(SourceString, v4, v5);
    v6 = v7;
    if ( v7 >= 0 && SourceString )
    {
      Buffer = SourceString->Buffer;
      v9 = (unsigned __int64)SourceString->Length >> 1;
    }
    else
    {
      Buffer = 0LL;
      v9 = 0LL;
      if ( v7 < 0 )
        return v6;
    }
    v6 = 0;
    v10 = v19;
    v11 = 0;
    v12 = v18 - v19;
    if ( v18 == v19 )
    {
LABEL_10:
      if ( v9 )
        v6 = -2147483643;
    }
    else
    {
      v13 = (char *)v17 + 2 * v19 - (_QWORD)Buffer;
      while ( v9 )
      {
        --v9;
        *(PWSTR)((char *)Buffer + (_QWORD)v13) = *Buffer;
        ++v11;
        ++Buffer;
        if ( !--v12 )
          goto LABEL_10;
      }
    }
    DestinationString->Length = 2 * (v10 + v11);
  }
  return v6;
}
