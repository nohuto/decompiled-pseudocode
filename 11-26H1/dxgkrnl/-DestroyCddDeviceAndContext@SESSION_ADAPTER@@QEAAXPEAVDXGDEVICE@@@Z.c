/*
 * XREFs of ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403FD55C
 * Callers:
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x140204E94 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1403670F4 (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1403FD334 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A62FC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A7B58 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall SESSION_ADAPTER::DestroyCddDeviceAndContext(SESSION_ADAPTER *this, struct DXGDEVICE *a2)
{
  __int64 v2; // rax
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rcx
  struct DXGDEVICE *v10; // rax
  struct _KPROCESS *v11; // rdi
  _QWORD *i; // rdi
  SESSION_ADAPTER *v13; // rcx
  int v14; // edx
  unsigned int v15; // r8d
  __int64 v16; // rdx
  unsigned int v17; // r14d
  __int64 v18; // r12
  SESSION_ADAPTER *v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // r9
  const char *v22; // rdx
  SESSION_ADAPTER *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r13
  struct DXGDEVICE *v27; // rbx
  __int64 v28; // r9
  const char *v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // r9
  const char *v32; // rdx
  void *v33; // r12
  __int64 *v34; // r14
  __int64 v35; // rsi
  __int64 v36; // rbx
  __int64 v37; // r9
  const char *v38; // rdx
  struct DXGHWQUEUE *v39; // [rsp+58h] [rbp-B0h]
  SESSION_ADAPTER *P; // [rsp+60h] [rbp-A8h]
  _QWORD v41[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+78h] [rbp-90h]
  void *v43; // [rsp+80h] [rbp-88h]
  _BYTE v44[16]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v45[24]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v46[24]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v47[160]; // [rsp+C8h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+168h] [rbp+60h] BYREF
  char v49; // [rsp+198h] [rbp+90h]

  v2 = *(_QWORD *)this;
  v49 = 0;
  P = 0LL;
  LODWORD(v42) = 0;
  v5 = 0LL;
  v6 = *(_QWORD *)(v2 + 18664);
  v7 = 0LL;
  v8 = 0LL;
  v43 = 0LL;
  if ( v6 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v6 + 216, 0LL);
    *(_QWORD *)(v6 + 224) = KeGetCurrentThread();
    v10 = (struct DXGDEVICE *)*((_QWORD *)this + 7);
    if ( v10 && v10 == a2 )
    {
      v11 = *(struct _KPROCESS **)(*(_QWORD *)this + 18656LL);
      if ( (struct _KPROCESS *)PsGetCurrentProcess(v9) != v11 )
      {
        KeStackAttachProcess(v11, &ApcState);
        v49 = 1;
      }
      for ( i = (_QWORD *)*((_QWORD *)this + 14); i != (_QWORD *)((char *)this + 112); i = (_QWORD *)*i )
      {
        memset(i + 7, 0, 0x200uLL);
        i[71] = 0LL;
      }
      v13 = (SESSION_ADAPTER *)*((_QWORD *)this + 9);
      v14 = *((_DWORD *)this + 24);
      v8 = *((unsigned int *)this + 13);
      v43 = (void *)*((_QWORD *)this + 8);
      LODWORD(v42) = v14;
      if ( v13 == (SESSION_ADAPTER *)((char *)this + 80) )
      {
        v15 = 0;
        P = (SESSION_ADAPTER *)v41;
        if ( v14 )
        {
          do
          {
            v16 = v15++;
            v41[v16] = *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v16);
          }
          while ( v15 < *((_DWORD *)this + 24) );
        }
      }
      else
      {
        P = v13;
      }
      *((_DWORD *)this + 24) = 0;
      *((_QWORD *)this + 9) = 0LL;
      v5 = *((_QWORD *)this + 7);
      v7 = *((_QWORD *)this + 8);
      *((_QWORD *)this + 8) = 0LL;
      *((_QWORD *)this + 7) = 0LL;
    }
    *(_QWORD *)(v6 + 224) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 216, 0LL);
    KeLeaveCriticalRegion();
    if ( (_DWORD)v42 )
    {
      v17 = 0;
      if ( (_DWORD)v8 )
      {
        v18 = 0LL;
        do
        {
          v19 = P;
          if ( v17 < (unsigned int)v42 )
            v19 = (SESSION_ADAPTER *)((char *)P + v18);
          if ( *(_QWORD *)v19 )
          {
            v23 = P;
            if ( v17 < (unsigned int)v42 )
              v23 = (SESSION_ADAPTER *)((char *)P + v18);
            v24 = *(_QWORD *)v23;
            v39 = (struct DXGHWQUEUE *)v24;
            v25 = _InterlockedDecrement64((volatile signed __int64 *)(v24 + 112));
            if ( v25 >= 0 )
            {
              if ( !v25 )
              {
                v26 = *(_QWORD *)(v24 + 16);
                v27 = *(struct DXGDEVICE **)(v26 + 16);
                DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v46, v27);
                DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
                  (DXGADAPTERSTOPRESETLOCKSHARED *)v45,
                  *(struct DXGADAPTER **)(*((_QWORD *)v27 + 2) + 16LL),
                  1);
                COREDEVICEACCESS::COREDEVICEACCESS((__int64)v47, (__int64)v27, 2, v28, 0);
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v47, v29);
                if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL) + 200LL) != 4 )
                  DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v26, v39, (struct COREDEVICEACCESS *)v47);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
                DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v46);
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                {
                  v30 = *(_QWORD *)(v26 + 16);
                  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v44,
                    (struct DXGDEVICE *)v30);
                  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
                    (DXGADAPTERSTOPRESETLOCKSHARED *)v45,
                    *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 16LL),
                    1);
                  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v47, v30, 2, v31, 0);
                  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v47, v32);
                  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL) + 200LL) != 4 )
                    DXGDEVICE::DestroyContext(
                      (DXGDEVICE *)v30,
                      (struct DXGCONTEXT ***)v26,
                      (struct COREDEVICEACCESS *)v47);
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
                  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
                  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v30 + 16), (struct DXGDEVICE *)v30);
                }
              }
            }
            else
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 151;
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NewReferenceCount >= 0", 151LL, 0LL, 0LL, 0LL, 0LL);
            }
          }
          ++v17;
          v18 += 8LL;
        }
        while ( v17 < (unsigned int)v8 );
      }
    }
    if ( (unsigned int)v8 > 1 )
    {
      v33 = v43;
      v34 = (__int64 *)v43;
      do
      {
        v35 = *v34;
        if ( *v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v36 = *(_QWORD *)(v35 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v44,
            (struct DXGDEVICE *)v36);
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
            (DXGADAPTERSTOPRESETLOCKSHARED *)v45,
            *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v35 + 16) + 16LL) + 16LL),
            1);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v47, v36, 2, v37, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v47, v38);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL) + 200LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v36, (struct DXGCONTEXT ***)v35, (struct COREDEVICEACCESS *)v47);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v36 + 16), (struct DXGDEVICE *)v36);
        }
        ++v34;
        --v8;
      }
      while ( v8 );
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v33);
    }
    else if ( v7 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v20 = *(_QWORD *)(v7 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v44,
        (struct DXGDEVICE *)v20);
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
        (DXGADAPTERSTOPRESETLOCKSHARED *)v45,
        *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL) + 16LL),
        1);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v47, v20, 2, v21, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v47, v22);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v20, (struct DXGCONTEXT ***)v7, (struct COREDEVICEACCESS *)v47);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v20 + 16), (struct DXGDEVICE *)v20);
    }
    if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
  }
  if ( P != (SESSION_ADAPTER *)v41 && P )
    ExFreePoolWithTag(P, 0);
  LODWORD(v42) = 0;
  if ( v49 )
    KeUnstackDetachProcess(&ApcState);
}
