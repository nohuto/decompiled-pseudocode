/*
 * XREFs of PopVideoBrightnessSettingsCallback @ 0x1404E20C0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopVideoBrightnessSettingsCallback(__int64 *a1, volatile int *a2, int a3)
{
  __int64 v3; // rax
  unsigned int v6; // edx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8

  v3 = *a1;
  v6 = -1073741811;
  v7 = *(_QWORD *)&GUID_VIDEO_BRIGHTNESS_CAPABLE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_VIDEO_BRIGHTNESS_CAPABLE.Data1 == *a1 )
    v7 = *(_QWORD *)GUID_VIDEO_BRIGHTNESS_CAPABLE.Data4 - a1[1];
  if ( v7 )
  {
    v8 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 - v3;
    if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == v3 )
      v8 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 - a1[1];
    if ( v8 )
    {
      v10 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 - v3;
      if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == v3 )
        v10 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 - a1[1];
      if ( v10 )
      {
        v11 = *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 - v3;
        if ( *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 == v3 )
          v11 = *(_QWORD *)GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data4 - a1[1];
        if ( v11 )
        {
          v12 = *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 - v3;
          if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == v3 )
            v12 = *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 - a1[1];
          if ( v12 )
          {
            v13 = *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 - v3;
            if ( *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 == v3 )
              v13 = *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4 - a1[1];
            if ( !v13 && a3 == 4 && a2 )
            {
              PopAcquirePolicyLock(a1, 3221225485LL);
              *(_DWORD *)&PpmIdlePolicyLock.PriorityFloorCounts[20] = *a2;
              goto LABEL_13;
            }
          }
          else if ( a3 == 4 && a2 )
          {
            PopAcquirePolicyLock(a1, 3221225485LL);
            PpmIdlePolicyLock.AbCompletedIoQoSBoostCount = *a2;
            goto LABEL_13;
          }
        }
        else if ( a3 == 4 && a2 )
        {
          PopAcquirePolicyLock(a1, 3221225485LL);
          PpmIdlePolicyLock.AbCompletedIoBoostCount = *a2;
          goto LABEL_13;
        }
      }
      else if ( a3 == 4 && a2 )
      {
        PopAcquirePolicyLock(a1, 3221225485LL);
        *(_DWORD *)&PpmIdlePolicyLock.PriorityFloorCounts[28] = *a2;
        goto LABEL_13;
      }
    }
    else if ( a3 == 4 && a2 )
    {
      PopAcquirePolicyLock(a1, 3221225485LL);
      *(_DWORD *)&PpmIdlePolicyLock.PriorityFloorCounts[24] = *a2;
      goto LABEL_13;
    }
  }
  else if ( a3 == 4 && a2 )
  {
    if ( !*a2 )
      return 0;
    PopAcquirePolicyLock(a1, 3221225485LL);
    BYTE2(PpmIdlePolicyLock.Padding[2]) = 1;
LABEL_13:
    PopReleasePolicyLock();
    return 0;
  }
  return v6;
}
