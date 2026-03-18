/*
 * XREFs of ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1401AA270
 * Callers:
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x14006504C (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 *     ?DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z @ 0x1400E37C0 (-DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z.c)
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1400E39E4 (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 * Callees:
 *     ?_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14009D1A0 (-_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundP.c)
 *     ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1400E42F4 (-NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJE.c)
 *     ??0TrackForegroundChange@CActivationObjectManager@@QEAA@PEAVForegroundChangeTracker@1@@Z @ 0x1401A99D4 (--0TrackForegroundChange@CActivationObjectManager@@QEAA@PEAVForegroundChangeTracker@1@@Z.c)
 *     ??1TrackForegroundChange@CActivationObjectManager@@QEAA@XZ @ 0x1401A9A50 (--1TrackForegroundChange@CActivationObjectManager@@QEAA@XZ.c)
 *     PostEvent @ 0x140216918 (PostEvent.c)
 */

void __fastcall CActivationObjectManager::ZapForeground(
        CActivationObjectManager *this,
        struct CActivationObjectManager::ForegroundChangeTracker *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  _BYTE v8[20]; // [rsp+30h] [rbp-40h]
  __int128 v9; // [rsp+50h] [rbp-20h] BYREF
  __int64 v10; // [rsp+60h] [rbp-10h]
  int v11; // [rsp+68h] [rbp-8h]
  char v12; // [rsp+80h] [rbp+10h] BYREF

  CActivationObjectManager::TrackForegroundChange::TrackForegroundChange(
    (CActivationObjectManager::TrackForegroundChange *)&v12,
    a2);
  v3 = *((_QWORD *)this + 4);
  *(_DWORD *)(v3 + 56) &= ~4u;
  *((_QWORD *)this + 4) = 0LL;
  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(*(_QWORD *)(v3 + 32));
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  ForegroundBoost::_SetForegroundPriority(*(_QWORD *)(v4 + 464), v4, 0, 8u);
  PostEvent(*(_QWORD *)(v3 + 72), 0, 6, 0, 0LL);
  *(_DWORD *)v8 = 0;
  *(_OWORD *)&v8[4] = *(unsigned __int64 *)(v3 + 40);
  v10 = 0LL;
  v9 = *(_OWORD *)v8;
  v11 = 0;
  CActivationObjectManager::NotifySystemSateChanged(v6, v3, 3, (unsigned int *)&v9);
  CActivationObjectManager::TrackForegroundChange::~TrackForegroundChange(
    (CActivationObjectManager::TrackForegroundChange *)&v12,
    v7);
}
