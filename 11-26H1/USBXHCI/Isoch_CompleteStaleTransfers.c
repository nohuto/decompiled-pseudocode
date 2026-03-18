/*
 * XREFs of Isoch_CompleteStaleTransfers @ 0x140014960
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1400145DC (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1400140D0 (StageQueue_ForwardScanGetNextStage.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x140014110 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_Stage_Release @ 0x140028F84 (Isoch_Stage_Release.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x140029130 (Isoch_Stage_FreeScatterGatherList.c)
 *     WPP_RECORDER_SF_DDqD @ 0x14004CBA8 (WPP_RECORDER_SF_DDqD.c)
 */

__int64 **__fastcall Isoch_CompleteStaleTransfers(__int64 a1, __int64 ***a2)
{
  __int64 ****v4; // rdi
  __int64 ***v5; // r14
  __int64 *v6; // rdi
  __int64 **result; // rax
  int v8; // ebp
  __int64 *v9; // rax
  unsigned __int8 *i; // r14
  __int64 **v11; // r15
  __int64 **v12; // rdx
  int v13; // eax
  __int64 **v14; // rax
  __int64 ****v15; // rcx
  _QWORD *v16; // rax
  __int64 *v17; // [rsp+50h] [rbp-38h] BYREF
  __int64 **v18; // [rsp+58h] [rbp-30h]

  v18 = &v17;
  v17 = (__int64 *)&v17;
  v4 = (__int64 ****)(a1 + 392);
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v5 = *v4;
  if ( *v4 != (__int64 ***)v4 )
  {
    while ( 1 )
    {
      if ( v5 == a2 )
        goto LABEL_2;
      v11 = *v5;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = v5[6];
        v13 = *((_DWORD *)v12 + 32);
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_DDqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          (_DWORD)v12,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
          23,
          (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
          (char)v5[3],
          v13);
      }
      v14 = *v5;
      if ( (*v5)[1] != (__int64 *)v5 )
        break;
      v15 = (__int64 ****)v5[1];
      if ( *v15 != v5 )
        break;
      *v15 = (__int64 ***)v14;
      v14[1] = (__int64 *)v15;
      v16 = v18;
      if ( *v18 != (__int64 *)&v17 )
        break;
      v5[1] = v18;
      *v5 = &v17;
      *v16 = v5;
      v18 = (__int64 **)v5;
      v5 = (__int64 ***)v11;
      if ( v11 == (__int64 **)v4 )
        goto LABEL_2;
    }
LABEL_16:
    __fastfail(3u);
  }
LABEL_2:
  while ( 1 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    v6 = v17;
    result = &v17;
    if ( v17 == (__int64 *)&v17 )
      return result;
    v8 = 0;
    if ( (__int64 **)v17[1] != &v17 )
      goto LABEL_16;
    v9 = (__int64 *)*v17;
    if ( *(__int64 **)(*v17 + 8) != v17 )
      goto LABEL_16;
    v17 = (__int64 *)*v17;
    v9[1] = (__int64)&v17;
    v6[1] = (__int64)v6;
    *v6 = (__int64)v6;
    *((_BYTE *)v6 + 133) = *((_BYTE *)v6 + 132);
    *((_BYTE *)v6 + 134) = *((_BYTE *)v6 + 130);
    for ( i = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v6 + 128);
          i;
          i = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v6 + 128) )
    {
      Isoch_Stage_FreeScatterGatherList(a1, i);
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      Isoch_Stage_Release(a1, i);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
      ++v8;
    }
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    Isoch_Transfer_CompleteCancelable(a1, v6, -1, -1, 1, 0);
    *(_DWORD *)(a1 + 384) -= v8;
  }
}
