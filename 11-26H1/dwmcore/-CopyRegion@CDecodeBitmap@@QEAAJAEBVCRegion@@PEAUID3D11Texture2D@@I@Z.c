/*
 * XREFs of ?CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z @ 0x180104A7C
 * Callers:
 *     ?SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802ABF94 (-SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802AC16C (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180035FFC (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z @ 0x1800ED904 (-AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180105210 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x180105534 (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDecodeBitmap::CopyRegion(CDecodeBitmap *this, int **a2, struct ID3D11Texture2D *a3, int a4)
{
  struct ID3D11Texture2DVtbl *lpVtbl; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  int v11; // eax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // edx
  FastRegion::Internal::CRgnData *v17; // rcx
  __int64 v19; // [rsp+50h] [rbp-9h] BYREF
  __int64 v20; // [rsp+58h] [rbp-1h] BYREF
  int v21; // [rsp+60h] [rbp+7h] BYREF
  int v22; // [rsp+64h] [rbp+Bh]
  int v23; // [rsp+68h] [rbp+Fh]
  int v24; // [rsp+6Ch] [rbp+13h]
  _BYTE v25[8]; // [rsp+70h] [rbp+17h] BYREF
  unsigned __int64 v26; // [rsp+78h] [rbp+1Fh]
  int *v27; // [rsp+80h] [rbp+27h]
  __int64 v28; // [rsp+88h] [rbp+2Fh]
  int v29; // [rsp+90h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  __int64 v31; // [rsp+D0h] [rbp+77h] BYREF

  lpVtbl = a3->lpVtbl;
  v20 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a3,
         &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
         &v20);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x77,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\decodebitmap.cpp",
      (const char *)(unsigned int)v8);
LABEL_27:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
    return v9;
  }
  v10 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 15);
  v19 = 0LL;
  v11 = (**v10)(v10, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, &v19);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\decodebitmap.cpp",
      (const char *)(unsigned int)v11);
LABEL_26:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v19);
    goto LABEL_27;
  }
  v31 = 0LL;
  v12 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 120LL))(
                                                               v19,
                                                               0LL);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  v13 = (**v12)(v12, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, &v31);
  v9 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\decodebitmap.cpp",
      (const char *)(unsigned int)v13);
    if ( v31 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    return v9;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 40LL))(*((_QWORD *)this + 15));
  if ( *(_DWORD *)(v14 + 1124) )
  {
    v9 = -2003304307;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\decodebitmap.cpp",
      (const char *)0x8898008DLL);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v31);
    goto LABEL_26;
  }
  FastRegion::CRegion::BeginIterator(a2, (__int64)v25);
  while ( (unsigned __int64)v27 < v26 )
  {
    v15 = 2 * v29;
    v22 = *v27;
    v16 = *(_DWORD *)(v28 + 4 * v15);
    v23 = *(_DWORD *)(v28 + 4 * v15 + 4);
    v24 = v27[2];
    v21 = v16;
    CD3DDevice::CopySubresourceRegion(v14, v20, a4, (unsigned int)&v21, v31, 0, v16, v22, 0);
    FastRegion::Internal::CRgnData::StepIterator(v17, (struct FastRegion::CRegion::Iterator *)v25);
  }
  CD2DBitmapCache::AddInvalidRegion(this, (const struct FastRegion::Internal::CRgnData **)a2);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return 0LL;
}
