/*
 * XREFs of sub_1800C4100 @ 0x1800C4100
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _o__invalid_parameter_noinfo @ 0x18000CDBA (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001DF88 @ 0x18001DF88 (sub_18001DF88.c)
 *     sub_18001DFB0 @ 0x18001DFB0 (sub_18001DFB0.c)
 *     sub_180025A84 @ 0x180025A84 (sub_180025A84.c)
 *     sub_180028AE4 @ 0x180028AE4 (sub_180028AE4.c)
 *     sub_18004744C @ 0x18004744C (sub_18004744C.c)
 *     sub_18004F470 @ 0x18004F470 (sub_18004F470.c)
 *     sub_180052F54 @ 0x180052F54 (sub_180052F54.c)
 *     sub_1800540C4 @ 0x1800540C4 (sub_1800540C4.c)
 *     sub_1800541A4 @ 0x1800541A4 (sub_1800541A4.c)
 *     sub_180054278 @ 0x180054278 (sub_180054278.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 *     sub_18006A8B8 @ 0x18006A8B8 (sub_18006A8B8.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800BC140 @ 0x1800BC140 (sub_1800BC140.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800C1A50 @ 0x1800C1A50 (sub_1800C1A50.c)
 *     sub_1800C2570 @ 0x1800C2570 (sub_1800C2570.c)
 *     sub_1800C29D0 @ 0x1800C29D0 (sub_1800C29D0.c)
 *     sub_1800C4AB0 @ 0x1800C4AB0 (sub_1800C4AB0.c)
 *     sub_1800C4F18 @ 0x1800C4F18 (sub_1800C4F18.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=18
_QWORD *__fastcall sub_1800C4100(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _BYTE *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rcx
  _QWORD *v12; // r12
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, _OWORD *, _QWORD, __int64 *); // rdi
  int v18; // eax
  ULONG_PTR v19; // rbx
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, _OWORD *, _QWORD, __int64 *); // rdi
  int v22; // edi
  void **v23; // rax
  void **v24; // rax
  void **v25; // rax
  void **v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  void **v29; // rbx
  _QWORD *v30; // rax
  _BYTE *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // r8
  __int64 v34; // r14
  __int64 v35; // rsi
  __int64 v36; // rbx
  int v37; // eax
  ULONG_PTR v38; // rdi
  int v39; // eax
  unsigned int v40; // r12d
  unsigned int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r8
  size_t v44; // r15
  __int64 v45; // rcx
  void *v46; // rdx
  void *v47; // rdi
  __int64 v48; // r8
  __int64 *v49; // rax
  __int64 v51; // [rsp+40h] [rbp-C0h] BYREF
  void *v52; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v53; // [rsp+50h] [rbp-B0h] BYREF
  void *v54; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v55; // [rsp+60h] [rbp-A0h]
  __int64 v56; // [rsp+68h] [rbp-98h] BYREF
  __int64 v57; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+78h] [rbp-88h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v60; // [rsp+98h] [rbp-68h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-60h]
  void **v62; // [rsp+A8h] [rbp-58h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v64[3]; // [rsp+150h] [rbp+50h] BYREF
  __int128 v65; // [rsp+180h] [rbp+80h] BYREF
  __int64 v66; // [rsp+190h] [rbp+90h]
  __int64 v67[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  _OWORD pExceptionObject[3]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v69[7]; // [rsp+1F8h] [rbp+F8h] BYREF
  void *retaddr; // [rsp+278h] [rbp+178h]

  v53 = a2;
  v4 = a1[14];
  if ( v4 )
  {
    v5 = *(_BYTE **)v4;
    v52 = v5;
    if ( v5 )
    {
      v52 = v5;
      if ( (v5[20] & 0x10) != 0 )
      {
        sub_180011CC4(v67, "TextureD3D11::GetDeviceBuffer() -- reading of texture data is not supported for cubemaps");
        v6 = sub_180011CC4(
               v64,
               "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
        sub_18006A84C(pExceptionObject, (__int64)v6, v7, (__int64)v67, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
    }
  }
  else
  {
    v52 = 0LL;
  }
  if ( *(_DWORD *)(v4 + 12) > 1u )
  {
    sub_180011CC4(v67, "TextureD3D11::GetDeviceBuffer() -- reading of texture data is not supported for MSAA textures");
    v8 = sub_180011CC4(
           v64,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
    sub_18006A84C(pExceptionObject, (__int64)v8, v9, (__int64)v67, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_180012A94((__int64)(a1 + 9), &v65);
  sub_1800C1A50(&v60, (__int64 *)&v65);
  v10 = v60;
  sub_1800BC108(v60, &v58);
  sub_1800BC140(v10, &v53);
  v56 = 0LL;
  v57 = 0LL;
  v11 = a1[21];
  if ( v11 )
  {
    memset(pExceptionObject, 0, 44);
    (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v11 + 80LL))(v11, pExceptionObject);
    *(_QWORD *)((char *)&pExceptionObject[1] + 12) = 3LL;
    *(_QWORD *)((char *)&pExceptionObject[2] + 4) = 0x20000LL;
    HIDWORD(pExceptionObject[0]) = 1;
    v51 = 0LL;
    v20 = v58;
    v21 = *(__int64 (__fastcall **)(__int64, _OWORD *, _QWORD, __int64 *))(*(_QWORD *)v58 + 40LL);
    sub_18000F938(&v51);
    v22 = v21(v20, pExceptionObject, 0LL, &v51);
    sub_1800BDDBC(v10, v22);
    if ( v22 < 0 )
    {
      sub_180011CC4(v64, "THROW_IF_FAILED_DETAILED. ");
      v23 = sub_18001DFB0((__int64)v64, " File=", 6uLL);
      sub_18001DFB0(
        (__int64)v23,
        "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp",
        0x5CuLL);
      v24 = sub_18001DFB0((__int64)v64, " Line=", 6uLL);
      sub_18001DFB0((__int64)v24, "387", 3uLL);
      v25 = sub_18001DFB0((__int64)v64, " Message=", 9uLL);
      sub_18001DFB0((__int64)v25, "\"TextureD3D11::GetDeviceBuffer(): unable to create texture (2D)\"", 0x40uLL);
      v26 = sub_18001DFB0((__int64)v64, " Details=\"", 0xAuLL);
      v65 = 0LL;
      v66 = 0LL;
      v27 = sub_1800C4F18(v67, pExceptionObject, &v65);
      v28 = sub_18001DF88((__int64)v26, v27);
      sub_18001DFB0(v28, "\"", 1uLL);
      sub_1800129D0((__int64)v67);
      if ( (_QWORD)v65 )
        sub_18000E26C((void *)v65, (v66 - v65) & 0xFFFFFFFFFFFFFFF0uLL);
      v29 = sub_18001DFB0((__int64)v64, " HRESULT=", 9uLL);
      v30 = sub_180028AE4(v67, v22);
      sub_18001DF88((__int64)v29, (__int64)v30);
      sub_1800129D0((__int64)v67);
      v31 = (_BYTE *)sub_1800148EC((__int64)v64);
      sub_180011CC4(&v65, v31);
      v32 = sub_180011CC4(
              v67,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
      sub_18006A8B8(v69, (__int64)v32, v33, v22, (__int64)&v65, 0);
      throw (Spectre::Engine::EngineException *)v69;
    }
    sub_1800C2570(&v56, a1 + 21);
    sub_1800C2570(&v57, &v51);
    sub_18000F938(&v51);
    v12 = a1 + 22;
  }
  else
  {
    v12 = a1 + 22;
    v13 = a1[22];
    if ( !v13 )
    {
      sub_180011CC4(v67, "TextureD3D11::GetDeviceBuffer - No valid D3D11 texture interface pointer");
      v14 = sub_180011CC4(
              v64,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
      sub_18006A84C(pExceptionObject, (__int64)v14, v15, (__int64)v67, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    memset(v64, 0, 36);
    (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v13 + 80LL))(v13, v64);
    *(_QWORD *)((char *)&v64[1] + 4) = 3LL;
    *(_QWORD *)((char *)&v64[1] + 12) = 0x20000LL;
    v51 = 0LL;
    v16 = v58;
    v17 = *(__int64 (__fastcall **)(__int64, _OWORD *, _QWORD, __int64 *))(*(_QWORD *)v58 + 48LL);
    sub_18000F938(&v51);
    v18 = v17(v16, v64, 0LL, &v51);
    v19 = v18;
    sub_1800BDDBC(v10, v18);
    if ( (v19 & 0x80000000) != 0LL )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v19;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    sub_1800C2570(&v56, a1 + 22);
    sub_1800C2570(&v57, &v51);
    sub_18000F938(&v51);
  }
  v34 = (__int64)v53;
  v35 = v56;
  v36 = v57;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*v53 + 376LL))(v53, v57, v56);
  *(_OWORD *)Src = 0LL;
  v37 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v34 + 112LL))(
          v34,
          v36,
          0LL,
          1LL,
          0,
          Src);
  v38 = v37;
  sub_1800BDDBC(v60, v37);
  if ( (v38 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v38;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v39 = sub_1800540C4((__int64)a1);
  v55 = sub_18004744C(v39);
  LODWORD(v51) = Src[1];
  LODWORD(v54) = Src[1];
  if ( *v12 )
  {
    v40 = HIDWORD(Src[1]);
  }
  else
  {
    sub_1800541A4((__int64)a1);
    sub_180054278((__int64)a1);
    v41 = sub_1800540C4((__int64)a1);
    v40 = sub_1800C4AB0(v41, v42, v43, &v54);
  }
  v44 = *((_DWORD *)v52 + 2) * v40;
  sub_18004F470(&v52, v44);
  v46 = Src[0];
  v47 = v52;
  if ( v44 )
  {
    if ( v52 )
    {
      if ( Src[0] )
      {
        memcpy(v52, Src[0], (unsigned int)v44);
        goto LABEL_30;
      }
      memset(v52, 0, (unsigned int)v44);
    }
    *(_DWORD *)o__errno(v45, v46) = 22;
    o__invalid_parameter_noinfo();
  }
LABEL_30:
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v34 + 120LL))(v34, v36, 0LL);
  v62 = &v54;
  v52 = 0LL;
  v54 = v47;
  *(_QWORD *)&v64[0] = 0LL;
  *((_QWORD *)&v64[0] + 1) = v44;
  *(_QWORD *)&v64[1] = __PAIR64__(v51, v55);
  *((_QWORD *)&v64[1] + 1) = v40;
  *(_QWORD *)&v65 = v64;
  *((_QWORD *)&v65 + 1) = &v64[2];
  v49 = sub_1800C29D0(v67, (__int64)&v65, v48);
  sub_180052F54(a2, v49, &v54, v44);
  sub_180025A84(&v52);
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  sub_18000F938((__int64 *)&v53);
  sub_18000F938(&v58);
  if ( v61 )
    sub_180010EC8(v61);
  return a2;
}
