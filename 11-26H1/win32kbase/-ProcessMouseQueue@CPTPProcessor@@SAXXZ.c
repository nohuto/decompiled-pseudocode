/*
 * XREFs of ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x140149060
 * Callers:
 *     _lambda_41d3d8e444f2107bdec37176a1b6496a_::_lambda_invoker_cdecl_ @ 0x140148FF0 (_lambda_41d3d8e444f2107bdec37176a1b6496a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     SynthesizePTPMouseInput @ 0x1400D0144 (SynthesizePTPMouseInput.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x14014BD1C (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     ?UnqueuePTPMouseEvent@CPTPProcessor@@CA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z @ 0x1401B05BC (-UnqueuePTPMouseEvent@CPTPProcessor@@CA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void CPTPProcessor::ProcessMouseQueue(void)
{
  int v0; // edx
  int v1; // ecx
  int v2; // r8d
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // ebx
  int v6; // ebx
  _QWORD *v7; // rax
  bool v8; // [rsp+38h] [rbp-D0h] BYREF
  void **v9; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v10; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v11; // [rsp+58h] [rbp-B0h]
  __int128 v12; // [rsp+68h] [rbp-A0h]
  __int64 v13[18]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v14[18]; // [rsp+108h] [rbp+0h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v9, "PTPMouseOperation", 0LL);
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  memset(v13, 0, 0x88uLL);
  memset(v14, 0, 0x88uLL);
  v8 = 0;
  *(_QWORD *)&v10 = *(_QWORD *)(W32GetUserSessionState(v1, v0, v2) + 19216);
  while ( CPTPProcessor::UnqueuePTPMouseEvent((struct tagPTPMOUSEEVENT *)v13, (struct tagPTPMOUSEEVENT *)v14, &v8) )
  {
    v13[4] = KeQueryPerformanceCounter(0LL).QuadPart;
    v4 = 3840;
    v13[5] = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    if ( !*(__int64 *)((char *)&v13[2] + 4) )
      v4 = 3848;
    if ( LODWORD(v13[14]) )
    {
      *((_QWORD *)&v12 + 1) = (char *)&v13[14] + 4;
      v5 = LODWORD(v13[16]) != 0 ? 112 : 48;
    }
    else
    {
      *((_QWORD *)&v12 + 1) = 0LL;
      v5 = 64;
    }
    v6 = v4 | v5;
    InputTraceLogging::Mouse::InjectInput(4LL, v13[4]);
    *((_QWORD *)&v11 + 1) = 0LL;
    if ( v8 )
    {
      v7 = &v14[1];
      if ( v13[0] != v14[0] )
        v7 = 0LL;
      *((_QWORD *)&v11 + 1) = v7;
    }
    *(_QWORD *)&v12 = v13[6];
    *(_QWORD *)&v11 = &v13[7];
    SynthesizePTPMouseInput(v13[0], (__int128 *)&v13[1], v13[5], v13[4], v6, (struct PTPMouseInputData *)&v10);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v9,
    v3);
}
