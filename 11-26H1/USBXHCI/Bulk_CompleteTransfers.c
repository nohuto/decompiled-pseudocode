/*
 * XREFs of Bulk_CompleteTransfers @ 0x14001FAFC
 * Callers:
 *     Bulk_ProcessTransferCompletion @ 0x14001F918 (Bulk_ProcessTransferCompletion.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1400140D0 (StageQueue_ForwardScanGetNextStage.c)
 *     Bulk_Transfer_Complete @ 0x140016FF4 (Bulk_Transfer_Complete.c)
 *     Bulk_Stage_Release @ 0x140018AA8 (Bulk_Stage_Release.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x140029210 (Bulk_Stage_FreeScatterGatherList.c)
 *     TR_ReleaseDoubleBuffer @ 0x140029E80 (TR_ReleaseDoubleBuffer.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1400331F8 (WPP_RECORDER_SF_DDDqd.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

_QWORD **__fastcall Bulk_CompleteTransfers(__int64 a1, __int64 ***a2)
{
  KSPIN_LOCK *v3; // r12
  __int64 **v5; // rbx
  __int64 *v6; // rax
  unsigned __int8 *NextStage; // rsi
  __int64 *v8; // rax
  __int64 v9; // rdx
  int v10; // r8d
  __int64 *v11; // rcx
  int v12; // eax
  __int64 ***v13; // rax
  __int64 ***v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rdx
  __int64 *v18; // rax
  _QWORD **result; // rax
  __int64 **v20; // rbx
  __int64 ***v21; // rax
  int v22; // eax
  __int64 *v23; // rdx
  struct _MDL *v24; // rcx
  __int64 *v25; // r8
  __int64 v26; // rdx
  int v27; // r8d
  _QWORD *v28; // [rsp+50h] [rbp-30h] BYREF
  __int64 **v29; // [rsp+58h] [rbp-28h]
  __int64 v30; // [rsp+60h] [rbp-20h] BYREF
  __int64 *v31; // [rsp+68h] [rbp-18h]
  __int64 *v32; // [rsp+70h] [rbp-10h] BYREF
  __int64 **v33; // [rsp+78h] [rbp-8h]

  v31 = &v30;
  v3 = (KSPIN_LOCK *)(a1 + 96);
  v30 = (__int64)&v30;
  v33 = &v32;
  v32 = (__int64 *)&v32;
  v29 = &v28;
  v28 = &v28;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  while ( 1 )
  {
    v5 = *a2;
    if ( *a2 == (__int64 **)a2 )
      break;
    if ( v5[1] != (__int64 *)a2 )
      goto LABEL_54;
    v6 = *v5;
    if ( (__int64 **)(*v5)[1] != v5 )
      goto LABEL_54;
    *a2 = (__int64 **)v6;
    v6[1] = (__int64)a2;
    *((_BYTE *)v5 + 133) = *((_BYTE *)v5 + 132);
    *((_BYTE *)v5 + 134) = *((_BYTE *)v5 + 130);
    v5[1] = (__int64 *)v5;
    *v5 = (__int64 *)v5;
    while ( 1 )
    {
      NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v5 + 128);
      if ( !NextStage )
        break;
      KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 104));
      Bulk_Stage_FreeScatterGatherList(a1, NextStage);
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v3);
      Bulk_Stage_Release(a1, (__int64)NextStage);
      ++*((_DWORD *)v5 + 29);
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 1004LL) == 1 )
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 356));
      else
        --*(_DWORD *)(a1 + 356);
    }
    if ( *((_DWORD *)v5 + 16) == 3 )
    {
      v8 = v31;
      if ( (__int64 *)*v31 != &v30 )
        goto LABEL_54;
      v5[1] = v31;
      *v5 = &v30;
      *v8 = (__int64)v5;
      v31 = (__int64 *)v5;
    }
    else if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01033 + 2048))(
                WdfDriverGlobals,
                v5[3]) >= 0 )
    {
      v12 = *((_DWORD *)v5 + 17);
      *((_DWORD *)v5 + 16) = 0;
      if ( v12 == 1 || v12 == 28 )
      {
        v14 = (__int64 ***)v33;
        if ( *v33 != (__int64 *)&v32 )
          goto LABEL_54;
        v5[1] = (__int64 *)v33;
        *v5 = (__int64 *)&v32;
        *v14 = v5;
        v33 = v5;
      }
      else
      {
        v13 = (__int64 ***)v29;
        if ( *v29 != (__int64 *)&v28 )
          goto LABEL_54;
        v5[1] = (__int64 *)v29;
        *v5 = (__int64 *)&v28;
        *v13 = v5;
        v29 = v5;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = *(_QWORD *)(a1 + 48);
        v10 = *(unsigned __int8 *)(v9 + 143);
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v9, v10, 14);
      }
      *((_DWORD *)v5 + 16) = 2;
      v11 = *(__int64 **)(a1 + 400);
      if ( *v11 != a1 + 392 )
LABEL_54:
        __fastfail(3u);
      *v5 = (__int64 *)(a1 + 392);
      v5[1] = v11;
      *v11 = (__int64)v5;
      *(_QWORD *)(a1 + 400) = v5;
    }
  }
  KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 104));
  while ( 1 )
  {
    v15 = v30;
    if ( (__int64 *)v30 == &v30 )
      break;
    if ( *(__int64 **)(v30 + 8) != &v30 )
      goto LABEL_54;
    v16 = *(_QWORD *)v30;
    if ( *(_QWORD *)(*(_QWORD *)v30 + 8LL) != v30 )
      goto LABEL_54;
    v30 = *(_QWORD *)v30;
    *(_QWORD *)(v16 + 8) = &v30;
    *(_QWORD *)(v15 + 8) = v15;
    *(_QWORD *)v15 = v15;
    if ( *(_DWORD *)(a1 + 64) && !*(_DWORD *)(v15 + 68) )
      *(_DWORD *)(v15 + 68) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 144LL) + 24LL);
    Bulk_Transfer_Complete(a1, v15);
  }
  while ( 1 )
  {
    v17 = v32;
    if ( v32 == (__int64 *)&v32 )
      break;
    if ( (__int64 **)v32[1] != &v32 )
      goto LABEL_54;
    v18 = (__int64 *)*v32;
    if ( *(__int64 **)(*v32 + 8) != v32 )
      goto LABEL_54;
    v32 = (__int64 *)*v32;
    v18[1] = (__int64)&v32;
    v17[1] = (__int64)v17;
    *v17 = (__int64)v17;
    Bulk_Transfer_Complete(a1, (__int64)v17);
  }
  while ( 1 )
  {
    result = &v28;
    if ( v28 == &v28 )
      return result;
    v20 = v29;
    if ( *v29 != (__int64 *)&v28 )
      goto LABEL_54;
    v21 = (__int64 ***)v29[1];
    if ( *v21 != v29 )
      goto LABEL_54;
    v29 = (__int64 **)v29[1];
    *v21 = &v28;
    v22 = *((_DWORD *)v20 + 27);
    v20[1] = (__int64 *)v20;
    *v20 = (__int64 *)v20;
    v23 = v20[12];
    *((_DWORD *)v20 + 28) = v22;
    if ( v23 )
    {
      TR_ReleaseDoubleBuffer(a1);
      v20[12] = 0LL;
    }
    v24 = (struct _MDL *)v20[10];
    if ( v24 )
    {
      if ( (v25 = v20[6], *((_WORD *)v25 + 1) != 8)
        && *((_WORD *)v25 + 1) != 9
        && *((_WORD *)v25 + 1) != 10
        && *((_WORD *)v25 + 1) != 50
        && *((_WORD *)v25 + 1) != 55
        && *((_WORD *)v25 + 1) != 56
        && (unsigned int)*((unsigned __int16 *)v25 + 1) - 57 < 2
        || v24 != (struct _MDL *)v25[6] )
      {
        if ( v24 != (struct _MDL *)v20[7][15] )
        {
          IoFreeMdl(v24);
          v20[10] = 0LL;
        }
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01033 + 2264))(WdfDriverGlobals, v20[3]);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = *(_QWORD *)(a1 + 48);
      v27 = *(unsigned __int8 *)(v26 + 143);
      LOBYTE(v26) = 4;
      WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v26, v27, 15);
    }
  }
}
