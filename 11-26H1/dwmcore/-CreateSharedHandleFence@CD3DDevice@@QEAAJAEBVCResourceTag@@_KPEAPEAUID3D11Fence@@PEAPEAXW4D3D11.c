/*
 * XREFs of ?CreateSharedHandleFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW4D3D11_FENCE_FLAG@@@Z @ 0x1801331E4
 * Callers:
 *     ?EnsureCrossAdapterFence@CD3DDevice@@AEAAJXZ @ 0x18013209C (-EnsureCrossAdapterFence@CD3DDevice@@AEAAJXZ.c)
 *     ?InitSystemDevice@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@@Z @ 0x1801330B8 (-InitSystemDevice@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateSharedHandleFence(
        CD3DDevice *this,
        const struct CResourceTag *a2,
        struct ID3D11Fence *a3,
        struct ID3D11Fence **a4,
        void **a5,
        enum D3D11_FENCE_FLAG a6)
{
  enum D3D11_FENCE_FLAG v6; // r8d
  void **v8; // r14
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // ebx
  unsigned int v13; // eax
  struct ID3D11Fence *v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = a3;
  v6 = a6;
  v8 = a5;
  *a4 = 0LL;
  *v8 = 0LL;
  v10 = (__int64 *)*((_QWORD *)this + 68);
  v11 = *v10;
  v15 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, GUID *, struct ID3D11Fence **))(v11 + 544))(
          v10,
          0LL,
          v6 | 2u,
          &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80,
          &v15);
  if ( v12 >= 0 )
  {
    v12 = ((__int64 (__fastcall *)(struct ID3D11Fence *, _QWORD, __int64, _QWORD, void **))v15->lpVtbl->CreateSharedHandle)(
            v15,
            0LL,
            0x10000000LL,
            0LL,
            v8);
    if ( v12 >= 0 )
    {
      ((void (__fastcall *)(struct ID3D11Fence *, const GUID *, _QWORD, _QWORD))v15->lpVtbl->SetPrivateData)(
        v15,
        &WKPDID_D3DDebugObjectName,
        *((unsigned int *)a2 + 2),
        *(_QWORD *)a2);
      *a4 = v15;
      return (unsigned int)v12;
    }
    v13 = 1974;
  }
  else
  {
    v13 = 1969;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, v13, 0LL);
  if ( v15 )
    ((void (__fastcall *)(struct ID3D11Fence *))v15->lpVtbl->Release)(v15);
  return (unsigned int)v12;
}
