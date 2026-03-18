/*
 * XREFs of ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x1801D4410
 * Callers:
 *     ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F7F70 (-CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCD3DDevice@@@Z @ 0x1800F07D4 (--4-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCD3DDevice@@@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800F2550 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x180133624 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 *     ?CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAPEAUID3D11Device1@@@Z @ 0x1801D4544 (-CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVE.c)
 *     ??0CD3DDevice@@AEAA@_NW4D3D_FEATURE_LEVEL@@W4_QAI_DRIVERVERSION@@T_LARGE_INTEGER@@@Z @ 0x180298D78 (--0CD3DDevice@@AEAA@_NW4D3D_FEATURE_LEVEL@@W4_QAI_DRIVERVERSION@@T_LARGE_INTEGER@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::Create(struct IDXGIAdapter *a1, struct CD3DDevice **a2)
{
  CD3DDevice *v2; // rbx
  int v5; // edi
  unsigned int v6; // eax
  volatile signed __int32 *v8; // rax
  __int64 v9; // rdx
  struct CD3DDevice *v10; // rax
  struct ID3D11Device1 *v11; // [rsp+30h] [rbp-20h] BYREF
  union _LARGE_INTEGER v12; // [rsp+38h] [rbp-18h] BYREF
  CD3DDevice *v13; // [rsp+40h] [rbp-10h] BYREF
  bool v14; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v15; // [rsp+90h] [rbp+40h] BYREF
  enum D3D_FEATURE_LEVEL v16; // [rsp+98h] [rbp+48h] BYREF

  v2 = 0LL;
  *a2 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v16 = 0;
  v15 = 0;
  v12.QuadPart = 0LL;
  v11 = 0LL;
  v5 = CD3DDevice::CreateD3D11Device(a1, &v14, &v16, (enum _QAI_DRIVERVERSION *)&v15, &v12, &v11);
  if ( v5 < 0 )
  {
    v6 = 371;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180373218, 2u, v5, v6, 0LL);
    v5 = -2003304307;
    goto LABEL_4;
  }
  v8 = (volatile signed __int32 *)DefaultHeap::AllocClear(0x890uLL);
  if ( v8 )
  {
    LOBYTE(v9) = v14;
    v8 = (volatile signed __int32 *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))CD3DDevice::CD3DDevice)(
                                      v8,
                                      v9,
                                      (unsigned int)v16,
                                      v15,
                                      (union _LARGE_INTEGER)v12.QuadPart);
  }
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::operator=(&v13, v8);
  v2 = v13;
  if ( !v13 )
  {
    v5 = -2147024882;
    v6 = 377;
    goto LABEL_3;
  }
  v5 = CD3DDevice::Init(v13, a1, v11);
  if ( v5 < 0 )
  {
    v6 = 379;
    goto LABEL_3;
  }
  v10 = v2;
  v2 = 0LL;
  *a2 = v10;
LABEL_4:
  if ( v2 )
    CD3DDevice::Release(v2);
  if ( v11 )
    ((void (__fastcall *)(struct ID3D11Device1 *))v11->lpVtbl->Release)(v11);
  return (unsigned int)v5;
}
