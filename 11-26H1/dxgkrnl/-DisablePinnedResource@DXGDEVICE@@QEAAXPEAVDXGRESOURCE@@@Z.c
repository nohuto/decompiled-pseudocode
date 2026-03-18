/*
 * XREFs of ?DisablePinnedResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x14030F3D0
 * Callers:
 *     ?UnpinDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x14030F2A0 (-UnpinDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140030C90 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     Feature_3472570682__private_IsEnabledDeviceUsageNoInline @ 0x140074858 (Feature_3472570682__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1403171F0 (-DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DisablePinnedResource(ADAPTER_RENDER **this, struct DXGRESOURCE *a2)
{
  struct DXGALLOCATION *i; // rbx
  _BYTE v5[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 507;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      507LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (struct DXGRESOURCE *)((char *)a2 + 80), 0);
  if ( (unsigned int)Feature_3472570682__private_IsEnabledDeviceUsageNoInline() )
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  for ( i = (struct DXGALLOCATION *)*((_QWORD *)a2 + 3); i; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
    DXGDEVICE::DisablePinnedAllocation((DXGDEVICE *)this, i);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v5);
}
