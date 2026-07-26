/*
 * XREFs of ?ndisCreateThreadStateObjectType@@YAJXZ @ 0x1400E77F4
 * Callers:
 *     ?ndisInitializeThreadMonitorSubsystem@@YAJXZ @ 0x1400E76FC (-ndisInitializeThreadMonitorSubsystem@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 ndisCreateThreadStateObjectType(void)
{
  unsigned int v0; // ebx
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-69h] BYREF
  _QWORD v3[16]; // [rsp+48h] [rbp-59h] BYREF
  char v4; // [rsp+C8h] [rbp+27h] BYREF

  *(_QWORD *)&DestinationString.Length = 0x200000LL;
  DestinationString.Buffer = (wchar_t *)&v4;
  RtlInitUnicodeString(&DestinationString, L"NdisThreadState");
  memset(v3, 0, 0x78uLL);
  BYTE2(v3[0]) |= 6u;
  LOWORD(v3[0]) = 120;
  HIDWORD(v3[0]) = 0;
  LODWORD(v3[1]) = 256;
  HIDWORD(v3[4]) = 512;
  *(_OWORD *)((char *)&v3[1] + 4) = xmmword_1401016A8;
  HIDWORD(v3[3]) = 2031616;
  LODWORD(v3[5]) = 32;
  v3[9] = ndisThreadStateDelete;
  v0 = ObCreateObjectType(&DestinationString, v3, 0LL, &qword_14011F6E8);
  if ( !v0 )
    return 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_12cb3fcd1e2d3901272ccddd1e9630db_Traceguids,
      v0);
  return v0;
}
