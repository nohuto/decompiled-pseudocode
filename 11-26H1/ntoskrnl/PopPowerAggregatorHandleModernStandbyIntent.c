/*
 * XREFs of PopPowerAggregatorHandleModernStandbyIntent @ 0x140B761C0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     Feature_AdaptiveHibernateEnhancements__private_GetVariant @ 0x14060E86C (Feature_AdaptiveHibernateEnhancements__private_GetVariant.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060E8A8 (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPowerAggregatorAllowModernStandbyPromotion @ 0x1407D970C (PopPowerAggregatorAllowModernStandbyPromotion.c)
 *     PopCurrentPowerState @ 0x140AAF340 (PopCurrentPowerState.c)
 */

__int64 __fastcall PopPowerAggregatorHandleModernStandbyIntent(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // esi
  int v4; // eax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  char v16; // bl
  int v17; // eax
  __int128 v19; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  v19 = 0LL;
  v4 = *(_DWORD *)(a1 + 16);
  if ( v4 && (unsigned int)(v4 - 1) > 1 )
  {
    return (unsigned int)-1073700861;
  }
  else
  {
    *(_DWORD *)a2 = 1;
    if ( a3 == 2 )
      *(_BYTE *)(a2 + 24) = 1;
    if ( *(_DWORD *)(a1 + 16) == 1 )
    {
      *(_BYTE *)(a2 + 25) = *(_BYTE *)(a1 + 41);
    }
    else if ( PopPowerAggregatorOneWayEntry )
    {
      *(_BYTE *)(a2 + 25) = 1;
    }
    v7 = *(_DWORD *)(a2 + 8);
    if ( v7 == 53 || v7 == 54 )
      *(_BYTE *)(a2 + 27) = 1;
    if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
    {
      PopCurrentPowerState(&v19, v8, v9, v10);
      if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_GetVariant(v11) != 8
        && (unsigned int)Feature_AdaptiveHibernateEnhancements__private_GetVariant(v12) != 6 )
      {
        PopAcquireRwLockShared(&PopAdaptiveStandbyLock, v13, v14, v15);
        v16 = qword_140F0BB3C;
        PopReleaseRwLock((struct _KTHREAD *)&PopAdaptiveStandbyLock);
        if ( !v16
          && !(_BYTE)v19
          && DWORD2(v19)
          && (unsigned int)((DWORD2(v19) >> 1) + 100 * HIDWORD(v19)) / DWORD2(v19) <= 0x14 )
        {
          *(_BYTE *)(a2 + 27) = 1;
        }
      }
    }
    if ( PopEnforceRestrictedStandby )
      *(_BYTE *)(a2 + 27) = 1;
    if ( *(_DWORD *)(a1 + 16) == 1 )
    {
      if ( *(_BYTE *)(a1 + 43) )
      {
        v17 = *(_DWORD *)(a2 + 8);
        if ( v17 != 43 && v17 != 55 )
          *(_BYTE *)(a2 + 27) = 1;
      }
    }
    if ( !PopPowerAggregatorAllowModernStandbyPromotion(a1, a2) )
    {
      *(_OWORD *)a2 = *(_OWORD *)(a1 + 16);
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 32);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 48);
    }
  }
  return v3;
}
