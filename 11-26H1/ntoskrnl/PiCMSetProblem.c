/*
 * XREFs of PiCMSetProblem @ 0x14094CFF8
 * Callers:
 *     PiCMDeviceAction @ 0x14094D6E4 (PiCMDeviceAction.c)
 *     PiCMSetDeviceProblem @ 0x140B6FE50 (PiCMSetDeviceProblem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwPlugPlayControl @ 0x14072A780 (ZwPlugPlayControl.c)
 *     _CmGetDeviceStatus @ 0x140955C8C (_CmGetDeviceStatus.c)
 */

NTSTATUS __fastcall PiCMSetProblem(PCWSTR SourceString, int a2, int a3)
{
  NTSTATUS result; // eax
  int v7; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  __int128 v9; // [rsp+58h] [rbp-18h]
  __int64 v10; // [rsp+68h] [rbp-8h]
  int v11; // [rsp+A0h] [rbp+30h] BYREF
  int v12; // [rsp+A8h] [rbp+38h] BYREF

  v7 = 0;
  v11 = 0;
  v12 = 0;
  if ( (unsigned int)(a3 - 1) > 1 )
    return -1073741811;
  result = CmGetDeviceStatus(PiPnpRtlCtx, (_DWORD)SourceString, 0, (unsigned int)&v12, (__int64)&v11, (__int64)&v7);
  if ( result < 0 )
    return result;
  if ( a2 && (v12 & 0x400) != 0 && v11 != a2 && a3 != 2 )
    return -1073741811;
  DestinationString = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  DWORD1(v9) = 1024;
  if ( a2 )
  {
    LODWORD(v9) = 1;
    DWORD2(v9) = a2;
  }
  else
  {
    DWORD2(v9) = v11;
    LODWORD(v9) = 2;
  }
  return ZwPlugPlayControl(PlugPlayControlDeviceStatus, &DestinationString, 0x28u);
}
