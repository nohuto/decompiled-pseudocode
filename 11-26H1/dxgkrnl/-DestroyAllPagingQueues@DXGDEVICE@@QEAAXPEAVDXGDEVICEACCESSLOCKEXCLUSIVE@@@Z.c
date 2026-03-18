/*
 * XREFs of ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1403A2844
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1403A21D8 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x140030B80 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x140038160 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A39A4 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllPagingQueues(DXGDEVICE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  struct DXGPROCESS *Current; // r15
  volatile signed __int64 **v5; // r14
  volatile signed __int64 *i; // rbx
  __int64 *v7; // rax
  __int64 *v8; // rax
  unsigned int v9; // edi
  unsigned int v10; // eax
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  struct DXGADAPTER *v16; // rdx
  const char *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  struct COREDEVICEACCESS *v21; // r8
  unsigned __int64 v22; // rdx
  _BYTE v23[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h]
  char v25; // [rsp+60h] [rbp-A0h]
  _BYTE v26[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v27[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v28[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v29[64]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v30; // [rsp+108h] [rbp+8h]
  char v31; // [rsp+110h] [rbp+10h]

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2647;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 2647LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent((__int64)this);
  v5 = (volatile signed __int64 **)((char *)this + 528);
LABEL_5:
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2659;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 2659LL, 0LL, 0LL, 0LL, 0LL);
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
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v23, Current);
    v10 = (v9 >> 6) & 0xFFFFFF;
    if ( v10 < *((_DWORD *)Current + 74) )
    {
      v11 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v10 + 8);
      if ( ((v9 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * v10 + 8) & 0x60)
        && (v11 & 0x2000) == 0
        && (v11 & 0x1F) != 0 )
      {
        v12 = *((_QWORD *)Current + 35);
        if ( (*(_BYTE *)(v12 + 16LL * v10 + 8) & 0x1F) == 0xA )
        {
          if ( *(_QWORD *)(v12 + 16LL * v10) )
          {
            if ( i == (volatile signed __int64 *)v5 )
              i = 0LL;
            *(_DWORD *)(16 * (((unsigned __int64)v9 >> 6) & 0xFFFFFF) + v12 + 8) |= 0x2000u;
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
            if ( i )
            {
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
              v13 = _InterlockedDecrement64(i + 8);
              if ( v13 < 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 67;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"NewReferenceCount >= 0",
                  67LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              else if ( !v13 )
              {
                v14 = *((_QWORD *)i + 2);
                DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                  (DXGDEVICEACCESSLOCKEXCLUSIVE *)v26,
                  (struct DXGDEVICE *)v14);
                v15 = *(_QWORD *)(v14 + 16);
                v25 = 0;
                v24 = *(_QWORD *)(v15 + 16);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
                COREACCESS::COREACCESS((COREACCESS *)v28, *(struct DXGADAPTER *const *)(*(_QWORD *)(v14 + 16) + 16LL));
                v16 = *(struct DXGADAPTER **)(v14 + 1896);
                if ( !v16 )
                  v16 = *(struct DXGADAPTER **)(*(_QWORD *)(v14 + 16) + 16LL);
                COREACCESS::COREACCESS((COREACCESS *)v29, v16);
                v18 = *(_QWORD *)(v14 + 16);
                v19 = *(_QWORD *)(v14 + 1896);
                v30 = v14;
                if ( v19 == *(_QWORD *)(v18 + 16) || (v31 = 1, !v19) )
                  v31 = 0;
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v27, v17);
                if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 200LL) != 4 )
                  DXGDEVICE::DestroyPagingQueue((DXGDEVICE *)v14, (struct DXGPAGINGQUEUE *)i, v21);
                COREACCESS::~COREACCESS((COREACCESS *)v29, v20);
                COREACCESS::~COREACCESS((COREACCESS *)v28, v22);
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
                DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v14 + 16), (struct DXGDEVICE *)v14);
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
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
  }
}
