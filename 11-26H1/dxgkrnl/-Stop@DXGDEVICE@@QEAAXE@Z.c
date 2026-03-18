/*
 * XREFs of ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1401C3A8C
 * Callers:
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1401A9B50 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140030C90 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?Stop@DXGOVERLAY@@QEAAXXZ @ 0x1401F08FC (-Stop@DXGOVERLAY@@QEAAXXZ.c)
 *     ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1401F71A8 (-SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402E6274 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x14038B7CC (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x14038B858 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1403A379C (OutputDuplProcessDestroyDevice.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1403D0364 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1403F5A24 (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::Stop(ADAPTER_RENDER **this, char a2)
{
  ADAPTER_RENDER *v4; // rcx
  ADAPTER_RENDER *v5; // rsi
  ADAPTER_RENDER *i; // rdi
  ADAPTER_RENDER *v7; // rax
  DXGOVERLAY *v8; // rcx
  ADAPTER_RENDER *j; // rdi
  DXGPROCESS *v10; // rcx
  const struct _WNF_STATE_NAME *v11; // rdx
  unsigned int v12; // r9d
  int v13; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v14[16]; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v15[24]; // [rsp+68h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp+7h] BYREF

  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1871;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      1871LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  WdLogSingleEntry1(4LL);
  WdLogGlobalForLineNumber = 1873;
  if ( !a2 )
  {
    v4 = this[5];
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*((PRKPROCESS *)v4 + 7), &ApcState);
    OutputDuplProcessDestroyDevice(this[237], this);
    DXGDEVICE::FlushDeferredDestruction((DXGDEVICE *)this, 0LL, 0, 0);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (ADAPTER_RENDER *)((char *)this[2] + 856), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
    v5 = (ADAPTER_RENDER *)(this + 64);
    for ( i = this[64]; ; i = *(ADAPTER_RENDER **)i )
    {
      v7 = 0LL;
      if ( i != v5 )
        v7 = i;
      if ( !v7 )
        break;
      v8 = i;
      if ( i == v5 )
        v8 = 0LL;
      DXGOVERLAY::Stop(v8);
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
    DXGDEVICE::FlushPagingQueues((DXGDEVICE *)this);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v15, this + 30);
    for ( j = this[7]; j; j = (ADAPTER_RENDER *)*((_QWORD *)j + 5) )
      DXGDEVICE::DestroyCoreAllocations((DXGDEVICE *)this, j, *((struct DXGALLOCATION **)j + 3));
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
    DXGDEVICE::DrainCoreAllocations((DXGDEVICE *)this);
    DXGDEVICE::DestroyDevice((DXGDEVICE *)this, 0LL);
    KeUnstackDetachProcess(&ApcState);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  }
  *((_DWORD *)this + 152) = 4;
  WdLogSingleEntry1(4LL);
  v10 = this[5];
  WdLogGlobalForLineNumber = 1942;
  v13 = 1;
  if ( (int)DXGPROCESS::SendWnfNotification(v10, v11, &v13, v12) < 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1952;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGPROCESS::SendWnfNotification failed during DXGDEVICE::Stop.",
      1952LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
