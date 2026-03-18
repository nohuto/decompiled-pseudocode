/*
 * XREFs of ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1401D0D28
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1401D1110 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Remove@?$Set@VDXGTARGETENTRY@@@@QEAAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x140067CFC (-Remove@-$Set@VDXGTARGETENTRY@@@@QEAAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1403CD840 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnership(
        DXGDISPLAYMANAGEROBJECT *this,
        struct _LUID a2,
        unsigned int a3)
{
  __int64 v4; // r14
  unsigned int v6; // ebp
  void (__fastcall ***v7)(_QWORD, __int64); // rsi
  _BYTE v9[16]; // [rsp+50h] [rbp-58h] BYREF
  void **v10; // [rsp+60h] [rbp-48h]
  __int128 v11; // [rsp+68h] [rbp-40h]
  struct _LUID v12; // [rsp+78h] [rbp-30h]
  int v13; // [rsp+80h] [rbp-28h]
  LONG HighPart; // [rsp+BCh] [rbp+14h]

  HighPart = a2.HighPart;
  v4 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGDISPLAYMANAGEROBJECT *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v6 = 0;
  if ( *((_QWORD *)this + 9) )
  {
    v12 = a2;
    v10 = &SetElement::`vftable';
    v13 = v4;
    v11 = 0LL;
    v7 = (void (__fastcall ***)(_QWORD, __int64))Set<DXGTARGETENTRY>::Remove((__int64)this + 80);
    if ( v7 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
      DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(v7, 0LL, this, 0LL, 0);
      (**v7)(v7, 1LL);
    }
    else
    {
      WdLogSingleEntry3(2LL, v4, HighPart, a2.LowPart);
      WdLogGlobalForLineNumber = 166;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to find owned target 0x%I64x on adapter 0x%I64x-%I64x",
        v4,
        HighPart,
        a2.LowPart,
        0LL,
        0LL);
      v6 = -1073741275;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 158;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DispMgr object called after being invalidated.",
      158LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v6 = -2147483611;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v9);
  return v6;
}
