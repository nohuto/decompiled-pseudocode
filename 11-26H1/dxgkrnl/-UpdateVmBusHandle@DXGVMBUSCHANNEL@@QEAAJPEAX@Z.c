/*
 * XREFs of ?UpdateVmBusHandle@DXGVMBUSCHANNEL@@QEAAJPEAX@Z @ 0x1402136A4
 * Callers:
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1401F66FC (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::UpdateVmBusHandle(DXGVMBUSCHANNEL *this, void *a2)
{
  int v4; // eax
  __int64 v5; // rdi
  _BYTE v7[24]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGVMBUSCHANNEL *)((char *)this + 120), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v4 = ((__int64 (__fastcall *)(_QWORD, void *))qword_140168688)(*((_QWORD *)this + 2), a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry2(2LL, v4, this);
    WdLogGlobalForLineNumber = 415;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmbServerChannelInitSetVmbusHandle failed. Returning 0x%I64x",
      v5,
      (__int64)this,
      0LL,
      0LL,
      0LL);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
  return (unsigned int)v5;
}
