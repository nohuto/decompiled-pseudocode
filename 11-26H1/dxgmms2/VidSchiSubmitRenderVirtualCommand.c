/*
 * XREFs of VidSchiSubmitRenderVirtualCommand @ 0x1400E9090
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1400E8CE0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1400E8F40 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x140026470 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchIsTDRPending @ 0x140035D80 (VidSchIsTDRPending.c)
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x140037824 (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1400430E4 (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     ?VidMmRecordVaPagingHistorySetPageDirectory@@YAXPEAVVIDMM_GLOBAL@@PEBVVIDMM_PROCESS@@PEBU_DXGKARG_SETROOTPAGETABLE@@PEBX@Z @ 0x140043EE0 (-VidMmRecordVaPagingHistorySetPageDirectory@@YAXPEAVVIDMM_GLOBAL@@PEBVVIDMM_PROCESS@@PEBU_DXGKAR.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400EA1E8 (VidSchWaitForCompletionEvent.c)
 *     VidSchiDiscardQueuePacket @ 0x1400EA710 (VidSchiDiscardQueuePacket.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1400EA9F0 (VidSchiSendToExecutionQueueWithWait.c)
 */

__int64 __fastcall VidSchiSubmitRenderVirtualCommand(_VIDSCH_QUEUE_PACKET *this)
{
  _QWORD *v1; // r15
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 i; // r14
  _QWORD *v11; // rax
  int v12; // eax
  _QWORD *v13; // r14
  __int64 v14; // r8
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  bool v20; // cf
  unsigned int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rbp
  UINT64 SegmentOffset; // r8
  UINT v28; // r9d
  __int64 v29; // rax
  const struct VIDMM_PROCESS *v30; // r12
  __int64 v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // r13
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rax
  int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  void (__fastcall *v44)(_QWORD); // rax
  _DWORD v45[40]; // [rsp+70h] [rbp-F8h] BYREF
  _DXGKARG_SETROOTPAGETABLE v46; // [rsp+110h] [rbp-58h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 11);
  v3 = v1[13];
  v4 = v1[12];
  v5 = *(_QWORD *)(v3 + 40);
  if ( (*(_BYTE *)(v5 + 3284) & 1) != 0
    || VidSchIsTDRPending(v5)
    || *(_BYTE *)(v3 + 212)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 208), 0, 0) )
  {
    VidSchiDiscardQueuePacket(this);
    return 3221225473LL;
  }
  else
  {
    v6 = *(unsigned __int16 *)(v4 + 4);
    v7 = *(__int64 **)(v5 + 696);
    if ( (unsigned int)v6 < *(_DWORD *)(v5 + 768) )
      v7 += v6;
    v8 = *v7;
    v9 = ++*(_QWORD *)(v8 + 48);
    *((_QWORD *)this + 15) = v9;
    _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer(this);
    for ( i = *(_QWORD *)(v4 + 24); ; VidSchWaitForCompletionEvent(i, v45, 20LL) )
    {
      *(_QWORD *)(i + 1728) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(i + 1688));
      v11 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(i + 2024), (_QWORD **)(v4 + 16528), 0LL);
      if ( v11 )
        break;
      memset(v45, 0, sizeof(v45));
      v12 = *(unsigned __int16 *)(v4 + 4);
      v45[8] |= 0x41u;
      v45[12] = v12;
      v45[5] = 1;
    }
    v13 = v11 - 2;
    memset(v11 - 2, 0, 0xD0uLL);
    v13[7] = this;
    *(_DWORD *)v13 = 912353622;
    v13[6] = v1;
    v13[8] = *((_QWORD *)this + 36);
    v14 = v13[7];
    v13[10] = MEMORY[0xFFFFF78000000320];
    v15 = *((_DWORD *)v13 + 23);
    *((_DWORD *)v13 + 18) = 7;
    v16 = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(*(_DWORD *)(v14 + 72) >> 3)) & 4;
    *((_DWORD *)v13 + 23) = v16;
    v17 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(*(_DWORD *)(v14 + 72) >> 4)) & 8;
    *((_DWORD *)v13 + 23) = v17;
    v18 = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(*(_DWORD *)(v14 + 72) >> 8)) & 0x100;
    *((_DWORD *)v13 + 23) = v18;
    v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)(4 * *(_DWORD *)(v14 + 72))) & 0x10 | 0x2000;
    *((_DWORD *)v13 + 23) = v19;
    v20 = *((_DWORD *)this + 32) != 0;
    v13[13] = v9;
    v21 = v19 & 0xFFFFBFFF | (v20 ? 0x4000 : 0);
    *((_DWORD *)v13 + 22) = 0;
    v22 = v13[8];
    *((_DWORD *)v13 + 23) = v21;
    *((_DWORD *)v13 + 24) = *((_DWORD *)this + 28);
    if ( v22 )
    {
      v39 = v21 | 2;
      *((_DWORD *)v13 + 23) = v39;
      *((_DWORD *)v13 + 23) = v39 ^ ((unsigned __int8)v39 ^ (unsigned __int8)BYTE1(*((_DWORD *)this + 18))) & 1;
      v13[14] = *(_QWORD *)(v22 + 152);
    }
    v13[22] = *(_QWORD *)(v14 + 320);
    if ( (*(_DWORD *)(v14 + 280) & 0x8000000) != 0 )
    {
      v23 = *(_QWORD *)(v14 + 296);
      if ( v23 )
      {
        v24 = v23 + 16;
      }
      else
      {
        v41 = *(_QWORD *)(v14 + 288);
        if ( v41 )
          v24 = *(_QWORD *)(v41 + 120);
        else
          v24 = 0LL;
      }
      v13[24] = v24;
      *((_DWORD *)v13 + 46) = *(_DWORD *)(v14 + 360);
    }
    else
    {
      v13[24] = 0LL;
    }
    *((_DWORD *)v13 + 38) = 0;
    *((_DWORD *)v13 + 39) = *(_DWORD *)(v14 + 356);
    *((_DWORD *)v13 + 36) = 0;
    *((_DWORD *)v13 + 37) = *(_DWORD *)(v14 + 332);
    v25 = *((_DWORD *)this + 18);
    if ( (v25 & 1) != 0 )
    {
      v43 = *((unsigned int *)this + 99);
      if ( (_DWORD)v43 != -1 && (v25 & 0x40000) == 0 )
      {
        v22 = *(unsigned int *)(*(_QWORD *)(v5 + 8 * v43 + 3448) + 44488LL);
        if ( (_DWORD)v22 != -1 )
        {
          v44 = *(void (__fastcall **)(_QWORD))(v5 + 3304);
          if ( v44 )
            v44(*(_QWORD *)(v5 + 3368));
        }
        *((_DWORD *)v13 + 23) |= 0x800u;
      }
    }
    if ( (*(_DWORD *)(v4 + 12) & 0x10) != 0 )
    {
      v26 = 0LL;
      v22 = 0LL;
      SegmentOffset = 0LL;
      v28 = 0;
      v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13[6] + 104LL) + 48LL) + 8LL) + 64LL);
      if ( v29 )
      {
        v30 = *(const struct VIDMM_PROCESS **)(v29 + 8);
        if ( v30 )
        {
          v31 = *(_QWORD *)(*((_QWORD *)v30 + 4) + 8LL * *(unsigned int *)(*(_QWORD *)(v5 + 16) + 240LL));
          if ( v31 )
          {
            v32 = *(_QWORD *)(v31 + 24);
            if ( v32 )
            {
              v33 = *(unsigned __int16 *)(v4 + 6);
              v34 = 32LL * (unsigned int)v33 + *(_QWORD *)(v32 + 128);
              if ( v34
                && (v35 = *(_QWORD *)v34) != 0
                && (v36 = *(_QWORD *)(v35 + 24)) != 0
                && (*(_DWORD *)(*(_QWORD *)v36 + 56LL) & 1) != 0 )
              {
                v26 = *(_QWORD *)(v34 + 8);
                v28 = *(_DWORD *)(v34 + 16);
                v22 = *(unsigned int *)(v34 + 24);
                SegmentOffset = *(_QWORD *)(v35 + 8);
              }
              else
              {
                WdLogSingleEntry2(1LL, v32, v33);
                WdLogGlobalForLineNumber = 3401;
                DxgkLogInternalTriageEvent(v40, 0x40000LL);
                SegmentOffset = 0LL;
                v28 = 0;
                v22 = 0LL;
              }
            }
          }
          v37 = v13[6];
          if ( *(_QWORD *)(v37 + 824) != v26 && v28 )
          {
            *(_QWORD *)(v37 + 824) = v26;
            v42 = v13[6];
            *(&v46.Address.SegmentId + 1) = 0;
            *(&v46.NumEntries + 1) = 0;
            v46.hContext = *(HANDLE *)(v42 + 64);
            v46.Address.SegmentId = v22;
            v46.Address.SegmentOffset = SegmentOffset;
            v46.NumEntries = v28;
            if ( (*(_DWORD *)(v42 + 112) & 0x1000) == 0 )
            {
              ADAPTER_RENDER::DdiSetRootPageTable(*(ADAPTER_RENDER **)(v5 + 8), &v46);
              SegmentOffset = v46.Address.SegmentOffset;
            }
            v1[104] = SegmentOffset;
            VidMmRecordVaPagingHistorySetPageDirectory(
              *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 8) + 768LL),
              v30,
              &v46,
              v1);
          }
        }
      }
    }
    LOBYTE(v22) = (*(_DWORD *)(v3 + 56) & 0x19) == 0;
    VidSchiSendToExecutionQueueWithWait(v13, v22);
    return 0LL;
  }
}
