/*
 * XREFs of ACPIThermalCompletePendingIrps @ 0x14002A640
 * Callers:
 *     ACPIThermalLoopEx @ 0x140029C18 (ACPIThermalLoopEx.c)
 *     ACPIThermalStopZoneWorker @ 0x14006A72C (ACPIThermalStopZoneWorker.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqssdddd @ 0x14002B8D8 (WPP_RECORDER_SF_qqssdddd.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

char __fastcall ACPIThermalCompletePendingIrps(__int64 a1)
{
  __int64 v1; // rsi
  char v3; // di
  KIRQL v4; // al
  __int64 *v5; // r15
  __int64 *v6; // rbx
  __int64 v7; // r13
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  IRP *v10; // rdi
  _QWORD *v11; // rcx
  const char *v12; // r15
  const char *v13; // rsi
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 **v18; // rcx
  __int64 **v19; // rax
  __int64 v21; // r12
  void *Pool2; // rax
  int v23; // [rsp+28h] [rbp-59h]
  KIRQL v24; // [rsp+78h] [rbp-9h]
  _QWORD *v25; // [rsp+80h] [rbp-1h] BYREF
  __int64 *v26; // [rsp+88h] [rbp+7h]
  union _LARGE_INTEGER Time; // [rsp+90h] [rbp+Fh] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+98h] [rbp+17h] BYREF

  v1 = *(_QWORD *)(a1 + 200);
  v26 = (__int64 *)&v25;
  v3 = 0;
  v25 = &v25;
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalLock);
  v5 = (__int64 *)AcpiThermalList;
  v24 = v4;
  if ( (__int64 *)AcpiThermalList == &AcpiThermalList )
    goto LABEL_5;
  do
  {
    v6 = v5;
    v5 = (__int64 *)*v5;
    v7 = v6[2];
    if ( ACPIInternalGetDeviceExtension(*(_QWORD *)(v7 + 40)) != a1 )
      continue;
    v15 = *(_DWORD *)(v7 + 24);
    if ( v15 == 2703488 )
    {
      if ( !_InterlockedExchange64(v6 - 8, 0LL) )
        continue;
      *(_DWORD *)(a1 + 192) |= 0x20000000u;
      v16 = *(v6 - 18);
      *(_OWORD *)v16 = *(_OWORD *)v1;
      *(_OWORD *)(v16 + 16) = *(_OWORD *)(v1 + 16);
      *(_OWORD *)(v16 + 32) = *(_OWORD *)(v1 + 32);
      *(_OWORD *)(v16 + 48) = *(_OWORD *)(v1 + 48);
      *(_OWORD *)(v16 + 64) = *(_OWORD *)(v1 + 64);
      *(_QWORD *)(v16 + 80) = *(_QWORD *)(v1 + 80);
      *(_DWORD *)(v16 + 88) = *(_DWORD *)(v1 + 88);
      *(v6 - 14) = 92LL;
    }
    else if ( v15 == 2703512 )
    {
      v21 = *(v6 - 18);
      *(_OWORD *)v21 = 0LL;
      if ( *(_QWORD *)(v1 + 312) )
      {
        Pool2 = (void *)ExAllocatePool2(64LL, *(unsigned __int16 *)(v1 + 306), 1416651585LL);
        *(_QWORD *)(v21 + 8) = Pool2;
        if ( Pool2 )
        {
          *(_WORD *)v21 = *(_WORD *)(v1 + 304);
          *(_WORD *)(v21 + 2) = *(_WORD *)(v1 + 306);
          memmove(Pool2, *(const void **)(v1 + 312), *(unsigned __int16 *)(v1 + 306));
        }
      }
      *(v6 - 14) = 16LL;
    }
    else
    {
      *(v6 - 14) = 0LL;
    }
    *((_DWORD *)v6 - 30) = 0;
    v17 = *v6;
    if ( *(__int64 **)(*v6 + 8) != v6
      || (v18 = (__int64 **)v6[1], *v18 != v6)
      || (*v18 = (__int64 *)v17, *(_QWORD *)(v17 + 8) = v18, v19 = (__int64 **)v26, (_QWORD **)*v26 != &v25) )
    {
LABEL_22:
      __fastfail(3u);
    }
    v6[1] = (__int64)v26;
    *v6 = (__int64)&v25;
    *v19 = v6;
    v26 = v6;
  }
  while ( v5 != &AcpiThermalList );
  v4 = v24;
LABEL_5:
  KeReleaseSpinLock(&AcpiThermalLock, v4);
  v8 = v25;
  while ( v8 != &v25 )
  {
    v9 = v8;
    v10 = (IRP *)(v8 - 21);
    v8 = (_QWORD *)*v8;
    if ( (_QWORD *)v8[1] != v9 )
      goto LABEL_22;
    v11 = (_QWORD *)v9[1];
    if ( (_QWORD *)*v11 != v9 )
      goto LABEL_22;
    *v11 = v8;
    v8[1] = v11;
    v12 = byte_140075A82;
    TimeFields = 0LL;
    v13 = byte_140075A82;
    Time.QuadPart = MEMORY[0xFFFFF78000000008];
    RtlTimeToTimeFields(&Time, &TimeFields);
    v14 = *(_QWORD *)(a1 + 8);
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v12 = *(const char **)(a1 + 608);
      if ( (v14 & 0x400000000000LL) != 0 )
        v13 = *(const char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqssdddd(
        WPP_GLOBAL_Control->DeviceExtension,
        TimeFields.Second,
        TimeFields.Minute,
        11,
        v23,
        (char)v10,
        a1,
        (__int64)v12,
        (__int64)v13,
        TimeFields.Hour,
        TimeFields.Minute,
        TimeFields.Second,
        TimeFields.Milliseconds);
    IofCompleteRequest(v10, 0);
    v3 = 1;
  }
  return v3;
}
