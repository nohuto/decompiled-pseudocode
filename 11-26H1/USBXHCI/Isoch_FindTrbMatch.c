/*
 * XREFs of Isoch_FindTrbMatch @ 0x1400154F0
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1400145DC (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1400140D0 (StageQueue_ForwardScanGetNextStage.c)
 *     Isoch_DoesStageContainDequeuePointer @ 0x140015740 (Isoch_DoesStageContainDequeuePointer.c)
 *     Isoch_CalculateBytesTransferred @ 0x140015A8C (Isoch_CalculateBytesTransferred.c)
 *     WPP_RECORDER_SF_DDqq @ 0x140021AF0 (WPP_RECORDER_SF_DDqq.c)
 */

char __fastcall Isoch_FindTrbMatch(__int64 a1, __int64 *a2, __int64 *a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v5; // r12
  char v7; // bl
  int v8; // r13d
  int v9; // r14d
  unsigned __int8 *v10; // rbp
  __int64 v11; // rcx
  __int64 *v12; // rsi
  unsigned __int8 *NextStage; // rax
  int v14; // r8d
  char result; // al
  int v16; // edx

  v5 = *a2;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL) + 16LL * *(unsigned int *)(a1 + 192);
  if ( *a2 )
  {
    if ( v5 == v11 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          4u,
          0xEu,
          0x24u,
          (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL));
      v9 = *(_DWORD *)(a1 + 384);
    }
    else
    {
      v12 = *(__int64 **)(a1 + 392);
LABEL_4:
      if ( (__int64 *)(a1 + 392) == v12 )
      {
        v8 = 0;
        goto LABEL_13;
      }
      *((_BYTE *)v12 + 133) = *((_BYTE *)v12 + 132);
      *((_BYTE *)v12 + 134) = *((_BYTE *)v12 + 130);
      while ( 1 )
      {
        NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v12 + 128);
        v10 = NextStage;
        if ( !NextStage )
        {
          v12 = (__int64 *)*v12;
          goto LABEL_4;
        }
        if ( (unsigned __int8)Isoch_DoesStageContainDequeuePointer(NextStage, v5) )
          break;
        ++v9;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v16 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
        LOBYTE(v16) = 5;
        WPP_RECORDER_SF_DDqq(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v16,
          v14,
          37,
          (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
          v12[3],
          (char)v10);
      }
      v8 = Isoch_CalculateBytesTransferred(a1, v10, a2);
    }
    v7 = 1;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      2u,
      0xEu,
      0x23u,
      (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL));
  }
LABEL_13:
  *a3 = (unsigned __int64)v10 & -(__int64)(v7 != 0);
  *a4 = v7 != 0 ? v9 : 0;
  result = v7;
  *a5 = v7 != 0 ? v8 : 0;
  return result;
}
