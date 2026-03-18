/*
 * XREFs of ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x140262F80
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14004C9F8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x140082B20 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14008A640 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x14009344C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009347C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1401B7C3C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1402FDD6C (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x140300018 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall bSaveRegion(struct XDCOBJ *a1, int a2)
{
  __int64 v3; // kr00_8
  _QWORD *v5; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v7; // ebx
  HDC v8; // rsi
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // [rsp+28h] [rbp-29h] BYREF
  __int64 v14; // [rsp+30h] [rbp-21h] BYREF
  __int64 v15; // [rsp+38h] [rbp-19h] BYREF
  int v16; // [rsp+40h] [rbp-11h]
  struct Gre::Base::SESSION_GLOBALS *v17; // [rsp+48h] [rbp-9h]
  __int64 v18; // [rsp+50h] [rbp-1h]
  int v19; // [rsp+58h] [rbp+7h]
  _BYTE v20[40]; // [rsp+60h] [rbp+Fh] BYREF
  struct _RECTL v21; // [rsp+88h] [rbp+37h] BYREF

  if ( a2 == 1 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
    v21.top = HIDWORD(v3);
    v21.right = v3;
    v21.left = 0;
    v21.bottom = 0;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v13);
    if ( v13 )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) )
      {
        if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
          SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v14, *((_QWORD **)a1 + 2));
        else
          SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v14);
        GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          v14);
      }
      RGNOBJ::vSet((RGNOBJ *)&v13, &v21);
      v5 = *(_QWORD **)a1;
      CPushLock::AcquireLockExclusive((CPushLock *)(*(_QWORD *)a1 + 1112LL));
      *(_QWORD *)(*(_QWORD *)a1 + 1136LL) = v13;
      CPushLock::ReleaseLock((CPushLock *)(v5 + 139));
      return 1LL;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    IsEnabledDeviceUsageNoInline = Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline();
    v7 = 0;
    v8 = *(HDC *)(*(_QWORD *)a1 + 112LL);
    if ( IsEnabledDeviceUsageNoInline )
      v9 = (struct Gre::Base::SESSION_GLOBALS *)*((_QWORD *)a1 + 2);
    else
      v9 = Gre::Base::Globals(*(Gre::Base **)a1);
    v17 = v9;
    v18 = 0LL;
    v15 = 0LL;
    v16 = 0;
    v19 = 0;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v20);
    XDCOBJ::vLock((XDCOBJ *)&v15, v8);
    v10 = v15;
    if ( v15 )
    {
      v11 = *(_QWORD *)(v15 + 168);
      if ( v11 )
      {
        ++*(_DWORD *)(v11 + 76);
        v10 = v15;
      }
      v12 = *(_QWORD *)(v10 + 160);
      if ( v12 )
        ++*(_DWORD *)(v12 + 76);
      v7 = 1;
    }
    DCOBJ::~DCOBJ((DCOBJ *)&v15);
    return v7;
  }
}
