/*
 * XREFs of sub_180016344 @ 0x180016344
 * Callers:
 *     sub_1800166E8 @ 0x1800166E8 (sub_1800166E8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800167D4 @ 0x1800167D4 (sub_1800167D4.c)
 *     sub_1800168F8 @ 0x1800168F8 (sub_1800168F8.c)
 *     sub_1800182A8 @ 0x1800182A8 (sub_1800182A8.c)
 *     sub_18001874C @ 0x18001874C (sub_18001874C.c)
 *     sub_180018808 @ 0x180018808 (sub_180018808.c)
 *     sub_18001892C @ 0x18001892C (sub_18001892C.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_1800203B0 @ 0x1800203B0 (sub_1800203B0.c)
 *     sub_180029C10 @ 0x180029C10 (sub_180029C10.c)
 *     sub_18003412C @ 0x18003412C (sub_18003412C.c)
 *     sub_180034494 @ 0x180034494 (sub_180034494.c)
 *     sub_180036258 @ 0x180036258 (sub_180036258.c)
 *     sub_18003696C @ 0x18003696C (sub_18003696C.c)
 *     sub_18006095C @ 0x18006095C (sub_18006095C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_180016344(__int64 *a1, __int64 a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  char v9; // r12
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // r8
  int v17; // r9d
  int v18; // r10d
  __int64 v19; // rax
  char v20; // di
  __int64 v21; // rax
  _QWORD *v22; // r15
  __int64 v23; // r15
  __int64 v24; // rax
  _QWORD *v25; // r15
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *result; // rax
  __int64 v32; // rdi
  void (__fastcall *v33)(__int64, _QWORD, __int64, const char *); // rbx
  __int64 v34; // rax
  char v35[8]; // [rsp+38h] [rbp-1E0h] BYREF
  __int64 v36; // [rsp+40h] [rbp-1D8h]
  _QWORD *v37; // [rsp+48h] [rbp-1D0h]
  _QWORD *v38; // [rsp+50h] [rbp-1C8h]
  _OWORD v39[2]; // [rsp+60h] [rbp-1B8h] BYREF
  _OWORD v40[2]; // [rsp+80h] [rbp-198h] BYREF
  __int64 *v41; // [rsp+A0h] [rbp-178h]
  _QWORD *v42; // [rsp+A8h] [rbp-170h]
  _QWORD *v43; // [rsp+B0h] [rbp-168h]
  Spectre::Utils::SpectreException *v44; // [rsp+B8h] [rbp-160h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-158h] BYREF
  __int64 v46; // [rsp+D0h] [rbp-148h] BYREF
  char v47[8]; // [rsp+E0h] [rbp-138h] BYREF
  __int64 v48; // [rsp+E8h] [rbp-130h]
  char v49[96]; // [rsp+F0h] [rbp-128h] BYREF
  char v50[96]; // [rsp+150h] [rbp-C8h] BYREF
  _OWORD v51[2]; // [rsp+1B0h] [rbp-68h] BYREF

  v41 = a1;
  v42 = a3;
  v43 = a4;
  v37 = a5;
  v38 = a5;
  v9 = 1;
  if ( !*a3 )
  {
    v10 = (__int64 *)sub_1800203B0(v35);
    v11 = *v10;
    v12 = v10[1];
    *v10 = 0LL;
    v10[1] = 0LL;
    *a3 = v11;
    v13 = a3[1];
    a3[1] = v12;
    if ( v13 )
      sub_180010EC8(v13);
    if ( v36 )
      sub_180010EC8(v36);
  }
  v14 = sub_18001C514(1632LL);
  try
  {
    if ( v14 )
    {
      sub_180012C40(&v45, a5);
      sub_180012C40(&v46, a4);
      v15 = (unsigned int)sub_180012C40(v40, a3);
      v19 = sub_18006095C(v18, *(_DWORD *)(a2 + 20), v15, v17, v16);
    }
    else
    {
      v19 = 0LL;
    }
    *a1 = v19;
    v20 = 1;
    v21 = sub_18003412C(v19, v51);
    sub_18001874C(&unk_1801C8FA8, v21);
    sub_1800129D0((__int64)v51);
    v22 = (_QWORD *)*a1;
    *((_OWORD *)v22 + 33) = *(_OWORD *)a2;
    *((_OWORD *)v22 + 34) = *(_OWORD *)(a2 + 16);
    v22[70] = *(_QWORD *)(a2 + 32);
    sub_180018808(v22 + 71, a2 + 40);
    *(_OWORD *)(v22 + 83) = *(_OWORD *)(a2 + 136);
    *(_OWORD *)(v22 + 85) = *(_OWORD *)(a2 + 152);
    v23 = *a1;
    v39[0] = *(_OWORD *)(a2 + 136);
    v51[0] = *(_OWORD *)(a2 + 152);
    v24 = sub_1800182A8(v49, a2 + 40);
    v39[1] = v51[0];
    sub_1800168F8(v23, v47, v24, v39);
    v25 = (_QWORD *)*a1;
    sub_180029C10(*a1 + 8, v51);
    v25[114] = *(_QWORD *)a2;
    v25[115] = *(_QWORD *)(a2 + 8);
    (*(void (__fastcall **)(_QWORD *, __int64))(*v25 + 88LL))(v25, a2);
    sub_180011E54((__int64)v51);
    if ( (unsigned __int8)sub_18001892C(
                            &Spectre::Engine::D3D11::RenderDeviceD3D11 `RTTI Type Descriptor',
                            &Spectre::Engine::RenderDeviceGeneric `RTTI Type Descriptor') )
    {
      v26 = *a1;
      v51[0] = *(_OWORD *)(a2 + 136);
      v39[0] = *(_OWORD *)(a2 + 152);
      v27 = sub_1800182A8(v50, a2 + 40);
      v40[0] = v51[0];
      v40[1] = v39[0];
      sub_1800167D4(v26, v51, v27, v40);
      if ( *((_QWORD *)&v51[0] + 1) )
        sub_180010EC8(*((__int64 *)&v51[0] + 1));
    }
    sub_180036258(*a1);
    if ( !*(_BYTE *)(a2 + 28) || (v20 = 3, !*(_QWORD *)sub_180034494(*a1, v51)) )
      v9 = 0;
    if ( (v20 & 2) != 0 && *((_QWORD *)&v51[0] + 1) )
      sub_180010EC8(*((__int64 *)&v51[0] + 1));
    if ( v9 )
      sub_18003696C(*a1);
    if ( v48 )
      sub_180010EC8(v48);
    v28 = a3[1];
    if ( v28 )
      sub_180010EC8(v28);
    v29 = a4[1];
    if ( v29 )
      sub_180010EC8(v29);
    v30 = v37[1];
    if ( v30 )
      sub_180010EC8(v30);
    result = a1;
  }
  catch ( Spectre::Utils::SpectreException *v44 )
  {
    if ( *v38 )
    {
      v32 = *v38;
      v33 = *(void (__fastcall **)(__int64, _QWORD, __int64, const char *))(*(_QWORD *)*v38 + 24LL);
      v34 = (*(__int64 (__fastcall **)(Spectre::Utils::SpectreException *))(*(_QWORD *)v44 + 8LL))(v44);
      v33(v32, 0LL, v34, "2.7.0.2");
    }
    throw;
  }
  return result;
}
