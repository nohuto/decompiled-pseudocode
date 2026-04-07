/*
 * XREFs of ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180050DE8
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180050C10 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180040630 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x180051030 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 *     ?UseDComposition@CStoryboard@@QEAA_NXZ @ 0x1800518D0 (-UseDComposition@CStoryboard@@QEAA_NXZ.c)
 *     ?CreateAnimationTriggerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x18009A5E8 (-CreateAnimationTriggerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCAnimationTriggerProxy.c)
 *     ?SetStartTrigger@CStoryboard@@QEAAXPEAVCAnimationTriggerProxy@@@Z @ 0x18009A60C (-SetStartTrigger@CStoryboard@@QEAAXPEAVCAnimationTriggerProxy@@@Z.c)
 *     ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800A619C (-OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAnimationScheduler::_SetStoryboardTriggerForAnimationClock(
        CAnimationScheduler *this,
        struct _GUID *a2)
{
  int SynchronizationCommitHandle; // edi
  struct CAnimationTriggerProxy *v5; // rbx
  __int64 i; // r14
  __m128i *v7; // rsi
  unsigned __int64 v8; // rax
  CAnimationClockCoordinator *v10; // rdi
  DWORD CurrentProcessId; // eax
  HANDLE v12; // [rsp+20h] [rbp-30h] BYREF
  HANDLE hObject; // [rsp+28h] [rbp-28h] BYREF
  struct CAnimationTriggerProxy *v14; // [rsp+30h] [rbp-20h] BYREF
  struct _GUID v15; // [rsp+40h] [rbp-10h] BYREF

  SynchronizationCommitHandle = 0;
  v12 = 0LL;
  v5 = 0LL;
  v14 = 0LL;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    if ( SynchronizationCommitHandle < 0 )
      break;
    v7 = *(__m128i **)(*((_QWORD *)this + 2) + 8 * i);
    v8 = v7[3].m128i_i64[0] - *(_QWORD *)&a2->Data1;
    if ( !v8 )
      v8 = _mm_srli_si128(v7[3], 8).m128i_u64[0] - *(_QWORD *)a2->Data4;
    if ( !v8
      && v7[1].m128i_i32[2] != 4
      && (CStoryboard::UseDComposition(*(CStoryboard **)(*((_QWORD *)this + 2) + 8 * i))
       || (*(unsigned __int8 (__fastcall **)(__m128i *))(v7->m128i_i64[0] + 48))(v7)) )
    {
      if ( (((unsigned __int64)v12 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0
        && (*(unsigned __int8 (__fastcall **)(__m128i *))(v7->m128i_i64[0] + 48))(v7) )
      {
        v10 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21);
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          &v12,
          0LL);
        CurrentProcessId = GetCurrentProcessId();
        SynchronizationCommitHandle = CAnimationClockCoordinator::OnGetSynchronizationCommitHandle(
                                        v10,
                                        a2,
                                        CurrentProcessId,
                                        &v12);
      }
      if ( v5
        || CStoryboard::UseDComposition((CStoryboard *)v7)
        && (hObject = 0LL,
            v15 = *a2,
            SynchronizationCommitHandle = CAnimationClockCoordinator::OnGetAnimationClockToken(
                                            *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance
                                            + 21),
                                            &v15,
                                            &hObject),
            SynchronizationCommitHandle >= 0)
        && (v14 = 0LL,
            SynchronizationCommitHandle = CCompositor::CreateAnimationTriggerProxyFromSharedHandle(
                                            *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                            hObject,
                                            &v14),
            CloseHandle(hObject),
            (v5 = v14) != 0LL) )
      {
        if ( CStoryboard::UseDComposition((CStoryboard *)v7) )
          CStoryboard::SetStartTrigger((CStoryboard *)v7, v5);
      }
      if ( (char *)v12 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL
        && (*(unsigned __int8 (__fastcall **)(__m128i *))(v7->m128i_i64[0] + 48))(v7) )
      {
        (*(void (__fastcall **)(__m128i *, HANDLE))(v7->m128i_i64[0] + 56))(v7, v12);
      }
    }
  }
  if ( v5 )
    CBaseObject::Release(v5);
  if ( (char *)v12 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(v12);
  return (unsigned int)SynchronizationCommitHandle;
}
