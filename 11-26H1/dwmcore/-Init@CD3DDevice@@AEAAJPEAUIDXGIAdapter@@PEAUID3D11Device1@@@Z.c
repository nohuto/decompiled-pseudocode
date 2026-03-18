/*
 * XREFs of ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x180133624
 * Callers:
 *     ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x1801D4410 (-Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z @ 0x180102DA0 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z.c)
 *     ?EnsureCrossAdapterFence@CD3DDevice@@AEAAJXZ @ 0x18013209C (-EnsureCrossAdapterFence@CD3DDevice@@AEAAJXZ.c)
 *     ?InitSystemDevice@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@@Z @ 0x1801330B8 (-InitSystemDevice@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@@Z.c)
 *     ?Initialize@CKMAdapterHandle@@QEAAJPEAUIDXGIAdapter@@@Z @ 0x18013399C (-Initialize@CKMAdapterHandle@@QEAAJPEAUIDXGIAdapter@@@Z.c)
 *     ?CalcMaxTextureSize@CD3DDevice@@AEAAXXZ @ 0x180133A64 (-CalcMaxTextureSize@CD3DDevice@@AEAAXXZ.c)
 *     ?IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x180133B94 (-IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 *     ?QueryWarpExtension@CD3DDevice@@AEAAJXZ @ 0x180133C3C (-QueryWarpExtension@CD3DDevice@@AEAAJXZ.c)
 *     ?GatherSupportedTextureFormats@CD3DDevice@@AEAAJXZ @ 0x180133DEC (-GatherSupportedTextureFormats@CD3DDevice@@AEAAJXZ.c)
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x180154E04 (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x1801CAC48 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 *     McTemplateU0pqnz_EventWriteTransfer @ 0x180299824 (McTemplateU0pqnz_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::Init(CD3DDevice *this, struct IDXGIAdapter *a2, struct ID3D11Device1 *a3)
{
  HRESULT (__stdcall *QueryInterface)(IDXGIAdapter *, const IID *const, void **); // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  _QWORD *v12; // r14
  __int64 v13; // rcx
  int v14; // eax
  struct IDXGIDevice3 **v15; // rsi
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rbx
  void (__fastcall *v19)(__int64, __int64 *); // rbp
  __int64 v20; // rcx
  int v21; // eax
  int WarpExtension; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int Shaders; // eax
  int RenderingResources; // eax
  int inited; // eax
  __int64 v30; // [rsp+78h] [rbp+10h] BYREF
  __int64 v31; // [rsp+88h] [rbp+20h] BYREF

  QueryInterface = a2->lpVtbl->QueryInterface;
  v30 = 0LL;
  v31 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IDXGIAdapter *, GUID *, __int64 *))QueryInterface)(
         a2,
         &GUID_3c8d99d1_4fbf_4181_a82c_af66bf7bd24e,
         &v31);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x1A3u, 0LL);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v31 + 144LL))(v31, (char *)this + 648);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1A4u, 0LL);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0pqnz_EventWriteTransfer(v11, v10, (_DWORD)this, *((_DWORD *)this + 156));
      CKMAdapterHandle::Initialize((CD3DDevice *)((char *)this + 640), a2);
      v12 = (_QWORD *)((char *)this + 544);
      *((_QWORD *)this + 152) = this;
      v13 = *((_QWORD *)this + 68);
      *((_QWORD *)this + 68) = 0LL;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v14 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, char *))a3->lpVtbl->QueryInterface)(
              a3,
              &GUID_8ffde202_a0e7_45df_9e01_e837801b5ea0,
              (char *)this + 544);
      v8 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x1B0u, 0LL);
      }
      else
      {
        v15 = (struct IDXGIDevice3 **)((char *)this + 528);
        v16 = *((_QWORD *)this + 66);
        *((_QWORD *)this + 66) = 0LL;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        v17 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v12)(
                *v12,
                &GUID_6007896c_3244_4afd_bf18_a6d3beda5023,
                (char *)this + 528);
        v8 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x1B1u, 0LL);
        }
        else
        {
          ((void (__fastcall *)(struct IDXGIDevice3 *, __int64))(*v15)->lpVtbl->SetMaximumFrameLatency)(*v15, 16LL);
          v18 = *v12;
          v19 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v12 + 320LL);
          if ( v30 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          v19(v18, &v30);
          v20 = *((_QWORD *)this + 69);
          *((_QWORD *)this + 69) = 0LL;
          if ( v20 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          v21 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v30)(
                  v30,
                  &GUID_917600da_f58c_4c33_98d8_3e15b390fa24,
                  (char *)this + 552);
          v8 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x1B6u, 0LL);
          }
          else
          {
            WarpExtension = CD3DDevice::QueryWarpExtension(this);
            v8 = WarpExtension;
            if ( WarpExtension < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, WarpExtension, 0x1B8u, 0LL);
            }
            else
            {
              CD3DDevice::CalcMaxTextureSize(this);
              v23 = CD3DDevice::GatherSupportedTextureFormats(this);
              v8 = v23;
              if ( v23 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x1BEu, 0LL);
              }
              else
              {
                *((_BYTE *)this + 1489) = CCommonRegistryData::IsShaderLinkingBlacklistedGpu(
                                            *((_DWORD *)this + 226),
                                            *((_DWORD *)this + 227));
                v24 = CD3DDevice::EnsureCrossAdapterFence(this);
                v8 = v24;
                if ( v24 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x1C3u, 0LL);
                }
                else
                {
                  v25 = CD2DContext::InitializeD2D((struct CD2DResourceManager **)this + 2, *v15);
                  v8 = v25;
                  if ( v25 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0x1C6u, 0LL);
                  }
                  else
                  {
                    Shaders = CD3DDevice::GenerateShaders(this);
                    v8 = Shaders;
                    if ( Shaders < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Shaders, 0x1C8u, 0LL);
                    }
                    else
                    {
                      RenderingResources = CDrawListBatchManager::CreateRenderingResources((CD3DDevice *)((char *)this + 24));
                      v8 = RenderingResources;
                      if ( RenderingResources < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, RenderingResources, 0x1CAu, 0LL);
                      }
                      else
                      {
                        inited = CD3DDevice::InitSystemDevice(this, a2);
                        v8 = inited;
                        if ( inited < 0 )
                          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, inited, 0x1CCu, 0LL);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  return v8;
}
