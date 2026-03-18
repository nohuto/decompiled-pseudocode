/*
 * XREFs of CmpSyncNextBackupHive @ 0x14085A968
 * Callers:
 *     NtInitializeRegistry @ 0x14084EE60 (NtInitializeRegistry.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwCreateKey @ 0x140723790 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140723FF0 (ZwSetValueKey.c)
 *     CmpFlushBackupHive @ 0x14085A45C (CmpFlushBackupHive.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140C58CD4 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140C58F14 (CmpReleaseHiveLoadUnloadRundown.c)
 */

__int64 CmpSyncNextBackupHive()
{
  unsigned int v0; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v3; // [rsp+80h] [rbp+10h]
  int v4; // [rsp+88h] [rbp+18h]
  HANDLE KeyHandle; // [rsp+90h] [rbp+20h] BYREF

  v0 = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( (unsigned __int8)CmpAcquireHiveLoadUnloadRundown() )
  {
    if ( *(_DWORD *)&WheapPfaLock.ApcStateFill[40] )
    {
      do
      {
        v4 = CmpPeriodicBackupFlushHiveCount;
        if ( (unsigned int)CmpPeriodicBackupFlushHiveCount >= 6 )
          v3 = 0;
        else
          v3 = CmpPeriodicBackupFlushHiveCount + 1;
      }
      while ( _InterlockedCompareExchange(&CmpPeriodicBackupFlushHiveCount, v3, CmpPeriodicBackupFlushHiveCount) != v4 );
      if ( ((__int64)CmpMachineHiveList[23 * v3 + 4] & 1) == 0 && CmpMachineHiveList[23 * v3 + 6] )
        CmpFlushBackupHive(v3);
      if ( v3 == 6 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpConfigurationManagerKeyName;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)&WheapPfaLock.WaitBlockList);
          ZwSetValueKey(KeyHandle, &CmpBackupCountValueName, 0, 4u, &WheapPfaLock.WaitBlockList, 4u);
          ZwClose(KeyHandle);
        }
        v0 = -2147483622;
      }
    }
    else
    {
      v0 = -1073741431;
    }
    CmpReleaseHiveLoadUnloadRundown();
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v0;
}
