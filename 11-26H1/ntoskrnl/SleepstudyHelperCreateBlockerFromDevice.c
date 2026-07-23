/*
 * XREFs of SleepstudyHelperCreateBlockerFromDevice @ 0x140A8FC90
 * Callers:
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x1407EA0D0 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x1407EA1A0 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x140B77E60 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 * Callees:
 *     SshpGenerateDeviceFriendlyName @ 0x140A8FD7C (SshpGenerateDeviceFriendlyName.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A90850 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SshpGenerateDeviceVerboseDescription @ 0x140A90B54 (SshpGenerateDeviceVerboseDescription.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall SleepstudyHelperCreateBlockerFromDevice(
        __int64 a1,
        __int128 *a2,
        struct _DEVICE_OBJECT *a3,
        __int64 *a4)
{
  __int64 Pool2; // rax
  __int64 v9; // rdi
  __int128 v10; // xmm0
  int DeviceFriendlyName; // ebx

  if ( a1 && a2 && a3 && a4 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v9 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = a1;
      *(_DWORD *)(Pool2 + 8) = 0;
      v10 = *a2;
      *(_QWORD *)(Pool2 + 32) = a3;
      *(_BYTE *)(Pool2 + 88) = 1;
      *(_OWORD *)(Pool2 + 16) = v10;
      DeviceFriendlyName = SshpGenerateDeviceFriendlyName(a3);
      if ( DeviceFriendlyName < 0
        || (DeviceFriendlyName = SshpGenerateDeviceVerboseDescription(a3), DeviceFriendlyName < 0) )
      {
        SleepstudyHelperDestroyBlockerBuilder(v9);
      }
      else
      {
        *a4 = v9;
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)DeviceFriendlyName;
}
