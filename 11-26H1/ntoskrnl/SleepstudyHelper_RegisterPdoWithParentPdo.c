/*
 * XREFs of SleepstudyHelper_RegisterPdoWithParentPdo @ 0x140A88BC0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140257660 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     SleepstudyHelperDestroyBlocker @ 0x14049BA60 (SleepstudyHelperDestroyBlocker.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140A88E8C (SshpGenerateDeviceFriendlyName.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A89550 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A89960 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SshpGenerateDeviceVerboseDescription @ 0x140A89C64 (SshpGenerateDeviceVerboseDescription.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall SleepstudyHelper_RegisterPdoWithParentPdo(
        __int64 a1,
        unsigned __int64 a2,
        struct _DEVICE_OBJECT *a3,
        unsigned __int64 **a4)
{
  KSPIN_LOCK *v4; // rsi
  __int64 Pool2; // rax
  __int64 v9; // rdi
  int DeviceFriendlyName; // ebx
  __int128 v12; // [rsp+20h] [rbp-28h]
  KSPIN_LOCK *v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v13 = 0LL;
  if ( a1 && a2 && a3 && a4 )
  {
    v12 = a2;
    Pool2 = ExAllocatePool2(0x100uLL);
    v9 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = a1;
      *(_DWORD *)(Pool2 + 8) = 0;
      *(_OWORD *)(Pool2 + 16) = v12;
      *(_QWORD *)(Pool2 + 32) = a3;
      *(_BYTE *)(Pool2 + 88) = 1;
      DeviceFriendlyName = SshpGenerateDeviceFriendlyName(a3);
      if ( DeviceFriendlyName < 0
        || (DeviceFriendlyName = SshpGenerateDeviceVerboseDescription(a3), DeviceFriendlyName < 0) )
      {
        SleepstudyHelperDestroyBlockerBuilder(v9);
      }
      else
      {
        DeviceFriendlyName = SleepstudyHelperBuildBlocker(v9, &v13);
        if ( DeviceFriendlyName >= 0 )
        {
          *a4 = v13;
          goto LABEL_10;
        }
        if ( v9 )
          SleepstudyHelperDestroyBlockerBuilder(v9);
        v4 = v13;
      }
    }
    else
    {
      DeviceFriendlyName = -1073741670;
    }
  }
  else
  {
    DeviceFriendlyName = -1073741811;
  }
  if ( v4 )
    SleepstudyHelperDestroyBlocker(v4);
LABEL_10:
  if ( (unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline()
    && DeviceFriendlyName == -1073741637 )
  {
    DeviceFriendlyName = 0;
    *a4 = PsAltSystemCallRegistrationLock.Spare35;
  }
  return (unsigned int)DeviceFriendlyName;
}
