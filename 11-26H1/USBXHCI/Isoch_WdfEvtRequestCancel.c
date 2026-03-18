/*
 * XREFs of Isoch_WdfEvtRequestCancel @ 0x1400354D0
 * Callers:
 *     <none>
 * Callees:
 *     TR_QueueDpcForTransferCompletion @ 0x140016E34 (TR_QueueDpcForTransferCompletion.c)
 *     ESM_AddEsmEvent @ 0x14001F8C0 (ESM_AddEsmEvent.c)
 *     WPP_RECORDER_SF_DDi @ 0x140029D24 (WPP_RECORDER_SF_DDi.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall Isoch_WdfEvtRequestCancel(__int64 a1)
{
  char v2; // bp
  char v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rbx
  KIRQL v6; // al
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 *v13; // rcx

  v2 = 0;
  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006AE88);
  v5 = *(_QWORD *)(v4 + 56);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDi(
      *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
      4u,
      *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 143LL),
      0x34u,
      (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 143LL),
      *(_DWORD *)(*(_QWORD *)(v5 + 56) + 152LL),
      a1);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  *(_BYTE *)(v5 + 104) = v6;
  if ( *(_DWORD *)(v4 + 64) == 1 )
  {
    v7 = *(_DWORD *)(v5 + 336);
    if ( (v7 & 2) != 0 )
    {
      v8 = v5 + 392;
      v9 = *(_QWORD *)(v5 + 392);
      if ( v9 != v5 + 392 )
      {
        **(_QWORD **)(v5 + 432) = v9;
        *(_QWORD *)(*(_QWORD *)v8 + 8LL) = *(_QWORD *)(v5 + 432);
        **(_QWORD **)(v5 + 400) = v5 + 424;
        *(_QWORD *)(v5 + 432) = *(_QWORD *)(v5 + 400);
        *(_QWORD *)(v5 + 400) = v5 + 392;
        *(_QWORD *)v8 = v8;
        v6 = *(_BYTE *)(v5 + 104);
      }
      v2 = 1;
    }
    else
    {
      v3 = 1;
      *(_DWORD *)(v5 + 336) = v7 | 4;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), v6);
  if ( v3 )
  {
    v10 = *(_QWORD *)(v5 + 56);
    _m_prefetchw((const void *)(v10 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v10 + 32), 1u) & 1) == 0 )
      ESM_AddEsmEvent(v10);
  }
  *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  if ( *(_DWORD *)(v4 + 64) == 2 )
  {
    v11 = *(_QWORD *)v4;
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4
      || (v12 = *(_QWORD **)(v4 + 8), *v12 != v4)
      || (*v12 = v11, *(_QWORD *)(v11 + 8) = v12, v13 = *(__int64 **)(v5 + 432), *v13 != v5 + 424) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v4 = v5 + 424;
    v2 = 1;
    *(_QWORD *)(v4 + 8) = v13;
    *v13 = v4;
    *(_QWORD *)(v5 + 432) = v4;
  }
  *(_DWORD *)(v4 + 64) = 3;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
  if ( v2 )
    TR_QueueDpcForTransferCompletion((_QWORD *)v5);
}
