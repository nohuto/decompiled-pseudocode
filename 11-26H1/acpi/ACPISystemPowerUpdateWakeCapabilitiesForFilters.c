/*
 * XREFs of ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x140043380
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1400CFD6C (ACPISystemPowerUpdateWakeCapabilities.c)
 * Callees:
 *     ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x140055B2C (ACPISystemPowerDetermineSupportedDeviceWakeState.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1400CCB38 (ACPISystemPowerGetDeviceWake.c)
 *     AcpiGetIdleWakeInfo @ 0x1400CCFC0 (AcpiGetIdleWakeInfo.c)
 */

__int64 __fastcall ACPISystemPowerUpdateWakeCapabilitiesForFilters(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        int *a5,
        _DWORD *a6,
        signed int *a7,
        signed int *a8)
{
  int *v8; // r14
  char v9; // r13
  signed int v10; // ebx
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rdi
  int DeviceWake; // eax
  signed int *v16; // rdx
  int v17; // eax
  signed int v18; // ecx
  int v19; // eax
  signed int v21; // ecx
  int v22; // eax
  KIRQL v23; // al
  unsigned int v24; // r12d
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  KIRQL v28; // r9
  bool v29; // r13
  int IdleWakeInfo; // eax
  bool v31; // zf
  int v32; // esi
  __int64 v33; // rax
  unsigned int v34; // ecx
  int v35; // eax
  int v36; // eax
  __m128i si128; // [rsp+20h] [rbp-20h]
  int v38; // [rsp+30h] [rbp-10h]
  int v39; // [rsp+34h] [rbp-Ch]
  unsigned int v40; // [rsp+80h] [rbp+40h] BYREF
  __int64 v41; // [rsp+88h] [rbp+48h]
  __int64 v42; // [rsp+98h] [rbp+58h]

  v42 = a4;
  v41 = a2;
  v8 = a5;
  v9 = 0;
  v10 = a3[12];
  v12 = a3[1];
  v13 = 0;
  v14 = (unsigned int)a3[11];
  *a5 = 0;
  LOBYTE(v41) = 0;
  v40 = 0;
  if ( (v12 & 0x400) != 0 )
  {
    v13 = 2;
    *v8 = 2;
  }
  if ( (v12 & 0x800) != 0 )
  {
    v13 |= 4u;
    *v8 = v13;
  }
  if ( (v12 & 0x1000) != 0 )
  {
    v13 |= 8u;
    *v8 = v13;
  }
  if ( (v12 & 0x2000) != 0 )
    *v8 = v13 | 0x10;
  if ( !v10 || !(_DWORD)v14 )
  {
    v10 = 0;
    LOBYTE(v41) = 1;
    v14 = 0LL;
    v9 = 1;
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x10000LL) != 0 )
  {
    v23 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    v24 = *(_DWORD *)(a1 + 536);
    LOBYTE(v25) = v23;
    LODWORD(a5) = ACPISystemPowerDetermineSupportedDeviceWakeState(a1, v26, v27, v25);
    KeReleaseSpinLock(&AcpiPowerLock, v28);
    if ( (int)v24 < (int)v14 || v9 )
      v14 = v24;
    if ( !(_DWORD)v14 )
    {
      v33 = *(_QWORD *)(a1 + 1008);
      if ( (v33 & 0x400000000LL) != 0 )
      {
        if ( (AcpiSupportedSystemStates & 0x20) != 0 )
          v14 = 5LL;
        else
          v14 = (AcpiSupportedSystemStates & 0x10) != 0 ? 4 : 1;
      }
      else if ( (v33 & 0x100000000LL) != 0 )
      {
        v14 = 1LL;
      }
    }
    if ( (_DWORD)a5 )
      v10 = (int)a5;
    v29 = (_DWORD)a5 != 0;
    IdleWakeInfo = AcpiGetIdleWakeInfo(a1, v24, &v40);
    if ( IdleWakeInfo == -1073741275 )
    {
      IdleWakeInfo = AcpiGetIdleWakeInfo(a1, (unsigned int)v14, &v40);
      if ( IdleWakeInfo == -1073741275 )
        IdleWakeInfo = ACPISystemPowerGetDeviceWake(a1, &v40);
    }
    if ( IdleWakeInfo >= 0
      && ((si128 = _mm_load_si128((const __m128i *)&_xmm), v38 = 4, v39 = 4, v40 > 5)
        ? (v34 = 0)
        : (v34 = si128.m128i_u32[v40]),
          v35 = *v8,
          _bittest(&v35, v34)) )
    {
      v10 = v34;
    }
    else if ( !v29 )
    {
      if ( (unsigned int)v14 > 6 )
        v14 = 0LL;
      v10 = *(_DWORD *)(v42 + 4 * v14);
      if ( !v10 )
        v10 = 4;
    }
    if ( (_BYTE)v41 )
    {
LABEL_45:
      v31 = v10 == 5;
    }
    else
    {
      v31 = v10 == 5;
      if ( v10 < 5 )
      {
        while ( 1 )
        {
          v36 = *v8;
          if ( _bittest(&v36, v10) )
            break;
          if ( ++v10 >= 5 )
            goto LABEL_45;
        }
LABEL_74:
        if ( v10 )
        {
          v32 = 1 << v10;
          goto LABEL_48;
        }
LABEL_47:
        v10 = 0;
        LODWORD(v14) = 0;
        v32 = 0;
LABEL_48:
        *v8 = v32;
        goto LABEL_24;
      }
    }
    if ( v31 )
      goto LABEL_47;
    goto LABEL_74;
  }
  DeviceWake = AcpiGetIdleWakeInfo(a1, (unsigned int)v14, &v40);
  if ( DeviceWake == -1073741275 )
    DeviceWake = ACPISystemPowerGetDeviceWake(a1, &v40);
  if ( DeviceWake >= 0 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v38 = 4;
    v39 = 4;
    if ( v40 <= 5 )
      v21 = si128.m128i_i32[v40];
    else
      v21 = 0;
    while ( v21 > 0 )
    {
      v22 = *v8;
      if ( _bittest(&v22, v21) )
      {
        v10 = v21;
        break;
      }
      --v21;
    }
  }
  v16 = (signed int *)(v42 + 4LL * (int)v14);
  while ( (int)v14 > 0 )
  {
    v17 = AcpiSupportedSystemStates;
    if ( _bittest(&v17, v14) )
    {
      v18 = *v16;
      if ( *v16 )
      {
        if ( v18 <= v10 )
          goto LABEL_24;
        v19 = *v8;
        if ( _bittest(&v19, v18) )
        {
          v10 = *v16;
          goto LABEL_24;
        }
      }
    }
    LODWORD(v14) = v14 - 1;
    --v16;
  }
  if ( !(_DWORD)v14 )
  {
    v10 = 0;
    *v8 = 0;
  }
LABEL_24:
  if ( a6 )
    *a6 = v14;
  if ( a7 )
    *a7 = v10;
  if ( a8 )
    *a8 = v10;
  return 0LL;
}
