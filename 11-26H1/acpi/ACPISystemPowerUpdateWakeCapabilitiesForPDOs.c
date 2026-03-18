/*
 * XREFs of ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x140048B24
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1400CFD6C (ACPISystemPowerUpdateWakeCapabilities.c)
 * Callees:
 *     ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x140055B2C (ACPISystemPowerDetermineSupportedDeviceWakeState.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1400CCB38 (ACPISystemPowerGetDeviceWake.c)
 *     AcpiGetIdleWakeInfo @ 0x1400CCFC0 (AcpiGetIdleWakeInfo.c)
 */

__int64 __fastcall ACPISystemPowerUpdateWakeCapabilitiesForPDOs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        unsigned int *a6,
        int *a7,
        __int32 *a8)
{
  int *v8; // r13
  __int32 v9; // esi
  char v10; // r12
  int v11; // ebx
  unsigned int v12; // edi
  KIRQL v14; // al
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // r15d
  KIRQL v19; // r9
  __int64 v20; // rax
  int v21; // eax
  int v22; // ebp
  unsigned int *v23; // rax
  int IdleWakeInfo; // eax
  int v26; // edx
  __m128i si128; // [rsp+20h] [rbp-58h]
  int v28; // [rsp+30h] [rbp-48h]
  int v29; // [rsp+34h] [rbp-44h]
  unsigned int v30; // [rsp+90h] [rbp+18h] BYREF
  int v31; // [rsp+94h] [rbp+1Ch]
  __int64 v32; // [rsp+98h] [rbp+20h]

  v32 = a4;
  v31 = HIDWORD(a3);
  v8 = a5;
  v9 = 0;
  v30 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( (*(_DWORD *)(a1 + 8) & 0x10000) == 0 )
    goto LABEL_10;
  v14 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v12 = *(_DWORD *)(a1 + 536);
  LOBYTE(v15) = v14;
  v18 = ACPISystemPowerDetermineSupportedDeviceWakeState(a1, v16, v17, v15);
  KeReleaseSpinLock(&AcpiPowerLock, v19);
  if ( !v12 )
  {
    v20 = *(_QWORD *)(a1 + 1008);
    if ( (v20 & 0x400000000LL) != 0 )
    {
      if ( (AcpiSupportedSystemStates & 0x20) != 0 )
        v12 = 5;
      else
        v12 = (AcpiSupportedSystemStates & 0x10) != 0 ? 4 : 1;
    }
    else
    {
      v12 = (v20 & 0x100000000LL) != 0;
    }
  }
  v21 = AcpiSupportedSystemStates;
  if ( !_bittest(&v21, v12) )
  {
    v12 = 0;
LABEL_10:
    v22 = 0;
    goto LABEL_11;
  }
  if ( v18 )
  {
    v10 = 1;
    *v8 = 1 << v18;
    v11 = v18;
  }
  v9 = v11;
  IdleWakeInfo = AcpiGetIdleWakeInfo(a1, v12, &v30);
  if ( IdleWakeInfo == -1073741275 )
    IdleWakeInfo = ACPISystemPowerGetDeviceWake(a1, &v30);
  if ( IdleWakeInfo < 0 )
  {
    v26 = v11;
    if ( !v10 )
    {
      v11 = *(_DWORD *)(v32 + 4LL * (int)v12);
      if ( !v11 )
        v11 = 4;
      goto LABEL_28;
    }
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v28 = 4;
    v29 = 4;
    if ( v30 > 5 )
      v9 = 0;
    else
      v9 = si128.m128i_i32[v30];
    v11 = v9;
    v26 = v9;
  }
  if ( !v11 )
    goto LABEL_10;
LABEL_28:
  v9 = v26;
  v22 = 1 << v11;
LABEL_11:
  v23 = a6;
  *v8 = v22;
  if ( v23 )
    *v23 = v12;
  if ( a7 )
    *a7 = v11;
  if ( a8 )
    *a8 = v9;
  return 0LL;
}
