/*
 * XREFs of ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x140021DC0
 * Callers:
 *     ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@0@Z @ 0x1400209F0 (-Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@0@Z.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z @ 0x140021340 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z.c)
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x140022350 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?Confirm@CFlipToken@@UEAAXXZ @ 0x140022C20 (-Confirm@CFlipToken@@UEAAXXZ.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1400A25A0 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipToken::TraceStateChanged(CFlipToken *this)
{
  char *v1; // rdi
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rsi
  _QWORD **v6; // rdi
  _QWORD *i; // rax
  unsigned __int8 v8; // di
  int v9; // eax
  int *v10; // r14
  __int64 v11; // r12
  char v12; // di
  int v13; // ebp
  int v14; // r14d
  __int64 v15; // r15
  void (__fastcall *v16)(_QWORD, _QWORD, _QWORD, __int64, int, int, bool, __int64, __int64, int); // r13
  __int64 v17; // rsi
  unsigned int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // [rsp+90h] [rbp+8h]

  v1 = (char *)this + 24;
  v22 = 0;
  if ( *((_DWORD *)this + 6) == 3 )
  {
    v3 = *((_QWORD *)this + 6);
    v4 = *((_QWORD *)this + 7);
    KeEnterCriticalRegion();
    v5 = v3 + 48;
    ExAcquirePushLockSharedEx(v3 + 48, 0LL);
    if ( *(_DWORD *)(v3 + 160) )
    {
      v6 = (_QWORD **)(v3 + 144);
      for ( i = *v6; i != v6; i = (_QWORD *)*i )
      {
        if ( *(i - 1) == v4 )
        {
          v8 = (*(__int64 (__fastcall **)(_QWORD *))(*(i - 3) + 40LL))(i - 3);
          goto LABEL_7;
        }
      }
    }
    v8 = 0;
LABEL_7:
    if ( PsGetCurrentThreadId() == *(HANDLE *)(v5 + 8) )
    {
      *(_QWORD *)(v5 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v5, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v5, 0LL);
    }
    KeLeaveCriticalRegion();
    v9 = v8;
    v1 = (char *)this + 24;
    v22 = v9;
  }
  v10 = (int *)v1;
  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2650;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
      {
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v20,
          v19,
          v21,
          0LL,
          2,
          -1,
          (__int64)L"m_pGlobal != NULL",
          2650LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v10 = (int *)((char *)this + 24);
      }
    }
  }
  v11 = *((_QWORD *)this + 7);
  v12 = *((_BYTE *)this + 582);
  v13 = *((unsigned __int8 *)this + 579);
  v14 = *v10;
  v15 = *((_QWORD *)this + 13);
  v16 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, int, bool, __int64, __int64, int))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304968LL) + 432LL);
  v17 = *(_QWORD *)(*((_QWORD *)this + 6) + 24LL);
  v18 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  v16(*((_QWORD *)this + 6), *((unsigned int *)this + 30), v18, v15, v14, v13, v12 == 0, v17, v11, v22);
}
