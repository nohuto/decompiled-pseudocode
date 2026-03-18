/*
 * XREFs of ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1401F5BC4
 * Callers:
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x14018F770 (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x140055254 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     Feature_3472570682__private_IsEnabledDeviceUsageNoInline @ 0x140074858 (Feature_3472570682__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x140075A48 (-VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULT.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall DXGPROCESS::EvictAllResources(DXGPROCESS *this, struct _D3DKMT_EVICTION_CRITERIA *a2)
{
  DXGPROCESS *v3; // rsi
  char *v4; // r15
  _QWORD *v5; // r13
  struct DXGDEVICE *Current; // rax
  unsigned int v7; // ebx
  __int64 v8; // r14
  __int64 v9; // r9
  __int64 i; // rsi
  struct VIDMM_MULTI_ALLOC *v11; // r8
  _QWORD *v12; // rdi
  __int64 j; // rsi
  struct VIDMM_MULTI_ALLOC *v14; // r8
  __int64 k; // rsi
  struct VIDMM_MULTI_ALLOC *v16; // r8
  __int64 m; // rdi
  __int64 n; // rsi
  struct VIDMM_MULTI_ALLOC *v19; // r8
  __int64 v20; // rdi
  int IsEnabledDeviceUsageNoInline; // [rsp+30h] [rbp-D0h]
  char *v23; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v24; // [rsp+40h] [rbp-C0h]
  DXGPROCESS *v25; // [rsp+48h] [rbp-B8h]
  _BYTE v26[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v27[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v28[24]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v30[160]; // [rsp+A0h] [rbp-60h] BYREF

  v25 = this;
  v3 = this;
  v4 = (char *)this + 216;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  IsEnabledDeviceUsageNoInline = Feature_3472570682__private_IsEnabledDeviceUsageNoInline();
  v5 = (_QWORD *)*((_QWORD *)v3 + 40);
  v23 = (char *)v3 + 320;
  v24 = v5;
  Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v23);
  v7 = 0;
  while ( 1 )
  {
    v20 = (__int64)Current;
    if ( !Current )
    {
      *((_QWORD *)v4 + 1) = 0LL;
      goto LABEL_34;
    }
    v8 = *((_QWORD *)Current + 2);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27, Current);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, v20, 2, v9, 0);
    if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v30, 0LL) < 0 )
      break;
    if ( IsEnabledDeviceUsageNoInline )
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v29, (struct _KTHREAD **)v3);
      for ( i = *(_QWORD *)(v20 + 48); i; i = *(_QWORD *)(i + 64) )
      {
        v11 = *(struct VIDMM_MULTI_ALLOC **)(i + 24);
        if ( v11 )
          VIDMM_EXPORT::VidMmEvictAllocation(
            *(VIDMM_EXPORT **)(v8 + 760),
            *(struct VIDMM_GLOBAL **)(v8 + 768),
            v11,
            0LL,
            a2);
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v28,
        (struct _KTHREAD **)(v20 + 240));
      v12 = *(_QWORD **)(v20 + 56);
      while ( v12 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (struct DXGFASTMUTEX *const)(v12 + 10), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
        for ( j = v12[3]; j; j = *(_QWORD *)(j + 64) )
        {
          v14 = *(struct VIDMM_MULTI_ALLOC **)(j + 24);
          if ( v14 )
            VIDMM_EXPORT::VidMmEvictAllocation(
              *(VIDMM_EXPORT **)(v8 + 760),
              *(struct VIDMM_GLOBAL **)(v8 + 768),
              v14,
              0LL,
              a2);
        }
        v12 = (_QWORD *)v12[5];
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v26);
      }
    }
    else
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v28, (struct _KTHREAD **)v3);
      for ( k = *(_QWORD *)(v20 + 48); k; k = *(_QWORD *)(k + 64) )
      {
        v16 = *(struct VIDMM_MULTI_ALLOC **)(k + 24);
        if ( v16 )
          VIDMM_EXPORT::VidMmEvictAllocation(
            *(VIDMM_EXPORT **)(v8 + 760),
            *(struct VIDMM_GLOBAL **)(v8 + 768),
            v16,
            0LL,
            a2);
      }
      for ( m = *(_QWORD *)(v20 + 56); m; m = *(_QWORD *)(m + 40) )
      {
        for ( n = *(_QWORD *)(m + 24); n; n = *(_QWORD *)(n + 64) )
        {
          v19 = *(struct VIDMM_MULTI_ALLOC **)(n + 24);
          if ( v19 )
            VIDMM_EXPORT::VidMmEvictAllocation(
              *(VIDMM_EXPORT **)(v8 + 760),
              *(struct VIDMM_GLOBAL **)(v8 + 768),
              v19,
              0LL,
              a2);
        }
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
    v5 = (_QWORD *)*v5;
    v24 = v5;
    Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v23);
    v3 = v25;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
  *((_QWORD *)v4 + 1) = 0LL;
  v7 = -1073741130;
LABEL_34:
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return v7;
}
