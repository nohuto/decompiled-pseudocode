/*
 * XREFs of sub_1800D6DF0 @ 0x1800D6DF0
 * Callers:
 *     sub_180046DDC @ 0x180046DDC (sub_180046DDC.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18007F5A8 @ 0x18007F5A8 (sub_18007F5A8.c)
 *     sub_1800856D4 @ 0x1800856D4 (sub_1800856D4.c)
 *     sub_1800D5CA0 @ 0x1800D5CA0 (sub_1800D5CA0.c)
 *     sub_1800D5EAC @ 0x1800D5EAC (sub_1800D5EAC.c)
 *     sub_1800D6104 @ 0x1800D6104 (sub_1800D6104.c)
 *     sub_1800D616C @ 0x1800D616C (sub_1800D616C.c)
 *     sub_1800D63B8 @ 0x1800D63B8 (sub_1800D63B8.c)
 *     sub_1800D7628 @ 0x1800D7628 (sub_1800D7628.c)
 *     sub_1800D7840 @ 0x1800D7840 (sub_1800D7840.c)
 *     sub_1800D78F8 @ 0x1800D78F8 (sub_1800D78F8.c)
 *     sub_1800D79B0 @ 0x1800D79B0 (sub_1800D79B0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=15
__int64 sub_1800D6DF0(
        __int64 *a1,
        __int64 *a2,
        unsigned int a3,
        __int64 *a4,
        unsigned int a5,
        char a6,
        unsigned int a7,
        char a8,
        __int64 a9,
        ...)
{
  __int64 v10; // rsi
  __int64 v13; // rdi
  __int64 result; // rax
  __int64 v15; // rdx
  void *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  void *v20; // r15
  _DWORD *v21; // rax
  __int64 v22; // r8
  void *v23; // r15
  _DWORD *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  size_t Size[2]; // [rsp+50h] [rbp-E8h] BYREF
  void *v32[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+70h] [rbp-C8h]
  size_t v34[2]; // [rsp+78h] [rbp-C0h] BYREF
  char v35; // [rsp+88h] [rbp-B0h]
  void *v36[2]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v37[3]; // [rsp+A0h] [rbp-98h] BYREF
  _QWORD pExceptionObject[2]; // [rsp+B8h] [rbp-80h] BYREF
  _QWORD v39[2]; // [rsp+C8h] [rbp-70h] BYREF
  _QWORD v40[2]; // [rsp+D8h] [rbp-60h] BYREF
  char v41; // [rsp+E8h] [rbp-50h]
  const Spectre::Framework::GeometryProcessingException *v42; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v46; // [rsp+188h] [rbp+50h] BYREF
  va_list va; // [rsp+188h] [rbp+50h]
  _QWORD *v48; // [rsp+190h] [rbp+58h]
  va_list va1; // [rsp+198h] [rbp+60h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v46 = va_arg(va1, _QWORD);
  v48 = va_arg(va1, _QWORD *);
  v10 = a3;
  if ( (unsigned __int8)sub_1800D79B0(a3, "ComputeTangentsAndNormals") )
  {
    Size[0] = 16 * v10;
    v20 = (void *)o__aligned_malloc(16 * v10, 16LL);
    *(_OWORD *)v36 = 0LL;
    LOBYTE(v46) = 0;
    v34[0] = (size_t)v20;
    va_copy((va_list)&v34[1], va);
    v21 = (_DWORD *)sub_18001C514(24LL);
    if ( v21 )
    {
      v21[2] = 1;
      v21[3] = 1;
      *(_QWORD *)v21 = &std::_Ref_count_resource<Spectre::Utils::Math::Vector4 *,_lambda_96ffd31a4081c2af17eae963fb5dd7cc_>::`vftable';
      *((_QWORD *)v21 + 2) = v20;
    }
    else
    {
      v21 = 0LL;
    }
    v36[0] = v20;
    v36[1] = v21;
    v35 = 0;
    sub_1800D6104((__int64)v34);
    if ( !v36[0] )
    {
      pExceptionObject[1] = "bad allocation";
      pExceptionObject[0] = &stdext::bad_alloc::`vftable';
      throw (stdext::bad_alloc *)pExceptionObject;
    }
    memset(v36[0], 0, Size[0]);
    sub_1800856D4(v37, (unsigned int)(2 * v10), v22);
    Size[0] = v37[0];
    v34[0] = 12 * v10;
    v33 = 12 * v10 + v37[0];
    v23 = (void *)o__aligned_malloc(12 * v10, 16LL);
    *(_OWORD *)v32 = 0LL;
    LOBYTE(v46) = 0;
    v40[0] = v23;
    va_copy((va_list)&v40[1], va);
    v24 = (_DWORD *)sub_18001C514(24LL);
    if ( v24 )
    {
      v24[2] = 1;
      v24[3] = 1;
      *(_QWORD *)v24 = &std::_Ref_count_resource<Spectre::Utils::Math::Vector3 *,_lambda_fdb7222a856e1b31897eb021985012a7_>::`vftable';
      *((_QWORD *)v24 + 2) = v23;
    }
    else
    {
      v24 = 0LL;
    }
    v32[0] = v23;
    v32[1] = v24;
    v41 = 0;
    sub_1800D6104((__int64)v40);
    if ( !v23 )
    {
      v39[1] = "bad allocation";
      v39[0] = &stdext::bad_alloc::`vftable';
      throw (stdext::bad_alloc *)v39;
    }
    memset(v23, 0, v34[0]);
    v25 = *a1;
    v26 = *a2;
    try
    {
      if ( a6 )
      {
        if ( *a4 )
        {
          sub_1800D7840(a5, a7);
          sub_1800D5EAC(v25, v10, *a4, a5, v26, a7, v48, (__int64)v32[0], Size[0], v33);
        }
        else
        {
          sub_1800D78F8((unsigned int)v10, a7);
          sub_1800D63B8(v25, v10, v26, a7, v48, (__int64)v32[0], Size[0], v33);
        }
      }
      else
      {
        sub_1800D7840(a5, a7);
        sub_1800D5CA0(v25, v10, *a4, a5, v26, a7, v48, (__int64)v32[0], Size[0], v33);
      }
    }
    catch ( Spectre::Utils::CancelledException )
    {
      throw;
    }
    catch ( const Spectre::Framework::GeometryProcessingException *v42 )
    {
      sub_1800148EC((__int64)v42 + 16);
      sub_18001DCFC(&qword_1801BD648, 3);
      *(_OWORD *)Size = 0LL;
      *(_OWORD *)v34 = 0LL;
      sub_1800D616C(a9, (__int64)v34, (__int64)Size);
      if ( v34[1] )
        sub_180010EC8(v34[1]);
      if ( Size[1] )
        sub_180010EC8(Size[1]);
      goto LABEL_33;
    }
    catch ( ... )
    {
      sub_18001DCFC(&qword_1801BD648, 3);
      *(_OWORD *)Size = 0LL;
      *(_OWORD *)v34 = 0LL;
      sub_1800D616C(a9, (__int64)v34, (__int64)Size);
      if ( v34[1] )
        sub_180010EC8(v34[1]);
      if ( Size[1] )
        sub_180010EC8(Size[1]);
LABEL_33:
      if ( v32[1] )
        sub_180010EC8((__int64)v32[1]);
      sub_18007F5A8((__int64)v37);
      if ( v36[1] )
        sub_180010EC8((__int64)v36[1]);
      v27 = a1[1];
      if ( v27 )
        sub_180010EC8(v27);
      v28 = a2[1];
      if ( v28 )
        sub_180010EC8(v28);
      result = (__int64)a4;
      v29 = a4[1];
      if ( v29 )
        result = sub_180010EC8(v29);
      v13 = a9;
LABEL_44:
      v30 = *(_QWORD *)(v13 + 56);
      if ( v30 )
      {
        LOBYTE(v15) = v30 != v13;
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 32LL))(v30, v15);
        *(_QWORD *)(v13 + 56) = 0LL;
      }
    }
    sub_1800D7628(v36[0], v10, v32[0], Size[0], v33, a8);
    v13 = a9;
    sub_1800D616C(a9, (__int64)v36, (__int64)v32);
    if ( v32[1] )
      sub_180010EC8((__int64)v32[1]);
    result = sub_18007F5A8((__int64)v37);
    v16 = v36[1];
  }
  else
  {
    *(_OWORD *)Size = 0LL;
    *(_OWORD *)v34 = 0LL;
    v13 = a9;
    result = sub_1800D616C(a9, (__int64)v34, (__int64)Size);
    if ( v34[1] )
      result = sub_180010EC8(v34[1]);
    v16 = (void *)Size[1];
  }
  if ( v16 )
    result = sub_180010EC8((__int64)v16);
  v17 = a1[1];
  if ( v17 )
    result = sub_180010EC8(v17);
  v18 = a2[1];
  if ( v18 )
    result = sub_180010EC8(v18);
  v19 = a4[1];
  if ( v19 )
    result = sub_180010EC8(v19);
  goto LABEL_44;
}
