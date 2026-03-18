/*
 * XREFs of ACPIThermalDeviceControl @ 0x14002ACF0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIoctlEvalControlMethod @ 0x140023DBC (ACPIIoctlEvalControlMethod.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIThermalLoop @ 0x140029C00 (ACPIThermalLoop.c)
 *     WPP_RECORDER_SF_qqssdddd @ 0x14002B8D8 (WPP_RECORDER_SF_qqssdddd.c)
 *     WPP_RECORDER_SF_qDDqssdddd @ 0x14002C90C (WPP_RECORDER_SF_qDDqssdddd.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x14003FB40 (ACPIIoctlAsyncEvalControlMethod.c)
 *     WPP_RECORDER_SF_qDqssdddd @ 0x1400437D8 (WPP_RECORDER_SF_qDqssdddd.c)
 *     ACPIIoctlEnumChildren @ 0x140048808 (ACPIIoctlEnumChildren.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIThermalDeviceControl(ULONG_PTR a1, __int64 a2)
{
  union _LARGE_INTEGER v4; // r14
  __int64 DeviceExtension; // rax
  __int64 v6; // r13
  __int64 v7; // rdi
  _DWORD *v8; // r15
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // r9d
  char *v12; // r14
  unsigned int LowPart; // r12d
  KIRQL v14; // dl
  unsigned int v15; // esi
  __int64 v17; // rax
  _QWORD *v18; // rbx
  _QWORD *v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned __int8 *v22; // rax
  unsigned int v23; // eax
  unsigned __int8 *v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned __int8 *v28; // rax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  union _LARGE_INTEGER v34; // [rsp+80h] [rbp-19h] BYREF
  union _LARGE_INTEGER Time; // [rsp+88h] [rbp-11h] BYREF
  struct _TIME_FIELDS v36; // [rsp+90h] [rbp-9h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+A0h] [rbp+7h] BYREF

  if ( *(_BYTE *)(a2 + 64) )
  {
    v15 = -1073741822;
    *(_DWORD *)(a2 + 48) = -1073741822;
    goto LABEL_10;
  }
  v4.QuadPart = MEMORY[0xFFFFF78000000008];
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = *(_QWORD *)(a2 + 184);
  v7 = DeviceExtension;
  v8 = *(_DWORD **)(DeviceExtension + 200);
  v9 = *(_DWORD *)(v6 + 24);
  if ( v9 > 0x32C018 )
  {
    v29 = v9 - 3325980;
    if ( !v29 )
      return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
    v30 = v29 - 4;
    if ( !v30 )
      return (unsigned int)ACPIIoctlEnumChildren(a1, a2, *(_QWORD *)(a2 + 184));
    v31 = v30 - 28;
    if ( v31 )
    {
      v32 = v31 - 4;
      if ( v32 )
      {
        v33 = v32 - 4;
        if ( !v33 )
          return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
        if ( v33 != 4 )
          goto LABEL_45;
      }
      return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
    }
    return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
  }
  if ( v9 == 3325976 )
    return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
  v10 = v9 - 2703488;
  if ( !v10 )
  {
    *(_QWORD *)&v36.Year = *(_QWORD *)(a2 + 24);
    Time = v4;
    TimeFields = 0LL;
    v34.LowPart = *v8 != **(_DWORD **)&v36.Year ? 0x20000002 : 0;
    RtlTimeToTimeFields(&Time, &TimeFields);
    v12 = (char *)(v7 + 8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDDqssdddd(WPP_GLOBAL_Control->DeviceExtension, TimeFields.Minute, TimeFields.Hour, v11);
    LowPart = v34.LowPart;
    goto LABEL_8;
  }
  v20 = v10 - 24;
  if ( v20 )
  {
    v21 = v20 - 16364;
    if ( !v21 )
    {
      v22 = *(unsigned __int8 **)(a2 + 24);
      v34 = v4;
      v36 = 0LL;
      v8[25] = *v22;
      RtlTimeToTimeFields(&v34, &v36);
      v12 = (char *)(v7 + 8);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDqssdddd(WPP_GLOBAL_Control->DeviceExtension, v36.Minute, v36.Hour, 13);
      LowPart = 536870924;
      goto LABEL_8;
    }
    v23 = v21 - 4;
    if ( !v23 )
    {
      v24 = *(unsigned __int8 **)(a2 + 24);
      v34 = v4;
      v36 = 0LL;
      v8[23] = *v24;
      RtlTimeToTimeFields(&v34, &v36);
      v12 = (char *)(v7 + 8);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDqssdddd(WPP_GLOBAL_Control->DeviceExtension, v36.Minute, v36.Hour, 14);
      LowPart = 536870913;
      goto LABEL_8;
    }
    v25 = v23 - 4;
    if ( v25 )
    {
      v26 = v25 - 606068;
      if ( v26 )
      {
        if ( v26 == 4 )
          return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
LABEL_45:
        v15 = -1073741637;
        goto LABEL_46;
      }
      return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
    }
    v28 = *(unsigned __int8 **)(a2 + 24);
    v34 = v4;
    v36 = 0LL;
    v8[24] = *v28;
    RtlTimeToTimeFields(&v34, &v36);
    v12 = (char *)(v7 + 8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDqssdddd(WPP_GLOBAL_Control->DeviceExtension, v36.Minute, v36.Hour, 15);
    LowPart = 536871168;
  }
  else
  {
    v34 = v4;
    LowPart = 0x20000000;
    v36 = 0LL;
    RtlTimeToTimeFields(&v34, &v36);
    v12 = (char *)(v7 + 8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqssdddd(WPP_GLOBAL_Control->DeviceExtension, v36.Minute, v36.Hour, 16);
  }
LABEL_8:
  v14 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalLock);
  if ( *v12 < 0 || (*(_DWORD *)(v7 + 192) & 0x8000000) != 0 )
  {
    KeReleaseSpinLock(&AcpiThermalLock, v14);
    v15 = -1073741810;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_DWORD *)(a2 + 48) = -1073741810;
LABEL_10:
    IofCompleteRequest((PIRP)a2, 0);
    return v15;
  }
  if ( *(_DWORD *)(v6 + 24) == 2703488 )
  {
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)ACPIThermalCancelRequest);
    if ( *(_BYTE *)(a2 + 68) )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL) )
      {
        KeReleaseSpinLock(&AcpiThermalLock, v14);
        v15 = -1073741536;
LABEL_46:
        *(_QWORD *)(a2 + 56) = 0LL;
        *(_DWORD *)(a2 + 48) = v15;
        goto LABEL_10;
      }
    }
  }
  v17 = *(_QWORD *)(a2 + 184);
  v18 = (_QWORD *)(a2 + 168);
  v15 = 259;
  *(_BYTE *)(v17 + 3) |= 1u;
  v19 = (_QWORD *)qword_14008F848;
  if ( *(__int64 **)qword_14008F848 != &AcpiThermalList )
    __fastfail(3u);
  *v18 = &AcpiThermalList;
  v18[1] = v19;
  *v19 = v18;
  qword_14008F848 = (__int64)v18;
  KeReleaseSpinLock(&AcpiThermalLock, v14);
  ACPIThermalLoop(v7, LowPart);
  return v15;
}
