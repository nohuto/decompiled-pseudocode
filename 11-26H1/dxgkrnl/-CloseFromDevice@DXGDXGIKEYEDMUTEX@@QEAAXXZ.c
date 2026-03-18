/*
 * XREFs of ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401ECE1C
 * Callers:
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1401ECA08 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1401EDEC0 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     _lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_ @ 0x1402C70B0 (_lambda_a196522e28cbefec8f1ebe5a826d98cf_--_lambda_invoker_cdecl_.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402C7424 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x14036C144 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401FE008 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1402B05CC (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9A60 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::CloseFromDevice(DXGDXGIKEYEDMUTEX *this, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rbx
  unsigned int v9; // eax
  int v10; // edx
  __int64 v11; // rcx
  struct DXGRESOURCE *v12; // rsi
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // edx
  DXGGLOBAL *Global; // rax
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  _BYTE v20[32]; // [rsp+50h] [rbp-38h] BYREF

  v3 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v3[3] = this;
  v3[4] = *((_QWORD *)this + 1);
  v3[5] = *((_QWORD *)this + 4);
  WdLogGlobalForLineNumber = 549;
  if ( !*((_QWORD *)this + 1) )
    return;
  v5 = *((_QWORD *)this + 4);
  if ( v5 != PsGetCurrentProcess(v4)
    || !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
    v18[3] = PsGetCurrentProcess(v19);
    v18[4] = *((_QWORD *)this + 4);
    v18[5] = *((_QWORD *)this + 1);
    WdLogGlobalForLineNumber = 566;
    return;
  }
  if ( *((_DWORD *)this + 22) )
  {
    Current = DXGPROCESS::GetCurrent();
    if ( !Current )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 583;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 583LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v20, Current);
    v9 = (*((_DWORD *)this + 22) >> 6) & 0xFFFFFF;
    if ( v9 < *((_DWORD *)Current + 74) )
    {
      v10 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v9 + 8);
      if ( ((*((_DWORD *)this + 22) >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * v9 + 8) & 0x60)
        && (v10 & 0x2000) == 0
        && (v10 & 0x1F) != 0 )
      {
        v11 = *((_QWORD *)Current + 35);
        if ( (*(_BYTE *)(v11 + 16LL * v9 + 8) & 0x1F) == 4 )
        {
          v12 = *(struct DXGRESOURCE **)(v11 + 16LL * v9);
          if ( v12 )
          {
LABEL_15:
            v13 = *((_DWORD *)this + 22);
            v14 = (v13 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v14 < *((_DWORD *)Current + 74) )
            {
              v15 = *((_QWORD *)Current + 35);
              v16 = *(_DWORD *)(v15 + 16 * v14 + 8);
              if ( ((v13 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60)
                && (v16 & 0x2000) == 0
                && (v16 & 0x1F) != 0 )
              {
                *(_DWORD *)(16LL * ((v13 >> 6) & 0xFFFFFF) + v15 + 8) |= 0x2000u;
              }
            }
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
            DXGDEVICE::DestroyAllocationInternal(
              *((DXGDEVICE **)this + 1),
              0,
              0LL,
              v12,
              0LL,
              DXGDEVICE::DestroyFlagsDefault);
            *((_QWORD *)this + 11) = 0LL;
            goto LABEL_21;
          }
LABEL_14:
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 589;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pResource", 589LL, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_15;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v12 = 0LL;
    goto LABEL_14;
  }
LABEL_21:
  if ( !*((_DWORD *)this + 24) )
    goto LABEL_24;
  if ( *((_QWORD *)this + 13) )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(Global, *((struct DXGSYNCOBJECT **)this + 13), *((_DWORD *)this + 24), 0);
    *((_DWORD *)this + 24) = 0;
    *((_QWORD *)this + 13) = 0LL;
LABEL_24:
    if ( *((_QWORD *)this + 13) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 609;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pFenceSyncObj", 609LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  if ( *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 610;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_hFenceLocal", 610LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 4) )
    DXGDXGIKEYEDMUTEX::CloseLocalMutex(this, 0LL, 1LL);
  *((_QWORD *)this + 1) = 0LL;
}
