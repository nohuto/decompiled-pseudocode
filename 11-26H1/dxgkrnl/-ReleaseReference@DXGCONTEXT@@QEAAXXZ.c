/*
 * XREFs of ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x140016630
 * Callers:
 *     DxgkGetSharedPrimaryHandle @ 0x1401B5F10 (DxgkGetSharedPrimaryHandle.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x140294050 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x140302D00 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     DxgkPresent @ 0x140323BB0 (DxgkPresent.c)
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1403D9A58 (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A62FC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGCONTEXT::ReleaseReference(DXGCONTEXT *this)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  bool v4; // r8
  bool v5; // r8
  struct DXGADAPTER *v6; // rdx
  const char *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  _BYTE v10[16]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v11[8]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-D0h]
  char v13; // [rsp+40h] [rbp-C8h]
  _BYTE v14[8]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v15[64]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v16[64]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v17; // [rsp+D8h] [rbp-30h]
  bool v18; // [rsp+E0h] [rbp-28h]

  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v2 = *((_QWORD *)this + 2);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v10,
      (struct DXGDEVICE *)v2);
    v3 = *((_QWORD *)this + 2);
    v13 = 0;
    v12 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
    COREACCESS::COREACCESS((COREACCESS *)v15, *(struct DXGADAPTER *const *)(*(_QWORD *)(v2 + 16) + 16LL), v4);
    v6 = *(struct DXGADAPTER **)(v2 + 1896);
    if ( !v6 )
      v6 = *(struct DXGADAPTER **)(*(_QWORD *)(v2 + 16) + 16LL);
    COREACCESS::COREACCESS((COREACCESS *)v16, v6, v5);
    v8 = *(_QWORD *)(v2 + 16);
    v9 = *(_QWORD *)(v2 + 1896);
    v17 = v2;
    v18 = v9 != *(_QWORD *)(v8 + 16) && v9;
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v14, v7);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 16LL) + 200LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v2, this, (struct COREDEVICEACCESS *)v14);
    COREACCESS::~COREACCESS((COREACCESS *)v16);
    COREACCESS::~COREACCESS((COREACCESS *)v15);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v10);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v2 + 16), (struct DXGDEVICE *)v2);
  }
}
