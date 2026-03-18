/*
 * XREFs of ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x140102574
 * Callers:
 *     VidMmSuspendDevices @ 0x14010107C (VidMmSuspendDevices.c)
 *     VidMmProcessFrozenProcesses @ 0x1401020A8 (VidMmProcessFrozenProcesses.c)
 * Callees:
 *     ?Suspend@VIDMM_DEVICE@@QEAAX_N0@Z @ 0x140100468 (-Suspend@VIDMM_DEVICE@@QEAAX_N0@Z.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1401026D8 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1401028B0 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?IsResumedRecently@VIDMM_DEVICE@@QEBA_NXZ @ 0x14011ADDC (-IsResumedRecently@VIDMM_DEVICE@@QEBA_NXZ.c)
 */

char __fastcall VIDMM_PROCESS_ADAPTER_INFO::SuspendAllDevices(VIDMM_PROCESS_ADAPTER_INFO *this, char a2)
{
  __int64 v2; // r10
  char v3; // r9
  __int64 v5; // rax
  __int64 v6; // rax
  char v7; // r8
  unsigned __int16 i; // si
  unsigned __int16 v9; // bp
  __int64 v10; // r12
  _QWORD *v11; // r15
  _QWORD *v12; // r14
  __int64 v13; // rbx
  VIDMM_DEVICE *v15; // rcx

  v2 = 0LL;
  v3 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v5 = WdLogNewEntry5_WdTrace(this);
    v3 = a2;
    v2 = 0LL;
    *(_QWORD *)(v5 + 24) = this;
    WdLogGlobalForLineNumber = 2601;
  }
  v6 = *(_QWORD *)this;
  v7 = 0;
  for ( i = 0; (unsigned int)i < *(_DWORD *)(*(_QWORD *)this + 6952LL); ++i )
  {
    v9 = v2;
    v10 = *(_QWORD *)(*(_QWORD *)(v6 + 40320) + 8LL * i);
    if ( *(_DWORD *)(v10 + 136) <= (unsigned int)v2 )
      goto LABEL_12;
    do
    {
      v11 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 304LL * i) + 184LL * v9 + 40);
      v12 = (_QWORD *)*v11;
      while ( v12 != v11 )
      {
        v13 = v12[4];
        v12 = (_QWORD *)*v12;
        if ( v3 )
        {
          if ( *(_QWORD *)(v13 + 24) != v2 )
          {
            VIDMM_DEVICE::IndefinitelySuspend((VIDMM_DEVICE *)v13, 1);
            goto LABEL_10;
          }
        }
        else if ( *(_QWORD *)(v13 + 24) != v2
               && (*(_BYTE *)(v13 + 312) & 7) == 0
               && !VIDMM_DEVICE::IsResumedRecently((VIDMM_DEVICE *)v13) )
        {
          VIDMM_DEVICE::Suspend(v15, 1, 1);
LABEL_10:
          VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v13);
          v3 = a2;
          v2 = 0LL;
          v7 = 1;
        }
      }
      ++v9;
    }
    while ( (unsigned int)v9 < *(_DWORD *)(v10 + 136) );
LABEL_12:
    v6 = *(_QWORD *)this;
  }
  return v7;
}
