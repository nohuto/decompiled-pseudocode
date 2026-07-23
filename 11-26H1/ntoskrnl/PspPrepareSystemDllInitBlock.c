/*
 * XREFs of PspPrepareSystemDllInitBlock @ 0x1409E5658
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1409E53DC (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     PspGetScpCfgFunctions @ 0x1409E5264 (PspGetScpCfgFunctions.c)
 *     PspWow64GetSharedInformation @ 0x1409E6F34 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x1409E6F4C (PsWow64GetProcessNtdllType.c)
 */

__int64 __fastcall PspPrepareSystemDllInitBlock(int a1, __int64 a2)
{
  _KSCB *QueuedScb; // r15
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r14
  _KPROCESS *Process; // r13
  __int64 v8; // xmm0_8
  unsigned int ProcessNtdllType; // eax
  __int64 v10; // rcx
  __int64 SharedInformation; // rax
  int v12; // ecx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 *ScpCfgFunctions; // rax
  volatile _KAFFINITY_EX *v17; // rax
  volatile _KAFFINITY_EX *v19; // rax
  __int16 v20; // ax
  volatile _KAFFINITY_EX *ActiveProcessors; // rax
  __int64 v24; // [rsp+30h] [rbp-1D8h]
  unsigned __int64 v25; // [rsp+40h] [rbp-1C8h]
  unsigned __int64 v26; // [rsp+48h] [rbp-1C0h]
  __int128 v27; // [rsp+50h] [rbp-1B8h]
  __int128 v28; // [rsp+60h] [rbp-1A8h]
  int Src; // [rsp+A0h] [rbp-168h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-160h]
  __int64 v31; // [rsp+B0h] [rbp-158h]
  _BYTE v32[128]; // [rsp+B8h] [rbp-150h] BYREF
  int v33; // [rsp+138h] [rbp-D0h]
  BOOL v34; // [rsp+13Ch] [rbp-CCh]
  __int128 v35; // [rsp+140h] [rbp-C8h]
  __int64 v36; // [rsp+150h] [rbp-B8h]
  unsigned __int64 v37; // [rsp+158h] [rbp-B0h]
  unsigned __int64 v38; // [rsp+160h] [rbp-A8h]
  unsigned __int64 v39; // [rsp+168h] [rbp-A0h]
  unsigned __int64 v40; // [rsp+170h] [rbp-98h]
  __int128 v41; // [rsp+178h] [rbp-90h]
  __int64 v42; // [rsp+188h] [rbp-80h]
  __int64 v43; // [rsp+190h] [rbp-78h]
  __int64 v44; // [rsp+198h] [rbp-70h]
  __int64 v45; // [rsp+1A0h] [rbp-68h]
  __int64 v46; // [rsp+1A8h] [rbp-60h]
  __int64 v47; // [rsp+1B0h] [rbp-58h]
  __int64 v48; // [rsp+1B8h] [rbp-50h]
  __int64 v49; // [rsp+1C0h] [rbp-48h]

  memset_0(&Src, 0, 0x128uLL);
  QueuedScb = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      QueuedScb = *(_KSCB **)(PspWow64GetSharedInformation(1LL) + 56);
      ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
      v5 = ActiveProcessors[5].StaticBitmap[11];
      v6 = ActiveProcessors[5].StaticBitmap[12];
    }
  }
  else
  {
    QueuedScb = stru_140FC11F0.QueuedScb;
    v17 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
    v6 = v17[5].StaticBitmap[8];
    v5 = v17[5].StaticBitmap[7];
    if ( Process[1].ReadyTime )
    {
      v20 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( v20 == 332 || v20 == 452 )
      {
        v19 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
        v25 = v19[5].StaticBitmap[11];
        v26 = v19[5].StaticBitmap[12];
      }
    }
  }
  if ( a2 )
  {
    v27 = *(_OWORD *)(a2 + 336);
    v24 = *(_QWORD *)(a2 + 352);
    v28 = *(_OWORD *)(a2 + 448);
    v8 = *(_QWORD *)(a2 + 464);
  }
  else
  {
    v27 = 0LL;
    v28 = 0LL;
    v24 = 0LL;
    v8 = 0LL;
  }
  RtlCopyFromUser(&Src, QueuedScb, 0x128uLL);
  if ( Src != 296 )
    return 3221225561LL;
  v31 = *(_QWORD *)(*(_QWORD *)((char *)&ExpPlatformBinaryLock.116 + 4) + 56LL);
  ProcessNtdllType = PsWow64GetProcessNtdllType(Process);
  v10 = ProcessNtdllType;
  if ( !ProcessNtdllType )
    v10 = 1LL;
  SharedInformation = PspWow64GetSharedInformation(v10);
  v30 = *(_QWORD *)(*(_QWORD *)((char *)&ExpPlatformBinaryLock.116 + 8 * v12 + 4) + 56LL);
  v13 = v32;
  v14 = 16LL;
  do
  {
    *v13 = *(_QWORD *)((char *)v13 + SharedInformation - (_QWORD)v32);
    ++v13;
    --v14;
  }
  while ( v14 );
  v33 = ExGenRandom(1, 0LL);
  v34 = 0;
  if ( a2 )
    v34 = (*(_BYTE *)(a2 + 17) & 2) != 0;
  v35 = v27;
  v36 = v24;
  v41 = v28;
  v42 = v8;
  v37 = v5;
  v38 = v6;
  v39 = v25;
  v40 = v26;
  if ( !a1 )
  {
    ScpCfgFunctions = PspGetScpCfgFunctions((__int64)Process);
    if ( ScpCfgFunctions )
    {
      v43 = *ScpCfgFunctions;
      v44 = ScpCfgFunctions[1];
      v45 = ScpCfgFunctions[2];
      v46 = ScpCfgFunctions[3];
      v47 = ScpCfgFunctions[6];
      v48 = ScpCfgFunctions[4];
      v49 = ScpCfgFunctions[5];
    }
  }
  RtlCopyToUser(QueuedScb, &Src, 0x128uLL);
  return 0LL;
}
