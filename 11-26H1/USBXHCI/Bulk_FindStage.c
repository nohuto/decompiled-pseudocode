/*
 * XREFs of Bulk_FindStage @ 0x140023C2C
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x140022EF0 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x140023810 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessStreamOnEndpointStopOrHalt @ 0x14003105C (Bulk_ProcessStreamOnEndpointStopOrHalt.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1400140D0 (StageQueue_ForwardScanGetNextStage.c)
 *     Bulk_DoesStageContainDequeuePointer @ 0x140015F8C (Bulk_DoesStageContainDequeuePointer.c)
 *     WPP_RECORDER_SF_ddL @ 0x1400274BC (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x1400281F0 (WPP_RECORDER_SF_DDDqq.c)
 */

char __fastcall Bulk_FindStage(__int64 a1, signed __int64 a2, __int64 *a3, _DWORD *a4)
{
  char v5; // si
  signed __int32 v7; // ebp
  unsigned __int8 *v8; // r15
  __int64 v9; // rcx
  int v10; // edx
  int v11; // edx
  __int64 *v12; // r14
  int v13; // r8d
  unsigned __int8 *NextStage; // rax
  int v15; // edx

  v5 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL) + 16LL * *(unsigned int *)(a1 + 192);
  if ( !a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v10,
        14,
        49,
        (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
        *(_DWORD *)(a1 + 64));
    }
    goto LABEL_22;
  }
  if ( a2 == v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v11,
        14,
        50,
        (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
        *(_DWORD *)(a1 + 64));
    }
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 1004LL) == 1 )
    {
      _m_prefetchw((const void *)(a1 + 356));
      v7 = _InterlockedOr((volatile signed __int32 *)(a1 + 356), 0);
    }
    else
    {
      v7 = *(_DWORD *)(a1 + 356);
    }
LABEL_21:
    v5 = 1;
    goto LABEL_22;
  }
  v12 = *(__int64 **)(a1 + 376);
LABEL_16:
  if ( (__int64 *)(a1 + 376) != v12 )
  {
    *((_BYTE *)v12 + 133) = *((_BYTE *)v12 + 132);
    *((_BYTE *)v12 + 134) = *((_BYTE *)v12 + 130);
    while ( 1 )
    {
      NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v12 + 128);
      v8 = NextStage;
      if ( !NextStage )
      {
        v12 = (__int64 *)*v12;
        goto LABEL_16;
      }
      if ( Bulk_DoesStageContainDequeuePointer((__int64)NextStage, a2) )
        break;
      ++v7;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v15 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
      LOBYTE(v15) = 5;
      WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v15, v13, 51);
    }
    goto LABEL_21;
  }
LABEL_22:
  *a3 = (unsigned __int64)v8 & -(__int64)(v5 != 0);
  *a4 = v5 != 0 ? v7 : 0;
  return v5;
}
