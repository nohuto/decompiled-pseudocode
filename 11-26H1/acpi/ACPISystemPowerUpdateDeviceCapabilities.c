/*
 * XREFs of ACPISystemPowerUpdateDeviceCapabilities @ 0x14004104C
 * Callers:
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1400C1504 (ACPISystemPowerQueryDeviceCapabilities.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1400188A0 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     ACPISystemPowerDetermineSupportedSystemState @ 0x140041A78 (ACPISystemPowerDetermineSupportedSystemState.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ACPISystemPowerGetSxD @ 0x1400CD800 (ACPISystemPowerGetSxD.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1400CDEFC (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1400CFD6C (ACPISystemPowerUpdateWakeCapabilities.c)
 */

__int64 __fastcall ACPISystemPowerUpdateDeviceCapabilities(ULONG_PTR BugCheckParameter2, __m128i *a2, __int64 a3)
{
  __int32 v3; // eax
  char v4; // di
  __int64 v5; // xmm0_8
  int v7; // eax
  const char *v8; // rsi
  unsigned int v9; // edx
  int v10; // r14d
  unsigned int v11; // r15d
  int updated; // eax
  int v13; // eax
  int v14; // eax
  int SxD; // eax
  char v16; // cl
  CCHAR LeastSignificantBit; // al
  ULONG_PTR BugCheckParameter4; // r14
  __int64 *v19; // rax
  __int64 result; // rax
  const char *v21; // rcx
  KIRQL v22; // al
  __int32 v23; // ecx
  KIRQL v24; // r8
  unsigned int v25; // eax
  __int64 v26; // xmm1_8
  int v27; // edx
  KIRQL v28; // r10
  const char *v29; // rcx
  const char *v30; // rsi
  const char *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  char v34; // r10
  const char *v35; // r8
  const char *v36; // rdx
  __int64 v37; // rcx
  const char *v38; // rcx
  __int64 v39; // rdx
  const char *v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rdx
  unsigned int v43; // [rsp+50h] [rbp-49h]
  signed int v44; // [rsp+50h] [rbp-49h]
  char v45; // [rsp+54h] [rbp-45h]
  unsigned int v46; // [rsp+58h] [rbp-41h]
  signed int v47; // [rsp+5Ch] [rbp-3Dh] BYREF
  int v48; // [rsp+60h] [rbp-39h] BYREF
  __int64 *i; // [rsp+68h] [rbp-31h]
  int v50; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v51; // [rsp+74h] [rbp-25h]
  int v52; // [rsp+78h] [rbp-21h] BYREF
  int v53; // [rsp+7Ch] [rbp-1Dh] BYREF
  signed int v54; // [rsp+80h] [rbp-19h]
  __int64 v55; // [rsp+88h] [rbp-11h]
  __m128i v56; // [rsp+90h] [rbp-9h] BYREF
  __int64 v57; // [rsp+A0h] [rbp+7h]
  __int32 v58; // [rsp+A8h] [rbp+Fh]

  v3 = a2[2].m128i_i32[2];
  v4 = 0;
  v5 = a2[2].m128i_i64[0];
  v56 = a2[1];
  v58 = v3;
  v55 = a3;
  v7 = _mm_cvtsi128_si32(_mm_srli_si128(v56, 4));
  v50 = 0;
  v53 = 0;
  if ( v56.m128i_i32[1] != 1 )
    v7 = 1;
  v52 = 0;
  v56.m128i_i32[1] = v7;
  v47 = 0;
  v51 = 0;
  v48 = 0;
  v57 = v5;
  v8 = byte_140075A82;
  v10 = ACPIDevicePowerDetermineSupportedDeviceStates(BugCheckParameter2);
  if ( v10 < 0 )
  {
    v29 = byte_140075A82;
    if ( BugCheckParameter2 )
    {
      v32 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v32 & 0x200000000000LL) != 0 )
      {
        v8 = *(const char **)(BugCheckParameter2 + 608);
        if ( (v32 & 0x400000000000LL) != 0 )
          v29 = *(const char **)(BugCheckParameter2 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xFu,
        0x14u,
        (__int64)&WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
        v10,
        v4,
        v8,
        v29);
    return (unsigned int)v10;
  }
  else
  {
    v11 = v51;
    if ( (*(_BYTE *)(BugCheckParameter2 + 8) & 0x60) == 0x40 && (*(_DWORD *)(v55 + 4) & 3) == 0 )
    {
LABEL_22:
      result = ACPISystemPowerUpdateWakeCapabilities(
                 BugCheckParameter2,
                 v9,
                 v55,
                 (unsigned int)&v56,
                 (__int64)&v48,
                 (__int64)&v47,
                 (__int64)&v53,
                 (__int64)&v52);
      v54 = result;
      if ( (int)result >= 0 )
      {
        v22 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
        v23 = v58;
        v24 = v22;
        v25 = *(_DWORD *)(BugCheckParameter2 + 600) & 0xFFFFFFC0;
        v26 = v57;
        v27 = 2 * (v48 & 0x1E);
        *(__m128i *)(BugCheckParameter2 + 508) = v56;
        *(_QWORD *)(BugCheckParameter2 + 524) = v26;
        *(_DWORD *)(BugCheckParameter2 + 532) = v23;
        *(_DWORD *)(BugCheckParameter2 + 540) = v53;
        *(_DWORD *)(BugCheckParameter2 + 536) = v47;
        *(_DWORD *)(BugCheckParameter2 + 600) = v25 | (v11 >> 2) & 3 | v27;
        KeReleaseSpinLock(&AcpiPowerLock, v24);
        if ( !_bittest64((const signed __int64 *)(BugCheckParameter2 + 8), 0x33u) )
          _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter2 + 8), 0x100000000000000uLL);
        return 0LL;
      }
      else
      {
        v21 = byte_140075A82;
        if ( BugCheckParameter2 )
        {
          v42 = *(_QWORD *)(BugCheckParameter2 + 8);
          v4 = BugCheckParameter2;
          if ( (v42 & 0x200000000000LL) != 0 )
          {
            v8 = *(const char **)(BugCheckParameter2 + 608);
            if ( (v42 & 0x400000000000LL) != 0 )
              v21 = *(const char **)(BugCheckParameter2 + 616);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xFu,
            0x19u,
            (__int64)&WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
            result,
            v4,
            v8,
            v21);
          return (unsigned int)v54;
        }
      }
    }
    else
    {
      v11 = 4 * (*(_DWORD *)(v55 + 4) & 1) + 18;
      if ( (*(_DWORD *)(v55 + 4) & 2) != 0 )
        v11 |= 8u;
      updated = ACPISystemPowerUpdateWakeCapabilities(
                  BugCheckParameter2,
                  v9,
                  v55,
                  (unsigned int)&v56,
                  (__int64)&v48,
                  (__int64)&v47,
                  (__int64)&v53,
                  (__int64)&v52);
      v43 = updated;
      if ( updated >= 0 )
      {
        v13 = 2;
        for ( i = &v56.m128i_i64[1]; ; i = (__int64 *)((char *)i + 4) )
        {
          v44 = v13;
          if ( v13 > 6 )
            goto LABEL_22;
          v14 = AcpiSupportedSystemStates;
          if ( !_bittest(&v14, v44) )
            goto LABEL_13;
          SxD = ACPISystemPowerGetSxD(BugCheckParameter2, (unsigned int)v44, &v50);
          if ( SxD < 0 )
            break;
          v19 = i;
          LODWORD(BugCheckParameter4) = v50;
          if ( v50 > *(_DWORD *)i )
LABEL_21:
            *(_DWORD *)v19 = BugCheckParameter4;
LABEL_13:
          v13 = v44 + 1;
        }
        if ( SxD != -1073741772 )
        {
          v34 = 0;
          v35 = byte_140075A82;
          v36 = byte_140075A82;
          if ( BugCheckParameter2 )
          {
            v37 = *(_QWORD *)(BugCheckParameter2 + 8);
            v34 = BugCheckParameter2;
            if ( (v37 & 0x200000000000LL) != 0 )
            {
              v35 = *(const char **)(BugCheckParameter2 + 608);
              if ( (v37 & 0x400000000000LL) != 0 )
                v36 = *(const char **)(BugCheckParameter2 + 616);
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xFu,
              0x16u,
              (__int64)&WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
              SxD,
              v34,
              v35,
              v36);
        }
        v45 = 0;
        v16 = v44;
        v9 = v11 & (-1 << *(_DWORD *)i);
        v46 = v9;
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !v9 )
            {
              if ( !v45 )
              {
                v40 = byte_140075A82;
                if ( BugCheckParameter2 )
                {
                  v41 = *(_QWORD *)(BugCheckParameter2 + 8);
                  v4 = BugCheckParameter2;
                  if ( (v41 & 0x200000000000LL) != 0 )
                  {
                    v8 = *(const char **)(BugCheckParameter2 + 608);
                    if ( (v41 & 0x400000000000LL) != 0 )
                      v40 = *(const char **)(BugCheckParameter2 + 616);
                  }
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_Dqss(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    2u,
                    0xFu,
                    0x18u,
                    (__int64)&WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
                    v16 - 1,
                    v4,
                    v8,
                    v40);
                KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 1uLL, v44);
              }
              goto LABEL_13;
            }
            LeastSignificantBit = RtlFindLeastSignificantBit(v9);
            BugCheckParameter4 = LeastSignificantBit;
            v50 = LeastSignificantBit;
            v16 = v44;
            v9 = ~(1 << LeastSignificantBit) & v46;
            v46 = v9;
            if ( v44 <= v47 )
              break;
            v19 = i;
LABEL_20:
            if ( (_DWORD)BugCheckParameter4 == 4 || !v51 )
              goto LABEL_21;
            KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
            v54 = ACPISystemPowerDetermineSupportedSystemState(BugCheckParameter2, (unsigned int)BugCheckParameter4);
            if ( !v54 )
            {
              v38 = byte_140075A82;
              if ( BugCheckParameter2 )
              {
                v39 = *(_QWORD *)(BugCheckParameter2 + 8);
                v4 = BugCheckParameter2;
                if ( (v39 & 0x200000000000LL) != 0 )
                {
                  v8 = *(const char **)(BugCheckParameter2 + 608);
                  if ( (v39 & 0x400000000000LL) != 0 )
                    v38 = *(const char **)(BugCheckParameter2 + 616);
                }
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Dqss(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  0xFu,
                  0x17u,
                  (__int64)&WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
                  BugCheckParameter4 - 1,
                  v4,
                  v8,
                  v38);
              KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 0LL, BugCheckParameter4);
            }
            KeReleaseSpinLock(&AcpiPowerLock, v28);
            v16 = v44;
            v9 = v46;
            if ( v54 >= v44 )
            {
              v19 = i;
              goto LABEL_21;
            }
          }
          if ( (v9 & v48) == 0 )
          {
            v19 = i;
            if ( (_DWORD)BugCheckParameter4 == v52 )
            {
              v45 = 1;
              *(_DWORD *)i = BugCheckParameter4;
            }
            goto LABEL_20;
          }
        }
      }
      v30 = byte_140075A82;
      v31 = byte_140075A82;
      if ( BugCheckParameter2 )
      {
        v33 = *(_QWORD *)(BugCheckParameter2 + 8);
        v4 = BugCheckParameter2;
        if ( (v33 & 0x200000000000LL) != 0 )
        {
          v30 = *(const char **)(BugCheckParameter2 + 608);
          if ( (v33 & 0x400000000000LL) != 0 )
            v31 = *(const char **)(BugCheckParameter2 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xFu,
          0x15u,
          (__int64)&WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
          updated,
          v4,
          v30,
          v31);
      return v43;
    }
  }
  return result;
}
