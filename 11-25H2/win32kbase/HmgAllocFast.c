/*
 * XREFs of HmgAllocFast @ 0x1401C5500
 * Callers:
 *     HmgAlloc @ 0x140177200 (HmgAlloc.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140178AA0 (--0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z @ 0x140027AD8 (-HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z.c)
 *     EtwTraceGdiCreateHandle @ 0x14003C908 (EtwTraceGdiCreateHandle.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x14004AC30 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     HmgIncProcessHandleCountEx @ 0x1400D9490 (HmgIncProcessHandleCountEx.c)
 *     UMPDGetThreadClientPID @ 0x14013974C (UMPDGetThreadClientPID.c)
 *     IsUMPDGetThreadClientPIDSupported @ 0x14014C554 (IsUMPDGetThreadClientPIDSupported.c)
 *     AllocateObject @ 0x14014C910 (AllocateObject.c)
 *     FreeObject @ 0x14014C950 (FreeObject.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1401771A0 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     HmgDecProcessHandleCount @ 0x140179250 (HmgDecProcessHandleCount.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x1401C4B40 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z.c)
 *     ?AllocateObjectFast@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z @ 0x1401C4C34 (-AllocateObjectFast@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z.c)
 *     ?hSetupFast@ENTRYOBJ@@SAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EGI@Z @ 0x1401C52E4 (-hSetupFast@ENTRYOBJ@@SAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EGI@Z.c)
 *     HmgIncProcessHandleCountExFast @ 0x1401C83D4 (HmgIncProcessHandleCountExFast.c)
 */

struct HOBJ__ *__fastcall HmgAllocFast(
        struct Gre::Base::SESSION_GLOBALS *a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned __int16 a4)
{
  unsigned int v5; // edi
  char v8; // bl
  __int64 ObjectFast; // rax
  struct OBJECT *v10; // rbp
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _GRETHREAD *v14; // r14
  __int64 v15; // rdx
  unsigned int v16; // esi
  int IsEnabledDeviceUsageNoInline; // eax
  struct HOBJ__ *v19; // rax
  struct HOBJ__ *v20; // rdi
  char EtwGdiHandleType; // al
  unsigned int v23; // [rsp+30h] [rbp-38h] BYREF
  HSEMAPHORE v24; // [rsp+38h] [rbp-30h] BYREF

  v5 = a3;
  v8 = 0;
  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    ObjectFast = AllocateObjectFast(a1, a2, v5);
  else
    ObjectFast = (__int64)AllocateObject(a2, v5);
  v10 = (struct OBJECT *)ObjectFast;
  if ( !ObjectFast )
    return 0LL;
  CurrentThread = GreGetCurrentThread();
  v14 = CurrentThread;
  if ( CurrentThread
    && (a4 & 0x10) == 0
    && *((_QWORD *)CurrentThread + 8)
    && (int)IsUMPDGetThreadClientPIDSupported(v13, v12) >= 0 )
  {
    v16 = (unsigned int)UMPDGetThreadClientPID((__int64)v14, v15);
  }
  else
  {
    v16 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  }
  IsEnabledDeviceUsageNoInline = Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline();
  SEMOBJ<20>::SEMOBJ<20>(&v24, a1, IsEnabledDeviceUsageNoInline != 0);
  if ( (a4 & 8) == 0
    && !((unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline()
       ? HmgIncProcessHandleCountExFast(a1, v16, 0LL)
       : (unsigned int)HmgIncProcessHandleCountEx(v16, 0)) )
  {
LABEL_27:
    SEMOBJ<20>::vUnlock(&v24);
    FreeObject((__int64)v10, v5);
    return 0LL;
  }
  v23 = 0;
  if ( !HmgpAcquireHandleIndex(a1, v14, &v23) )
  {
    if ( (a4 & 8) == 0 )
      HmgDecProcessHandleCount(v16);
    goto LABEL_27;
  }
  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    v19 = ENTRYOBJ::hSetupFast((GdiHandleManager **)a1, v10, a3, a4, v23);
  else
    v19 = ENTRYOBJ::hSetup(v10, a3, a4, v23);
  v20 = v19;
  if ( (a4 & 8) == 0 )
    v8 = v16;
  EtwGdiHandleType = GetEtwGdiHandleType(a3);
  EtwTraceGdiCreateHandle((int)v20, EtwGdiHandleType, v8);
  if ( (a4 & 3) != 0 )
    v20 = v10;
  SEMOBJ<20>::vUnlock(&v24);
  return v20;
}
