/*
 * XREFs of Control_WdfEvtTimerForTransferTimeout @ 0x140038570
 * Callers:
 *     <none>
 * Callees:
 *     TR_QueueDpcForTransferCompletion @ 0x140016E34 (TR_QueueDpcForTransferCompletion.c)
 *     ESM_AddEsmEvent @ 0x14001F8C0 (ESM_AddEsmEvent.c)
 *     WPP_RECORDER_SF_DDi @ 0x140029D24 (WPP_RECORDER_SF_DDi.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall Control_WdfEvtTimerForTransferTimeout(__int64 a1)
{
  char v1; // si
  char v2; // r15
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rcx
  KIRQL v7; // al
  __int64 v8; // rcx
  int v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+30h] [rbp-28h]

  v1 = 0;
  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2568))(WdfDriverGlobals, a1);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         v3,
         off_14006B1F0);
  v5 = *(_QWORD *)(v4 + 360);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = *(_QWORD *)(v4 + 56);
    v10 = *(_DWORD *)(v6 + 152);
    v9 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 143LL);
    WPP_RECORDER_SF_DDi(
      *(_QWORD *)(v6 + 80),
      4u,
      *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 143LL),
      0x29u,
      (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      v9,
      v10,
      *(_QWORD *)(v5 + 24));
  }
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  *(_BYTE *)(v4 + 104) = v7;
  if ( *(_DWORD *)(v5 + 116) == 1 )
  {
    if ( (*(_DWORD *)(v4 + 368) & 8) != 0 )
      v1 = 1;
    else
      v2 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v7);
  if ( v2 )
  {
    v8 = *(_QWORD *)(v4 + 56);
    _m_prefetchw((const void *)(v8 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v8 + 32), 1u) & 1) == 0 )
      ESM_AddEsmEvent(v8);
  }
  *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  if ( *(_DWORD *)(v5 + 116) == 2 && (!v2 || (*(_DWORD *)(v4 + 368) & 0xA) != 0) )
    v1 = 1;
  *(_DWORD *)(v5 + 116) = 3;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
  if ( v1 )
    TR_QueueDpcForTransferCompletion((_QWORD *)v4);
}
