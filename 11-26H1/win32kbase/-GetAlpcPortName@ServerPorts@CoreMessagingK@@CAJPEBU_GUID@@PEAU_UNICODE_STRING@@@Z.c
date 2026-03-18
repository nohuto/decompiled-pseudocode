/*
 * XREFs of ?GetAlpcPortName@ServerPorts@CoreMessagingK@@CAJPEBU_GUID@@PEAU_UNICODE_STRING@@@Z @ 0x1400D9B3C
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1400D8074 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1401B82C0 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall CoreMessagingK::ServerPorts::GetAlpcPortName(const struct _GUID *a1, struct _UNICODE_STRING *a2)
{
  NTSTATUS v3; // ebx
  PWSTR Buffer; // rax
  unsigned __int64 i; // rcx
  __int16 v6; // dx
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  UnicodeString = 0LL;
  v3 = RtlStringFromGUID(a1, &UnicodeString);
  if ( v3 >= 0 )
  {
    v3 = RtlStringCbPrintfW(a2->Buffer, a2->MaximumLength, L"\\BaseNamedObjects\\[CoreMsgK]-%s", UnicodeString.Buffer);
    if ( v3 >= 0 )
    {
      Buffer = a2->Buffer;
      if ( Buffer )
      {
        for ( i = (unsigned __int64)a2->MaximumLength >> 1; i; --i )
        {
          if ( !*Buffer )
            break;
          ++Buffer;
        }
        v3 = i == 0 ? 0xC000000D : 0;
        if ( i )
          v6 = (a2->MaximumLength >> 1) - i;
        else
          v6 = 0;
        if ( i )
        {
          v3 = 0;
          a2->Length = 2 * v6;
        }
      }
      else
      {
        v3 = -1073741811;
      }
    }
  }
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v3;
}
