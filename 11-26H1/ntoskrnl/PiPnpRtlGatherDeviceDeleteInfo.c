/*
 * XREFs of PiPnpRtlGatherDeviceDeleteInfo @ 0x140779EF0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     PlugPlayGetDeviceStatus @ 0x140A86944 (PlugPlayGetDeviceStatus.c)
 *     PiPnpRtlFreeDeviceDeleteInfo @ 0x140B53808 (PiPnpRtlFreeDeviceDeleteInfo.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlGatherDeviceDeleteInfo(PCWSTR SourceString, __int64 a2)
{
  __int64 Pool2; // rax
  int DeviceRegProp; // edi
  __int64 v7; // [rsp+28h] [rbp-50h]
  char v8; // [rsp+40h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF
  int v10; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v11; // [rsp+90h] [rbp+18h] BYREF
  char v12; // [rsp+98h] [rbp+20h] BYREF

  v10 = 0;
  DestinationString = 0LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  *(_QWORD *)a2 = Pool2;
  if ( Pool2 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (int)PlugPlayGetDeviceStatus(
                (unsigned int)&DestinationString,
                (unsigned int)&v8,
                *(_QWORD *)a2,
                (unsigned int)&v12,
                0) < 0 )
      **(_DWORD **)a2 = 45;
    v7 = *(_QWORD *)a2 + 4LL;
    v11 = 78;
    DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, (_DWORD)SourceString, 0, 9, (__int64)&v10, v7, (__int64)&v11, 0);
    if ( DeviceRegProp >= 0 && v10 == 1 && v11 > 2 )
    {
      *(_WORD *)(*(_QWORD *)a2 + 80LL) = 0;
    }
    else
    {
      DeviceRegProp = 0;
      *(_WORD *)(*(_QWORD *)a2 + 4LL) = 0;
    }
  }
  else
  {
    DeviceRegProp = -1073741670;
    PiPnpRtlFreeDeviceDeleteInfo(0LL);
    *(_QWORD *)a2 = 0LL;
  }
  return (unsigned int)DeviceRegProp;
}
