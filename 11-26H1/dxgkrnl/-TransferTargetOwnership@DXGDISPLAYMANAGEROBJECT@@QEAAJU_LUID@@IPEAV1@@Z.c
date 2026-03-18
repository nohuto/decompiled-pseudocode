/*
 * XREFs of ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1401D0EB8
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1401D1110 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Add@?$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z @ 0x140059B7C (-Add@-$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x140059C40 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?Remove@?$Set@VDXGTARGETENTRY@@@@QEAAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x140067CFC (-Remove@-$Set@VDXGTARGETENTRY@@@@QEAAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1403CD840 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::TransferTargetOwnership(
        DXGDISPLAYMANAGEROBJECT *this,
        struct _LUID a2,
        unsigned int a3,
        struct DXGDISPLAYMANAGEROBJECT *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  unsigned int v8; // r14d
  __int64 v9; // rdi
  const wchar_t *v10; // r9
  void (__fastcall ***v11)(_QWORD, __int64); // rbx
  _BYTE v13[16]; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v14[16]; // [rsp+68h] [rbp-9h] BYREF
  void **v15; // [rsp+78h] [rbp+7h] BYREF
  __int128 v16; // [rsp+80h] [rbp+Fh]
  __int64 v17; // [rsp+90h] [rbp+1Fh]
  int v18; // [rsp+98h] [rbp+27h]
  LONG HighPart; // [rsp+E4h] [rbp+73h]

  HighPart = a2.HighPart;
  v4 = (__int64)a2;
  v5 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGDISPLAYMANAGEROBJECT *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  v8 = 0;
  if ( !*((_QWORD *)this + 9) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 224;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DispMgr object called after being invalidated.",
      224LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v8 = -2147483611;
    goto LABEL_13;
  }
  v17 = v4;
  v15 = &SetElement::`vftable';
  v18 = v5;
  v16 = 0LL;
  if ( !Set<DXGTARGETENTRY>::FindByValue((__int64)this + 80) )
  {
    v9 = HighPart;
    v4 = (unsigned int)v4;
    WdLogSingleEntry3(2LL, v5, HighPart, (unsigned int)v4);
    v10 = L"Failed to find owned target 0x%I64x on adapter 0x%I64x-%I64x";
    WdLogGlobalForLineNumber = 231;
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v5, v9, v4, 0LL, 0LL);
    v8 = -1073741275;
    goto LABEL_13;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  if ( (int)DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(&v15, a4, this, 0LL, 0) < 0 )
    goto LABEL_13;
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  if ( !Set<DXGTARGETENTRY>::FindByValue((__int64)this + 80) )
  {
    v9 = HighPart;
    v4 = (unsigned int)v4;
    WdLogSingleEntry3(2LL, v5, HighPart, (unsigned int)v4);
    v10 = L"Target 0x%I64x on adapter 0x%I64x-%I64x is just removed when the lock is released.";
    WdLogGlobalForLineNumber = 248;
    goto LABEL_5;
  }
  v11 = (void (__fastcall ***)(_QWORD, __int64))Set<DXGTARGETENTRY>::Remove((__int64)this + 80);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGDISPLAYMANAGEROBJECT *)((char *)a4 + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  if ( !Set<DXGTARGETENTRY>::Add((__int64)a4 + 80, (__int64)v11) && v11 )
    (**v11)(v11, 1LL);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
LABEL_13:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
  return v8;
}
