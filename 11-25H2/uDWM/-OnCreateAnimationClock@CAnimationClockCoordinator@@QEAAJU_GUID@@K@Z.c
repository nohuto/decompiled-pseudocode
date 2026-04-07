/*
 * XREFs of ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180050374
 * Callers:
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x18004FF74 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800912D0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x1800505E8 (-Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z.c)
 *     ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x1800506C4 (-Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?SetEventCallback@CAnimationClock@@QEAAJPEAUIAnimationClockEventListener@@@Z @ 0x180050820 (-SetEventCallback@CAnimationClock@@QEAAJPEAUIAnimationClockEventListener@@@Z.c)
 *     ?_IsKnownClockId@CAnimationClockCoordinator@@AEAA_NU_GUID@@@Z @ 0x180050898 (-_IsKnownClockId@CAnimationClockCoordinator@@AEAA_NU_GUID@@@Z.c)
 *     ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x1800508EC (-_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ.c)
 *     ?Remove@?$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z @ 0x180050A50 (-Remove@-$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x180051094 (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     McTemplateU0jq_EtwEventWriteTransfer @ 0x1800974E8 (McTemplateU0jq_EtwEventWriteTransfer.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x180098B18 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationClockCoordinator::OnCreateAnimationClock(
        CAnimationClockCoordinator *this,
        struct _GUID *a2,
        unsigned int a3)
{
  int AnimationClock; // ebx
  __int64 v7; // rax
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // r8d
  int v13; // eax
  unsigned __int64 v14; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  CMILRefCountBase *v18[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _GUID v19; // [rsp+40h] [rbp-20h] BYREF
  char *v20; // [rsp+50h] [rbp-10h]

  v18[0] = 0LL;
  AnimationClock = -2147024809;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v7 )
  {
    v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
    v20 = (char *)this + 8;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
    v19 = *a2;
    if ( CAnimationClockCoordinator::_IsKnownClockId(this, &v19) )
    {
      v19 = *a2;
      AnimationClock = CAnimationClockCoordinator::GetAnimationClock(this, &v19, v18);
      goto LABEL_14;
    }
    AnimationClock = CAnimationClockCoordinator::_ClearExpiredAnimationClocks(this);
    if ( AnimationClock < 0 )
      goto LABEL_14;
    v19 = *a2;
    AnimationClock = CAnimationClockFactory::Create(&v19, v18);
    if ( AnimationClock < 0 )
      goto LABEL_14;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0jq_EtwEventWriteTransfer(v10, v9, a2, a3);
    AnimationClock = CAnimationClock::SetEventCallback(v18[0], this);
    if ( AnimationClock < 0 )
      goto LABEL_14;
    v11 = *((_DWORD *)this + 20);
    v12 = v11 + 1;
    if ( v11 + 1 < v11 )
    {
      AnimationClock = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
      goto LABEL_14;
    }
    AnimationClock = 0;
    if ( v12 <= *((_DWORD *)this + 19) )
    {
      *(CMILRefCountBase **)(*((_QWORD *)this + 7) + 8LL * *((unsigned int *)this + 20)) = v18[0];
      *((_DWORD *)this + 20) = v12;
    }
    else
    {
      v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 8, 1, v18);
      AnimationClock = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xBEu, 0LL);
LABEL_14:
        if ( v8 )
          LeaveCriticalSection(v8);
        if ( AnimationClock >= 0 )
        {
          v14 = *((_QWORD *)v18[0] + 15) - *(_QWORD *)&a2->Data1;
          if ( !v14 )
            v14 = _mm_srli_si128(*(__m128i *)((char *)v18[0] + 120), 8).m128i_u64[0] - *(_QWORD *)a2->Data4;
          if ( v14 )
          {
            v19 = *a2;
            AnimationClock = CAnimationClock::Initialize(v18[0], &v19, a3);
            if ( AnimationClock < 0 )
            {
              EnterCriticalSection(v8);
              if ( (unsigned int)DynArray<CStoryboard const *,0>::Remove((char *)this + 56, v18) )
                CBaseObject::Release(v18[0]);
              if ( v8 )
                LeaveCriticalSection(v8);
            }
          }
          else if ( (int)CAnimationClock::Reset(v18[0], a3) < 0 )
          {
            AnimationClock = -2147019886;
          }
          else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          {
            McTemplateU0jq_EtwEventWriteTransfer(v17, v16, a2, a3);
          }
        }
        if ( v18[0] )
          CBaseObject::Release(v18[0]);
        return (unsigned int)AnimationClock;
      }
    }
    CMILRefCountBase::AddRef(v18[0]);
    goto LABEL_14;
  }
  return (unsigned int)AnimationClock;
}
