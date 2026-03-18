/*
 * XREFs of ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140205EE8
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x14020547C (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 *     ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x140205CBC (-ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z.c)
 *     ?DestroySwapchainGlobal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1402063A0 (-DestroySwapchainGlobal@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x140207990 (-RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z.c)
 * Callees:
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1400464C4 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14004DD44 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140053634 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x14007F948 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     Feature_4100754745__private_IsEnabledDeviceUsageNoInline @ 0x140081E90 (Feature_4100754745__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401FE008 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a2)
{
  AUTOEXPANDALLOCATION *v2; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v5; // rax
  struct DXGSYNCOBJECT *ObjectA; // rdi
  PERESOURCE *v7; // rax
  char v8; // r9
  _BYTE v9[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF

  v2 = (AUTOEXPANDALLOCATION *)*((_QWORD *)a2 + 2);
  if ( v2 )
  {
    AUTOEXPANDALLOCATION::`scalar deleting destructor'(v2);
    *((_QWORD *)a2 + 2) = 0LL;
  }
  if ( !(unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *((_DWORD *)a2 + 7) )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v10, Global, 0);
      if ( (unsigned int)Feature_4100754745__private_IsEnabledDeviceUsageNoInline() )
        DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v10);
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v9);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
      v5 = DXGGLOBAL::GetGlobal();
      ObjectA = (struct DXGSYNCOBJECT *)DXGGLOBAL::GetObjectA((__int64)v5, *((_DWORD *)a2 + 7), 8);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v9);
      if ( ObjectA )
      {
        if ( (unsigned int)Feature_4100754745__private_IsEnabledDeviceUsageNoInline() )
        {
          v7 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
          v8 = 1;
        }
        else
        {
          v7 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
          v8 = 0;
        }
        DXGGLOBAL::DestroySyncObject(v7, ObjectA, 0, v8);
      }
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v10);
    }
    *((_DWORD *)a2 + 7) = 0;
  }
}
