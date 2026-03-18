/*
 * XREFs of ?RenderLayer@CGammaBlendLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180251070
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801851A0 (-reset@-$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUD2D_POINTANDSIZE_L@@2W4SurfaceShaderType@@@Z @ 0x180250B7C (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUD2D_POINTA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGammaBlendLayer::RenderLayer(CGammaBlendLayer *this, struct CDrawingContext *a2)
{
  __int64 v2; // rdi
  char *v3; // rbp
  int v4; // eax
  __int64 (__fastcall *v6)(__int64, __int64, __int64 **); // rbx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  int v14; // [rsp+38h] [rbp-10h]
  int v15; // [rsp+3Ch] [rbp-Ch]
  __int64 *v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 1);
  v3 = (char *)this + 16;
  v4 = *((_DWORD *)this + 6);
  v13 = 0LL;
  v14 = v4;
  v15 = *((_DWORD *)this + 7);
  v16 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64 **))(*(_QWORD *)(v2 + 8) + 112LL);
  wil::com_ptr_t<IDeviceTexture,wil::err_returncode_policy>::reset(&v16);
  v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 2) + 16LL))((char *)a2 + 16);
  v8 = v6(v2 + 8, v7, &v16);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x61u, 0LL);
  }
  else
  {
    v11 = CGammaBlendLayer::CopyAndTransform(v9, a2, v16, (int *)&v13, (__int64)v3, 3u);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x69u, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
  return v10;
}
