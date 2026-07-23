/*
 * XREFs of PopDiagTraceIrpFinishTelemetry @ 0x14021BE34
 * Callers:
 *     PopDiagTraceIrpFinish @ 0x14021BC90 (PopDiagTraceIrpFinish.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopComputeWatchdogTimeout @ 0x1403B4B38 (PopComputeWatchdogTimeout.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     PopDiagGetDriverName @ 0x1404809A8 (PopDiagGetDriverName.c)
 *     IoFindDeviceThatFailedIrp @ 0x1404CD600 (IoFindDeviceThatFailedIrp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceIrpFinishTelemetry(__int64 a1)
{
  const WCHAR *v1; // r13
  __int64 v3; // rbx
  KIRQL v4; // r9
  __int64 v5; // r8
  __int64 v6; // r15
  bool v7; // di
  unsigned __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r12d
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 DeviceThatFailedIrp; // rax
  int v16; // r9d
  int *v17; // r11
  int v18; // r10d
  int v19; // [rsp+38h] [rbp-D0h] BYREF
  int v20; // [rsp+3Ch] [rbp-CCh] BYREF
  int v21; // [rsp+40h] [rbp-C8h] BYREF
  int v22; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+68h] [rbp-A0h] BYREF
  int *v28; // [rsp+88h] [rbp-80h]
  __int64 v29; // [rsp+90h] [rbp-78h]
  __int64 *v30; // [rsp+98h] [rbp-70h]
  __int64 v31; // [rsp+A0h] [rbp-68h]
  __int64 *v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  _BYTE v34[16]; // [rsp+B8h] [rbp-50h] BYREF
  int *v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  int *v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  int *v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  __int64 *v41; // [rsp+F8h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp-8h]
  __int64 *v43; // [rsp+108h] [rbp+0h]
  __int64 v44; // [rsp+110h] [rbp+8h]
  _BYTE v45[128]; // [rsp+118h] [rbp+10h] BYREF

  v1 = &SourceString;
  v3 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v19 = *(_DWORD *)(a1 + 48);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 288));
  v5 = *(_QWORD *)(v3 + 48);
  v6 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v7 = 0;
  v8 = (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - v5) / 0x2710uLL;
  if ( v5 && *(_DWORD *)(v3 + 296) == 1 )
    v7 = (unsigned int)v8 >= 0x1388;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 288), v4);
  if ( v7 )
  {
    v12 = v19;
    if ( v19 < 0 && !*(_DWORD *)(v3 + 188) )
    {
      DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(a1, v9, v10, v11);
      if ( (int)PopDiagGetDriverName(DeviceThatFailedIrp, v45) >= 0 )
        v1 = (const WCHAR *)v45;
    }
    v14 = (unsigned int)PopComputeWatchdogTimeout(v3);
    if ( (unsigned int)dword_140E07560 > 5
      && (qword_140E07570 & 0x400000000000LL) != 0
      && (qword_140E07578 & 0x400000000000LL) == qword_140E07578 )
    {
      v19 = v8;
      v28 = &v19;
      v24 = *(_QWORD *)(v3 + 48);
      v30 = &v24;
      v32 = &v25;
      v29 = 4LL;
      v31 = 8LL;
      v25 = v6;
      v33 = 8LL;
      tlgCreate1Sz_wchar_t(v34, v1, v13, v14);
      v20 = v16;
      v35 = &v20;
      v21 = *v17;
      v36 = 4LL;
      v37 = &v21;
      v38 = 4LL;
      v39 = &v22;
      v41 = &v23;
      v43 = &v26;
      v22 = v18;
      v40 = 4LL;
      LODWORD(v23) = v12;
      v42 = 4LL;
      v26 = 0x1000000LL;
      v44 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07560,
        (unsigned __int8 *)&byte_14004D707,
        0LL,
        0LL,
        0xBu,
        &v27);
    }
  }
}
