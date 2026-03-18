/*
 * XREFs of ?CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAPEAUID3D11Device1@@@Z @ 0x1801D4544
 * Callers:
 *     ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x1801D4410 (-Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180163BC0 (-IsOOM@@YA_NJ@Z.c)
 *     ??1CFailFastError@@QEAA@XZ @ 0x1801ABF10 (--1CFailFastError@@QEAA@XZ.c)
 *     ?CurrentProcessHasIncreasedPriorityPrivileges@@YA_NXZ @ 0x1801CB998 (-CurrentProcessHasIncreasedPriorityPrivileges@@YA_NXZ.c)
 *     ?GetAdapterInfo@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAUDXGI_ADAPTER_DESC@@@Z @ 0x1801FF1FC (-GetAdapterInfo@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVE.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateD3D11Device(
        IDXGIAdapter *pAdapter,
        bool *a2,
        enum D3D_FEATURE_LEVEL *a3,
        enum _QAI_DRIVERVERSION *a4,
        union _LARGE_INTEGER *a5,
        struct ID3D11Device1 **a6)
{
  int AdapterInfo; // eax
  D3D_FEATURE_LEVEL *pFeatureLevels; // rsi
  UINT FeatureLevels; // ebx
  int v13; // edi
  D3D_FEATURE_LEVEL *v14; // rax
  __int64 v15; // rcx
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // ebx
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+54h] [rbp-ACh] BYREF
  ID3D11Device *ppDevice; // [rsp+58h] [rbp-A8h] BYREF
  int v24; // [rsp+60h] [rbp-A0h] BYREF
  int *v25; // [rsp+68h] [rbp-98h]
  DXGI_ADAPTER_DESC v26; // [rsp+70h] [rbp-90h] BYREF
  D3D_FEATURE_LEVEL v27[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  __m128i si128; // [rsp+1B0h] [rbp+B0h]
  int v29; // [rsp+1C0h] [rbp+C0h]
  void *retaddr; // [rsp+208h] [rbp+108h]

  ppDevice = 0LL;
  pFeatureLevel = 0;
  memset_0(&v26, 0, sizeof(v26));
  v29 = 37120;
  *(__m128i *)v27 = _mm_load_si128((const __m128i *)&_xmm);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  AdapterInfo = CD3DDevice::GetAdapterInfo(pAdapter, a2, &pFeatureLevel, a4, a5, &v26);
  v21 = AdapterInfo;
  if ( AdapterInfo < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, AdapterInfo, 0xD4u, 0LL);
  }
  else
  {
    pFeatureLevels = v27;
    FeatureLevels = 9;
    v13 = (unsigned __int8)CurrentProcessHasIncreasedPriorityPrivileges() << 12;
    v14 = v27;
    v15 = 0LL;
    while ( *v14 > pFeatureLevel )
    {
      v15 = (unsigned int)(v15 + 1);
      ++v14;
      if ( (unsigned int)v15 >= 9 )
        goto LABEL_7;
    }
    FeatureLevels = 9 - v15;
    pFeatureLevels = &v27[v15];
LABEL_7:
    switch ( v26.VendorId )
    {
      case 0x1002u:
        v16 = -2003304270;
        break;
      case 0x10DEu:
        v16 = -2003304269;
        break;
      case 0x8086u:
        v16 = -2003304271;
        break;
      default:
        v16 = -2003304268;
        if ( v26.VendorId != 1297040209 )
          v16 = -2003304272;
        break;
    }
    v25 = &v21;
    v17 = g_hrNoHardwareDeviceOverride;
    g_hrNoHardwareDeviceOverride = v16;
    v24 = v17;
    if ( ppDevice )
      ((void (__fastcall *)(ID3D11Device *))ppDevice->lpVtbl->Release)(ppDevice);
    v21 = D3D11CreateDevice(
            pAdapter,
            D3D_DRIVER_TYPE_UNKNOWN,
            0LL,
            v13 + 169,
            pFeatureLevels,
            FeatureLevels,
            7u,
            &ppDevice,
            &pFeatureLevel,
            0LL);
    CFailFastError::~CFailFastError((CFailFastError *)&v24);
    if ( v21 < 0 )
    {
      if ( IsOOM(v21) )
        ModuleFailFastForHRESULT(-2003304307, retaddr);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x147u, 0LL);
    }
    else
    {
      v21 = ((__int64 (__fastcall *)(ID3D11Device *, GUID *, struct ID3D11Device1 **))ppDevice->lpVtbl->QueryInterface)(
              ppDevice,
              &GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686,
              a6);
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x13Du, 0LL);
      else
        *a3 = pFeatureLevel;
    }
  }
  v19 = v21;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&ppDevice);
  return v19;
}
