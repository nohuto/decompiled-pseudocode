/*
 * XREFs of PopPowerAggregatorHandleModernStandbyIntent @ 0x140B719D0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060B92C (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPowerAggregatorAllowModernStandbyPromotion @ 0x1407D6580 (PopPowerAggregatorAllowModernStandbyPromotion.c)
 *     PopCurrentPowerState @ 0x140AB1350 (PopCurrentPowerState.c)
 */

__int64 __fastcall PopPowerAggregatorHandleModernStandbyIntent(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  unsigned int v4; // edi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  int v11; // eax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a1 + 16);
  v4 = 0;
  v13 = 0LL;
  if ( v3 && (unsigned int)(v3 - 1) > 1 )
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
      PopCurrentPowerState(&v13, v8, v9, v10);
      if ( !(_BYTE)v13 && (unsigned int)((DWORD2(v13) >> 1) + 100 * HIDWORD(v13)) / DWORD2(v13) <= 0x14 )
        *(_BYTE *)(a2 + 27) = 1;
    }
    if ( PopEnforceRestrictedStandby )
      *(_BYTE *)(a2 + 27) = 1;
    if ( *(_DWORD *)(a1 + 16) == 1 )
    {
      if ( *(_BYTE *)(a1 + 43) )
      {
        v11 = *(_DWORD *)(a2 + 8);
        if ( v11 != 43 && v11 != 55 )
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
  return v4;
}
