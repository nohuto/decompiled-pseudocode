/*
 * XREFs of ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x1800F7B80
 * Callers:
 *     ?CreateResource@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x1800F7E3C (-CreateResource@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x180101E34 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180069080 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F6010 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x1800F7A8C (--0CD3DResource@@IEAA@_N@Z.c)
 *     ?Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z @ 0x1800F7EB0 (-Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DConstantBuffer::Create(
        struct CD3DDevice *a1,
        unsigned int a2,
        enum D3D11_USAGE a3,
        const void *a4,
        struct CD3DConstantBuffer **a5)
{
  char *v8; // rax
  char *v9; // rbx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  unsigned int v13; // edi
  unsigned int v15; // [rsp+20h] [rbp-50h]
  struct ID3D11Buffer *v16; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v18[4]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h]

  v16 = 0LL;
  v8 = (char *)MIDL_user_allocate(0x90uLL);
  v9 = v8;
  if ( v8 )
  {
    memset_0(v8, 0, 0x90uLL);
    CD3DResource::CD3DResource((CD3DResource *)v9, 0LL);
    *(_QWORD *)v9 = &CD3DConstantBuffer::`vftable';
    *((_QWORD *)v9 + 15) = 0LL;
    *((_DWORD *)v9 + 32) = 0;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v9 + 8));
    v17[0] = a4;
    v18[2] = 4;
    v18[0] = a2;
    v18[1] = 2;
    v19 = 0LL;
    v18[3] = 0x10000;
    v17[1] = 0LL;
    v16 = 0LL;
    if ( *((_DWORD *)a1 + 281) )
    {
      v11 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x6C2u, 0LL);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, unsigned __int64, struct ID3D11Buffer **))(**((_QWORD **)a1 + 68)
                                                                                                  + 24LL))(
              *((_QWORD *)a1 + 68),
              v18,
              (unsigned __int64)v17 & -(__int64)(a4 != 0LL),
              &v16);
      v11 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x6C6u, 0LL);
    }
    v12 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)a1, v11, 0);
    v13 = v12;
    if ( v12 < 0 )
    {
      v15 = 49;
    }
    else
    {
      v12 = CD3DConstantBuffer::Initialize((CD3DConstantBuffer *)v9, (struct CD3DDevice *)((char *)a1 + 1136), a2, v16);
      v13 = v12;
      if ( v12 >= 0 )
      {
        *a5 = (struct CD3DConstantBuffer *)v9;
        v9 = 0LL;
        goto LABEL_8;
      }
      v15 = 51;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, v15, 0LL);
  }
  else
  {
    v13 = -2147024882;
    v9 = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Du, 0LL);
  }
LABEL_8:
  if ( v16 )
    ((void (__fastcall *)(struct ID3D11Buffer *))v16->lpVtbl->Release)(v16);
  if ( v9 )
    CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease((volatile signed __int32 *)v9);
  return v13;
}
