/*
 * XREFs of ACPISystemPowerDetermineSupportedDeviceStates @ 0x140041748
 * Callers:
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x140041748 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerProcessRootMapping @ 0x1400BA7F0 (ACPISystemPowerProcessRootMapping.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x14001D86C (ACPIExtListEnumNext.c)
 *     ACPIExtListTestElement @ 0x14001E418 (ACPIExtListTestElement.c)
 *     ACPIExtListStartEnum @ 0x140028384 (ACPIExtListStartEnum.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x140041748 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerDetermineSupportedSystemState @ 0x140041A78 (ACPISystemPowerDetermineSupportedSystemState.c)
 *     WPP_RECORDER_SF_DDqss @ 0x140044660 (WPP_RECORDER_SF_DDqss.c)
 *     WPP_RECORDER_SF_DDDDqss @ 0x1400691EC (WPP_RECORDER_SF_DDDDqss.c)
 *     ACPISystemPowerGetSxD @ 0x1400CD800 (ACPISystemPowerGetSxD.c)
 */

__int64 __fastcall ACPISystemPowerDetermineSupportedDeviceStates(__int64 a1, unsigned int a2, _DWORD *a3)
{
  int SxD; // edi
  char *i; // rax
  __int64 v7; // rdx
  char *v8; // rbx
  char v9; // cl
  const char *v10; // r8
  const char *v11; // rdx
  char v12; // r10
  __int64 v13; // rax
  char v14; // r8
  const char *v15; // rdx
  const char *v16; // rcx
  __int64 v17; // rax
  int v18; // esi
  __int64 v19; // rdx
  int v20; // eax
  char v21; // r10
  char v22; // r11
  const char *v23; // r9
  const char *v24; // r8
  int v25; // edx
  char v26; // r10
  __int64 v27; // rax
  int v29; // [rsp+20h] [rbp-49h]
  __int64 v30; // [rsp+48h] [rbp-21h]
  _QWORD v31[3]; // [rsp+68h] [rbp-1h] BYREF
  __int128 v32; // [rsp+80h] [rbp+17h]
  __int64 v33; // [rsp+90h] [rbp+27h]
  __int64 v34; // [rsp+98h] [rbp+2Fh]
  KIRQL NewIrql; // [rsp+D0h] [rbp+67h]
  int v36; // [rsp+E8h] [rbp+7Fh] BYREF

  v36 = 0;
  v31[0] = a1 + 800;
  v34 = 1LL;
  v31[2] = &AcpiDeviceTreeLock;
  SxD = 0;
  v33 = 816LL;
  v31[1] = 0LL;
  v32 = 0LL;
  for ( i = ACPIExtListStartEnum((__int64)v31); ; i = ACPIExtListEnumNext((__int64)v31) )
  {
    v8 = i;
    LOBYTE(v7) = SxD >= 0;
    if ( !ACPIExtListTestElement((__int64)v31, v7) )
      break;
    SxD = ACPISystemPowerDetermineSupportedDeviceStates(v8, a2, a3);
    if ( SxD >= 0 )
    {
      SxD = ACPISystemPowerGetSxD(v8, a2, &v36);
      if ( SxD < 0 )
      {
        if ( SxD == -1073741772 )
        {
          v18 = 1;
          NewIrql = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          v19 = 1LL;
          do
          {
            v20 = ACPISystemPowerDetermineSupportedSystemState(v8, v19);
            v22 = v20;
            if ( v20 >= (int)a2 )
            {
              v23 = byte_140075A82;
              v24 = byte_140075A82;
              v25 = 1 << v21;
              v26 = 0;
              *a3 |= v25;
              if ( v8 )
              {
                v27 = *((_QWORD *)v8 + 1);
                v26 = (char)v8;
                if ( (v27 & 0x200000000000LL) != 0 )
                {
                  v23 = (const char *)*((_QWORD *)v8 + 76);
                  if ( (v27 & 0x400000000000LL) != 0 )
                    v24 = (const char *)*((_QWORD *)v8 + 77);
                }
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_DDDDqss(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v18 - 1,
                  (_DWORD)v24,
                  (_DWORD)v23,
                  v29,
                  v18 - 1,
                  v22 - 1,
                  a2 - 1,
                  v18 - 1,
                  v26,
                  (__int64)v23,
                  (__int64)v24);
            }
            v19 = (unsigned int)++v18;
          }
          while ( v18 <= 3 );
          v36 = v18;
          KeReleaseSpinLock(&AcpiPowerLock, NewIrql);
          SxD = 0;
        }
        else
        {
          v14 = 0;
          v15 = byte_140075A82;
          v16 = byte_140075A82;
          if ( v8 )
          {
            v17 = *((_QWORD *)v8 + 1);
            v14 = (char)v8;
            if ( (v17 & 0x200000000000LL) != 0 )
            {
              v15 = (const char *)*((_QWORD *)v8 + 76);
              if ( (v17 & 0x400000000000LL) != 0 )
                v16 = (const char *)*((_QWORD *)v8 + 77);
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xFu,
              0xBu,
              (__int64)&WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
              SxD,
              v14,
              v15,
              v16);
        }
      }
      else
      {
        v9 = v36;
        v10 = byte_140075A82;
        v11 = byte_140075A82;
        v12 = 0;
        *a3 |= 1 << v36;
        if ( v8 )
        {
          v13 = *((_QWORD *)v8 + 1);
          v12 = (char)v8;
          if ( (v13 & 0x200000000000LL) != 0 )
          {
            v10 = (const char *)*((_QWORD *)v8 + 76);
            if ( (v13 & 0x400000000000LL) != 0 )
              v11 = (const char *)*((_QWORD *)v8 + 77);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v30 = (__int64)v11;
          LOBYTE(v11) = 4;
          WPP_RECORDER_SF_DDqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v11,
            15,
            10,
            (__int64)&WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
            a2 - 1,
            v9 - 1,
            v12,
            (__int64)v10,
            v30);
        }
      }
    }
  }
  return 0LL;
}
