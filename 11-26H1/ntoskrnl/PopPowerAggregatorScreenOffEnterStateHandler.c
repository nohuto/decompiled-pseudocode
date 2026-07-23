/*
 * XREFs of PopPowerAggregatorScreenOffEnterStateHandler @ 0x1409F4510
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1407D99CC (PopPowerAggregatorEngageModernStandby.c)
 *     PopExecutePowerAction @ 0x1409F3918 (PopExecutePowerAction.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x1409F46A8 (PopPowerAggregatorEnterScreenOff.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffEnterStateHandler(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v12; // [rsp+20h] [rbp-40h]
  unsigned __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  int v14; // [rsp+38h] [rbp-28h]
  _DWORD v15[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v16; // [rsp+48h] [rbp-18h]
  __int64 v17; // [rsp+58h] [rbp-8h]

  if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a1 + 64) )
  {
    PopPowerAggregatorEnterScreenOff();
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 88) && *(_BYTE *)(a1 + 72) )
  {
    if ( *(_DWORD *)(a1 + 16) == 1 )
    {
      PopPowerAggregatorEngageModernStandby(a1);
      return 0LL;
    }
    if ( *(_BYTE *)(a1 + 52) )
      return 0LL;
    v1 = *(_DWORD *)(a1 + 44);
    v13 = 0LL;
    v14 = 0;
    if ( v1 == 2 || v1 == 3 || v1 == 4 )
    {
      LODWORD(v13) = 2;
    }
    else if ( v1 == 5 )
    {
      v13 = 0x8000000400000003uLL;
LABEL_16:
      *(_BYTE *)(a1 + 52) = 1;
      v17 = 0LL;
      v16 = 0LL;
      v15[0] = 7;
      v15[1] = 128;
      PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
      PopAcquirePolicyLock(v3, v2);
      PopExecutePowerAction(v15, 0, &v13, v1, 1u);
      PopReleasePolicyLock(v5, v4, v6, v7, v12);
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v8, v9, v10);
      return 0LL;
    }
    HIDWORD(v13) = -2147483644;
    goto LABEL_16;
  }
  return 0LL;
}
