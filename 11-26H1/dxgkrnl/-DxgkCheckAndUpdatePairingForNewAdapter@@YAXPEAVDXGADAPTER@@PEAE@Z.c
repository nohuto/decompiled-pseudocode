/*
 * XREFs of ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1401B4454
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042EA78 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x1400169D0 (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x1401A4CE8 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z @ 0x1401A6EA0 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z.c)
 *     _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AdapterArray @ 0x1401B3C7C (_DxgkCheckAndUpdatePairingForNewAdapter_--_2_--AdapterArray--AdapterArray.c)
 *     _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::_AdapterArray @ 0x1401B3D2C (_DxgkCheckAndUpdatePairingForNewAdapter_--_2_--AdapterArray--_AdapterArray.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall DxgkCheckAndUpdatePairingForNewAdapter(struct DXGADAPTER *a1, unsigned __int8 *a2)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v4; // rax
  unsigned int i; // edi
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r14
  unsigned int v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+28h] [rbp-48h]
  struct _GUID v15; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v17[24]; // [rsp+58h] [rbp-18h] BYREF
  int v19; // [rsp+C0h] [rbp+50h] BYREF

  *a2 = 0;
  v19 = 0;
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::IterateAdaptersWithCallback(
    Global,
    lambda_98a973f9db80c22b1740ef6057097b25_::_lambda_invoker_cdecl_,
    &v19,
    1LL);
  if ( v19 )
  {
    DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AdapterArray((__int64)&v13, v19 + 16);
    v4 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      v4,
      lambda_85aa73a68ff66b421643f8c78198376d_::_lambda_invoker_cdecl_,
      &v13,
      1LL);
    for ( i = 0; i < v13; ++i )
    {
      v6 = *(_QWORD *)(v14 + 16LL * i);
      v7 = *(_QWORD *)(v6 + 3160);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGFASTMUTEX *const)(v7 + 152), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
      v16[0] = 0LL;
      v15 = 0LL;
      ADAPTER_DISPLAY::GetPairedRenderAdapter((ADAPTER_DISPLAY *)v7, (struct DXGADAPTER_REFERENCE *)v16, &v15);
      v8 = v16[0];
      if ( v16[0] )
      {
        v9 = *(_QWORD *)&v15.Data1 - *(_QWORD *)(v16[0] + 316LL);
        if ( *(_QWORD *)&v15.Data1 == *(_QWORD *)(v16[0] + 316LL) )
          v9 = *(_QWORD *)v15.Data4 - *(_QWORD *)(v16[0] + 324LL);
        if ( v9 )
        {
          v10 = *(_QWORD *)&v15.Data1 - *(_QWORD *)((char *)a1 + 316);
          if ( !v10 )
            v10 = *(_QWORD *)v15.Data4 - *(_QWORD *)((char *)a1 + 324);
          if ( !v10 || (*((_DWORD *)a1 + 111) & 1) != 0 || v8 == *((_QWORD *)DXGGLOBAL::GetGlobal() + 124) )
          {
            v11 = *(_QWORD *)(v8 + 3168) + 24LL;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v11, 0LL);
            *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
            v12 = *(_QWORD *)(v8 + 3168) + 48LL;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v12, 0LL);
            *(_QWORD *)(v12 + 8) = KeGetCurrentThread();
            DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
              (DXGADAPTERSTOPRESETLOCKSHARED *)&v15,
              (struct DXGADAPTER *)v6,
              1);
            if ( *(_DWORD *)(v6 + 200) == 1 )
            {
              ADAPTER_RENDER::DisconnectFromDisplayAdapters(*(ADAPTER_RENDER **)(v8 + 3168), (struct DXGADAPTER *)v6, 0);
              ADAPTER_DISPLAY::SetPairedRenderAdapter((ADAPTER_DISPLAY *)v7, a1, 0LL);
              *a2 = 1;
            }
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v15);
            *(_QWORD *)(v12 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v12, 0LL);
            KeLeaveCriticalRegion();
            *(_QWORD *)(v11 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v11, 0LL);
            KeLeaveCriticalRegion();
          }
        }
      }
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v16, 0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
    }
    DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::_AdapterArray((__int64)&v13);
  }
}
