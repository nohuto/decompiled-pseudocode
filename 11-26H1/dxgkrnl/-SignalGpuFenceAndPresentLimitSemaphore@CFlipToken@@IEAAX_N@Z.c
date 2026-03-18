/*
 * XREFs of ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x140039724
 * Callers:
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z @ 0x140021340 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1400A25A0 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     ?SignalFlipImmediate@CFlipToken@@UEAAXXZ @ 0x1400A27D0 (-SignalFlipImmediate@CFlipToken@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(CFlipToken *this, char a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi
  bool v5; // zf
  __int64 v6; // rdi
  __int64 v7; // rsi
  _QWORD *j; // rax
  HANDLE v9; // rax
  __int64 v10; // rcx
  char v11; // r14
  __int64 v12; // rbp
  __int64 v13; // r15
  __int64 v14; // r8
  _QWORD *i; // rax
  HANDLE CurrentThreadId; // rax
  __int64 v17; // rcx

  if ( !*((_BYTE *)this + 64) )
  {
    v3 = *((_QWORD *)this + 13);
    if ( v3 > 1 )
    {
      v4 = v3 - 1;
      v11 = 1;
      v12 = *((_QWORD *)this + 6);
      v13 = *((_QWORD *)this + 7);
      if ( !*((_BYTE *)this + 65) )
        v11 = a2;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v12 + 48, 0LL);
      if ( *(_DWORD *)(v12 + 160) )
      {
        for ( i = *(_QWORD **)(v12 + 144); i != (_QWORD *)(v12 + 144); i = (_QWORD *)*i )
        {
          if ( *(i - 1) == v13 )
          {
            LOBYTE(v14) = v11;
            (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(*(i - 3) + 112LL))(i - 3, v4, v14);
            break;
          }
        }
      }
      CurrentThreadId = PsGetCurrentThreadId();
      v17 = v12 + 48;
      if ( CurrentThreadId == *(HANDLE *)(v12 + 56) )
      {
        *(_QWORD *)(v12 + 56) = 0LL;
        ExReleasePushLockExclusiveEx(v17, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v17, 0LL);
      }
      KeLeaveCriticalRegion();
    }
  }
  v5 = *((_BYTE *)this + 578) == 0;
  *((_QWORD *)this + 13) = 0LL;
  if ( v5 )
  {
    v6 = *((_QWORD *)this + 6);
    v7 = *((_QWORD *)this + 7);
    *((_BYTE *)this + 578) = 1;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v6 + 48, 0LL);
    if ( *(_DWORD *)(v6 + 160) )
    {
      for ( j = *(_QWORD **)(v6 + 144); j != (_QWORD *)(v6 + 144); j = (_QWORD *)*j )
      {
        if ( *(j - 1) == v7 )
        {
          (*(void (__fastcall **)(_QWORD *))(*(j - 3) + 120LL))(j - 3);
          break;
        }
      }
    }
    v9 = PsGetCurrentThreadId();
    v10 = v6 + 48;
    if ( v9 == *(HANDLE *)(v6 + 56) )
    {
      *(_QWORD *)(v6 + 56) = 0LL;
      ExReleasePushLockExclusiveEx(v10, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v10, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
