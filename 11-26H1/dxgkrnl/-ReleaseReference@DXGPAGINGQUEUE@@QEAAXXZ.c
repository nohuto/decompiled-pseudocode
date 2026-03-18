/*
 * XREFs of ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x140016460
 * Callers:
 *     ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1403CEE1C (-DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z.c)
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A39A4 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGPAGINGQUEUE::ReleaseReference(DXGPAGINGQUEUE *this)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  bool v5; // r8
  bool v6; // r8
  struct DXGADAPTER *v7; // rdx
  const char *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct COREDEVICEACCESS *v11; // r8
  _BYTE v12[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+68h] [rbp-98h]
  char v15; // [rsp+70h] [rbp-90h]
  _BYTE v16[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v17[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v18[64]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v19; // [rsp+108h] [rbp+8h]
  char v20; // [rsp+110h] [rbp+10h]

  v2 = _InterlockedDecrement64((volatile signed __int64 *)this + 8);
  if ( v2 < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 67;
    DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"NewReferenceCount >= 0", 67LL, 0LL, 0LL, 0LL, 0LL);
  }
  else if ( !v2 )
  {
    v3 = *((_QWORD *)this + 2);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v12,
      (struct DXGDEVICE *)v3);
    v4 = *(_QWORD *)(v3 + 16);
    v15 = 0;
    v14 = *(_QWORD *)(v4 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
    COREACCESS::COREACCESS((COREACCESS *)v17, *(struct DXGADAPTER *const *)(*(_QWORD *)(v3 + 16) + 16LL), v5);
    v7 = *(struct DXGADAPTER **)(v3 + 1896);
    if ( !v7 )
      v7 = *(struct DXGADAPTER **)(*(_QWORD *)(v3 + 16) + 16LL);
    COREACCESS::COREACCESS((COREACCESS *)v18, v7, v6);
    v9 = *(_QWORD *)(v3 + 16);
    v10 = *(_QWORD *)(v3 + 1896);
    v19 = v3;
    if ( v10 == *(_QWORD *)(v9 + 16) || (v20 = 1, !v10) )
      v20 = 0;
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v16, v8);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 200LL) != 4 )
      DXGDEVICE::DestroyPagingQueue((DXGDEVICE *)v3, this, v11);
    COREACCESS::~COREACCESS((COREACCESS *)v18);
    COREACCESS::~COREACCESS((COREACCESS *)v17);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v12);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v3 + 16), (struct DXGDEVICE *)v3);
  }
}
