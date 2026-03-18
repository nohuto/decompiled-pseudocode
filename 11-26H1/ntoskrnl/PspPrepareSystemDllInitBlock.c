/*
 * XREFs of PspPrepareSystemDllInitBlock @ 0x140A9A628
 * Callers:
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x140A9A3AC (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     PspWow64GetSharedInformation @ 0x1409EA764 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x1409EA77C (PsWow64GetProcessNtdllType.c)
 *     PspGetScpCfgFunctions @ 0x140A9B720 (PspGetScpCfgFunctions.c)
 */

__int64 __fastcall PspPrepareSystemDllInitBlock(int a1, __int64 a2)
{
  _KSCB *QueuedScb; // r15
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r14
  _KPROCESS *Process; // r13
  __int64 v8; // xmm0_8
  int ProcessNtdllType; // ecx
  _BYTE *SharedInformation; // rax
  int v11; // ecx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 *ScpCfgFunctions; // rax
  volatile _KAFFINITY_EX *v16; // rax
  volatile _KAFFINITY_EX *v18; // rax
  __int16 v19; // ax
  volatile _KAFFINITY_EX *ActiveProcessors; // rax
  __int64 v23; // [rsp+30h] [rbp-1D8h]
  unsigned __int64 v24; // [rsp+40h] [rbp-1C8h]
  unsigned __int64 v25; // [rsp+48h] [rbp-1C0h]
  __int128 v26; // [rsp+50h] [rbp-1B8h]
  __int128 v27; // [rsp+60h] [rbp-1A8h]
  int Src; // [rsp+A0h] [rbp-168h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-160h]
  __int64 v30; // [rsp+B0h] [rbp-158h]
  _BYTE v31[128]; // [rsp+B8h] [rbp-150h] BYREF
  int v32; // [rsp+138h] [rbp-D0h]
  BOOL v33; // [rsp+13Ch] [rbp-CCh]
  __int128 v34; // [rsp+140h] [rbp-C8h]
  __int64 v35; // [rsp+150h] [rbp-B8h]
  unsigned __int64 v36; // [rsp+158h] [rbp-B0h]
  unsigned __int64 v37; // [rsp+160h] [rbp-A8h]
  unsigned __int64 v38; // [rsp+168h] [rbp-A0h]
  unsigned __int64 v39; // [rsp+170h] [rbp-98h]
  __int128 v40; // [rsp+178h] [rbp-90h]
  __int64 v41; // [rsp+188h] [rbp-80h]
  __int64 v42; // [rsp+190h] [rbp-78h]
  __int64 v43; // [rsp+198h] [rbp-70h]
  __int64 v44; // [rsp+1A0h] [rbp-68h]
  __int64 v45; // [rsp+1A8h] [rbp-60h]
  __int64 v46; // [rsp+1B0h] [rbp-58h]
  __int64 v47; // [rsp+1B8h] [rbp-50h]
  __int64 v48; // [rsp+1C0h] [rbp-48h]

  memset_0(&Src, 0, 0x128uLL);
  QueuedScb = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      QueuedScb = (_KSCB *)*((_QWORD *)PspWow64GetSharedInformation(1) + 7);
      ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
      v5 = ActiveProcessors[5].StaticBitmap[11];
      v6 = ActiveProcessors[5].StaticBitmap[12];
    }
  }
  else
  {
    QueuedScb = stru_140FC01F0.QueuedScb;
    v16 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
    v6 = v16[5].StaticBitmap[8];
    v5 = v16[5].StaticBitmap[7];
    if ( Process[1].ReadyTime )
    {
      v19 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( v19 == 332 || v19 == 452 )
      {
        v18 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
        v24 = v18[5].StaticBitmap[11];
        v25 = v18[5].StaticBitmap[12];
      }
    }
  }
  if ( a2 )
  {
    v26 = *(_OWORD *)(a2 + 336);
    v23 = *(_QWORD *)(a2 + 352);
    v27 = *(_OWORD *)(a2 + 448);
    v8 = *(_QWORD *)(a2 + 464);
  }
  else
  {
    v26 = 0LL;
    v27 = 0LL;
    v23 = 0LL;
    v8 = 0LL;
  }
  RtlCopyFromUser(&Src, QueuedScb, 0x128uLL);
  if ( Src != 296 )
    return 3221225561LL;
  v30 = *(_QWORD *)(*(_QWORD *)((char *)&ExpPlatformBinaryLock.116 + 4) + 56LL);
  ProcessNtdllType = PsWow64GetProcessNtdllType((__int64)Process);
  if ( !ProcessNtdllType )
    ProcessNtdllType = 1;
  SharedInformation = PspWow64GetSharedInformation(ProcessNtdllType);
  v29 = *(_QWORD *)(*(_QWORD *)((char *)&ExpPlatformBinaryLock.116 + 8 * v11 + 4) + 56LL);
  v12 = v31;
  v13 = 16LL;
  do
  {
    *v12 = *(_QWORD *)((char *)v12 + SharedInformation - v31);
    ++v12;
    --v13;
  }
  while ( v13 );
  v32 = ExGenRandom(1, 0LL);
  v33 = 0;
  if ( a2 )
    v33 = (*(_BYTE *)(a2 + 17) & 2) != 0;
  v34 = v26;
  v35 = v23;
  v40 = v27;
  v41 = v8;
  v36 = v5;
  v37 = v6;
  v38 = v24;
  v39 = v25;
  if ( !a1 )
  {
    ScpCfgFunctions = (__int64 *)PspGetScpCfgFunctions(Process);
    if ( ScpCfgFunctions )
    {
      v42 = *ScpCfgFunctions;
      v43 = ScpCfgFunctions[1];
      v44 = ScpCfgFunctions[2];
      v45 = ScpCfgFunctions[3];
      v46 = ScpCfgFunctions[6];
      v47 = ScpCfgFunctions[4];
      v48 = ScpCfgFunctions[5];
    }
  }
  RtlCopyToUser(QueuedScb, &Src, 0x128uLL);
  return 0LL;
}
