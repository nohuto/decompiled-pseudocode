/*
 * XREFs of ?CreateDestructionBuffers@DXGDEVICE@@QEAAJIPEAVDXGRESOURCE@@H@Z @ 0x1404323C8
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x14035CE20 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     Feature_3472570682__private_IsEnabledDeviceUsageNoInline @ 0x140074858 (Feature_3472570682__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DXGDEVICE::CreateDestructionBuffers(
        ADAPTER_RENDER **this,
        unsigned int a2,
        struct DXGRESOURCE *a3,
        int a4)
{
  __int64 v8; // rax
  unsigned int v9; // ebp
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  __int64 result; // rax
  void *v13; // rcx
  _BYTE v14[16]; // [rsp+50h] [rbp-18h] BYREF

  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4749;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      4749LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a3 )
  {
    if ( !a4 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGRESOURCE *)((char *)a3 + 80), 0);
      if ( (unsigned int)Feature_3472570682__private_IsEnabledDeviceUsageNoInline() )
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
      v8 = *((_QWORD *)a3 + 3);
      while ( v8 )
      {
        v8 = *(_QWORD *)(v8 + 64);
        ++a2;
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
    }
    if ( a2 > 0x10 )
    {
      v9 = a2;
      v10 = 8LL * a2;
      if ( !is_mul_ok(a2, 8uLL) )
        v10 = -1LL;
      v11 = operator new[](v10, 0x4B677844u, 256LL);
      if ( !v11 )
      {
        WdLogSingleEntry3(3LL, this, v9, -1073741801LL);
        result = 3221225495LL;
        WdLogGlobalForLineNumber = 4793;
        return result;
      }
      if ( !a4 )
      {
        v13 = (void *)*((_QWORD *)a3 + 8);
        if ( v13 )
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v13);
      }
      *((_QWORD *)a3 + 8) = v11;
    }
  }
  return 0LL;
}
