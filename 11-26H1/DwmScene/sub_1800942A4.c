/*
 * XREFs of sub_1800942A4 @ 0x1800942A4
 * Callers:
 *     sub_1800948B0 @ 0x1800948B0 (sub_1800948B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18001205C @ 0x18001205C (sub_18001205C.c)
 *     sub_180013494 @ 0x180013494 (sub_180013494.c)
 *     sub_18002901C @ 0x18002901C (sub_18002901C.c)
 *     sub_1800938B8 @ 0x1800938B8 (sub_1800938B8.c)
 *     sub_180093978 @ 0x180093978 (sub_180093978.c)
 *     sub_180093CEC @ 0x180093CEC (sub_180093CEC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800942A4(__int64 a1, __int64 a2, __int64 a3, float a4, float a5)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r14
  float v11; // xmm7_4
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __int64 (__fastcall *v15)(); // rax
  int v16; // esi
  __int64 v17; // rdi
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float *v22; // rax
  __int64 v23; // r10
  __int64 v24; // rcx
  float *v25; // rax
  float v26; // xmm1_4
  float v27; // xmm0_4
  __int64 v28; // r10
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v32[2]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v33[56]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+70h] [rbp-98h]
  _DWORD v35[32]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v36[64]; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD v37[64]; // [rsp+1F8h] [rbp+F0h] BYREF
  _BYTE v38[4]; // [rsp+2F8h] [rbp+1F0h] BYREF
  char v39; // [rsp+2FCh] [rbp+1F4h] BYREF

  v8 = *(int *)(a1 + 372);
  v9 = *(_DWORD *)(a1 + 372) / 2;
  v10 = 16LL;
  sub_18002901C((__int64)v36, 16LL, 16LL, (__int64 (__fastcall *)(__int64))unknown_libname_8);
  sub_18002901C((__int64)v37, 16LL, 16LL, (__int64 (__fastcall *)(__int64))unknown_libname_8);
  v11 = (float)(int)v8;
  memset(v35, 0, sizeof(v35));
  v34 = 0LL;
  v12 = *(_DWORD *)(a1 + 368);
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
          goto LABEL_10;
        v15 = sub_1800945E0;
      }
      else
      {
        v15 = sub_180094610;
      }
    }
    else
    {
      v15 = sub_180094690;
    }
  }
  else
  {
    v15 = sub_180094670;
  }
  v32[0] = (__int64)v15;
  sub_1800938B8((__int64)v33, v32);
LABEL_10:
  if ( *(_DWORD *)(a1 + 368) )
  {
    v16 = 0;
    if ( (int)v8 > 0 )
    {
      v10 = v8;
      v17 = 0LL;
      v18 = 1.0;
      v19 = v11 + 1.0;
      do
      {
        v20 = 1.0;
        v21 = -1.0;
        LODWORD(v32[0]) = sub_18001205C(
                            (float)((float)((float)((float)v16 + 1.0) / v19) + (float)((float)((float)v16 + 1.0) / v19))
                          - 1.0,
                            -1.0,
                            1.0);
        if ( !v34 )
        {
          std::_Xbad_function_call();
          __debugbreak();
          goto LABEL_24;
        }
        *(float *)&v35[v17] = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v34 + 16LL))(v34, v32);
        ++v16;
        ++v17;
      }
      while ( v17 < v10 );
      v10 = 16LL;
    }
  }
  else
  {
    LODWORD(v32[0]) = 0;
    sub_180093978(v35, (unsigned __int64)v36, v32);
    v35[v9] = 1065353216;
  }
  v18 = 0.0;
  v22 = (float *)v35;
  do
    v18 = v18 + *v22++;
  while ( v22 != (float *)v36 );
  sub_18002901C((__int64)v38, 16LL, 16LL, (__int64 (__fastcall *)(__int64))unknown_libname_8);
  v23 = v9;
  if ( (int)v9 > 0 )
  {
    v24 = 0LL;
    v25 = (float *)&v39;
    LODWORD(v9) = -(int)v9;
    do
    {
      v21 = *(float *)&v35[2 * v24 + 1];
      v20 = v21 + *(float *)&v35[2 * v24];
      if ( v20 == 0.0 )
        v26 = 0.5;
      else
LABEL_24:
        v26 = v21 / v20;
      v27 = (float)(int)v9 + v26;
      *(v25 - 1) = v27;
      *v25 = v27;
      v25[2] = v20;
      LODWORD(v9) = v9 + 2;
      ++v24;
      v25 = (float *)((char *)v25 + v10);
    }
    while ( v24 < v23 );
  }
  sub_180093CEC((__int64)v36, (__int64)v38);
  sub_180093CEC((__int64)v37, (__int64)v38);
  if ( v28 > 0 )
  {
    v29 = 0LL;
    do
    {
      *(float *)((char *)v36 + v29) = *(float *)((char *)v36 + v29) / a4;
      *(_DWORD *)((char *)&v36[1] + v29) = 0;
      *(float *)((char *)&v36[3] + v29) = *(float *)((char *)&v36[3] + v29) / v18;
      *(_DWORD *)((char *)v37 + v29) = 0;
      *(float *)((char *)&v37[1] + v29) = *(float *)((char *)&v37[1] + v29) / a5;
      *(float *)((char *)&v37[3] + v29) = *(float *)((char *)&v37[3] + v29) / v18;
      v29 += v10;
      --v28;
    }
    while ( v28 );
  }
  sub_180093CEC(a2, (__int64)v36);
  sub_180093CEC(a3, (__int64)v37);
  return sub_180013494((__int64)v33, v30);
}
