/*
 * XREFs of ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z @ 0x140021340
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14001FD20 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x140020FFC (-CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?NotifyFrame@CPresentRate@@QEAAXXZ @ 0x140021D2C (-NotifyFrame@CPresentRate@@QEAAXXZ.c)
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x140021DC0 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x140039724 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x14004CF10 (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x14004E190 (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x14004E4BC (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N_K@Z @ 0x1400680AC (-NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N_K@Z.c)
 *     ?InsertCascadedTokenWait@CFlipExBuffer@@QEAAJPEA_K0@Z @ 0x14006C504 (-InsertCascadedTokenWait@CFlipExBuffer@@QEAAJPEA_K0@Z.c)
 *     ?InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z @ 0x14006C5B0 (-InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall CFlipToken::InitializeCompleted(
        CFlipToken *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2,
        char a3)
{
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  _QWORD **v11; // rbx
  _QWORD *i; // rax
  unsigned __int8 v13; // bl
  __int64 v14; // r15
  char v15; // bl
  int v16; // esi
  int v17; // ebp
  __int64 v18; // r14
  void (__fastcall *v19)(_QWORD, _QWORD, _QWORD, __int64, int, int, bool, __int64, __int64, int); // r12
  __int64 v20; // rdi
  unsigned int v21; // eax
  __int64 result; // rax
  __int64 v23; // rdi
  int v24; // esi
  HANDLE CurrentThreadId; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rbx
  int v28; // eax
  CPushLock *v29; // rcx
  char v30; // cl
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // eax
  UINT PlaneIndex; // eax
  UINT v33; // edi
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  UINT NumBlts; // ecx
  UINT v41; // ecx
  struct CCompositionBuffer *v42; // rbp
  _QWORD *j; // rax
  CFlipExBuffer *v44; // rbp
  int inserted; // eax
  __int64 v46; // rdx
  char *v47; // rax
  __int64 v48; // rdx
  _BYTE *v49; // rcx
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  unsigned __int64 v58; // rbx
  __int128 v59; // xmm1
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // r8
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int64 v64; // rax
  bool v65; // [rsp+60h] [rbp-238h] BYREF
  unsigned __int64 v66; // [rsp+68h] [rbp-230h] BYREF
  int v67; // [rsp+70h] [rbp-228h]
  unsigned __int64 v68; // [rsp+78h] [rbp-220h] BYREF
  _BYTE v69[464]; // [rsp+80h] [rbp-218h] BYREF

  *((_DWORD *)this + 6) = 0;
  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2650;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v38,
          v37,
          v39,
          0LL,
          2,
          -1,
          (__int64)L"m_pGlobal != NULL",
          2650LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  LODWORD(v66) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304968LL) + 40LL))((char *)this + 96);
  v6 = *(_QWORD *)this;
  if ( (v66 & 0x80000000) == 0LL )
  {
    (*(void (__fastcall **)(CFlipToken *))(v6 + 24))(this);
    if ( (a2->Flags.Value & 0x180) != 0 && (((a2->Flags.Value & 0x180) - 128) & 0xFFFFFEFF) != 0 )
    {
      LODWORD(v66) = -1073741811;
    }
    else
    {
      *((_QWORD *)this + 13) = a2->FenceValue;
      if ( (signed int)a2->RemainingTokens < a2->ScrollRect.top && a2->ScrollRect.left < a2->ScrollRect.right )
      {
        *((_DWORD *)this + 17) = 1;
        *(_OWORD *)((char *)this + 72) = *(_OWORD *)&a2->RemainingTokens;
        *((_QWORD *)this + 11) = *(_QWORD *)&a2->ScrollRect.bottom;
      }
      *((_DWORD *)this + 32) = a2->FlipInterval;
      *((_DWORD *)this + 31) = a2->ScrollOffset.y;
      *((_DWORD *)this + 30) = a2->SwapChainIndex;
      *((_DWORD *)this + 57) = LODWORD(a2->Transform[4]);
      *((_BYTE *)this + 132) = (a2->Flags.Value & 0x800000) != 0;
      *((_BYTE *)this + 134) = (a2->Flags.Value & 2) != 0;
      *((_BYTE *)this + 152) = (a2->Flags.Value & 8) != 0;
      *((_BYTE *)this + 153) = (a2->Flags.Value & 0x10) != 0;
      *((_BYTE *)this + 133) = (a2->Flags.Value & 0x20) != 0;
      v30 = (a2->Flags.Value & 0x40) != 0;
      *((_BYTE *)this + 154) = v30;
      *((_DWORD *)this + 39) = (a2->Flags.Value >> 7) & 3;
      *((_DWORD *)this + 34) = a2->PresentCount;
      *((_DWORD *)this + 35) = LODWORD(a2->RevealColor[0]);
      *((_DWORD *)this + 36) = LODWORD(a2->RevealColor[1]);
      *((_DWORD *)this + 37) = LODWORD(a2->RevealColor[2]);
      *((_DWORD *)this + 40) = LODWORD(a2->RevealColor[3]);
      *(_OWORD *)((char *)this + 164) = *(_OWORD *)((char *)&a2->1 + 580);
      *(_OWORD *)((char *)this + 180) = *(_OWORD *)&a2->DestWidth;
      *((_DWORD *)this + 49) = a2->SourceRect.right;
      *((_DWORD *)this + 50) = a2->SourceRect.bottom;
      *((_DWORD *)this + 143) = a2->ScatterBlts.Blts[11].DestinationOffset.x;
      *((_BYTE *)this + 579) = (a2->Flags.Value & 0x2000) != 0;
      *((_QWORD *)this + 74) = a2->dxgContext;
      *((_DWORD *)this + 152) = a2->VidPnSourceId;
      *((_DWORD *)this + 58) = a2->CustomDurationFlipInterval;
      *((_DWORD *)this + 153) = a2->CustomDuration;
      *((_BYTE *)this + 584) = (a2->Flags.Value & 0x8000000) != 0;
      *((_DWORD *)this + 51) = a2->TargetRect.right;
      *((_DWORD *)this + 52) = a2->TargetRect.bottom;
      *((_DWORD *)this + 53) = LODWORD(a2->Transform[0]);
      *((_DWORD *)this + 54) = LODWORD(a2->Transform[1]);
      *((_DWORD *)this + 55) = LODWORD(a2->Transform[2]);
      *((_DWORD *)this + 56) = LODWORD(a2->Transform[3]);
      if ( !a2->PresentLimitSemaphoreId )
        *((_BYTE *)this + 578) = 1;
      *((_BYTE *)this + 582) = a3;
      Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)a2->Flags.Value;
      if ( (*(_DWORD *)&Value & 0x100000) != 0 )
      {
        *((_QWORD *)this + 75) = a2->confirmationCookie;
        *((_BYTE *)this + 580) = 1;
      }
      else if ( (*(_DWORD *)&Value & 0x1000000) != 0 )
      {
        *((_BYTE *)this + 581) = 1;
      }
      PlaneIndex = a2->PlaneIndex;
      LODWORD(v66) = 0;
      if ( PlaneIndex )
      {
        if ( PlaneIndex > 0x10 )
        {
          LODWORD(v66) = -1073741811;
        }
        else
        {
          *((_DWORD *)this + 78) = PlaneIndex;
          v33 = 0;
          LODWORD(v66) = 0;
          if ( a2->PlaneIndex )
          {
            LODWORD(v66) = 0;
            do
            {
              *(_OWORD *)((char *)this + 16 * v33 + 316) = *((_OWORD *)&a2->ColorSpace + v33);
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 40LL))(*((_QWORD *)this + 12));
              ++v33;
            }
            while ( v33 < a2->PlaneIndex );
            v30 = *((_BYTE *)this + 154);
          }
        }
      }
      if ( v30 )
      {
        NumBlts = a2->ScatterBlts.NumBlts;
        *((_DWORD *)this + 59) = NumBlts;
        v41 = NumBlts - 1;
        if ( v41 )
        {
          if ( v41 == 1 )
          {
            *((_OWORD *)this + 15) = *(_OWORD *)((char *)&a2->hSyncObject + 4);
            *((_OWORD *)this + 16) = *(_OWORD *)&a2->HDRMetaDataHDR10Plus.Data[8];
            *((_OWORD *)this + 17) = *(_OWORD *)&a2->HDRMetaDataHDR10Plus.Data[24];
            *((_OWORD *)this + 18) = *(_OWORD *)&a2->HDRMetaDataHDR10Plus.Data[40];
            *((_QWORD *)this + 38) = *(_QWORD *)&a2->HDRMetaDataHDR10Plus.Data[56];
          }
        }
        else
        {
          *((_OWORD *)this + 15) = *(_OWORD *)((char *)&a2->hSyncObject + 4);
          *((_QWORD *)this + 32) = *(_QWORD *)&a2->HDRMetaDataHDR10Plus.Data[8];
          *((_DWORD *)this + 66) = a2->HDRMetaDataHDR10.MaxMasteringLuminance;
        }
      }
      if ( (a2->Flags.Value & 0x20000000) != 0
        && (!(*(unsigned __int8 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 144LL))(this)
         || (*(unsigned __int8 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 152LL))(this)) )
      {
        CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(this, 1);
      }
    }
  }
  else
  {
    (*(void (__fastcall **)(CFlipToken *))(v6 + 56))(this);
  }
  v7 = *((_DWORD *)this + 6) == 3;
  v67 = 0;
  if ( v7 )
  {
    v8 = *((_QWORD *)this + 6);
    v9 = *((_QWORD *)this + 7);
    KeEnterCriticalRegion();
    v10 = v8 + 48;
    ExAcquirePushLockSharedEx(v8 + 48, 0LL);
    if ( *(_DWORD *)(v8 + 160) )
    {
      v11 = (_QWORD **)(v8 + 144);
      for ( i = *v11; i != v11; i = (_QWORD *)*i )
      {
        if ( *(i - 1) == v9 )
        {
          v13 = (*(__int64 (__fastcall **)(_QWORD *))(*(i - 3) + 40LL))(i - 3);
          goto LABEL_12;
        }
      }
    }
    v13 = 0;
LABEL_12:
    if ( PsGetCurrentThreadId() == *(HANDLE *)(v10 + 8) )
    {
      *(_QWORD *)(v10 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v10, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v10, 0LL);
    }
    KeLeaveCriticalRegion();
    v67 = v13;
  }
  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2650;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v35,
          v34,
          v36,
          0LL,
          2,
          -1,
          (__int64)L"m_pGlobal != NULL",
          2650LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v14 = *((_QWORD *)this + 7);
  v15 = *((_BYTE *)this + 582);
  v16 = *((unsigned __int8 *)this + 579);
  v17 = *((_DWORD *)this + 6);
  v18 = *((_QWORD *)this + 13);
  v19 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, int, bool, __int64, __int64, int))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304968LL) + 432LL);
  v20 = *(_QWORD *)(*((_QWORD *)this + 6) + 24LL);
  v21 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  v19(*((_QWORD *)this + 6), *((unsigned int *)this + 30), v21, v18, v17, v16, v15 == 0, v20, v14, v67);
  result = (unsigned int)v66;
  if ( (v66 & 0x80000000) == 0LL )
  {
    v23 = *((_QWORD *)this + 6);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v23 + 48, 0LL);
    *(_QWORD *)(v23 + 56) = PsGetCurrentThreadId();
    v24 = 0;
    CPresentRate::NotifyFrame((CPresentRate *)(v23 + 96));
    if ( *(_QWORD *)(v23 + 192) )
    {
      v42 = 0LL;
      v24 = -1073741275;
      if ( *(_DWORD *)(v23 + 160) )
      {
        for ( j = *(_QWORD **)(v23 + 144); j != (_QWORD *)(v23 + 144); j = (_QWORD *)*j )
        {
          if ( *(j - 1) == *((_QWORD *)this + 7) )
          {
            v42 = (struct CCompositionBuffer *)(j - 3);
            v24 = 0;
            break;
          }
        }
      }
      if ( v24 >= 0 )
      {
        v68 = 0LL;
        v66 = 0LL;
        memset(v69, 0, 0x1C8uLL);
        v44 = CFlipExBuffer::FromBuffer(v42);
        inserted = CFlipExBuffer::InsertCascadedTokenWait(v44, &v68, &v66);
        v24 = inserted;
        if ( inserted >= 0
          || inserted == -1073741267
          && (CFlipExBuffer::DisableCascadedSignaling(v44),
              LOBYTE(v46) = 1,
              v24 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v23 + 192) + 32LL))(
                      *(_QWORD *)(v23 + 192),
                      v46),
              v24 >= 0)
          && (v24 = CCompositionSurface::PairBind((CCompositionSurface *)(v23 + 40), v44), v24 >= 0)
          && (v24 = CFlipExBuffer::InsertCascadedTokenWait(v44, &v68, &v66), v24 >= 0) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 168LL))(this) )
          {
            v47 = (char *)this + 120;
            v48 = 3LL;
            v49 = v69;
            do
            {
              v49 += 128;
              v50 = *(_OWORD *)v47;
              v51 = *((_OWORD *)v47 + 1);
              v47 += 128;
              *((_OWORD *)v49 - 8) = v50;
              v52 = *((_OWORD *)v47 - 6);
              *((_OWORD *)v49 - 7) = v51;
              v53 = *((_OWORD *)v47 - 5);
              *((_OWORD *)v49 - 6) = v52;
              v54 = *((_OWORD *)v47 - 4);
              *((_OWORD *)v49 - 5) = v53;
              v55 = *((_OWORD *)v47 - 3);
              *((_OWORD *)v49 - 4) = v54;
              v56 = *((_OWORD *)v47 - 2);
              *((_OWORD *)v49 - 3) = v55;
              v57 = *((_OWORD *)v47 - 1);
              *((_OWORD *)v49 - 2) = v56;
              *((_OWORD *)v49 - 1) = v57;
              --v48;
            }
            while ( v48 );
            v58 = v66;
            v59 = *((_OWORD *)v47 + 1);
            v60 = v68;
            v61 = v66;
            *(_OWORD *)v49 = *(_OWORD *)v47;
            v62 = *((_OWORD *)v47 + 2);
            *((_OWORD *)v49 + 1) = v59;
            v63 = *((_OWORD *)v47 + 3);
            v64 = *((_QWORD *)v47 + 8);
            *((_OWORD *)v49 + 2) = v62;
            *((_OWORD *)v49 + 3) = v63;
            *((_QWORD *)v49 + 8) = v64;
            v24 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64, _BYTE *))(**(_QWORD **)(v23 + 192)
                                                                                                 + 40LL))(
                    *(_QWORD *)(v23 + 192),
                    v60,
                    v61,
                    v69);
            if ( v24 < 0 )
              CFlipExBuffer::InsertCascadedTokenSignal(v44, v58);
          }
        }
      }
    }
    CurrentThreadId = PsGetCurrentThreadId();
    v26 = v23 + 48;
    if ( CurrentThreadId == *(HANDLE *)(v23 + 56) )
    {
      *(_QWORD *)(v23 + 56) = 0LL;
      ExReleasePushLockExclusiveEx(v26, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v26, 0LL);
    }
    KeLeaveCriticalRegion();
    if ( v24 < 0 || *((_BYTE *)this + 582) )
    {
      return (unsigned int)v24;
    }
    else
    {
      *((_DWORD *)this + 6) = 3;
      CFlipToken::TraceStateChanged(this);
      v27 = (_QWORD *)*((_QWORD *)this + 6);
      v65 = 0;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v27 + 6, 0LL);
      v27[7] = PsGetCurrentThreadId();
      v28 = CCompositionSurface::NotifyTokenInFrame((CCompositionSurface *)(v27 + 5), this, &v65, 0LL);
      v29 = (CPushLock *)(v27 + 6);
      LODWORD(v27) = v28;
      CPushLock::ReleaseLock(v29);
      return (unsigned int)v27;
    }
  }
  return result;
}
