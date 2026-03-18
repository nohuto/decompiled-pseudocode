/*
 * XREFs of ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1403A2C44
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1403A21D8 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x140030B80 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x140038160 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A62FC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllContexts(DXGDEVICE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  struct DXGPROCESS *Current; // rbp
  volatile signed __int64 **v5; // r14
  volatile signed __int64 *i; // rbx
  __int64 *v7; // rax
  __int64 *v8; // rax
  unsigned int v9; // edi
  unsigned int v10; // eax
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r9
  const char *v15; // rdx
  _BYTE v16[24]; // [rsp+58h] [rbp-100h] BYREF
  _BYTE v17[16]; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v18[160]; // [rsp+80h] [rbp-D8h] BYREF

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2580;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 2580LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent((__int64)this);
  v5 = (volatile signed __int64 **)((char *)this + 496);
LABEL_5:
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2592;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 2592LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = *v5; ; i = (volatile signed __int64 *)*i )
  {
    v7 = 0LL;
    if ( i != (volatile signed __int64 *)v5 )
      v7 = (__int64 *)i;
    if ( !v7 )
      break;
    v8 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v5 )
      v8 = 0LL;
    v9 = *((_DWORD *)v8 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v16, Current);
    v10 = (v9 >> 6) & 0xFFFFFF;
    if ( v10 < *((_DWORD *)Current + 74) )
    {
      v11 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v10 + 8);
      if ( ((v9 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * v10 + 8) & 0x60)
        && (v11 & 0x2000) == 0
        && (v11 & 0x1F) != 0 )
      {
        v12 = *((_QWORD *)Current + 35);
        if ( (*(_BYTE *)(v12 + 16LL * v10 + 8) & 0x1F) == 7 )
        {
          if ( *(_QWORD *)(v12 + 16LL * v10) )
          {
            if ( i == (volatile signed __int64 *)v5 )
              i = 0LL;
            *(_DWORD *)(16 * (((unsigned __int64)v9 >> 6) & 0xFFFFFF) + v12 + 8) |= 0x2000u;
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
            if ( i )
            {
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
              if ( _InterlockedExchangeAdd64(i + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              {
                v13 = *((_QWORD *)i + 2);
                DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                  (DXGDEVICEACCESSLOCKEXCLUSIVE *)v17,
                  (struct DXGDEVICE *)v13);
                DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
                  (DXGADAPTERSTOPRESETLOCKSHARED *)v16,
                  *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)i + 2) + 16LL) + 16LL),
                  1);
                COREDEVICEACCESS::COREDEVICEACCESS((__int64)v18, v13, 2, v14, 0);
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v18, v15);
                if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) + 200LL) != 4 )
                  DXGDEVICE::DestroyContext((DXGDEVICE *)v13, (struct DXGCONTEXT *)i, (struct COREDEVICEACCESS *)v18);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v18);
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
                DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17);
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v13 + 16), (struct DXGDEVICE *)v13);
              }
              DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
              goto LABEL_5;
            }
            return;
          }
        }
        else
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
  }
}
