/*
 * XREFs of ACPIBuildThermalZoneExtension @ 0x140051EE8
 * Callers:
 *     OSNotifyCreateThermalZone @ 0x140051E28 (OSNotifyCreateThermalZone.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1400188A0 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildDeviceExtension @ 0x14004F860 (ACPIBuildDeviceExtension.c)
 */

__int64 __fastcall ACPIBuildThermalZoneExtension(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 Pool2; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  const char *v10; // rdi
  const char *v11; // rdx
  const char *v12; // rcx
  const char *v13; // rcx
  void *v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  const char *v17; // rdi
  const char *v18; // rax

  result = ACPIBuildDeviceExtension(a1, RootDeviceExtension, a3);
  v5 = result;
  if ( (int)result >= 0 )
  {
    v6 = *a3;
    if ( v6 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v6 + 8), 0x8300000uLL);
      Pool2 = ExAllocatePool2(64LL, 344LL, 1416651585LL);
      *(_QWORD *)(v6 + 200) = Pool2;
      v8 = Pool2;
      if ( Pool2 )
      {
        v15 = (_QWORD *)(Pool2 + 176);
        v15[1] = v15;
        *v15 = v15;
        KeInitializeEvent((PRKEVENT)(v8 + 248), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v8 + 280), NotificationEvent, 1u);
        v16 = *(_QWORD *)(v6 + 8);
        v17 = byte_140075A82;
        v18 = byte_140075A82;
        if ( (v16 & 0x200000000000LL) != 0 )
        {
          v17 = *(const char **)(v6 + 608);
          if ( (v16 & 0x400000000000LL) != 0 )
            v18 = *(const char **)(v6 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            6u,
            0x59u,
            (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
            v5,
            v6,
            v17,
            v18);
      }
      else
      {
        v9 = *(_QWORD *)(v6 + 8);
        v10 = byte_140075A82;
        v11 = byte_140075A82;
        v12 = byte_140075A82;
        if ( (v9 & 0x200000000000LL) != 0 )
        {
          v11 = *(const char **)(v6 + 608);
          if ( (v9 & 0x400000000000LL) != 0 )
            v12 = *(const char **)(v6 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x10u,
            0x57u,
            (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
            88,
            v6,
            v11,
            v12);
          v9 = *(_QWORD *)(v6 + 8);
        }
        v5 = -1073741670;
        v13 = byte_140075A82;
        if ( (v9 & 0x200000000000LL) != 0 )
        {
          v10 = *(const char **)(v6 + 608);
          if ( (v9 & 0x400000000000LL) != 0 )
            v13 = *(const char **)(v6 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x10u,
            0x58u,
            (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
            154,
            v6,
            v10,
            v13);
        v14 = *(void **)(v6 + 200);
        if ( v14 )
        {
          ExFreePoolWithTag(v14, 0);
          *(_QWORD *)(v6 + 200) = 0LL;
        }
        _InterlockedOr64((volatile signed __int64 *)(v6 + 8), 0x2000000000000uLL);
      }
      return v5;
    }
  }
  return result;
}
