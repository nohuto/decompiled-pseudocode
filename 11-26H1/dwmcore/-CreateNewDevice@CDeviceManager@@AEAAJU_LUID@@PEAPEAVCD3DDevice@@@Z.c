/*
 * XREFs of ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F7F70
 * Callers:
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetAdapter@CDisplayManager@@QEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x18019D57C (-GetAdapter@CDisplayManager@@QEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?ResetTokenThread@CComposition@@QEAAJXZ @ 0x1801CC82C (-ResetTokenThread@CComposition@@QEAAJXZ.c)
 *     ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x1801D4410 (-Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z.c)
 *     ??$emplace_back@AEAPEAVCD3DDevice@@@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@QEAAAEAVDeviceInfo@CDeviceManager@@AEAPEAVCD3DDevice@@@Z @ 0x1802954B4 (--$emplace_back@AEAPEAVCD3DDevice@@@-$vector@VDeviceInfo@CDeviceManager@@V-$allocator@VDeviceInf.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDeviceManager::CreateNewDevice(CDeviceManager *this, struct _LUID a2, struct CD3DDevice **a3)
{
  int Adapter; // eax
  struct IDXGIAdapter *v6; // rbx
  unsigned int v7; // edi
  int v9; // eax
  CComposition *v10; // rcx
  struct IDXGIAdapter *v11; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v11 = 0LL;
  Adapter = CDisplayManager::GetAdapter(this, a2, (struct IDXGIAdapter1 **)&v11);
  v6 = v11;
  v7 = Adapter;
  if ( Adapter >= 0 )
  {
    v9 = CD3DDevice::Create(v11, a3);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3FE0, 2u, v9, 0x1C4u, 0LL);
    }
    else
    {
      std::vector<CDeviceManager::DeviceInfo>::emplace_back<CD3DDevice * &>((char *)this + 56, a3);
      CComposition::ResetTokenThread(v10);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3FE0, 2u, Adapter, 0x1C2u, 0LL);
  }
  if ( v6 )
    ((void (__fastcall *)(struct IDXGIAdapter *))v6->lpVtbl->Release)(v6);
  return v7;
}
