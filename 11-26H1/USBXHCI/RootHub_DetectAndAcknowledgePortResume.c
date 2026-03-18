/*
 * XREFs of RootHub_DetectAndAcknowledgePortResume @ 0x140008BE4
 * Callers:
 *     RootHub_HandlePortStatusChangeEvent @ 0x1400089F4 (RootHub_HandlePortStatusChangeEvent.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1400444D0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     RootHub_WdfEvtTimerPortOperationPendingTimerDpc @ 0x14004B6B0 (RootHub_WdfEvtTimerPortOperationPendingTimerDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_dDd @ 0x140007430 (WPP_RECORDER_SF_dDd.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     XilRegister_WriteUlong @ 0x140008FA4 (XilRegister_WriteUlong.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     DynamicLock_Acquire @ 0x14000D6C0 (DynamicLock_Acquire.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x14000D784 (RootHub_ReleaseReadModifyWriteLock.c)
 *     DynamicLock_Release @ 0x14000D7D0 (DynamicLock_Release.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     WPP_RECORDER_SF_dD @ 0x14002CC88 (WPP_RECORDER_SF_dD.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x140034CC8 (RootHub_RestoreU1U2Timeouts.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

char __fastcall RootHub_DetectAndAcknowledgePortResume(_QWORD *a1, unsigned int a2, char a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v6; // rsi
  char v8; // r12
  __int64 v9; // r15
  char v10; // bp
  __int64 v11; // rcx
  __int64 v12; // rbx
  int Ulong; // eax
  int v14; // edx
  int v15; // ebx
  __int64 v16; // rcx
  char v17; // bl
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int16 v23; // r15
  unsigned int v24; // ebx
  char v25; // al
  int v26; // edx
  int v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+80h] [rbp+8h]

  v3 = a2 - 1;
  v4 = a1[6];
  v6 = 120 * v3;
  v8 = 0;
  v9 = a1[5] + 16 * v3;
  v10 = 0;
  v28 = *(_QWORD *)(a1[1] + 88LL);
  if ( KeGetCurrentIrql() == 2 )
  {
    v11 = a1[1];
    if ( *(_BYTE *)(v11 + 1001) )
    {
      Controller_LowerAndTrackIrql(v11);
      v10 = 1;
    }
  }
  v12 = a1[6];
  DynamicLock_Acquire(*(_QWORD *)(v12 + v6 + 24));
  *(_BYTE *)(v12 + v6 + 32) = v10;
  Ulong = XilRegister_ReadUlong(v28, v9);
  v15 = Ulong;
  if ( *(_BYTE *)(v6 + v4 + 13) == 3 && (Ulong & 0x4001E0) == 0x400000 && (*(_QWORD *)(a1[1] + 736LL) & 0x80000LL) != 0 )
    RootHub_RestoreU1U2Timeouts(a1, a2);
  if ( (v15 & 0x1E0) == 0x1E0 && (a3 || (v15 & 0x400000) != 0) )
  {
    v8 = 1;
    if ( *(_BYTE *)(v6 + v4 + 18) != 1 )
    {
      v19 = *(_BYTE *)(v6 + v4 + 13);
      *(_BYTE *)(v6 + v4 + 18) = 1;
      if ( v19 == 2 )
      {
        RootHub_ReleaseReadModifyWriteLock(a1, a2 - 1);
        if ( *(int *)(v6 + v4 + 48) > 0 )
          v23 = *(_WORD *)(v6 + v4 + 52);
        else
          v23 = 50;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dDd(*(_QWORD *)(a1[1] + 72LL), v20, v21, v22, v27);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
          WdfDriverGlobals,
          *(_QWORD *)(v6 + v4 + 40),
          -10000LL * v23);
        return v8;
      }
      if ( v19 == 3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 3;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(a1[1] + 72LL),
            v14,
            11,
            210,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            a2,
            v15);
        }
        v24 = v15 & 0xE40C200 | 0x10000;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(a1[1] + 72LL),
            v14,
            11,
            211,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v24);
        }
        XilRegister_WriteUlong(v28, v9, v24);
        v25 = XilRegister_ReadUlong(v28, v9);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v26) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(a1[1] + 72LL),
            v26,
            11,
            212,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v25);
        }
      }
    }
  }
  v16 = a1[6];
  v17 = *(_BYTE *)(v16 + v6 + 32);
  *(_BYTE *)(v16 + v6 + 32) = 0;
  DynamicLock_Release(*(_QWORD *)(v16 + v6 + 24));
  if ( v17 )
    Controller_RaiseAndTrackIrql(a1[1]);
  return v8;
}
