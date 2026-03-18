/*
 * XREFs of VidSchiUpdateContextStatus @ 0x140020F00
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x140007690 (VidSchSuspendResumeDevice.c)
 *     VidSchiCompleteRewindPacket @ 0x14000BE70 (VidSchiCompleteRewindPacket.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x14000C1D0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x14000D880 (VidSchiSubmitWaitCommand.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUnwaitContext @ 0x14001FB00 (VidSchiUnwaitContext.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x14001FF9C (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiSwitchContextWithCheck @ 0x1400202A8 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiProcessFlipPendingContextList @ 0x140020700 (VidSchiProcessFlipPendingContextList.c)
 *     VidSchiInsertCommandToSoftwareQueue @ 0x140020A30 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiScheduleCommandToRun @ 0x140021700 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSendToExecutionQueue @ 0x1400224B0 (VidSchiSendToExecutionQueue.c)
 *     VidSchiReadCommandFromContextQueue @ 0x140024CE0 (VidSchiReadCommandFromContextQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x140027C1C (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x140028570 (VidSchiProcessDpcSystemRequest.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x140035CE0 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x140038690 (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchSetNodePowerState @ 0x140043D00 (VidSchSetNodePowerState.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140012AD0 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x14002B678 (McTemplateK0piixqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiUpdateContextStatus(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  unsigned int v5; // r14d
  int v6; // r15d
  __int64 v9; // r13
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rsi
  _QWORD *v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  signed __int32 v19; // eax
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  unsigned int v26; // ecx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  _QWORD *v30; // rcx
  _QWORD *v31; // rcx
  _QWORD *v32; // rcx
  int v33; // eax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r9
  void (__fastcall *v38)(_QWORD); // rax
  void (__fastcall *v39)(_QWORD); // rax
  _QWORD *v40; // rcx
  __int64 v41; // rcx
  unsigned int v42; // r12d
  __int64 *v43; // rsi
  _QWORD *v44; // rcx
  void (__fastcall *v45)(_QWORD, _QWORD); // rax
  int v46; // [rsp+A0h] [rbp+18h]

  v46 = a3;
  v4 = *(_QWORD *)(a1 + 96);
  v5 = 0;
  v6 = a3;
  v9 = *(_QWORD *)(v4 + 24);
  if ( (byte_14008A201 & 4) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(a1, &EventUpdateContextStatus, a3);
  if ( a2 == 5 )
  {
    if ( (*(_DWORD *)(a1 + 192) & 8) == 0
      && (*(_DWORD *)(a1 + 192) & 4) == 0
      && (*(_DWORD *)(a1 + 192) & 0x10) == 0
      && (*(_DWORD *)(a1 + 192) & 0x40) == 0
      && (*(_DWORD *)(a1 + 192) & 0x200) == 0
      && (*(_DWORD *)(a1 + 192) & 0x100) == 0
      && (*(_DWORD *)(a1 + 192) & 0x80u) == 0
      && (*(_DWORD *)(a1 + 192) & 0x20) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 192) & 1) != 0 )
        goto LABEL_59;
      v13 = *(_QWORD *)(a1 + 8);
      v14 = (_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v13 + 8) != a1 + 8 )
        goto LABEL_9;
      v15 = *(_QWORD **)(a1 + 16);
      if ( (_QWORD *)*v15 != v14 )
        goto LABEL_9;
      *v15 = v13;
      *(_QWORD *)(v13 + 8) = v15;
      v16 = *(_DWORD *)(a1 + 412);
      v17 = *(_QWORD *)(v4 + 24);
      if ( *(_QWORD *)(v4 + 16LL * v16 + 2184) == v4 + 16LL * v16 + 2184 )
      {
        v18 = *(unsigned __int16 *)(v4 + 4);
        *(_DWORD *)(v4 + 1888) |= 1 << v16;
        if ( !_bittest64(*(const signed __int64 **)(v17 + 560), v18)
          && ((-1 << *(_DWORD *)(a1 + 412)) & *(_DWORD *)(v4 + 1892)) == 0
          && !*(_DWORD *)(v4 + 3028) )
        {
          RtlSetBitEx(v17 + 552, v18);
        }
      }
      if ( !*(_DWORD *)(v4 + 3004) )
      {
        if ( (unsigned __int8)RtlAreBitsClearEx(v9 + 504, 0LL, *(unsigned int *)(v9 + 92))
          && *(_DWORD *)(*(_QWORD *)(v9 + 16) + 160LL) == 1 )
        {
          if ( *(_DWORD *)(v4 + 16520) != -1 )
          {
            v38 = *(void (__fastcall **)(_QWORD))(v9 + 3328);
            if ( v38 )
              v38(*(_QWORD *)(v9 + 3368));
          }
          if ( *(_DWORD *)(v4 + 16520) != -1 )
          {
            v39 = *(void (__fastcall **)(_QWORD))(v9 + 3336);
            if ( v39 )
              v39(*(_QWORD *)(v9 + 3368));
          }
        }
        RtlSetBitEx(v9 + 504, *(unsigned __int16 *)(v4 + 4));
        v6 = v46;
      }
      ++*(_DWORD *)(v4 + 3004);
      *(_DWORD *)(a1 + 192) |= 1u;
      v19 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 444), 0, 0);
      v20 = (_QWORD *)(v4 + 16LL * *(unsigned int *)(a1 + 412) + 2184);
      if ( v19 == 1 )
      {
        v35 = *v20;
        if ( *(_QWORD **)(*v20 + 8LL) != v20 )
          goto LABEL_9;
        *v14 = v35;
        *(_QWORD *)(a1 + 16) = v20;
        *(_QWORD *)(v35 + 8) = v14;
        *v20 = v14;
      }
      else
      {
        v21 = (_QWORD *)v20[1];
        if ( (_QWORD *)*v21 != v20 )
          goto LABEL_9;
        *v14 = v20;
        *(_QWORD *)(a1 + 16) = v21;
        *v21 = v14;
        v20[1] = v14;
      }
      if ( *(_DWORD *)(a1 + 416) == 1 )
      {
        v22 = (_QWORD *)(a1 + 424);
        v23 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 48LL) + 32LL)
                                   + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 4LL))
                       + 216LL);
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 444), 0, 0) == 1 )
        {
          v36 = *v23;
          if ( *(_QWORD **)(*v23 + 8LL) == v23 )
          {
            *v22 = v36;
            v5 = 1;
            *(_QWORD *)(a1 + 432) = v23;
            *(_QWORD *)(v36 + 8) = v22;
            *v23 = v22;
            goto LABEL_59;
          }
          goto LABEL_9;
        }
        v24 = (_QWORD *)v23[1];
        if ( (_QWORD *)*v24 != v23 )
          goto LABEL_9;
        *v22 = v23;
        *(_QWORD *)(a1 + 432) = v24;
        *v24 = v22;
        v23[1] = v22;
      }
      v5 = 1;
      goto LABEL_59;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 1024LL, v9, v4, a1);
    WdLogGlobalForLineNumber = 916;
LABEL_51:
    *(_DWORD *)(a1 + 192) |= 0x80u;
    v31 = *(_QWORD **)(v4 + 2736);
    if ( *v31 == v4 + 2728 )
    {
      *v3 = v4 + 2728;
      v3[1] = v31;
      *v31 = v3;
      *(_QWORD *)(v4 + 2736) = v3;
      goto LABEL_59;
    }
    goto LABEL_9;
  }
  v10 = *(_QWORD *)(a1 + 8);
  v3 = (_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v10 + 8) != a1 + 8 )
    goto LABEL_9;
  v11 = *(_QWORD **)(a1 + 16);
  if ( (_QWORD *)*v11 != v3 )
    goto LABEL_9;
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  if ( (*(_DWORD *)(a1 + 192) & 1) != 0 )
  {
    if ( (*(_DWORD *)(v4 + 3004))-- == 1 )
      RtlClearBitEx(v9 + 504, *(unsigned __int16 *)(v4 + 4));
    v26 = *(_DWORD *)(a1 + 412);
    if ( *(_QWORD *)(v4 + 16LL * v26 + 2184) == v4 + 16LL * v26 + 2184 )
      *(_DWORD *)(v4 + 1888) &= ~(1 << v26);
    if ( *(_DWORD *)(a1 + 416) == 1 )
    {
      v27 = (_QWORD *)(a1 + 424);
      v28 = *(_QWORD *)(a1 + 424);
      if ( *(_QWORD *)(v28 + 8) != a1 + 424 )
        goto LABEL_9;
      v29 = *(_QWORD **)(a1 + 432);
      if ( (_QWORD *)*v29 != v27 )
        goto LABEL_9;
      *v29 = v28;
      *(_QWORD *)(v28 + 8) = v29;
      *(_QWORD *)(a1 + 432) = 0LL;
      *v27 = 0LL;
    }
    *(_DWORD *)(a1 + 192) &= ~1u;
  }
  if ( a2 )
  {
    if ( a2 != 8 )
    {
      switch ( a2 )
      {
        case 9:
          v44 = *(_QWORD **)(v4 + 2752);
          if ( *v44 == v4 + 2744 )
          {
            *v3 = v4 + 2744;
            *(_QWORD *)(a1 + 16) = v44;
            *v44 = v3;
            *(_QWORD *)(v4 + 2752) = v3;
            if ( !*(_BYTE *)(*(_QWORD *)(a1 + 104) + 1657LL) )
            {
              KeResetEvent((PRKEVENT)(v9 + 3232));
              *(_BYTE *)(*(_QWORD *)(a1 + 104) + 1657LL) = 1;
            }
            *(_DWORD *)(a1 + 192) |= 0x200u;
            ++*(_DWORD *)(*(_QWORD *)(a1 + 104) + 1660LL);
            goto LABEL_59;
          }
          break;
        case 10:
          v40 = *(_QWORD **)(v4 + 2752);
          if ( *v40 == v4 + 2744 )
          {
            *(_QWORD *)(a1 + 16) = v40;
            *v3 = v4 + 2744;
            *v40 = v3;
            v41 = a1 + 104;
            *(_QWORD *)(v4 + 2752) = v3;
            if ( (*(_DWORD *)(a1 + 192) & 0x200) != 0 )
            {
              --*(_DWORD *)(*(_QWORD *)v41 + 1660LL);
              *(_DWORD *)(a1 + 192) &= ~0x200u;
            }
            *(_DWORD *)(a1 + 192) |= 0x100u;
            *(_DWORD *)(a1 + 192) &= ~0x80u;
            v42 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 16520LL);
            if ( v42 != -1 )
            {
              v43 = *(__int64 **)(a1 + 672);
              if ( v43 != (__int64 *)(a1 + 672) )
              {
                do
                {
                  if ( (v43[6] & 0x10) != 0 )
                  {
                    v45 = *(void (__fastcall **)(_QWORD, _QWORD))(v9 + 3336);
                    if ( v45 )
                      v45(*(_QWORD *)(v9 + 3368), v42);
                    *((_DWORD *)v43 + 12) &= ~0x10u;
                  }
                  v43 = (__int64 *)*v43;
                }
                while ( v43 != (__int64 *)(a1 + 672) );
                v41 = a1 + 104;
              }
              v6 = v46;
            }
            if ( !*(_DWORD *)(*(_QWORD *)v41 + 1660LL) )
            {
              *(_BYTE *)(*(_QWORD *)v41 + 1656LL) = 1;
              *(_BYTE *)(*(_QWORD *)v41 + 1657LL) = 0;
              KeSetEvent((PRKEVENT)(v9 + 3232), 0, 0);
            }
            goto LABEL_59;
          }
          break;
        case 1:
          v30 = *(_QWORD **)(v4 + 2720);
          if ( *v30 == v4 + 2712 )
          {
            *v3 = v4 + 2712;
            *(_QWORD *)(a1 + 16) = v30;
            *v30 = v3;
            *(_QWORD *)(v4 + 2720) = v3;
            goto LABEL_59;
          }
          break;
        default:
          v32 = *(_QWORD **)(v4 + 2704);
          if ( *v32 == v4 + 2696 )
          {
            *v3 = v4 + 2696;
            *(_QWORD *)(a1 + 16) = v32;
            *v32 = v3;
            *(_QWORD *)(v4 + 2704) = v3;
            switch ( a2 )
            {
              case 2:
                v33 = *(_DWORD *)(a1 + 192) | 8;
                break;
              case 3:
                v33 = *(_DWORD *)(a1 + 192) | 0x10;
                break;
              case 4:
                v33 = *(_DWORD *)(a1 + 192) | 0x20;
                break;
              case 7:
                v33 = *(_DWORD *)(a1 + 192) | 0x40;
                break;
              default:
                goto LABEL_59;
            }
            *(_DWORD *)(a1 + 192) = v33;
            goto LABEL_59;
          }
          break;
      }
LABEL_9:
      __fastfail(3u);
    }
    goto LABEL_51;
  }
  v12 = *(_QWORD **)(v4 + 2720);
  if ( *v12 != v4 + 2712 )
    goto LABEL_9;
  *v3 = v4 + 2712;
  *(_QWORD *)(a1 + 16) = v12;
  *v12 = v3;
  *(_QWORD *)(v4 + 2720) = v3;
  *(_DWORD *)(a1 + 192) = 0;
LABEL_59:
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 324) + 196) = a2;
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 324) + 200) = v6;
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 324) + 204) = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a1 + 16 * (*(unsigned int *)(a1 + 324) + 13LL)) = *(_DWORD *)(a1 + 788);
  *(_DWORD *)(a1 + 324) = ((unsigned __int8)*(_DWORD *)(a1 + 324) + 1) & 7;
  if ( (byte_14008A201 & 2) != 0 )
  {
    v37 = *(_QWORD *)(a1 + 56);
    if ( !v37 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      LODWORD(v37) = a1;
    McTemplateK0piixqq_EtwWriteTransfer(
      *(_DWORD *)(a1 + 444),
      *(_QWORD *)(v4 + 2136),
      *(_QWORD *)(a1 + 448),
      v37,
      *(_QWORD *)(a1 + 456),
      *(_QWORD *)(a1 + 448),
      *(_QWORD *)(v4 + 2136),
      *(_DWORD *)(a1 + 444),
      3);
  }
  return v5;
}
