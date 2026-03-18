/*
 * XREFs of ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x140109EE0
 * Callers:
 *     _lambda_41d3d8e444f2107bdec37176a1b6496a_::_lambda_invoker_cdecl_ @ 0x140109E70 (_lambda_41d3d8e444f2107bdec37176a1b6496a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x14010F9C8 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     ?UnqueuePTPMouseEvent@CPTPProcessor@@CA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z @ 0x14018BE18 (-UnqueuePTPMouseEvent@CPTPProcessor@@CA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z.c)
 *     SynthesizePTPMouseInput @ 0x14018CD00 (SynthesizePTPMouseInput.c)
 *     Feature_PTPMouseTiming__private_IsEnabledDeviceUsageNoInline @ 0x1402118AC (Feature_PTPMouseTiming__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

void CPTPProcessor::ProcessMouseQueue(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int v2; // ecx
  int v3; // ebx
  int v4; // ebx
  _QWORD *v5; // rax
  bool v6; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v7; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v8; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v9; // [rsp+50h] [rbp-B0h]
  __int128 v10; // [rsp+60h] [rbp-A0h]
  int v11[36]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v12[18]; // [rsp+100h] [rbp+0h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v7, "PTPMouseOperation", 0LL);
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  memset(v11, 0, 0x88uLL);
  memset(v12, 0, 0x88uLL);
  v6 = 0;
  *(_QWORD *)&v8 = *(_QWORD *)(W32GetUserSessionState(v1, v0) + 19184);
  while ( CPTPProcessor::UnqueuePTPMouseEvent((struct tagPTPMOUSEEVENT *)v11, (struct tagPTPMOUSEEVENT *)v12, &v6) )
  {
    if ( (unsigned int)Feature_PTPMouseTiming__private_IsEnabledDeviceUsageNoInline() )
    {
      *(LARGE_INTEGER *)&v11[8] = KeQueryPerformanceCounter(0LL);
      *(_QWORD *)&v11[10] = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    }
    v2 = 3840;
    if ( !v11[5] && !v11[6] )
      v2 = 3848;
    if ( v11[28] )
    {
      *((_QWORD *)&v10 + 1) = &v11[29];
      v3 = v11[32] != 0 ? 112 : 48;
    }
    else
    {
      *((_QWORD *)&v10 + 1) = 0LL;
      v3 = 64;
    }
    v4 = v2 | v3;
    InputTraceLogging::Mouse::InjectInput(4LL, *(_QWORD *)&v11[8]);
    *((_QWORD *)&v9 + 1) = 0LL;
    if ( v6 )
    {
      v5 = &v12[1];
      if ( *(_QWORD *)v11 != v12[0] )
        v5 = 0LL;
      *((_QWORD *)&v9 + 1) = v5;
    }
    *(_QWORD *)&v10 = *(_QWORD *)&v11[12];
    *(_QWORD *)&v9 = &v11[14];
    SynthesizePTPMouseInput(v11[0], (int)&v11[2], v11[10], v11[8], v4, (struct PTPMouseInputData *)&v8);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v7);
}
