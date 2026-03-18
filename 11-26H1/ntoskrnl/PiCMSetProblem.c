/*
 * XREFs of PiCMSetProblem @ 0x140B3DF98
 * Callers:
 *     PiCMDeviceAction @ 0x14098CC84 (PiCMDeviceAction.c)
 *     PiCMSetDeviceProblem @ 0x140B6CA80 (PiCMSetDeviceProblem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwPlugPlayControl @ 0x140725BB0 (ZwPlugPlayControl.c)
 *     _CmGetDeviceStatus @ 0x14099522C (_CmGetDeviceStatus.c)
 */

__int64 __fastcall PiCMSetProblem(PCWSTR SourceString, int a2, int a3)
{
  __int64 result; // rax
  unsigned int v7; // [rsp+30h] [rbp-40h]
  int v8; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  __int128 v10; // [rsp+58h] [rbp-18h]
  __int64 v11; // [rsp+68h] [rbp-8h]
  int v12; // [rsp+A0h] [rbp+30h] BYREF
  int v13; // [rsp+A8h] [rbp+38h] BYREF

  v8 = 0;
  v12 = 0;
  v13 = 0;
  if ( (unsigned int)(a3 - 1) > 1 )
    return 3221225485LL;
  result = CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, SourceString, 0, &v13, &v12, &v8, v7);
  if ( (int)result < 0 )
    return result;
  if ( a2 && (v13 & 0x400) != 0 && v12 != a2 && a3 != 2 )
    return 3221225485LL;
  DestinationString = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  DWORD1(v10) = 1024;
  if ( a2 )
  {
    LODWORD(v10) = 1;
    DWORD2(v10) = a2;
  }
  else
  {
    DWORD2(v10) = v12;
    LODWORD(v10) = 2;
  }
  return ZwPlugPlayControl(14LL, (__int64)&DestinationString);
}
