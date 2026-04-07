/*
 * XREFs of ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x18004FF74
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180027B04 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ?_LookupAnimationClockIdFromStoryboard@CAnimationScheduler@@AEAAJHPEBU_GUID@@PEAU2@PEAH@Z @ 0x1800500B4 (-_LookupAnimationClockIdFromStoryboard@CAnimationScheduler@@AEAAJHPEBU_GUID@@PEAU2@PEAH@Z.c)
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180050180 (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?GetAnimationDuration@@YAJHHPEAK@Z @ 0x1800501E4 (-GetAnimationDuration@@YAJHHPEAK@Z.c)
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180050374 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimationScheduler::_OnBeginAnimationClock(
        CAnimationScheduler *this,
        struct _GUID *a2,
        const struct _GUID *a3,
        struct _GUID *a4)
{
  int v4; // esi
  int v7; // eax
  __int64 v8; // rdx
  CDesktopManager *v10; // rax
  CAnimationClockCoordinator *v11; // r14
  unsigned int v12; // eax
  int AnimationDuration; // eax
  unsigned int v14; // r8d
  struct _GUID *v15; // rax
  int v16; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v17[3]; // [rsp+34h] [rbp-3Ch] BYREF
  struct _GUID v18; // [rsp+40h] [rbp-30h] BYREF
  struct _GUID v19; // [rsp+50h] [rbp-20h] BYREF

  v4 = *(_DWORD *)a2[4].Data4;
  v19 = GUID_NULL;
  v16 = 0;
  v7 = CAnimationScheduler::_LookupAnimationClockIdFromStoryboard(this, v4, a3, &v19, &v16);
  v8 = (unsigned int)v7;
  if ( v7 >= 0 )
  {
    v10 = CDesktopManager::s_pDesktopManagerInstance;
    a2[3] = v19;
    v11 = (CAnimationClockCoordinator *)*((_QWORD *)v10 + 21);
    v12 = (*(__int64 (__fastcall **)(struct _GUID *, __int64))(*(_QWORD *)&a2->Data1 + 32LL))(a2, v8);
    v18 = v19;
    LODWORD(v8) = CAnimationClockCoordinator::OnCreateAnimationClock(v11, &v18, v12);
    if ( (int)(v8 + 0x80000000) < 0 || (_DWORD)v8 == -2147019886 )
    {
      v17[0] = 0;
      AnimationDuration = GetAnimationDuration(v4, v16, v17);
      v14 = v17[0];
      v18 = v19;
      if ( AnimationDuration < 0 )
        v14 = 0;
      LODWORD(v8) = CAnimationClockCoordinator::OnBeginAnimationClock(v11, &v18, v14);
      if ( (_DWORD)v8 == -2147019873 )
        LODWORD(v8) = 0;
    }
  }
  if ( a4 )
  {
    v15 = &v19;
    if ( (int)v8 < 0 )
      v15 = &GUID_NULL;
    *a4 = *v15;
  }
  return (unsigned int)v8;
}
