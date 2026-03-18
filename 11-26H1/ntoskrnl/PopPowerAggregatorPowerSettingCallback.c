/*
 * XREFs of PopPowerAggregatorPowerSettingCallback @ 0x1407D6E00
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopPowerAggregatorPowerSettingCallback(
        LPCGUID SettingGuid,
        unsigned int *Value,
        __int64 ValueLength,
        PVOID Context)
{
  __int64 v5; // r9
  unsigned int v6; // ebx
  unsigned int v7; // eax
  int v8; // ecx

  v5 = *(_QWORD *)&GUID_LIDCLOSE_ACTION.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( *(_QWORD *)&GUID_LIDCLOSE_ACTION.Data1 == *(_QWORD *)&SettingGuid->Data1 )
    v5 = *(_QWORD *)GUID_LIDCLOSE_ACTION.Data4 - *(_QWORD *)SettingGuid->Data4;
  v6 = 0;
  if ( !v5 && (_DWORD)ValueLength == 4 && Value && ((v7 = *Value) == 0 || v7 <= 8 && (v8 = 332, _bittest(&v8, v7))) )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, (__int64)Value, ValueLength, 0LL);
    *(_DWORD *)&PopPowerAggregatorLock.Timer.Processor = *Value;
    PopReleaseRwLock(&PopPowerAggregatorLock);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
