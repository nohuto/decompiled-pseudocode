/*
 * XREFs of sub_1800CEA90 @ 0x1800CEA90
 * Callers:
 *     sub_1800CE920 @ 0x1800CE920 (sub_1800CE920.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_18001155C @ 0x18001155C (sub_18001155C.c)
 *     sub_1800116C8 @ 0x1800116C8 (sub_1800116C8.c)
 *     sub_180012384 @ 0x180012384 (sub_180012384.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_180024998 @ 0x180024998 (sub_180024998.c)
 *     sub_180027D80 @ 0x180027D80 (sub_180027D80.c)
 *     sub_18002C424 @ 0x18002C424 (sub_18002C424.c)
 *     sub_18006A92C @ 0x18006A92C (sub_18006A92C.c)
 *     sub_18006B3AC @ 0x18006B3AC (sub_18006B3AC.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800C03B4 @ 0x1800C03B4 (sub_1800C03B4.c)
 *     sub_1800C1B5C @ 0x1800C1B5C (sub_1800C1B5C.c)
 *     sub_1800C2B14 @ 0x1800C2B14 (sub_1800C2B14.c)
 *     sub_1800CAB70 @ 0x1800CAB70 (sub_1800CAB70.c)
 *     sub_1800CADDC @ 0x1800CADDC (sub_1800CADDC.c)
 *     sub_1800CAFCC @ 0x1800CAFCC (sub_1800CAFCC.c)
 *     sub_1800CDBA4 @ 0x1800CDBA4 (sub_1800CDBA4.c)
 *     sub_1800CDBF4 @ 0x1800CDBF4 (sub_1800CDBF4.c)
 *     sub_1800CE794 @ 0x1800CE794 (sub_1800CE794.c)
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall sub_1800CEA90(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  double v6; // xmm0_8
  char v7; // r12
  int v8; // eax
  ULONG_PTR v9; // rbx
  char v10; // si
  __int64 *v11; // rcx
  __int64 v12; // rdi
  unsigned int v13; // r14d
  __int64 (__fastcall *v14)(__int64, _QWORD, _DWORD *, __int64); // rsi
  __int64 v15; // rbx
  int v16; // eax
  ULONG_PTR v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, _DWORD *, __int64); // rsi
  __int64 v19; // rbx
  int v20; // eax
  ULONG_PTR v21; // rbx
  int v22; // eax
  ULONG_PTR v23; // rbx
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, bool, __int64 *); // rsi
  int v26; // eax
  ULONG_PTR v27; // rbx
  __int64 v28; // r14
  __int64 (__fastcall *v29)(__int64, __int64, _OWORD *, __int64); // rsi
  __int64 v30; // rbx
  int v31; // eax
  ULONG_PTR v32; // rbx
  __int64 (__fastcall *v33)(__int64, __int128 *, _QWORD, __int64); // rsi
  __int64 v34; // rbx
  int v35; // eax
  ULONG_PTR v36; // rbx
  __int64 v37; // rbx
  unsigned int v38; // ecx
  __int64 (__fastcall *v39)(__int64, __int128 *, _QWORD, __int64); // rsi
  int v40; // eax
  ULONG_PTR v41; // rbx
  __int64 (__fastcall *v42)(__int64, _QWORD, _DWORD *, __int64); // rsi
  __int64 v43; // rbx
  int v44; // eax
  ULONG_PTR v45; // rbx
  __int64 (__fastcall *v46)(__int64, _QWORD, _DWORD *, __int64); // rsi
  __int64 v47; // rbx
  int v48; // eax
  ULONG_PTR v49; // rbx
  __int64 v50; // rax
  __int64 v51; // r14
  _QWORD *v52; // rbx
  int v53; // edi
  __int64 v54; // rsi
  __int64 v55; // r14
  __int64 v56; // rbx
  __int64 v57; // r12
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  int v61; // esi
  __int64 v62; // rdi
  _QWORD *v63; // r12
  _QWORD *v64; // rcx
  _QWORD *v65; // rax
  __int64 *v66; // r9
  _QWORD *v67; // rax
  __int64 (__fastcall ***v68)(_QWORD, void *, __int64 *); // rcx
  __int64 result; // rax
  char v70; // [rsp+48h] [rbp-C0h]
  char v71; // [rsp+49h] [rbp-BFh]
  char v72; // [rsp+4Ah] [rbp-BEh]
  __int64 v73; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v74; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *v75; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v76[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v77; // [rsp+78h] [rbp-90h] BYREF
  __int64 (__fastcall ***v78)(_QWORD, void *, __int64 *); // [rsp+80h] [rbp-88h] BYREF
  _QWORD *v79; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v80[2]; // [rsp+90h] [rbp-78h] BYREF
  volatile signed __int32 *v81; // [rsp+98h] [rbp-70h]
  int v82; // [rsp+A0h] [rbp-68h]
  int v83; // [rsp+A4h] [rbp-64h]
  __int64 v84; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD *v85; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v86; // [rsp+B8h] [rbp-50h]
  __int64 v87; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v88[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v89; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v90; // [rsp+E0h] [rbp-28h]
  _OWORD v91[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v92; // [rsp+108h] [rbp+0h] BYREF
  __int64 v93; // [rsp+110h] [rbp+8h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+118h] [rbp+10h] BYREF
  __int128 v95; // [rsp+1B8h] [rbp+B0h] BYREF
  __int128 v96; // [rsp+1C8h] [rbp+C0h]
  __int64 v97; // [rsp+1D8h] [rbp+D0h]
  int v98; // [rsp+1E0h] [rbp+D8h]
  __int128 v99; // [rsp+1E8h] [rbp+E0h] BYREF
  __int128 v100; // [rsp+1F8h] [rbp+F0h]
  __int64 v101; // [rsp+208h] [rbp+100h]
  int v102; // [rsp+210h] [rbp+108h]
  __int128 v103; // [rsp+218h] [rbp+110h] BYREF
  _BYTE v104[20]; // [rsp+228h] [rbp+120h]
  __int64 v105; // [rsp+23Ch] [rbp+134h]
  void *retaddr; // [rsp+2A0h] [rbp+198h]

  v75 = a2;
  sub_1800CE794((__int64)a1, &v92);
  sub_1800BC108(v92, &v87);
  (*(void (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)*a2 + 32LL))(
    *a2,
    &v78);
  v6 = (*(double (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  v72 = v7;
  *(_BYTE *)(*a3 + 1) = v7;
  v77 = 0LL;
  v8 = sub_1800CDBA4(&v78, &v77);
  v9 = v8;
  if ( v8 < 0 )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v9;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_180012384(v77, "CameraBackBuffer");
  v71 = 0;
  v10 = 0;
  v70 = 0;
  v11 = (__int64 *)(*a3 + 8);
  v12 = v87;
  if ( *v11 != v77 )
  {
    sub_1800C2B14(v11, &v77);
    v99 = 0LL;
    v100 = 0LL;
    v101 = 0LL;
    v102 = 0;
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(*a3 + 8) + 80LL))(*(_QWORD *)(*a3 + 8), &v99);
    v13 = v100;
    v80[1] = (v7 != 0) + 4;
    v81 = 0LL;
    v82 = 1;
    v80[0] = v100;
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(*(_QWORD *)v12 + 72LL);
    v15 = *a3;
    sub_18000F938((__int64 *)(*a3 + 48));
    v16 = v14(v12, *(_QWORD *)(*a3 + 8), v80, v15 + 48);
    v17 = v16;
    if ( v16 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v17;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    if ( v7 )
    {
      HIDWORD(v81) = 1;
      v18 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(*(_QWORD *)v12 + 72LL);
      v19 = *a3;
      sub_18000F938((__int64 *)(*a3 + 96));
      v20 = v18(v12, *(_QWORD *)(*a3 + 8), v80, v19 + 96);
      v21 = v20;
      if ( v20 < 0 )
      {
        memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
        pExceptionRecord.ExceptionCode = -532265403;
        pExceptionRecord.ExceptionAddress = retaddr;
        pExceptionRecord.NumberParameters = 1;
        pExceptionRecord.ExceptionInformation[0] = v21;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
    }
    else
    {
      sub_1800CADDC((__int64 *)(*a3 + 96), (__int64 *)(*a3 + 48));
    }
    v73 = v13 | 0x100000000LL;
    *(_QWORD *)&v95 = v73;
    DWORD2(v95) = LODWORD(v6);
    HIDWORD(v95) = LODWORD(v6);
    v96 = 3uLL;
    v91[0] = v95;
    v91[1] = 3uLL;
    v76[0] = 0LL;
    v22 = sub_1800CDBF4(&v78, v76);
    v23 = v22;
    if ( v22 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v23;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    sub_1800C03B4(v76[0], "DxgiBackBuffer");
    v74 = 0LL;
    v24 = v76[0];
    v25 = *(__int64 (__fastcall **)(__int64, bool, __int64 *))(*(_QWORD *)v76[0] + 96LL);
    sub_18000F938(&v74);
    v26 = v25(v24, v7 != 0, &v74);
    v27 = v26;
    if ( v26 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v27;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    sub_1800C03B4(v74, "DxgiSurface");
    v28 = a1[66];
    v29 = *(__int64 (__fastcall **)(__int64, __int64, _OWORD *, __int64))(*(_QWORD *)v28 + 496LL);
    v30 = *a3;
    sub_18000F938((__int64 *)(*a3 + 32));
    v31 = v29(v28, v74, v91, v30 + 32);
    v32 = v31;
    if ( v31 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v32;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[66] + 592LL))(a1[66], *(_QWORD *)(*a3 + 32));
    *(_QWORD *)(*a3 + 40) = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD **))(*(_QWORD *)*v75 + 24LL))(
                                         *v75,
                                         &v79);
    v103 = v99;
    *(_OWORD *)v104 = v100;
    *(_QWORD *)&v104[12] = 3LL;
    v105 = 0x20000LL;
    HIDWORD(v103) = 1;
    sub_18000F938((__int64 *)(*a3 + 16));
    v33 = *(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int64))(*(_QWORD *)v12 + 40LL);
    v34 = *a3;
    sub_18000F938((__int64 *)(*a3 + 16));
    v35 = v33(v12, &v103, 0LL, v34 + 16);
    v36 = v35;
    if ( v35 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v36;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    sub_180012384(*(_QWORD *)(*a3 + 16), "BackBufferStaging");
    sub_18000F938((__int64 *)(*a3 + 56));
    sub_18000F938((__int64 *)(*a3 + 104));
    v71 = 1;
    sub_18000F938(&v74);
    sub_18000F938(v76);
    v10 = 0;
  }
  v37 = *a3;
  if ( !*(_QWORD *)(*a3 + 56) || !*(_QWORD *)(v37 + 104) )
  {
    v38 = *(_DWORD *)(v37 + 44);
    LODWORD(v95) = *(_DWORD *)(v37 + 40);
    *(_QWORD *)((char *)&v95 + 4) = v38 | 0x100000000LL;
    HIDWORD(v95) = (v7 != 0) + 1;
    LODWORD(v96) = 55;
    *(_QWORD *)((char *)&v96 + 4) = 1LL;
    HIDWORD(v96) = 0;
    v97 = 64LL;
    v98 = 0;
    v39 = *(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int64))(*(_QWORD *)v12 + 40LL);
    sub_18000F938((__int64 *)(v37 + 24));
    v40 = v39(v12, &v95, 0LL, v37 + 24);
    v41 = v40;
    if ( v40 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v41;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    sub_180012384(*(_QWORD *)(*a3 + 24), "BackBuffer_DepthStencilTexture");
    sub_1800CAB70(v80, (v7 != 0) + 3);
    v83 = 1;
    v42 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(*(_QWORD *)v12 + 80LL);
    v43 = *a3;
    sub_18000F938((__int64 *)(*a3 + 56));
    v44 = v42(v12, *(_QWORD *)(*a3 + 24), v80, v43 + 56);
    v45 = v44;
    if ( v44 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v45;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    sub_180012384(*(_QWORD *)(*a3 + 56), "BackBuffer_DepthStencilView_LeftEye");
    if ( v7 )
    {
      v82 = 1;
      v46 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(*(_QWORD *)v12 + 80LL);
      v47 = *a3;
      sub_18000F938((__int64 *)(*a3 + 104));
      v48 = v46(v12, *(_QWORD *)(*a3 + 24), v80, v47 + 104);
      v49 = v48;
      if ( v48 < 0 )
      {
        memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
        pExceptionRecord.ExceptionCode = -532265403;
        pExceptionRecord.ExceptionAddress = retaddr;
        pExceptionRecord.NumberParameters = 1;
        pExceptionRecord.ExceptionInformation[0] = v49;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
      sub_180012384(*(_QWORD *)(*a3 + 104), "BackBuffer_DepthStencilView_RightEye");
    }
    else
    {
      sub_1800CADDC((__int64 *)(*a3 + 104), (__int64 *)(*a3 + 56));
    }
    v10 = 1;
    v70 = 1;
  }
  v50 = (*(__int64 (__fastcall **)(_QWORD *, _DWORD *))(*a1 + 376LL))(a1, v80);
  sub_180012A94(v50, &v89);
  if ( v81 )
    sub_180010F00(v81);
  v51 = v89;
  v75 = *(_QWORD **)(v89 + 3984);
  v52 = (_QWORD *)((v7 != 0) + 1LL);
  v79 = v52;
  if ( v71 )
  {
    v53 = 0;
    v54 = 0LL;
    v55 = (v7 != 0) + 1LL;
    v56 = v89;
    v57 = (__int64)v75;
    do
    {
      sub_18001155C(v56, (__int64 *)&v95);
      v85 = (_QWORD *)_RTDynamicCast(
                        v95,
                        0LL,
                        &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
                        &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
                        1);
      v58 = *a3;
      LODWORD(v76[0]) = *(_DWORD *)(*a3 + 44);
      LODWORD(v74) = *(_DWORD *)(v58 + 40);
      v84 = *(_QWORD *)(v58 + 16);
      sub_180012440(&v84);
      v73 = *(_QWORD *)(*a3 + 8);
      sub_180012440(&v73);
      v59 = *(_QWORD *)(v54 + *a3 + 48);
      v88[0] = v59;
      if ( v59 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 8LL))(v59);
      sub_1800C1B5C(v85, v88, &v73, &v84, v74, v76[0]);
      sub_1800116C8(v57, v91);
      sub_180027D80(*(__int64 *)&v91[0], &v95);
      sub_180013540((__int64 *)(*a3 + 64 + 48LL * v53), v91);
      if ( *((_QWORD *)&v91[0] + 1) )
        sub_180010EC8(*((__int64 *)&v91[0] + 1));
      if ( *((_QWORD *)&v95 + 1) )
        sub_180010EC8(*((__int64 *)&v95 + 1));
      ++v53;
      v54 += 48LL;
      --v55;
    }
    while ( v55 );
    v52 = v79;
    if ( !v72 )
      sub_180013540((__int64 *)(*a3 + 64), (_QWORD *)(*a3 + 112));
    (*(void (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1);
    LOBYTE(v60) = 1;
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 360LL))(a1, v60);
    v51 = v89;
    v10 = v70;
  }
  if ( v10 )
  {
    v61 = 0;
    v62 = 0LL;
    v63 = v75;
    do
    {
      sub_18006A92C(v51, (__int64 *)&v95);
      v79 = (_QWORD *)_RTDynamicCast(
                        v95,
                        0LL,
                        &Spectre::Engine::DeviceDepthBuffer `RTTI Type Descriptor',
                        &Spectre::Engine::D3D11::DepthBufferD3D11 `RTTI Type Descriptor',
                        1);
      v73 = *(_QWORD *)(*a3 + 24);
      sub_180012440(&v73);
      v64 = *(_QWORD **)(v62 + *a3 + 56);
      v75 = v64;
      if ( v64 )
        (*(void (__fastcall **)(_QWORD *))(*v64 + 8LL))(v64);
      sub_1800CAFCC(v79, (__int64 *)&v75, &v73);
      sub_180024998(v63, &v85);
      v65 = sub_180012C40(v91, &v95);
      sub_18006B3AC(v66, v65, 5);
      v67 = sub_180012C40(v88, &v85);
      sub_18002C424((__int64)a1, v67);
      sub_180013540((__int64 *)(*a3 + 80 + 48LL * v61), &v85);
      if ( v86 )
        sub_180010EC8(v86);
      if ( *((_QWORD *)&v95 + 1) )
        sub_180010EC8(*((__int64 *)&v95 + 1));
      ++v61;
      v62 += 48LL;
      v52 = (_QWORD *)((char *)v52 - 1);
    }
    while ( v52 );
    if ( !v72 )
      sub_180013540((__int64 *)(*a3 + 80), (_QWORD *)(*a3 + 128));
  }
  if ( v90 )
    sub_180010EC8(v90);
  sub_18000F938(&v77);
  v68 = v78;
  if ( v78 )
  {
    v78 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v68)[2])(v68);
  }
  result = sub_18000F938(&v87);
  if ( v93 )
    return sub_180010EC8(v93);
  return result;
}
