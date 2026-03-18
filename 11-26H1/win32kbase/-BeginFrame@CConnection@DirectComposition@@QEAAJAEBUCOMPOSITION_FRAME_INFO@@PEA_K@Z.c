/*
 * XREFs of ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1401B2890
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1401B2540 (NtDCompositionBeginFrame.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x14006F430 (UserIsCurrentProcessDwm.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1400A6398 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A8FE8 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A901C (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z @ 0x1401077B4 (-GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z.c)
 *     ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x14017D34C (-BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CConnection::BeginFrame(
        DirectComposition::CConnection *this,
        const struct COMPOSITION_FRAME_INFO *a2,
        unsigned __int64 *a3)
{
  __int64 v6; // rcx
  int v7; // eax
  DirectComposition::CChannel *v8; // rcx
  __int64 DCompSessionState; // rdi
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int ReadyBatches; // r14d
  _QWORD *v14; // rdi
  char *v15; // r15
  __int64 v16; // rcx
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rcx
  unsigned __int64 v20; // rax
  struct DirectComposition::CBatch *v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  __int64 *v25; // [rsp+60h] [rbp+40h] BYREF
  struct DirectComposition::CBatch *v26; // [rsp+68h] [rbp+48h] BYREF

  *a3 = 0LL;
  DirectComposition::CCriticalSection::AcquireShared(*((PERESOURCE *)this + 2));
  if ( !*((_DWORD *)a2 + 30) || (LOBYTE(v6) = 1, *((_DWORD *)this + 92)) )
    LOBYTE(v6) = 0;
  *((_OWORD *)this + 22) = *(_OWORD *)((char *)a2 + 104);
  *((_DWORD *)this + 92) = *((_DWORD *)a2 + 30);
  if ( (_BYTE)v6 )
  {
    ExAcquirePushLockSharedEx((char *)this + 200, 0LL);
    *((_BYTE *)this + 208) = 0;
    if ( !*((_BYTE *)this + 252) && *((_DWORD *)this + 62) )
    {
      DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*((_QWORD *)this + 19) + 32LL));
      v7 = DirectComposition::CSystemChannel::BoostCompositorClock(
             *((DirectComposition::CSystemChannel **)this + 19),
             1);
      v8 = (DirectComposition::CChannel *)*((_QWORD *)this + 19);
      *((_BYTE *)this + 252) = v7 >= 0;
      DirectComposition::CChannel::Unlock(v8);
    }
    DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 200));
  }
  if ( *((_DWORD *)this + 54) != *((_DWORD *)a2 + 12)
    || *((_DWORD *)this + 55) != *((_DWORD *)a2 + 13)
    || *((_DWORD *)this + 58) != *((_DWORD *)a2 + 16) )
  {
    ExAcquirePushLockExclusiveEx((char *)this + 200, 0LL);
    *((_BYTE *)this + 208) = 1;
    *(_OWORD *)((char *)this + 216) = *((_OWORD *)a2 + 3);
    *((_QWORD *)this + 29) = *((_QWORD *)a2 + 8);
    *((_DWORD *)this + 60) = *((_DWORD *)a2 + 18);
    DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 200));
  }
  DCompSessionState = W32GetDCompSessionState(v6);
  if ( UserIsCurrentProcessDwm(v11, v10, v12) && !*(_QWORD *)(DCompSessionState + 8) )
    *(_QWORD *)(DCompSessionState + 8) = KeGetCurrentThread();
  if ( *((_DWORD *)this + 37) )
  {
    v14 = (_QWORD *)((char *)this + 192);
    if ( *((_QWORD *)this + 24) )
    {
      v15 = (char *)this + 192;
    }
    else
    {
      ReadyBatches = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 37) + 136LL))(
                       *((_QWORD *)this + 37),
                       (char *)this + 192);
      if ( ReadyBatches < 0 )
        goto LABEL_31;
      v15 = (char *)this + 192;
    }
    v16 = *((_QWORD *)this + 37);
    v25 = 0LL;
    ReadyBatches = (*(__int64 (__fastcall **)(__int64, const struct COMPOSITION_FRAME_INFO *, __int64 **))(*(_QWORD *)v16 + 144LL))(
                     v16,
                     a2,
                     &v25);
    if ( ReadyBatches >= 0 )
    {
      v17 = (__int64 *)*((_QWORD *)this + 37);
      *((_QWORD *)this + 34) = *((_QWORD *)a2 + 16);
      *((_QWORD *)this + 35) = *((_QWORD *)a2 + 17);
      *((_DWORD *)this + 72) = *((_DWORD *)a2 + 36);
      v18 = *v17;
      v26 = 0LL;
      (*(void (__fastcall **)(__int64 *))(v18 + 16))(v17);
      v19 = v25;
      *((_QWORD *)this + 20) = *(_QWORD *)a2;
      v20 = (*(__int64 (__fastcall **)(__int64 *))(*v19 + 72))(v19);
      ReadyBatches = DirectComposition::CConnection::GetReadyBatches(this, v20, &v26);
      if ( ReadyBatches >= 0 )
      {
        v21 = v26;
        *((_QWORD *)this + 21) = *((_QWORD *)a2 + 4);
        *((_QWORD *)this + 22) = *((_QWORD *)a2 + 2);
        if ( v21 )
        {
          (*(void (__fastcall **)(__int64 *, __int64))(*v25 + 56))(v25, (__int64)v21 + 120);
          v14 = v15;
        }
        (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 37) + 80LL))(*((_QWORD *)this + 37), v25);
        (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v14 + 16LL))(*v14, v25);
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 24LL))(*((_QWORD *)this + 37));
      v22 = *v25;
      if ( ReadyBatches < 0 )
      {
        (*(void (**)(void))(v22 + 32))();
      }
      else
      {
        v23 = (*(__int64 (**)(void))(v22 + 72))();
        ExAcquirePushLockExclusiveEx((char *)this + 376, 0LL);
        *((_BYTE *)this + 384) = 1;
        *((_QWORD *)this + 50) = v23;
        DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 376));
        *a3 = v23;
      }
      (*(void (__fastcall **)(__int64 *))(*v25 + 8))(v25);
      *((_QWORD *)this + 35) = 0LL;
      *((_DWORD *)this + 72) = 0;
    }
  }
  else
  {
    ReadyBatches = -1073741300;
  }
LABEL_31:
  ExReleaseResourceLite(*((PERESOURCE *)this + 2));
  KeLeaveCriticalRegion();
  return (unsigned int)ReadyBatches;
}
