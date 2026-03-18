/*
 * XREFs of ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4
 * Callers:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     AllocFreeTmpBuffer @ 0x1400110D0 (AllocFreeTmpBuffer.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x140015AE0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x140040BF0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     FreeThreadBufferWithTag @ 0x140041C20 (FreeThreadBufferWithTag.c)
 *     ?Win32FreePoolImpl@@YAXPEAX@Z @ 0x140041D84 (-Win32FreePoolImpl@@YAXPEAX@Z.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1400430A0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     UserReAllocPool @ 0x140043400 (UserReAllocPool.c)
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x140043780 (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 *     EngAllocMem @ 0x140044130 (EngAllocMem.c)
 *     ?AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z @ 0x140044D44 (-AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     rimQueueApiSetHidRawInputAsyncWorkItem @ 0x140045CC8 (rimQueueApiSetHidRawInputAsyncWorkItem.c)
 *     DrvEnumDisplayDevices @ 0x140046490 (DrvEnumDisplayDevices.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140048C08 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x1400A77FC (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___ @ 0x1400B3E34 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85.c)
 *     AllocThreadBufferWithTag @ 0x1400B5520 (AllocThreadBufferWithTag.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1400B5830 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolZInit @ 0x1400B5DD0 (Win32AllocPoolZInit.c)
 *     ?ScanLookAsideList_Free@@YAXPEAX@Z @ 0x1400B8010 (-ScanLookAsideList_Free@@YAXPEAX@Z.c)
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x1400B80E4 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 *     Win32FreeToPagedLookasideList @ 0x1400B81B0 (Win32FreeToPagedLookasideList.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1400B8270 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KW4HM_OBJ_CREATE_FLAGS@@E@Z @ 0x1400B84FC (-HMAllocateUserOrIsolatedType@@YAPEAX_KW4HM_OBJ_CREATE_FLAGS@@E@Z.c)
 *     Win32AllocPool @ 0x1400B88C0 (Win32AllocPool.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1400C3A40 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1400FDB74 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     AllocAce @ 0x140108680 (AllocAce.c)
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x14010EB20 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x14010EC3C (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     AllocateWindowManagerSid @ 0x1401197D0 (AllocateWindowManagerSid.c)
 *     ?AllocateLocalSystemSid@@YAJPEAPEAX@Z @ 0x140119CE0 (-AllocateLocalSystemSid@@YAJPEAPEAX@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_0557cbb2832d1680ca92e9237d413628___ @ 0x1401FC098 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_0557cbb2832d1680ca92e9237d4136.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb8e___ @ 0x1401FC310 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B73C4 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2)
{
  int i; // eax
  unsigned __int64 v5; // rdx
  unsigned int v6; // r11d
  unsigned __int64 v7; // rdx
  unsigned int v8; // r10d
  unsigned int j; // r9d
  __int64 v10; // r8

  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  for ( i = *((_DWORD *)this + 7); i; i = *((_DWORD *)this + 7) )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    RIMLockShared((__int64)this);
    ExReleasePushLockSharedEx(this, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
  }
  if ( !*((_DWORD *)this + 12) )
    goto LABEL_16;
  if ( a2 == -1LL )
    goto LABEL_16;
  v5 = 0x9E3779B97F34A803uLL * (a2 >> 4);
  if ( (*((_BYTE *)this + 52) & 1) != 0 && *(_QWORD *)a2 != v5 )
    goto LABEL_16;
  v6 = *((_DWORD *)this + 10);
  v7 = v5 >> (64 - (unsigned __int8)*((_DWORD *)this + 11));
  v8 = 0;
LABEL_8:
  if ( v8 >= 2 )
  {
LABEL_16:
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    return 0;
  }
  else
  {
    for ( j = v7; ; ++j )
    {
      if ( j >= v6 )
      {
        v6 = v7;
        LODWORD(v7) = 0;
        ++v8;
        goto LABEL_8;
      }
      v10 = *((_QWORD *)this + 4) + 16LL * j;
      if ( *(_QWORD *)v10 == a2 )
        break;
    }
    if ( !v10 )
      goto LABEL_16;
    _InterlockedDecrement64((volatile signed __int64 *)(v10 + 8));
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    return 1;
  }
}
