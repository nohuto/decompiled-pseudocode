/*
 * XREFs of sub_140034288 @ 0x140034288
 * Callers:
 *     StorPortRegistryRead @ 0x140033E80 (StorPortRegistryRead.c)
 *     sub_140062314 @ 0x140062314 (sub_140062314.c)
 *     StorPortRegistryWrite @ 0x140074A60 (StorPortRegistryWrite.c)
 *     sub_1400D6FE0 @ 0x1400D6FE0 (sub_1400D6FE0.c)
 * Callees:
 *     sub_1400344E0 @ 0x1400344E0 (sub_1400344E0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140034288(PCUNICODE_STRING SourceString, PUNICODE_STRING Destination, int a3, int a4)
{
  char *v6; // rdx
  unsigned int v7; // ebx
  NTSTATUS result; // eax
  unsigned int MaximumLength; // edx
  unsigned int v10; // edi
  unsigned int v11; // ecx
  unsigned int v12; // eax
  WCHAR *Pool2; // rax
  NTSTATUS appended; // ebx
  UNICODE_STRING Source; // [rsp+20h] [rbp-40h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  char SourceStringa[24]; // [rsp+40h] [rbp-20h] BYREF

  Source = 0LL;
  DestinationString = 0LL;
  if ( a4 )
  {
    v6 = "\\Parameters\\Device";
  }
  else
  {
    sub_1400344E0(SourceStringa, 24LL, "\\Parameters\\Device%d", a3);
    v6 = SourceStringa;
  }
  RtlInitAnsiString(&DestinationString, v6);
  v7 = 1;
  result = RtlAnsiStringToUnicodeString(&Source, &DestinationString, 1u);
  if ( result >= 0 )
  {
    MaximumLength = SourceString->MaximumLength;
    v10 = -1;
    v11 = MaximumLength + Source.MaximumLength;
    if ( v11 < MaximumLength )
    {
      v12 = -1;
    }
    else
    {
      v7 = v11 + 2;
      v12 = MaximumLength + Source.MaximumLength;
      if ( v11 + 2 >= v11 )
      {
        v10 = v11 + 2;
LABEL_11:
        if ( v10 <= 0xFFFF )
        {
          Pool2 = (WCHAR *)ExAllocatePool2(64LL, v10, 1112697936LL);
          Destination->Buffer = Pool2;
          if ( !Pool2 )
            return -1073741670;
          Destination->MaximumLength = v10;
          RtlCopyUnicodeString(Destination, SourceString);
          appended = RtlAppendUnicodeStringToString(Destination, &Source);
          RtlFreeUnicodeString(&Source);
          return appended;
        }
LABEL_15:
        RtlFreeUnicodeString(&Source);
        return -1073741675;
      }
    }
    if ( v11 < MaximumLength || v7 < v12 )
      goto LABEL_15;
    goto LABEL_11;
  }
  return result;
}
