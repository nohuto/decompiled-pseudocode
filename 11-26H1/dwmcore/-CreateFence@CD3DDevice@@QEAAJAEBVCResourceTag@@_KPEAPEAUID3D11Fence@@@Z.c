/*
 * XREFs of ?CreateFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@@Z @ 0x1801D01B8
 * Callers:
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x180123968 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateFence(
        CD3DDevice *this,
        const struct CResourceTag *a2,
        struct ID3D11Fence *a3,
        struct ID3D11Fence **a4)
{
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  struct ID3D11Fence *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  *a4 = 0LL;
  v6 = ~(unsigned __int8)*((_DWORD *)this + 238) & 8;
  v7 = **((_QWORD **)this + 68);
  v8 = *((_QWORD *)this + 68);
  v12 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, struct ID3D11Fence **))(v7 + 544))(
         v8,
         0LL,
         v6,
         &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80,
         &v12);
  v10 = v9;
  if ( v9 >= 0 )
  {
    ((void (__fastcall *)(struct ID3D11Fence *, const GUID *, _QWORD, _QWORD))v12->lpVtbl->SetPrivateData)(
      v12,
      &WKPDID_D3DDebugObjectName,
      *((unsigned int *)a2 + 2),
      *(_QWORD *)a2);
    *a4 = v12;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x796u, 0LL);
    if ( v12 )
      ((void (__fastcall *)(struct ID3D11Fence *))v12->lpVtbl->Release)(v12);
  }
  return v10;
}
