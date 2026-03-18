/*
 * XREFs of ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x14001628C
 * Callers:
 *     ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1401905C0 (-DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z.c)
 *     DxgkUpdateAllocationProperty @ 0x1401F28D0 (DxgkUpdateAllocationProperty.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z @ 0x14028C280 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x14037FEC0 (DxgkMapGpuVirtualAddress.c)
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x140387D98 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 *     DxgkReclaimAllocations2 @ 0x14038E1A0 (DxgkReclaimAllocations2.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1403C86B0 (DxgkReserveGpuVirtualAddress.c)
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

void __fastcall DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE(DXGPAGINGQUEUEBYHANDLE *this)
{
  __int64 v1; // rdi
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

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(v1 + 64));
    if ( v2 < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 67;
      DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"NewReferenceCount >= 0", 67LL, 0LL, 0LL, 0LL, 0LL);
    }
    else if ( !v2 )
    {
      v3 = *(_QWORD *)(v1 + 16);
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
        DXGDEVICE::DestroyPagingQueue((DXGDEVICE *)v3, (struct DXGPAGINGQUEUE *)v1, v11);
      COREACCESS::~COREACCESS((COREACCESS *)v18);
      COREACCESS::~COREACCESS((COREACCESS *)v17);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v12);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v3 + 16), (struct DXGDEVICE *)v3);
    }
  }
}
