/*
 * XREFs of ?ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x140140BF4
 * Callers:
 *     ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x14013D840 (-NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PAR.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x14006C3F0 (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

__int64 __fastcall ndisPcwSetRssInstanceSuffix(_UNICODE_STRING *a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  BOOLEAN UnicodeString; // al
  unsigned int v5; // ecx
  WCHAR SourceString[264]; // [rsp+20h] [rbp-228h] BYREF

  result = RtlStringCbPrintfW((wchar_t *)SourceString, 0x202uLL, L"RSS %u", *(unsigned int *)&a1[4].Length);
  v3 = result;
  if ( (int)result >= 0 )
  {
    if ( RtlCreateUnicodeString(a1 + 6, SourceString) )
    {
      UnicodeString = RtlCreateUnicodeString(a1 + 7, SourceString);
      v5 = -1073741670;
      if ( UnicodeString )
        return v3;
      return v5;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
