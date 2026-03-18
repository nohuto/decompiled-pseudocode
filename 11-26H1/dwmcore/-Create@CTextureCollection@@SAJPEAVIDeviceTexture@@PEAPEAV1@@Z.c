/*
 * XREFs of ?Create@CTextureCollection@@SAJPEAVIDeviceTexture@@PEAPEAV1@@Z @ 0x1802B167C
 * Callers:
 *     ?EnsureTextureCollection@CSwapChainRealization@@IEAAJXZ @ 0x1802AD054 (-EnsureTextureCollection@CSwapChainRealization@@IEAAJXZ.c)
 *     ?EnsureSysmemTexture@CTranscodeBitmap@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z @ 0x1802B24D0 (-EnsureSysmemTexture@CTranscodeBitmap@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??0CCachedTexture@@IEAA@U_LUID@@AEBUD2D_SIZE_U@@PEAV0@@Z @ 0x1802B1440 (--0CCachedTexture@@IEAA@U_LUID@@AEBUD2D_SIZE_U@@PEAV0@@Z.c)
 *     ?CanTextureFromCrossAdapter@CD3DDevice@@QEBA_NXZ @ 0x1802B164C (-CanTextureFromCrossAdapter@CD3DDevice@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTextureCollection::Create(struct IDeviceTexture *a1, struct CTextureCollection **a2)
{
  _QWORD *v4; // rdi
  const struct D2D_SIZE_U *v5; // rbx
  struct _LUID *v6; // rax
  void (__fastcall *v7)(_QWORD *); // rax
  _QWORD *v8; // rsi
  int (__fastcall ***v9)(_QWORD, GUID *, __int64); // rcx
  CD3DDevice *v10; // rax
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  char v13; // [rsp+58h] [rbp+20h] BYREF

  v4 = operator new(0xC0uLL);
  if ( v4 )
  {
    v5 = (const struct D2D_SIZE_U *)(*(__int64 (__fastcall **)(struct IDeviceTexture *, __int64 *))(*(_QWORD *)a1 + 88LL))(
                                      a1,
                                      &v12);
    v6 = (struct _LUID *)(*(__int64 (__fastcall **)(struct IDeviceTexture *, char *))(*(_QWORD *)a1 + 64LL))(a1, &v13);
    CCachedTexture::CCachedTexture((CCachedTexture *)v4, *v6, v5, 0LL);
    *v4 = &CTextureCollection::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
    v4[2] = &CTextureCollection::`vftable'{for `IDeviceResourceNotify'};
    v7 = (void (__fastcall *)(_QWORD *))*(&CTextureCollection::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'}
                                        + 1);
    v4[21] = 0LL;
    v4[22] = 0LL;
    v4[23] = 0LL;
    v7(v4);
  }
  else
  {
    v4 = 0LL;
  }
  v8 = v4 + 16;
  wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=(v4 + 16, (__int64)a1);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v4 + 17);
  if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64))*v8)(
         *v8,
         &GUID_4c1b8ee2_ec14_4e60_a35c_b2ea6a182b0b,
         (__int64)(v4 + 17)) >= 0 )
  {
    v9 = (int (__fastcall ***)(_QWORD, GUID *, __int64))*v8;
    *((_BYTE *)v4 + 160) = 1;
    v10 = (CD3DDevice *)((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64)))(*v9)[5])(v9);
    *((_BYTE *)v4 + 161) = CD3DDevice::CanTextureFromCrossAdapter(v10);
  }
  v12 = 0LL;
  *a2 = (struct CTextureCollection *)v4;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v12);
  return 0LL;
}
