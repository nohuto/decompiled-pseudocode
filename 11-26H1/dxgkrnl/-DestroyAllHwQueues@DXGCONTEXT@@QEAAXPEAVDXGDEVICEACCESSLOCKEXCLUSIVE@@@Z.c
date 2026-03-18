/*
 * XREFs of ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1403D9E3C
 * Callers:
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1403D9A58 (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
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
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A7B58 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyAllHwQueues(DXGCONTEXT *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // r13
  volatile signed __int64 **v6; // r14
  __int64 v7; // rcx
  volatile signed __int64 *i; // rdi
  __int64 *v9; // rax
  __int64 *v10; // rax
  unsigned int v11; // ebx
  unsigned int v12; // eax
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rsi
  struct DXGDEVICE *v17; // rbx
  __int64 v18; // r9
  const char *v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // r9
  const char *v22; // rdx
  _BYTE v23[32]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v24[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v25[16]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v26[160]; // [rsp+90h] [rbp-70h] BYREF

  v3 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(v3 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v3 + 136)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1044;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->IsDeviceLockExclusiveOwner()",
      1044LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent(v3);
  v6 = (volatile signed __int64 **)((char *)this + 400);
LABEL_5:
  v7 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(v7 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v7 + 136)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1056;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->IsDeviceLockExclusiveOwner()",
      1056LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( i = *v6; ; i = (volatile signed __int64 *)*i )
  {
    v9 = 0LL;
    if ( i != (volatile signed __int64 *)v6 )
      v9 = (__int64 *)i;
    if ( !v9 )
      break;
    v10 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v6 )
      v10 = 0LL;
    v11 = *((_DWORD *)v10 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v23, Current);
    v12 = (v11 >> 6) & 0xFFFFFF;
    if ( v12 < *((_DWORD *)Current + 74) )
    {
      v13 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v12 + 8);
      if ( ((v11 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * v12 + 8) & 0x60)
        && (v13 & 0x2000) == 0
        && (v13 & 0x1F) != 0 )
      {
        v14 = *((_QWORD *)Current + 35);
        if ( (*(_BYTE *)(v14 + 16LL * v12 + 8) & 0x1F) == 0xF )
        {
          if ( *(_QWORD *)(v14 + 16LL * v12) )
          {
            if ( i == (volatile signed __int64 *)v6 )
              i = 0LL;
            *(_DWORD *)(16 * (((unsigned __int64)v11 >> 6) & 0xFFFFFF) + v14 + 8) |= 0x2000u;
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
            if ( i )
            {
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
              v15 = _InterlockedDecrement64(i + 14);
              if ( v15 >= 0 )
              {
                if ( !v15 )
                {
                  v16 = *((_QWORD *)i + 2);
                  v17 = *(struct DXGDEVICE **)(v16 + 16);
                  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v24, v17);
                  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
                    (DXGADAPTERSTOPRESETLOCKSHARED *)v23,
                    *(struct DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL),
                    1);
                  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, (__int64)v17, 2, v18, 0);
                  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v26, v19);
                  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 200LL) != 4 )
                    DXGCONTEXT::DestroyHwQueue(
                      (DXGCONTEXT *)v16,
                      (struct DXGHWQUEUE *)i,
                      (struct COREDEVICEACCESS *)v26);
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v26);
                  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
                  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v24);
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  {
                    v20 = *(_QWORD *)(v16 + 16);
                    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v25,
                      (struct DXGDEVICE *)v20);
                    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
                      (DXGADAPTERSTOPRESETLOCKSHARED *)v23,
                      *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 16LL),
                      1);
                    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, v20, 2, v21, 0);
                    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v26, v22);
                    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 200LL) != 4 )
                      DXGDEVICE::DestroyContext(
                        (DXGDEVICE *)v20,
                        (struct DXGCONTEXT ***)v16,
                        (struct COREDEVICEACCESS *)v26);
                    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v26);
                    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
                    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v25);
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v20 + 16), (struct DXGDEVICE *)v20);
                  }
                }
              }
              else
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 151;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"NewReferenceCount >= 0",
                  151LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
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
