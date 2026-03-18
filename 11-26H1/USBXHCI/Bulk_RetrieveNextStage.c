/*
 * XREFs of Bulk_RetrieveNextStage @ 0x14003B040
 * Callers:
 *     Bulk_MappingLoop @ 0x14003ADD0 (Bulk_MappingLoop.c)
 * Callees:
 *     Bulk_TransferData_DetermineTransferMechanism @ 0x140004180 (Bulk_TransferData_DetermineTransferMechanism.c)
 *     Bulk_TransferData_Initialize @ 0x14000EB10 (Bulk_TransferData_Initialize.c)
 *     Bulk_Transfer_Complete @ 0x140016FF4 (Bulk_Transfer_Complete.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x140018350 (Bulk_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDDq @ 0x14001E9D4 (WPP_RECORDER_SF_DDDq.c)
 *     WPP_RECORDER_SF_DDDD @ 0x140024070 (WPP_RECORDER_SF_DDDD.c)
 *     Bulk_TransferData_ConfigureBuffer @ 0x140027240 (Bulk_TransferData_ConfigureBuffer.c)
 *     Bulk_Stage_Acquire @ 0x140027D60 (Bulk_Stage_Acquire.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x1400281F0 (WPP_RECORDER_SF_DDDqq.c)
 *     TR_ValidateSecureTransferType @ 0x140029BF0 (TR_ValidateSecureTransferType.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1400331F8 (WPP_RECORDER_SF_DDDqd.c)
 *     WPP_RECORDER_SF_DDDd @ 0x14004BFD0 (WPP_RECORDER_SF_DDDd.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

_BOOL8 __fastcall Bulk_RetrieveNextStage(__int64 a1)
{
  __int16 v1; // r12
  int v3; // esi
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  int v6; // r8d
  unsigned __int16 v7; // r9
  _QWORD *v8; // r15
  _DWORD *v9; // r11
  unsigned int v10; // ecx
  int v11; // r8d
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // r8d
  int v17; // r8d
  __int64 v18; // rax
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 *v23; // rax
  int v24; // edx
  __int64 v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+80h] [rbp+8h] BYREF

  v1 = 0;
  *(_QWORD *)(a1 + 368) = 0LL;
  v3 = 0;
  v27 = 0LL;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 1004LL) == 1 )
  {
    _m_prefetchw((const void *)(a1 + 356));
    v4 = *(_DWORD *)(a1 + 356);
    do
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 356), v4, v4);
    }
    while ( v5 != v4 );
    v6 = *(_DWORD *)(a1 + 352);
    if ( v4 == v6 )
    {
      v3 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_9;
      v7 = 20;
      goto LABEL_8;
    }
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 352);
    if ( *(_DWORD *)(a1 + 356) == v6 )
    {
      v3 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_9;
      v7 = 21;
LABEL_8:
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        5u,
        0xEu,
        v7,
        (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
        *(_DWORD *)(a1 + 64),
        v6);
LABEL_9:
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
      return v3 >= 0;
    }
  }
  v8 = (_QWORD *)(a1 + 376);
  if ( (_QWORD *)*v8 != v8 )
  {
    v9 = *(_DWORD **)(a1 + 384);
    v10 = v9[26];
    if ( v9[28] < v10 )
    {
      if ( *(_DWORD *)(a1 + 340) != 3 )
      {
        v13 = Bulk_Stage_Acquire(*(_QWORD *)(a1 + 384));
        *(_QWORD *)(a1 + 368) = v13;
        if ( v13 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_DDDqq(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              4u,
              *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
              0x16u,
              v26);
        }
        else
        {
          v3 = -1073741823;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_DDDq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), 5u, v14, 0x17u, v26);
          }
        }
        goto LABEL_9;
      }
      if ( v9[30] != v9[29] )
      {
        v9[28] = v10;
        goto LABEL_9;
      }
      Bulk_Transfer_CompleteCancelable(a1, *(__int64 **)(a1 + 384), -1073737728, 1);
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  while ( 1 )
  {
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01033 + 1264))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 72),
           &v27);
    if ( v3 < 0 )
      break;
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            v27,
            off_14006AE88);
    Bulk_TransferData_Initialize(a1, v12, v27);
    if ( (int)TR_ValidateSecureTransferType(a1, *(_QWORD *)(v12 + 48)) < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDqd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          2u,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
          0x19u,
          v26);
      goto LABEL_24;
    }
    Bulk_TransferData_DetermineTransferMechanism(v12);
    if ( (int)Bulk_TransferData_ConfigureBuffer(v12) >= 0 )
    {
      v15 = *(_QWORD *)(v12 + 24);
      *(_DWORD *)(v12 + 64) = 1;
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void (__fastcall *)(__int64)))(WdfFunctions_01033
                                                                                                 + 3144))(
             WdfDriverGlobals,
             v15,
             Bulk_WdfEvtRequestCancel);
      if ( v3 >= 0 )
      {
        *(_QWORD *)(a1 + 368) = Bulk_Stage_Acquire(v12);
        v18 = *(_QWORD *)(a1 + 40);
        if ( *(_BYTE *)(v18 + 1004) == 1 )
        {
          _m_prefetchw((const void *)(a1 + 356));
          v19 = *(_DWORD *)(a1 + 356);
          do
          {
            v20 = v19;
            v19 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 356), v19, v19);
          }
          while ( v20 != v19 );
          if ( !v19 )
          {
            v18 = *(_QWORD *)(a1 + 40);
LABEL_46:
            v21 = *(_QWORD *)(v18 + 128);
            if ( *(_DWORD *)(v21 + 24) > 1u )
            {
              v22 = *(unsigned int *)(*(_QWORD *)(v12 + 48) + 64LL);
              if ( (unsigned int)v22 < *(_DWORD *)(v21 + 48) )
                v1 = *(_WORD *)(*(_QWORD *)(v21 + 56) + 2 * v22);
            }
            *(_WORD *)(a1 + 112) = v1;
          }
        }
        else if ( !*(_DWORD *)(a1 + 356) )
        {
          goto LABEL_46;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), 4u, v17, 0x1Cu, v26);
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
        v23 = *(__int64 **)(a1 + 384);
        if ( (_QWORD *)*v23 != v8 )
          __fastfail(3u);
        *(_QWORD *)v12 = v8;
        *(_QWORD *)(v12 + 8) = v23;
        *v23 = v12;
        *(_QWORD *)(a1 + 384) = v12;
        goto LABEL_9;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), 3u, v16, 0x1Bu, v26);
      *(_DWORD *)(v12 + 64) = 3;
      Bulk_Transfer_Complete(a1, v12);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDqd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          3u,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
          0x1Au,
          v26);
LABEL_24:
      Bulk_Transfer_Complete(a1, v12);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v24 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
    LOBYTE(v24) = 5;
    WPP_RECORDER_SF_DDDd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v24,
      v11,
      24,
      (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
      *(_DWORD *)(a1 + 64),
      v3);
  }
  return v3 >= 0;
}
