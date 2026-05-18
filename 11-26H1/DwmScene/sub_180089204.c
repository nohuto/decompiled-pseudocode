/*
 * XREFs of sub_180089204 @ 0x180089204
 * Callers:
 *     sub_1800887D8 @ 0x1800887D8 (sub_1800887D8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800143C0 @ 0x1800143C0 (sub_1800143C0.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18001CFB0 @ 0x18001CFB0 (sub_18001CFB0.c)
 *     sub_18001E844 @ 0x18001E844 (sub_18001E844.c)
 *     sub_18001E8A8 @ 0x18001E8A8 (sub_18001E8A8.c)
 *     sub_18001E974 @ 0x18001E974 (sub_18001E974.c)
 *     sub_18001FB68 @ 0x18001FB68 (sub_18001FB68.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004F428 @ 0x18004F428 (sub_18004F428.c)
 *     sub_1800878C0 @ 0x1800878C0 (sub_1800878C0.c)
 *     sub_180087AAC @ 0x180087AAC (sub_180087AAC.c)
 *     sub_180087BB0 @ 0x180087BB0 (sub_180087BB0.c)
 *     sub_180087C7C @ 0x180087C7C (sub_180087C7C.c)
 *     sub_1800898E0 @ 0x1800898E0 (sub_1800898E0.c)
 *     sub_180089A90 @ 0x180089A90 (sub_180089A90.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180089204(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // r15
  unsigned __int64 v5; // rdi
  int v6; // ebx
  char v7; // r13
  char v8; // r12
  char v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int8 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  const void *v19; // rax
  _QWORD *v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rbx
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  _QWORD *v26; // rax
  size_t v27; // rsi
  size_t i; // rbx
  __int64 v29; // rax
  char v30; // al
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // r8
  _QWORD *v34; // rbx
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  _DWORD *v37; // rcx
  int *v38; // rdx
  int v39; // xmm1_4
  int v40; // xmm0_4
  char v42[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v43; // [rsp+34h] [rbp-CCh]
  _BYTE v44[8]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v45; // [rsp+40h] [rbp-C0h]
  __int128 v46; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+58h] [rbp-A8h]
  __int64 v48; // [rsp+60h] [rbp-A0h]
  _QWORD *v49; // [rsp+68h] [rbp-98h]
  _QWORD *v50; // [rsp+70h] [rbp-90h]
  _QWORD v51[4]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v52[16]; // [rsp+98h] [rbp-68h] BYREF
  size_t v53; // [rsp+A8h] [rbp-58h]
  _QWORD v54[4]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v55[4]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v56[4]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v57[4]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+138h] [rbp+38h] BYREF

  v3 = (_QWORD *)a3;
  v49 = (_QWORD *)a3;
  v48 = a2;
  v4 = 0LL;
  v5 = 0LL;
  LOBYTE(v6) = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  *(_DWORD *)(a3 + 32) = 0;
  v46 = 0LL;
  v47 = 0LL;
  sub_180011CC4(v55, "<size>");
  sub_180011CC4(v57, "<data>");
  sub_180011CC4(v56, "</data>");
  sub_1800143C0((__int64)v52);
  v10 = sub_18004F428(v48, (__int64)v52);
  if ( !(unsigned __int8)std::ios_base::operator bool(v10 + *(int *)(*(_QWORD *)v10 + 4LL)) )
    goto LABEL_39;
  do
  {
    if ( v53 )
    {
      if ( v9 )
        goto LABEL_25;
      v11 = sub_1800148EC((__int64)v52);
      if ( *(_BYTE *)(v11 + v12 - 1) == 13 )
        sub_18001FB68((__int64)v52, v12 - 1);
      v13 = (unsigned __int8 *)sub_1800148EC((__int64)v52);
      v17 = sub_180087BB0(v13, v14, v15, v16, 2LL);
      sub_18001E8A8((__int64)v52, v18, v17);
      v19 = (const void *)sub_1800148EC((__int64)v52);
      v6 = (unsigned __int8)v6;
      if ( sub_18001CFB0(v19, v53, "<LUT>", 5LL) )
        v6 = 1;
      v43 = v6;
      if ( (_BYTE)v6 )
      {
        v50 = v54;
        v20 = sub_1800181BC(v54, (__int64)v55);
        v21 = sub_1800181BC(v51, (__int64)v52);
        if ( (unsigned __int8)sub_1800898E0(v21, v20) )
        {
          sub_18001E974((__int64)v52, pExceptionObject, v55[2] + 1LL, 0xFFFFFFFFFFFFFFFFuLL);
          v4 = (int)sub_180089A90(pExceptionObject, v22, 10LL);
          v5 = v4 * v4 * v4;
          v7 = 1;
          sub_1800129D0((__int64)pExceptionObject);
        }
      }
      if ( v7
        && (v45 = v51,
            v23 = sub_1800181BC(v51, (__int64)v57),
            v24 = sub_1800181BC(v54, (__int64)v52),
            (unsigned __int8)sub_1800898E0(v24, v23)) )
      {
        v8 = 1;
      }
      else if ( v8 )
      {
        v45 = v51;
        v25 = sub_1800181BC(v51, (__int64)v56);
        v26 = sub_1800181BC(v54, (__int64)v52);
        if ( (unsigned __int8)sub_1800898E0(v26, v25) )
        {
          v9 = 1;
        }
        else
        {
          v27 = v53 >> 1;
          for ( i = 0LL; i < v27; ++i )
          {
            v29 = sub_1800148EC((__int64)v52);
            v44[0] = *(_BYTE *)(v29 + 2 * i);
            v44[1] = *(_BYTE *)(v29 + 2 * i + 1);
            v44[2] = 0;
            v30 = o_strtoul(v44, 0LL, 16LL);
            v42[0] = v30;
            if ( *((_QWORD *)&v46 + 1) == v47 )
            {
              sub_1800878C0(&v46, *((__int64 *)&v46 + 1), v42);
            }
            else
            {
              **((_BYTE **)&v46 + 1) = v30;
              ++*((_QWORD *)&v46 + 1);
            }
          }
        }
      }
      LOBYTE(v6) = v43;
    }
    v31 = sub_18004F428(v48, (__int64)v52);
  }
  while ( (unsigned __int8)std::ios_base::operator bool(v31 + *(int *)(*(_QWORD *)v31 + 4LL)) );
  if ( !v9 )
  {
    v3 = v49;
    goto LABEL_39;
  }
LABEL_25:
  if ( *((_QWORD *)&v46 + 1) - (_QWORD)v46 != 12 * v5 )
  {
    sub_180011CC4(v54, "ColorTransform::ImportFormat_IridasLook() -- unexpected data layout in LOOK file");
    v32 = sub_180011CC4(
            v51,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\colortransform.cpp");
    sub_18003A468(pExceptionObject, (__int64)v32, v33, (__int64)v54, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v3 = v49;
  v34 = v49 + 1;
  v35 = (__int64)(v49[2] - v49[1]) >> 4;
  if ( v5 >= v35 )
  {
    if ( v5 <= v35 )
      goto LABEL_34;
    if ( v5 > (__int64)(v49[3] - v49[1]) >> 4 )
    {
      sub_180087AAC((const void **)v49 + 1, v5);
      goto LABEL_34;
    }
    v36 = sub_180087C7C(v49[2], v5 - v35, (__int64)(v49 + 1));
  }
  else
  {
    v36 = *v34 + 16 * v5;
  }
  v34[1] = v36;
LABEL_34:
  if ( v5 )
  {
    v37 = (_DWORD *)*v34;
    v38 = (int *)(v46 + 4);
    do
    {
      v39 = v38[1];
      v40 = *v38;
      *v37 = *(v38 - 1);
      v37[1] = v40;
      v37[2] = v39;
      v37[3] = 1065353216;
      v38 += 3;
      v37 += 4;
      --v5;
    }
    while ( v5 );
  }
LABEL_39:
  *v3 = v4;
  sub_1800129D0((__int64)v52);
  sub_1800129D0((__int64)v56);
  sub_1800129D0((__int64)v57);
  sub_1800129D0((__int64)v55);
  return sub_18001E844((__int64)&v46);
}
