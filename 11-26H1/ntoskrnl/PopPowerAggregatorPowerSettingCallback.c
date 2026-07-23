/*
 * XREFs of PopPowerAggregatorPowerSettingCallback @ 0x1407D9F30
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopPowerAggregatorPowerSettingCallback(
        _OWORD *SettingGuid,
        int *Value,
        __int64 ValueLength,
        struct _KLOCK_ENTRIES *Context)
{
  unsigned int v5; // ebx
  unsigned int v6; // eax
  int v7; // ecx

  if ( *(_OWORD *)&GUID_LIDCLOSE_ACTION == *SettingGuid
    && (_DWORD)ValueLength == 4
    && (v5 = 0, Value)
    && ((v6 = *Value) == 0 || v6 <= 8 && (v7 = 332, _bittest(&v7, v6))) )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, (__int64)Value, ValueLength, Context);
    dword_140F0D9E8 = *Value;
    PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
