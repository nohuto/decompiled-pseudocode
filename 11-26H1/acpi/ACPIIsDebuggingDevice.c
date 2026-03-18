/*
 * XREFs of ACPIIsDebuggingDevice @ 0x1400D3FAC
 * Callers:
 *     ACPIBuildPdo @ 0x14004FAEC (ACPIBuildPdo.c)
 * Callees:
 *     ACPIQueryDeviceBiosNameEx @ 0x14002C54C (ACPIQueryDeviceBiosNameEx.c)
 */

__int64 __fastcall ACPIIsDebuggingDevice(ULONG_PTR a1)
{
  int v1; // edi
  unsigned int i; // ebx
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  String2 = 0LL;
  v1 = ACPIQueryDeviceBiosNameEx(a1, 1LL, &String2);
  if ( v1 >= 0 )
  {
    v1 = -1073741823;
    for ( i = 0; i < 2; ++i )
    {
      if ( *((_QWORD *)&gDebuggingDevicesInUse[i] + 1)
        && !RtlCompareUnicodeString((PCUNICODE_STRING)&gDebuggingDevicesInUse[i], &String2, 0) )
      {
        v1 = 0;
        break;
      }
    }
  }
  if ( String2.Buffer )
    ExFreePoolWithTag(String2.Buffer, 0x53706341u);
  return (unsigned int)v1;
}
