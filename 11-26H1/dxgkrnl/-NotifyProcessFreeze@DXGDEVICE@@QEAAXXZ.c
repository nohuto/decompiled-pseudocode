/*
 * XREFs of ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1403B85FC
 * Callers:
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1403B819C (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x140014774 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x140030B80 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1400508E4 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?VidMmSuspendResumeDevice@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@_N1@Z @ 0x14005D7CC (-VidMmSuspendResumeDevice@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@_N1@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?TrimAllDmaPoolsToMinimum@DXGDEVICE@@QEAAXXZ @ 0x1401C3CFC (-TrimAllDmaPoolsToMinimum@DXGDEVICE@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1403A35A8 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1403D0364 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1403F5A24 (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::NotifyProcessFreeze(DXGDEVICE *this)
{
  DXGADAPTER *v2; // rcx
  bool v3; // r15
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  char *v6; // r14
  char *i; // rsi
  char *v8; // rax
  int *v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // ebx
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  DXGDEVICE *v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+38h] [rbp-C8h]
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-C0h] BYREF
  char v18[8]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h]
  char v20; // [rsp+58h] [rbp-A8h]
  _BYTE v21[32]; // [rsp+60h] [rbp-A0h] BYREF
  char v22[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v23[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v24[64]; // [rsp+C8h] [rbp-38h] BYREF
  DXGDEVICE *v25; // [rsp+108h] [rbp+8h]
  char v26; // [rsp+110h] [rbp+10h]

  v2 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
  if ( !*((_BYTE *)v2 + 209) )
  {
    v15 = this;
    v16 = 0;
    if ( DXGADAPTER::IsDxgmms2(v2) )
    {
      v3 = (unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v15) != 0;
    }
    else
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v15);
      v3 = 1;
    }
    v4 = *((_QWORD *)this + 2);
    v20 = 0;
    v19 = *(_QWORD *)(v4 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
    COREACCESS::COREACCESS((COREACCESS *)v23, *(struct DXGADAPTER *const *)(*((_QWORD *)this + 2) + 16LL));
    COREACCESS::COREACCESS((COREACCESS *)v24, *(struct DXGADAPTER *const *)(*((_QWORD *)this + 2) + 16LL));
    v25 = this;
    v26 = 0;
    if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v22, 0LL) >= 0 )
    {
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v21, (struct _KTHREAD **)this + 50);
      v6 = (char *)this + 496;
      for ( i = (char *)*((_QWORD *)this + 62); ; i = *(char **)i )
      {
        v8 = 0LL;
        if ( i != v6 )
          v8 = i;
        if ( !v8 )
          break;
        v9 = (int *)i;
        if ( i == v6 )
          v9 = 0LL;
        DXGADAPTER::NotifyContextCreation(
          *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL),
          (struct DXGCONTEXT *)v9,
          0,
          v9[95]);
        *((_BYTE *)v9 + 429) = 1;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
      if ( v3 )
      {
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v10 + 216) + 64LL) + 4232LL));
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v22);
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
        {
          if ( *((_QWORD *)this + 241) )
          {
            v11 = *((_DWORD *)this + 480);
            Timeout.QuadPart = -5000000LL;
            do
            {
              v12 = v11;
              KeWaitForSingleObject(*((PVOID *)this + 241), Executive, 0, 0, &Timeout);
              v11 = *((_DWORD *)this + 480);
            }
            while ( v12 != v11 );
          }
          DXGDEVICE::FlushPagingQueues(this);
          LOBYTE(v13) = 1;
          VIDMM_EXPORT::VidMmSuspendResumeDevice(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
            *((struct VIDMM_DEVICE **)this + 99),
            v13,
            1);
          DpiEnableD3Requests(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 216LL));
        }
        else
        {
          DXGDEVICE::FlushScheduler(this, 1, 0xFFFFFFFD, 0);
          DXGDEVICE::FlushDeferredDestruction(this, 0LL, 0, 0);
          DXGDEVICE::TrimAllDmaPoolsToMinimum(this);
        }
      }
      else
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 8220;
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v24, v5);
    COREACCESS::~COREACCESS((COREACCESS *)v23, v14);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v15);
  }
}
