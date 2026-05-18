/*
 * XREFs of sub_1800D6984 @ 0x1800D6984
 * Callers:
 *     sub_180047120 @ 0x180047120 (sub_180047120.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18007F5A8 @ 0x18007F5A8 (sub_18007F5A8.c)
 *     sub_1800856D4 @ 0x1800856D4 (sub_1800856D4.c)
 *     sub_1800D590C @ 0x1800D590C (sub_1800D590C.c)
 *     sub_1800D5AD8 @ 0x1800D5AD8 (sub_1800D5AD8.c)
 *     sub_1800D6104 @ 0x1800D6104 (sub_1800D6104.c)
 *     sub_1800D612C @ 0x1800D612C (sub_1800D612C.c)
 *     sub_1800D62A8 @ 0x1800D62A8 (sub_1800D62A8.c)
 *     sub_1800D7628 @ 0x1800D7628 (sub_1800D7628.c)
 *     sub_1800D7840 @ 0x1800D7840 (sub_1800D7840.c)
 *     sub_1800D78F8 @ 0x1800D78F8 (sub_1800D78F8.c)
 *     sub_1800D79B0 @ 0x1800D79B0 (sub_1800D79B0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=11
__int64 *__fastcall sub_1800D6984(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3,
        unsigned int a4,
        __int64 *a5,
        unsigned int a6,
        char a7,
        unsigned int a8,
        char a9,
        __int64 a10,
        __int64 a11,
        _QWORD *a12)
{
  __int64 v12; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 *result; // rax
  __int64 v22; // rcx
  void *v23; // rdi
  _DWORD *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdi
  __int64 v27; // r14
  __int64 *v28; // r14
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // [rsp+20h] [rbp-C8h]
  __int64 v38; // [rsp+50h] [rbp-98h]
  __int128 v39; // [rsp+58h] [rbp-90h] BYREF
  char v40; // [rsp+68h] [rbp-80h]
  void *v41[2]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v42; // [rsp+80h] [rbp-68h]
  __int64 v43; // [rsp+88h] [rbp-60h]
  __int64 v44[3]; // [rsp+90h] [rbp-58h] BYREF
  _QWORD pExceptionObject[2]; // [rsp+A8h] [rbp-40h] BYREF
  const Spectre::Framework::GeometryProcessingException *v46; // [rsp+B8h] [rbp-30h] BYREF

  v12 = a4;
  if ( (unsigned __int8)sub_1800D79B0(a4, "ComputeTangents") )
  {
    v23 = (void *)o__aligned_malloc(16 * v12, 16LL);
    *(_OWORD *)v41 = 0LL;
    LOBYTE(a11) = 0;
    *(_QWORD *)&v39 = v23;
    *((_QWORD *)&v39 + 1) = &a11;
    v24 = (_DWORD *)sub_18001C514(24LL);
    if ( v24 )
    {
      v24[2] = 1;
      v24[3] = 1;
      *(_QWORD *)v24 = &std::_Ref_count_resource<Spectre::Utils::Math::Vector4 *,_lambda_dc718d396f0c2d0078465762313bdcf6_>::`vftable';
      *((_QWORD *)v24 + 2) = v23;
    }
    v41[0] = v23;
    v41[1] = v24;
    v40 = 0;
    sub_1800D6104((__int64)&v39);
    if ( !v41[0] )
    {
      pExceptionObject[1] = "bad allocation";
      pExceptionObject[0] = &stdext::bad_alloc::`vftable';
      throw (stdext::bad_alloc *)pExceptionObject;
    }
    memset(v41[0], 0, 16 * v12);
    sub_1800856D4(v44, (unsigned int)(2 * v12), v25);
    v38 = v44[0];
    a11 = v44[0] + 12 * v12;
    v26 = *a1;
    v42 = *a1;
    v27 = *a2;
    v43 = *a2;
    *(_QWORD *)&v39 = *a3;
    if ( a7 )
    {
      v28 = a5;
      if ( *a5 )
      {
        sub_1800D7840(a6, a8);
        sub_1800D5AD8(v42, v12, *a5, a6, v43, a8, a12, v38, a11);
      }
      else
      {
        sub_1800D78F8((unsigned int)v12, a8);
        sub_1800D62A8(v26, v12, v43, a8, a12, v38, a11);
      }
    }
    else
    {
      try
      {
        sub_1800D7840(a6, a8);
        v37 = v27;
        v28 = a5;
        sub_1800D590C(v42, v12, *a5, a6, v37, a8, a12, v38, a11);
      }
      catch ( Spectre::Utils::CancelledException )
      {
        throw;
      }
      catch ( const Spectre::Framework::GeometryProcessingException *v46 )
      {
        sub_1800148EC((__int64)v46 + 16);
        sub_18001DCFC(&qword_1801BD648, 3);
        v39 = 0LL;
        sub_1800D612C(a10, (__int64)&v39);
        if ( *((_QWORD *)&v39 + 1) )
          sub_180010EC8(*((__int64 *)&v39 + 1));
        goto LABEL_32;
      }
      catch ( ... )
      {
        sub_18001DCFC(&qword_1801BD648, 3);
        v39 = 0LL;
        sub_1800D612C(a10, (__int64)&v39);
        if ( *((_QWORD *)&v39 + 1) )
          sub_180010EC8(*((__int64 *)&v39 + 1));
LABEL_32:
        sub_18007F5A8((__int64)v44);
        if ( v41[1] )
          sub_180010EC8((__int64)v41[1]);
        v32 = a1[1];
        if ( v32 )
          sub_180010EC8(v32);
        v33 = a2[1];
        if ( v33 )
          sub_180010EC8(v33);
        v34 = a3[1];
        if ( v34 )
          sub_180010EC8(v34);
        result = a5;
        v35 = a5[1];
        if ( v35 )
          result = (__int64 *)sub_180010EC8(v35);
        v16 = a10;
LABEL_43:
        v36 = *(_QWORD *)(v16 + 56);
        if ( v36 )
        {
          LOBYTE(v17) = v36 != v16;
          result = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 32LL))(v36, v17);
          *(_QWORD *)(v16 + 56) = 0LL;
        }
      }
    }
    sub_1800D7628(v41[0], v12, v39, v38, a11, a9);
    v16 = a10;
    sub_1800D612C(a10, (__int64)v41);
    result = (__int64 *)sub_18007F5A8((__int64)v44);
    if ( v41[1] )
      result = (__int64 *)sub_180010EC8((__int64)v41[1]);
    v29 = a1[1];
    if ( v29 )
      result = (__int64 *)sub_180010EC8(v29);
    v30 = a2[1];
    if ( v30 )
      result = (__int64 *)sub_180010EC8(v30);
    v31 = a3[1];
    if ( v31 )
      result = (__int64 *)sub_180010EC8(v31);
    v22 = v28[1];
  }
  else
  {
    v39 = 0LL;
    v16 = a10;
    sub_1800D612C(a10, (__int64)&v39);
    if ( *((_QWORD *)&v39 + 1) )
      sub_180010EC8(*((__int64 *)&v39 + 1));
    v18 = a1[1];
    if ( v18 )
      sub_180010EC8(v18);
    v19 = a2[1];
    if ( v19 )
      sub_180010EC8(v19);
    v20 = a3[1];
    if ( v20 )
      sub_180010EC8(v20);
    result = a5;
    v22 = a5[1];
  }
  if ( v22 )
    result = (__int64 *)sub_180010EC8(v22);
  goto LABEL_43;
}
