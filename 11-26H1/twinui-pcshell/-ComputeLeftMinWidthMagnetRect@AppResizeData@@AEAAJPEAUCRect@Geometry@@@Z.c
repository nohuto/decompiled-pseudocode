/*
 * XREFs of ?ComputeLeftMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x180534AFC
 * Callers:
 *     ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x18053483C (-ComputeDropTargets@AppResizeData@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18067F850 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppResizeData::ComputeLeftMinWidthMagnetRect(AppResizeData *this, struct Geometry::CRect *a2)
{
  int v4; // r15d
  int v5; // r12d
  int v6; // esi
  enum DEVICE_SCALE_FACTOR v7; // r8d
  int v8; // r13d
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, GUID *, int *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  LONG cx; // edx
  int v15; // r9d
  int v16; // eax
  int v18[2]; // [rsp+30h] [rbp-40h] BYREF
  ImmersiveApplicationLayout *v19; // [rsp+38h] [rbp-38h]
  __int128 v20; // [rsp+40h] [rbp-30h] BYREF
  struct tagSIZE v21[2]; // [rsp+50h] [rbp-20h]
  __int64 v22; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  *(_OWORD *)a2 = 0LL;
  v20 = 0LL;
  *(_OWORD *)&v21[0].cx = 0LL;
  v22 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), &v20);
  v4 = DWORD1(v20);
  v5 = HIDWORD(v20);
  v6 = DWORD2(v20) - v20;
  LODWORD(v19) = DWORD2(v20) - v20;
  HIDWORD(v19) = HIDWORD(v20) - DWORD1(v20);
  v8 = ImmersiveApplicationLayout::ComputeGutterWidth(v19, (struct tagSIZE)(unsigned int)v21[0].cx, v7);
  *(_QWORD *)v18 = 0LL;
  v9 = *((_QWORD *)this + 5);
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v9 + 104LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v18);
  v11 = v10(v9, 0LL, 5LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v18);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(**(_QWORD **)v18 + 72LL))(
            *(_QWORD *)v18,
            &v20,
            (unsigned int)(v6 - v8));
    cx = v21[0].cx;
    v15 = 2 * (int)(float)((float)v21[0].cx / 100.0) - (int)(float)((float)(320 * v21[0].cx) / -100.0);
    if ( v13 > v15 )
      v15 = v13;
    *((_DWORD *)a2 + 1) = v4;
    *((_DWORD *)a2 + 3) = v5;
    v16 = v20 + v8 / 2;
    *((_DWORD *)a2 + 2) = v16 + v15;
    *(_DWORD *)a2 = v16 + v15 - (int)(float)((float)(175 * cx) / 100.0);
    v12 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
      (const char *)(unsigned int)v11);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v18);
  return v12;
}
