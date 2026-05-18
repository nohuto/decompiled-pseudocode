/*
 * XREFs of sub_1800BC4A0 @ 0x1800BC4A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012384 @ 0x180012384 (sub_180012384.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001818C @ 0x18001818C (sub_18001818C.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_18001E58C @ 0x18001E58C (sub_18001E58C.c)
 *     sub_18001F420 @ 0x18001F420 (sub_18001F420.c)
 *     sub_18002053C @ 0x18002053C (sub_18002053C.c)
 *     sub_180024760 @ 0x180024760 (sub_180024760.c)
 *     sub_180026C20 @ 0x180026C20 (sub_180026C20.c)
 *     sub_180028AE4 @ 0x180028AE4 (sub_180028AE4.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_18002D24C @ 0x18002D24C (sub_18002D24C.c)
 *     sub_18002D270 @ 0x18002D270 (sub_18002D270.c)
 *     sub_18002D818 @ 0x18002D818 (sub_18002D818.c)
 *     sub_180031F38 @ 0x180031F38 (sub_180031F38.c)
 *     sub_180042444 @ 0x180042444 (sub_180042444.c)
 *     sub_180056DC0 @ 0x180056DC0 (sub_180056DC0.c)
 *     sub_180057244 @ 0x180057244 (sub_180057244.c)
 *     sub_180081920 @ 0x180081920 (sub_180081920.c)
 *     sub_1800B95E8 @ 0x1800B95E8 (sub_1800B95E8.c)
 *     sub_1800B9624 @ 0x1800B9624 (sub_1800B9624.c)
 *     sub_1800B9708 @ 0x1800B9708 (sub_1800B9708.c)
 *     sub_1800B9758 @ 0x1800B9758 (sub_1800B9758.c)
 *     sub_1800BA660 @ 0x1800BA660 (sub_1800BA660.c)
 *     sub_1800BBF84 @ 0x1800BBF84 (sub_1800BBF84.c)
 *     sub_1800BD89C @ 0x1800BD89C (sub_1800BD89C.c)
 *     sub_1800BEDF0 @ 0x1800BEDF0 (sub_1800BEDF0.c)
 *     sub_1800CFBAC @ 0x1800CFBAC (sub_1800CFBAC.c)
 *     sub_1800CFBEC @ 0x1800CFBEC (sub_1800CFBEC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall sub_1800BC4A0(_QWORD *a1)
{
  __int64 (__fastcall ***v2)(_QWORD, void *, __int64 *); // rbx
  void (__fastcall ****v3)(_QWORD, void *, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)); // r14
  void (__fastcall ***v4)(_QWORD, void *, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)); // r15
  void (__fastcall *v5)(_QWORD, _QWORD); // rdi
  void (__fastcall ***v6)(_QWORD, void *, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)); // rdi
  void (__fastcall *v7)(_QWORD, void *, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)); // rbx
  __int64 (__fastcall ***v8)(_QWORD, void *, __int64 *); // rbx
  __int64 (__fastcall *v9)(_QWORD, void *, __int64 *); // rdi
  __int64 v10; // rdi
  void (__fastcall *v11)(__int64, const IID *, _QWORD *); // rbx
  _QWORD *v12; // r14
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  ULONG_PTR v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rbx
  int v21; // eax
  int v22; // eax
  __int64 *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // r14
  __int64 (__fastcall ***v26)(_QWORD, void *, __int64 *); // rbx
  __int64 v27; // rdi
  __int64 v28; // rcx
  _QWORD *v29; // rax
  ULONG_PTR v30; // rbx
  __int64 v31; // rax
  unsigned __int64 v32; // r13
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  IDXGIAdapter **v37; // rax
  HRESULT Device; // ebx
  IDXGIAdapter **v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 (__fastcall ***v45)(_QWORD, void *, __int64 *); // r15
  unsigned __int64 v46; // r14
  _QWORD *v47; // rbx
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r9
  _QWORD *v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // r9
  _QWORD *v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // r9
  _QWORD *v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // r9
  _QWORD *v60; // rbx
  _QWORD *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r9
  __int64 *v64; // rax
  __int64 result; // rax
  __int64 (__fastcall ***v66)(_QWORD, void *, __int64 *); // [rsp+58h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v67)(_QWORD, void *, __int64 *); // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v68; // [rsp+68h] [rbp-A0h]
  __int64 v69; // [rsp+70h] [rbp-98h] BYREF
  __int64 v70; // [rsp+78h] [rbp-90h]
  _DWORD v71[18]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v72; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v73; // [rsp+E0h] [rbp-28h]
  __int64 v74; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v75; // [rsp+F0h] [rbp-18h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v77[4]; // [rsp+198h] [rbp+90h] BYREF
  _QWORD v78[4]; // [rsp+1B8h] [rbp+B0h] BYREF
  _QWORD v79[4]; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE v80[32]; // [rsp+1F8h] [rbp+F0h] BYREF
  _BYTE v81[32]; // [rsp+218h] [rbp+110h] BYREF
  _BYTE v82[32]; // [rsp+238h] [rbp+130h] BYREF
  __int64 v83[40]; // [rsp+258h] [rbp+150h] BYREF
  __int128 v84; // [rsp+398h] [rbp+290h] BYREF
  _QWORD v85[90]; // [rsp+3A8h] [rbp+2A0h] BYREF
  __int64 v86[76]; // [rsp+678h] [rbp+570h] BYREF
  D3D_FEATURE_LEVEL pFeatureLevels[4]; // [rsp+8D8h] [rbp+7D0h] BYREF
  __m128i si128; // [rsp+8E8h] [rbp+7E0h]
  int v89; // [rsp+8F8h] [rbp+7F0h]
  void *retaddr; // [rsp+930h] [rbp+828h]

  v66 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))a1[37];
  v2 = v66;
  sub_180012440((__int64 *)&v66);
  v3 = (void (__fastcall ****)(_QWORD, void *, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(a1 + 532);
  if ( v2 )
    sub_1800B9708(&v66, a1 + 532);
  sub_18000F938((__int64 *)&v66);
  v4 = *v3;
  if ( *v3 )
  {
    v66 = 0LL;
    v67 = 0LL;
    v5 = (void (__fastcall *)(_QWORD, _QWORD))(*v4)[43];
    sub_18000F938(a1 + 533);
    v5(v4, a1 + 533);
    v6 = *v3;
    v7 = ***v3;
    sub_18000F938((__int64 *)&v66);
    v7(v6, &unk_1800FA650, &v66);
    v8 = v66;
    v9 = (*v66)[7];
    sub_18000F938((__int64 *)&v67);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *), __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))v9)(
      v8,
      &v67);
    sub_1800B9758(&v67, a1 + 534);
    v10 = a1[534];
    v11 = *(void (__fastcall **)(__int64, const IID *, _QWORD *))(*(_QWORD *)v10 + 48LL);
    v12 = a1 + 535;
    sub_18000F938(a1 + 535);
    v11(v10, &stru_18018F518, a1 + 535);
    sub_18000F938((__int64 *)&v67);
    sub_18000F938((__int64 *)&v66);
  }
  else
  {
    *(_OWORD *)v83 = 0LL;
    v84 = 0LL;
    v13 = *((_DWORD *)a1 + 72);
    if ( v13 == 3 || (v14 = 0, v13 == 4) )
      v14 = 1;
    v15 = sub_1800CFBEC(
            (unsigned int)v83,
            (unsigned int)v83,
            (unsigned int)&v84,
            (unsigned int)&v84 + 8,
            v14,
            *((_DWORD *)a1 + 81),
            *((_DWORD *)a1 + 82),
            *((_DWORD *)a1 + 79),
            *((_DWORD *)a1 + 80),
            *((_DWORD *)a1 + 83));
    v16 = v15;
    if ( v15 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v16;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v17 = v84;
    if ( (_QWORD)v84 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v84 + 8LL))(v84);
    v67 = 0LL;
    v66 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))a1[532];
    a1[532] = v17;
    sub_18000F938((__int64 *)&v66);
    sub_18000F938((__int64 *)&v67);
    v18 = *((_QWORD *)&v84 + 1);
    if ( *((_QWORD *)&v84 + 1) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v84 + 1) + 8LL))(*((_QWORD *)&v84 + 1));
    v67 = 0LL;
    v66 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))a1[533];
    a1[533] = v18;
    sub_18000F938((__int64 *)&v66);
    sub_18000F938((__int64 *)&v67);
    v19 = v83[0];
    if ( v83[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v83[0] + 8LL))(v83[0]);
    v67 = 0LL;
    v66 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))a1[534];
    a1[534] = v19;
    sub_18000F938((__int64 *)&v66);
    sub_18000F938((__int64 *)&v67);
    v20 = v83[1];
    if ( v83[1] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v83[1] + 8LL))(v83[1]);
    v12 = a1 + 535;
    v67 = 0LL;
    v66 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))a1[535];
    a1[535] = v20;
    sub_18000F938((__int64 *)&v66);
    sub_18000F938((__int64 *)&v67);
    sub_18000F938(v83);
    sub_18000F938((__int64 *)&v84);
    sub_18000F938((__int64 *)&v84 + 1);
    sub_18000F938(&v83[1]);
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 224LL))(a1, *((unsigned int *)a1 + 94));
    sub_1800CFBAC(v83);
  }
  if ( a1[532] )
    *((_DWORD *)a1 + 1062) = 0;
  v21 = *((_DWORD *)a1 + 96);
  if ( v21 == 2 || !v21 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v12 + 64LL))(*v12, a1[49], 0LL);
  v22 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1[532] + 296LL))(a1[532]);
  *((_DWORD *)a1 + 1072) = v22;
  *((_DWORD *)a1 + 60) = v22;
  sub_180012384(a1[533], "DefaultImmediateContext");
  sub_180024760((__int64)a1, &v74);
  v23 = sub_180012C40(&v69, &v74);
  sub_18001818C(&v72, v23);
  v24 = sub_180011CC4(v78, "Default");
  v25 = v72;
  sub_1800292C4(v72, (__int64)v24);
  v26 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))a1[533];
  v66 = v26;
  if ( v26 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v26)[1])(v26);
  if ( *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(v25 + 144) != v26 )
  {
    if ( v26 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v26)[1])(v26);
    v67 = *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(v25 + 144);
    *(_QWORD *)(v25 + 144) = v26;
    sub_18000F938((__int64 *)&v67);
  }
  sub_18000F938((__int64 *)&v66);
  v27 = v73;
  if ( v73 )
    _InterlockedAdd((volatile signed __int32 *)(v73 + 8), 1u);
  a1[34] = v25;
  v28 = a1[35];
  a1[35] = v27;
  if ( v28 )
    sub_180010EC8(v28);
  v29 = sub_1800BBF84((__int64)a1, &v66);
  v30 = (*(int (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v29 + 64LL))(*v29, a1 + 537);
  sub_18000F938((__int64 *)&v66);
  if ( (v30 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v30;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v31 = sub_18001E58C((__int64)v78, (__int64)(a1 + 537));
  sub_18001F420((__int64)(a1 + 575), v31);
  sub_180014244((__int64)v78);
  sub_180031F38((__int64)(a1 + 10), (__int64)(a1 + 575));
  v32 = a1[571] >> 20;
  v68 = a1[572] >> 20;
  v67 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))(a1[573] >> 20);
  sub_1800BD89C(a1);
  v33 = sub_1800BEDF0(v77);
  sub_1800BEDF0(v82);
  v34 = sub_1800B95E8((__int64)v81);
  v35 = sub_18002D270((__int64)v80, v34, (__int64)"_");
  v36 = sub_18002D24C((__int64)v78, v35, v33);
  sub_18001F420((__int64)(a1 + 18), v36);
  sub_180014244((__int64)v78);
  sub_180014244((__int64)v80);
  sub_180014244((__int64)v81);
  sub_180014244((__int64)v82);
  sub_180014244((__int64)v77);
  *(__m128i *)pFeatureLevels = _mm_load_si128((const __m128i *)&xmmword_180191570);
  si128 = _mm_load_si128((const __m128i *)&xmmword_180191560);
  v89 = 37120;
  v37 = (IDXGIAdapter **)sub_1800BBF84((__int64)a1, &v66);
  Device = D3D11CreateDevice(
             *v37,
             D3D_DRIVER_TYPE_UNKNOWN,
             0LL,
             0,
             pFeatureLevels,
             9u,
             7u,
             0LL,
             (D3D_FEATURE_LEVEL *)a1 + 1073,
             0LL);
  sub_18000F938((__int64 *)&v66);
  if ( Device == -2147024809 )
  {
    v39 = (IDXGIAdapter **)sub_1800BBF84((__int64)a1, &v66);
    Device = D3D11CreateDevice(
               *v39,
               D3D_DRIVER_TYPE_UNKNOWN,
               0LL,
               0,
               &pFeatureLevels[3],
               6u,
               7u,
               0LL,
               (D3D_FEATURE_LEVEL *)a1 + 1073,
               0LL);
    sub_18000F938((__int64 *)&v66);
  }
  if ( Device >= 0 )
  {
    v40 = sub_1800BEDF0(v78);
    sub_1800BEDF0(v80);
    v41 = sub_1800B95E8((__int64)v81);
    v42 = sub_18002D270((__int64)v82, v41, (__int64)"_");
    v43 = sub_18002D24C((__int64)v77, v42, v40);
    sub_18001F420((__int64)(a1 + 22), v43);
    sub_180014244((__int64)v77);
    sub_180014244((__int64)v82);
    sub_180014244((__int64)v81);
    sub_180014244((__int64)v80);
    sub_180014244((__int64)v78);
  }
  v44 = sub_1800BEDF0(v77);
  sub_18001F420((__int64)(a1 + 26), v44);
  sub_180014244((__int64)v77);
  sub_18002D818(v79, (__int64)(a1 + 575));
  sub_1800148EC((__int64)v79);
  v45 = v67;
  v46 = v68;
  sub_18001DCFC(&qword_1801BD4C8, 3);
  if ( (unsigned __int8)sub_18002053C((_QWORD *)a1[74]) )
  {
    v47 = (_QWORD *)a1[74];
    v48 = sub_1800181BC(v77, (__int64)v79);
    sub_1800B9624(v47, v49, 491, v50, (__int64)"MachineSpecs_AdapterName", (__int64)v48);
    v51 = (_QWORD *)a1[74];
    sub_1800BA660(&v69, v32);
    sub_1800B9624(v51, v52, 492, v53, (__int64)"MachineSpecs_AdapterVideoMemory", (__int64)&v69);
    v54 = (_QWORD *)a1[74];
    sub_1800BA660(&v69, v46);
    sub_1800B9624(v54, v55, 493, v56, (__int64)"MachineSpecs_AdapterSystemMemory", (__int64)&v69);
    v57 = (_QWORD *)a1[74];
    sub_1800BA660(&v69, (unsigned __int64)v45);
    sub_1800B9624(v57, v58, 494, v59, (__int64)"MachineSpecs_AdapterSharedMemory", (__int64)&v69);
    v60 = (_QWORD *)a1[74];
    v61 = sub_180028AE4(v77, *((_DWORD *)a1 + 1158));
    sub_1800B9624(v60, v62, 495, v63, (__int64)"MachineSpecs_AdapterProfileLevel", (__int64)v61);
  }
  sub_180056DC0((__int64)v85);
  v64 = sub_180042444(a1[498], &v69);
  sub_180011F5C(v86, v64);
  if ( v70 )
    sub_180010EC8(v70);
  memset(v71, 0, sizeof(v71));
  *(_QWORD *)&v71[1] = 2LL;
  *(_QWORD *)&v71[3] = 0LL;
  v71[5] = 0;
  LOBYTE(v71[6]) = 0;
  memset(&v71[7], 0, 32);
  v71[15] = 65793;
  LOBYTE(v71[16]) = 1;
  v71[17] = 3;
  sub_180081920(v86[0], (__int64)v71, (__int64)a1);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a1[34] + 40LL))(a1[34], v85);
  if ( *((int *)a1 + 1072) < 40960 )
    *((_DWORD *)a1 + 970) = 4;
  sub_180026C20(a1);
  sub_180057244(v85);
  result = sub_1800129D0((__int64)v79);
  if ( v27 )
    result = sub_180010EC8(v27);
  if ( v75 )
    return sub_180010EC8(v75);
  return result;
}
