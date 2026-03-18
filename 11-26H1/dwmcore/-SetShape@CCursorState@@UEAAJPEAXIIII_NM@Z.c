/*
 * XREFs of ?SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z @ 0x180292040
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x180017298 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x1800E1FE0 (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x1800E646C (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180125C94 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180126C50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x18018A534 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ??$make_shared@UShapeData@CCursorState@@$$V@std@@YA?AV?$shared_ptr@UShapeData@CCursorState@@@0@XZ @ 0x18029070C (--$make_shared@UShapeData@CCursorState@@$$V@std@@YA-AV-$shared_ptr@UShapeData@CCursorState@@@0@X.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCursorState::SetShape(
        CCursorState *this,
        char *Src,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        bool a7,
        float a8)
{
  __int64 v9; // r14
  CSystemMemoryBitmap *v12; // rax
  CSystemMemoryBitmap *v13; // rdi
  unsigned int v14; // r12d
  int v15; // eax
  unsigned int v16; // ebx
  char *v17; // rbx
  __int64 (__fastcall *v18)(char *, _QWORD, __int64, __int64 *); // rdi
  int v19; // eax
  __int64 v20; // rdx
  bool v21; // bl
  _DWORD *v22; // rdi
  unsigned int v23; // eax
  __int64 i; // rcx
  __int64 v25; // rbx
  char *v26; // rdi
  bool v27; // r12
  size_t v28; // r13
  char *v29; // rax
  char *v30; // rcx
  char *v31; // rdi
  __int64 *v32; // rax
  __int64 v33; // rcx
  void *v35; // [rsp+30h] [rbp-30h] BYREF
  __int64 v36; // [rsp+38h] [rbp-28h] BYREF
  CSystemMemoryBitmap *v37; // [rsp+40h] [rbp-20h] BYREF
  int v38; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v39[2]; // [rsp+4Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  int v42; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v43; // [rsp+B8h] [rbp+58h]

  v9 = a4;
  EnterCriticalSection(&g_CursorManager);
  v12 = (CSystemMemoryBitmap *)operator new(0x98uLL);
  if ( v12 )
    v12 = CSystemMemoryBitmap::CSystemMemoryBitmap(v12);
  wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
    &v37,
    (__int64)v12);
  v13 = v37;
  v38 = 87;
  v14 = v9;
  v39[0] = 1LL;
  if ( a3 >= (unsigned int)v9 )
    v14 = a3;
  v43 = v14;
  v15 = CSystemMemoryBitmap::HrInit((void **)v37, v14, v14, (enum DXGI_FORMAT *)&v38, 0);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_36;
  }
  v17 = (char *)v13 + 16;
  v36 = 0LL;
  v18 = *(__int64 (__fastcall **)(char *, _QWORD, __int64, __int64 *))(*((_QWORD *)v13 + 2) + 24LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v36);
  v19 = v18(v17, 0LL, 2LL, &v36);
  v16 = v19;
  if ( v19 < 0 )
  {
    v20 = 1242LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v19);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v36);
    goto LABEL_36;
  }
  v42 = 0;
  v35 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64, int *, void **))(*(_QWORD *)v36 + 48LL))(v36, &v42, &v35);
  v16 = v19;
  if ( v19 < 0 )
  {
    v20 = 1246LL;
    goto LABEL_9;
  }
  if ( a3 == v14 )
  {
    memcpy_0(v35, Src, 4 * (unsigned int)v9 * a3);
    v21 = a7;
    if ( (unsigned int)v9 < a3 )
    {
      v22 = (char *)v35 + 4 * (unsigned int)v9 * a3;
      v35 = v22;
      v23 = a3 * (a3 - v9);
      if ( a7 )
      {
        if ( v23 )
        {
          for ( i = v23; i; --i )
            *v22++ = -16777216;
        }
      }
      else
      {
        memset_0(v22, 0, 4 * v23);
      }
    }
  }
  else
  {
    v25 = (unsigned int)v9 - a3;
    if ( (_DWORD)v9 )
    {
      v26 = Src;
      v27 = a7;
      v28 = 4 * a3;
      v29 = (char *)v35;
      do
      {
        memcpy_0(v29, v26, v28);
        v26 += v28;
        v30 = (char *)v35 + v28;
        v35 = (char *)v35 + v28;
        if ( v27 )
        {
          v29 = &v30[4 * v25];
          v35 = v29;
          while ( v30 < v29 )
          {
            *(_DWORD *)v30 = -16777216;
            v30 += 4;
            v29 = (char *)v35;
          }
        }
        else
        {
          memset_0(v30, 0, (unsigned int)(4 * v25));
          v29 = (char *)v35 + (unsigned int)(4 * v25);
          v35 = v29;
        }
        --v9;
      }
      while ( v9 );
      v14 = v43;
    }
    v21 = a7;
  }
  v31 = (char *)this + 40;
  v32 = std::make_shared<CCursorState::ShapeData,>(&v38);
  std::shared_ptr<CRegion>::operator=((_QWORD *)this + 5, v32);
  if ( *(_QWORD *)((char *)v39 + 4) )
    std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)((char *)v39 + 4));
  **(_DWORD **)v31 = a5;
  *(_DWORD *)(*(_QWORD *)v31 + 4LL) = a6;
  v33 = 0LL;
  *(_DWORD *)(*(_QWORD *)v31 + 8LL) = 1;
  *(_DWORD *)(*(_QWORD *)v31 + 12LL) = v14;
  do
    *(_BYTE *)(*(_QWORD *)v31 + v33++ + 16) = 0;
  while ( v33 < 2 );
  wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
    (__int64 *)(*(_QWORD *)v31 + 24LL),
    (__int64 *)&v37);
  *((float *)this + 8) = a8;
  *((_BYTE *)this + 20) = v21;
  *((_BYTE *)this + 23) = 1;
  CCursorState::ScheduleCompositionPass(this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v36);
  v16 = 0;
LABEL_36:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
  LeaveCriticalSection(&g_CursorManager);
  return v16;
}
