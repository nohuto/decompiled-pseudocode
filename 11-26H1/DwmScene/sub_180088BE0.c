/*
 * XREFs of sub_180088BE0 @ 0x180088BE0
 * Callers:
 *     sub_1800887D8 @ 0x1800887D8 (sub_1800887D8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _o_floorf @ 0x18000CE4C (_o_floorf.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001E974 @ 0x18001E974 (sub_18001E974.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_180087AAC @ 0x180087AAC (sub_180087AAC.c)
 *     sub_180087C7C @ 0x180087C7C (sub_180087C7C.c)
 *     sub_180088568 @ 0x180088568 (sub_180088568.c)
 *     sub_180089A90 @ 0x180089A90 (sub_180089A90.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180088BE0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // kr00_8
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  float v9; // xmm0_4
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 result; // rax
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 *v15; // rsi
  unsigned __int64 v16; // rcx
  __int64 v17; // rdi
  unsigned __int64 v18; // r14
  __int64 v19; // rdx
  unsigned int v20; // eax
  float *v21; // rax
  __int64 v22; // rdx
  float v23[4]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v24[4]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v25[4]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-9h] BYREF

  v5 = *(_QWORD *)(a2 + 16);
  v6 = v5 / 6;
  if ( v5 != 6 * (v5 / 6) )
  {
    sub_180011CC4(
      v25,
      "ColorTransform::ImportFormat_BinaryRGB_Base16() -- unexpected data length (not multiple of six characters)");
    v7 = sub_180011CC4(
           v24,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\colortransform.cpp");
    sub_18003A468(pExceptionObject, (__int64)v7, v8, (__int64)v25, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( (v6 & 0x8000000000000000uLL) != 0LL )
    v9 = (float)(int)((v5 / 6) & 1 | (v5 / 0xC)) + (float)(int)((v5 / 6) & 1 | (v5 / 0xC));
  else
    v9 = (float)(int)v6;
  o_cbrtf();
  o_floorf();
  v10 = 0LL;
  if ( v9 >= 9.223372e18 )
  {
    v9 = v9 - 9.223372e18;
    if ( v9 < 9.223372e18 )
      v10 = 0x8000000000000000uLL;
  }
  v11 = v10 + (unsigned int)(int)v9;
  result = v11 * v11 * v11;
  if ( result != v6 )
  {
    sub_180011CC4(v24, "ColorTransform::ImportFormat_BinaryRGB_Base16() -- unexpected data length (not a cube)");
    v13 = sub_180011CC4(
            v25,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\colortransform.cpp");
    sub_18003A468(pExceptionObject, (__int64)v13, v14, (__int64)v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_QWORD *)a3 = v11;
  v15 = (__int64 *)(a3 + 8);
  v16 = (__int64)(*(_QWORD *)(a3 + 16) - *(_QWORD *)(a3 + 8)) >> 4;
  if ( v6 >= v16 )
  {
    if ( v6 <= v16 )
      goto LABEL_18;
    if ( v6 > (__int64)(*(_QWORD *)(a3 + 24) - *(_QWORD *)(a3 + 8)) >> 4 )
    {
      result = sub_180087AAC((const void **)(a3 + 8), v5 / 6);
      goto LABEL_18;
    }
    result = sub_180087C7C(*(_QWORD *)(a3 + 16), v6 - v16, a3 + 8);
  }
  else
  {
    result = *v15 + 16 * v6;
  }
  *(_QWORD *)(a3 + 16) = result;
LABEL_18:
  v17 = 0LL;
  *(_DWORD *)(a3 + 32) = 0;
  if ( v6 )
  {
    v18 = 0LL;
    do
    {
      sub_18001E974(a2, v24, v18, 6uLL);
      v20 = sub_180089A90(v24, v19, 16LL);
      v21 = sub_180088568(v23, v20);
      v22 = *v15;
      *(float *)(v22 + v17) = *v21;
      *(float *)(v22 + v17 + 4) = v21[1];
      *(float *)(v22 + v17 + 8) = v21[2];
      *(float *)(v22 + v17 + 12) = v21[3];
      result = sub_1800129D0((__int64)v24);
      v18 += 6LL;
      v17 += 16LL;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
