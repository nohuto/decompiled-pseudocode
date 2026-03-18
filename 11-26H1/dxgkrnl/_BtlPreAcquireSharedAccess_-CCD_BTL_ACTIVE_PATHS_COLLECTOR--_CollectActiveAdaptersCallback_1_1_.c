/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_1_ @ 0x140343DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14002D768 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x140057920 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x140087820 (DxgkIsMSBDDFallbackEnabled.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140344370 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x14034482C (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_1_(
        DXGADAPTER *this,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *a2)
{
  unsigned int v3; // edi
  __int64 v5; // rax
  VIDPN_MGR *v7; // r14
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v9; // rsi
  struct DMMVIDPN *v10; // rbx
  VIDPN_MGR *v11; // rbx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  ReferenceCounted *v17; // rcx
  __int64 v18; // rbx
  struct DXGADAPTER *ContainingAdapter; // rax
  _QWORD *v20; // rax
  struct DMMVIDPN *v21; // [rsp+30h] [rbp-99h] BYREF
  const struct DMMVIDPN *v22; // [rsp+38h] [rbp-91h] BYREF
  _BYTE v23[8]; // [rsp+40h] [rbp-89h] BYREF
  DXGADAPTER *v24; // [rsp+48h] [rbp-81h]
  char v25; // [rsp+50h] [rbp-79h]
  _BYTE v26[144]; // [rsp+60h] [rbp-69h] BYREF

  v24 = this;
  v3 = 0;
  v25 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  v5 = *((_QWORD *)this + 395);
  if ( !v5 || !*(_QWORD *)(v5 + 432) || *((_DWORD *)this + 50) != 1 )
    goto LABEL_2;
  v11 = *(VIDPN_MGR **)(*((_QWORD *)this + 395) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)&v21, (__int64)v11);
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v11);
  v22 = ClientCommittedVidPnRef;
  if ( !ClientCommittedVidPnRef || !*((_QWORD *)ClientCommittedVidPnRef + 17) )
  {
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v22, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v21 + 5);
LABEL_2:
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
    return 0LL;
  }
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v22, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)v21 + 5);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, this, 0LL);
  v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26, 0LL);
  if ( v13 < 0 )
  {
    if ( v13 == -1073741130 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14);
      v20[3] = this;
      v20[4] = *((int *)this + 104);
      v20[5] = *((unsigned int *)this + 103);
      v20[6] = a2;
      WdLogGlobalForLineNumber = 60;
    }
    else
    {
      v3 = v13;
    }
    goto LABEL_7;
  }
  if ( *((_BYTE *)this + 3057) || DXGADAPTER::IsBddFallbackDriver(this) && !DxgkIsMSBDDFallbackEnabled() )
    goto LABEL_7;
  v16 = *((_QWORD *)this + 395);
  if ( !v16 )
    goto LABEL_7;
  v7 = *(VIDPN_MGR **)(v16 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)&v22, (__int64)v7);
  v21 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v7);
  v9 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v18 = *((unsigned int *)VIDPN_MGR::GetContainingAdapter(v7) + 103);
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v7);
    WdLogSingleEntry5(2LL, v9, v7, *(_QWORD *)(*(_QWORD *)a2 + 64LL), *((int *)ContainingAdapter + 104), v18);
    WdLogGlobalForLineNumber = 677;
    if ( !v21 )
      goto LABEL_6;
    v17 = (struct DMMVIDPN *)((char *)v21 + 24);
    goto LABEL_18;
  }
  v10 = v21;
  LODWORD(v9) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(a2, v21, 1);
  if ( (int)v9 < 0 )
  {
    auto_rc<DMMVIDPN>::reset((__int64 *)&v21, 0LL);
    goto LABEL_6;
  }
  if ( v10 )
  {
    v17 = (struct DMMVIDPN *)((char *)v10 + 24);
LABEL_18:
    ReferenceCounted::Release(v17);
  }
LABEL_6:
  DXGFASTMUTEX::Release((struct _KTHREAD **)v22 + 5);
  v3 = v9;
LABEL_7:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  return v3;
}
