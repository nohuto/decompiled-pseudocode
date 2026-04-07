/*
 * XREFs of ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18003F510
 * Callers:
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x18003F114 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@?$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z @ 0x180026F40 (-Remove@-$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18003E990 (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x18003F77C (-Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z.c)
 *     ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18003F854 (-Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?SetEventCallback@CAnimationClock@@QEAAJPEAUIAnimationClockEventListener@@@Z @ 0x18003F9AC (-SetEventCallback@CAnimationClock@@QEAAJPEAUIAnimationClockEventListener@@@Z.c)
 *     ?_IsKnownClockId@CAnimationClockCoordinator@@AEAA_NU_GUID@@@Z @ 0x18003FA24 (-_IsKnownClockId@CAnimationClockCoordinator@@AEAA_NU_GUID@@@Z.c)
 *     ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x18003FA78 (-_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ.c)
 *     McTemplateU0jq_EtwEventWriteTransfer @ 0x18008AC98 (McTemplateU0jq_EtwEventWriteTransfer.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x18008C1EC (-Reset@CAnimationClock@@QEAAJK@Z.c)
 *     memcmp_0 @ 0x18008EF18 (memcmp_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationClockCoordinator::OnCreateAnimationClock(
        CAnimationClockCoordinator *this,
        struct _GUID *Buf2,
        unsigned int a3)
{
  int AnimationClock; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // r8d
  CAnimationClock *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v15; // eax
  CBaseObject *v16[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _GUID Buf1; // [rsp+40h] [rbp-20h] BYREF
  char *v18; // [rsp+50h] [rbp-10h]

  v16[0] = 0LL;
  AnimationClock = -2147024809;
  if ( !memcmp_0(Buf2, &GUID_NULL, 0x10uLL) )
    return (unsigned int)AnimationClock;
  v18 = (char *)this + 8;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  Buf1 = *Buf2;
  if ( CAnimationClockCoordinator::_IsKnownClockId(this, &Buf1) )
  {
    Buf1 = *Buf2;
    AnimationClock = CAnimationClockCoordinator::GetAnimationClock(this, &Buf1, v16);
    goto LABEL_10;
  }
  AnimationClock = CAnimationClockCoordinator::_ClearExpiredAnimationClocks(this);
  if ( AnimationClock < 0 )
    goto LABEL_10;
  Buf1 = *Buf2;
  AnimationClock = CAnimationClockFactory::Create(&Buf1, v16);
  if ( AnimationClock < 0 )
    goto LABEL_10;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0jq_EtwEventWriteTransfer(v8, v7, Buf2, a3);
  AnimationClock = CAnimationClock::SetEventCallback(v16[0], this);
  if ( AnimationClock < 0 )
    goto LABEL_10;
  v9 = *((_DWORD *)this + 20);
  v10 = v9 + 1;
  if ( v9 + 1 >= v9 )
  {
    AnimationClock = 0;
    if ( v10 > *((_DWORD *)this + 19) )
    {
      v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 8, 1, v16);
      AnimationClock = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0xC2u, 0LL);
        goto LABEL_10;
      }
    }
    else
    {
      *(CBaseObject **)(*((_QWORD *)this + 7) + 8LL * *((unsigned int *)this + 20)) = v16[0];
      *((_DWORD *)this + 20) = v10;
    }
    CBaseObject::AddRef(v16[0]);
  }
  else
  {
    AnimationClock = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB7u, 0LL);
  }
LABEL_10:
  if ( this != (CAnimationClockCoordinator *)-8LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  if ( AnimationClock >= 0 )
  {
    v11 = v16[0];
    Buf1 = *(struct _GUID *)((char *)v16[0] + 120);
    if ( !memcmp_0(&Buf1, Buf2, 0x10uLL) )
    {
      if ( (int)CAnimationClock::Reset(v11, a3) < 0 )
      {
        AnimationClock = -2147019886;
      }
      else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        McTemplateU0jq_EtwEventWriteTransfer(v13, v12, Buf2, a3);
      }
    }
    else
    {
      Buf1 = *Buf2;
      AnimationClock = CAnimationClock::Initialize(v11, &Buf1, a3);
      if ( AnimationClock < 0 )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
        if ( (unsigned int)DynArray<CStoryboard const *,0>::Remove((__int64 *)this + 7, (__int64 *)v16) )
          CBaseObject::Release(v16[0]);
        if ( this != (CAnimationClockCoordinator *)-8LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
      }
    }
  }
  if ( v16[0] )
    CBaseObject::Release(v16[0]);
  return (unsigned int)AnimationClock;
}
