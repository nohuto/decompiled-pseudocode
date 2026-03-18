/*
 * XREFs of ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x140197B80
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1401978D0 (NtDCompositionBeginFrame.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x14004E260 (UserIsCurrentProcessDwm.c)
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x14004F56C (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x14004F5A0 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x14004FD44 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140050200 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x140054F2C (-BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ?GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z @ 0x1400C7AD4 (-GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z.c)
 *     Feature_EffectHash__private_IsEnabledDeviceUsageNoInline @ 0x1402267A0 (Feature_EffectHash__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CConnection::BeginFrame(
        DirectComposition::CConnection *this,
        const struct COMPOSITION_FRAME_INFO *a2,
        unsigned __int64 *a3)
{
  char v6; // cl
  int v7; // eax
  PERESOURCE *v8; // rcx
  __int64 DCompSessionState; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int ReadyBatches; // r14d
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 *v17; // rcx
  unsigned __int64 v18; // rax
  struct DirectComposition::CBatch *v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 *v24; // [rsp+60h] [rbp+40h] BYREF
  struct DirectComposition::CBatch *v25; // [rsp+68h] [rbp+48h] BYREF

  *a3 = 0LL;
  DirectComposition::CCriticalSection::AcquireShared(*((PERESOURCE *)this + 2));
  if ( !*((_DWORD *)a2 + 32) || (v6 = 1, *((_DWORD *)this + 92)) )
    v6 = 0;
  *((_OWORD *)this + 22) = *((_OWORD *)a2 + 7);
  *((_DWORD *)this + 92) = *((_DWORD *)a2 + 32);
  if ( v6 )
  {
    ExAcquirePushLockSharedEx((char *)this + 200, 0LL);
    *((_BYTE *)this + 208) = 0;
    if ( !*((_BYTE *)this + 252) && *((_DWORD *)this + 62) )
    {
      DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*((_QWORD *)this + 19) + 32LL));
      v7 = DirectComposition::CSystemChannel::BoostCompositorClock(
             *((DirectComposition::CSystemChannel **)this + 19),
             1);
      v8 = (PERESOURCE *)*((_QWORD *)this + 19);
      *((_BYTE *)this + 252) = v7 >= 0;
      DirectComposition::CChannel::Unlock(v8);
    }
    DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 200));
  }
  if ( *((_DWORD *)this + 54) != *((_DWORD *)a2 + 8)
    || *((_DWORD *)this + 55) != *((_DWORD *)a2 + 9)
    || *((_DWORD *)this + 58) != *((_DWORD *)a2 + 12) )
  {
    ExAcquirePushLockExclusiveEx((char *)this + 200, 0LL);
    *((_BYTE *)this + 208) = 1;
    *(_OWORD *)((char *)this + 216) = *((_OWORD *)a2 + 2);
    *((_QWORD *)this + 29) = *((_QWORD *)a2 + 6);
    *((_DWORD *)this + 60) = *((_DWORD *)a2 + 14);
    DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 200));
  }
  DCompSessionState = W32GetDCompSessionState();
  if ( UserIsCurrentProcessDwm(v11, v10) && !*(_QWORD *)(DCompSessionState + 8) )
    *(_QWORD *)(DCompSessionState + 8) = KeGetCurrentThread();
  if ( *((_DWORD *)this + 37) )
  {
    v13 = (_QWORD *)((char *)this + 296);
    if ( *((_QWORD *)this + 24)
      || (ReadyBatches = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 176LL))(*v13), ReadyBatches >= 0) )
    {
      v14 = *v13;
      v24 = 0LL;
      ReadyBatches = (*(__int64 (__fastcall **)(__int64, const struct COMPOSITION_FRAME_INFO *, __int64 **))(*(_QWORD *)v14 + 184LL))(
                       v14,
                       a2,
                       &v24);
      if ( ReadyBatches >= 0 )
      {
        if ( (unsigned int)Feature_EffectHash__private_IsEnabledDeviceUsageNoInline(v15) )
        {
          *((_QWORD *)this + 34) = *((_QWORD *)a2 + 17);
          *((_QWORD *)this + 35) = *((_QWORD *)a2 + 18);
          *((_DWORD *)this + 72) = *((_DWORD *)a2 + 38);
        }
        v16 = *v13;
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        v17 = v24;
        *((_QWORD *)this + 20) = *(_QWORD *)a2;
        v18 = (*(__int64 (__fastcall **)(__int64 *))(*v17 + 72))(v17);
        ReadyBatches = DirectComposition::CConnection::GetReadyBatches(this, v18, &v25);
        if ( ReadyBatches >= 0 )
        {
          v19 = v25;
          *((_QWORD *)this + 21) = *((_QWORD *)a2 + 1);
          *((_QWORD *)this + 22) = *((_QWORD *)a2 + 2);
          if ( v19 )
            (*(void (__fastcall **)(__int64 *, __int64))(*v24 + 56))(v24, (__int64)v19 + 120);
          (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 37) + 80LL))(*((_QWORD *)this + 37), v24);
          (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 24) + 16LL))(*((_QWORD *)this + 24), v24);
        }
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 24LL))(*((_QWORD *)this + 37));
        v20 = *v24;
        if ( ReadyBatches < 0 )
        {
          (*(void (**)(void))(v20 + 32))();
        }
        else
        {
          v21 = (*(__int64 (**)(void))(v20 + 72))();
          ExAcquirePushLockExclusiveEx((char *)this + 376, 0LL);
          *((_BYTE *)this + 384) = 1;
          *((_QWORD *)this + 50) = v21;
          DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 376));
          *a3 = v21;
        }
        (*(void (__fastcall **)(__int64 *))(*v24 + 8))(v24);
        if ( (unsigned int)Feature_EffectHash__private_IsEnabledDeviceUsageNoInline(v22) )
        {
          *((_QWORD *)this + 35) = 0LL;
          *((_DWORD *)this + 72) = 0;
        }
      }
    }
  }
  else
  {
    ReadyBatches = -1073741300;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 2));
  KeLeaveCriticalRegion();
  return (unsigned int)ReadyBatches;
}
