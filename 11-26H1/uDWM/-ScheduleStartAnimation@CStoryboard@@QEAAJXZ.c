/*
 * XREFs of ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18003CB38
 * Callers:
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x180071C90 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180013B20 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180013B64 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x180029C44 (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18003CDE4 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x18003CE98 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18003E298 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x1800ABA40 (-ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStoryboard::ScheduleStartAnimation(CStoryboard *this)
{
  int v2; // ebx
  CAnimationEngine *v3; // r14
  int v4; // r12d
  __int64 v5; // r9
  unsigned int v6; // r8d
  __int64 v7; // r15
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  int started; // eax
  unsigned int v14; // r8d
  int v15; // eax
  void *lpMem[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h]
  unsigned int v18; // [rsp+48h] [rbp-8h]
  __int64 *v19; // [rsp+90h] [rbp+40h] BYREF
  __int64 v20; // [rsp+98h] [rbp+48h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+A0h] [rbp+50h]

  v21 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = -2147467259;
  v3 = 0LL;
  if ( *((_DWORD *)this + 6) == 2 )
  {
    if ( *((_DWORD *)this + 30) )
    {
      v3 = CDesktopManager::AcquireAnimationEngine();
      if ( v3 )
      {
        v4 = *(_DWORD *)(*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 16LL))(this);
        *(_OWORD *)lpMem = 0LL;
        v17 = 0LL;
        v5 = 0LL;
        v6 = 0;
        v18 = 0;
        v7 = 0LL;
        v8 = 0LL;
        while ( (unsigned int)v7 < *((_DWORD *)this + 30) )
        {
          v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * v7) + 40LL);
          v20 = v9;
          v10 = v6 + 1;
          if ( v6 + 1 < v6 )
          {
            v2 = -2147024362;
            v11 = 183;
            goto LABEL_8;
          }
          if ( v10 <= (unsigned int)v5 )
          {
            v8[v6++] = v9;
            v18 = v10;
          }
          else
          {
            v19 = &v20;
            v2 = DynArrayImpl<0>::Grow((__int64)lpMem, 8u, 1, v5, (unsigned __int64 *)&v19);
            v8 = lpMem[0];
            if ( v2 < 0 )
            {
              v11 = 194;
LABEL_8:
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v11, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
                1LL,
                v2,
                0x1679u,
                0LL);
LABEL_11:
              if ( v8 != lpMem[1] )
                DefaultHeap::Free(v8);
              goto LABEL_13;
            }
            v14 = v18;
            *((_QWORD *)lpMem[0] + v18) = *v19;
            v6 = v14 + 1;
            v18 = v6;
            v5 = HIDWORD(v17);
          }
          v7 = (unsigned int)(v7 + 1);
        }
        started = CAnimationEngine::ScheduleStartAnimation(v3, v4);
        v2 = started;
        if ( started < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1LL,
            started,
            0x167Bu,
            0LL);
          goto LABEL_11;
        }
        *((_DWORD *)this + 6) = 3;
        CStoryboard::_LogStoryboardEvent(this);
        if ( (*(unsigned __int8 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 128LL))(this) )
        {
          v15 = CDesktopManager::ImmediateCancelLivePreview(CDesktopManager::s_pDesktopManagerInstance);
          v2 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v15,
              0x1680u,
              0LL);
            CBitmapSourceArray::~CBitmapSourceArray(lpMem);
            goto LABEL_13;
          }
        }
        if ( v8 != lpMem[1] )
          DefaultHeap::Free(v8);
        CStoryboard::_NotifyStoryboardState((__int64)this, 3);
        (*(void (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 40LL))(this);
        goto LABEL_23;
      }
    }
  }
LABEL_13:
  CStoryboard::Abandon(this);
  if ( v3 )
LABEL_23:
    CAnimationEngine::Release(v3);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v2;
}
