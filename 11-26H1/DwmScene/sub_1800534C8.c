/*
 * XREFs of sub_1800534C8 @ 0x1800534C8
 * Callers:
 *     sub_180027D80 @ 0x180027D80 (sub_180027D80.c)
 *     sub_1800281D0 @ 0x1800281D0 (sub_1800281D0.c)
 *     sub_1800537DC @ 0x1800537DC (sub_1800537DC.c)
 *     sub_18006AD9C @ 0x18006AD9C (sub_18006AD9C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180052904 @ 0x180052904 (sub_180052904.c)
 *     sub_180052CEC @ 0x180052CEC (sub_180052CEC.c)
 *     sub_1800531F0 @ 0x1800531F0 (sub_1800531F0.c)
 *     sub_1800536E8 @ 0x1800536E8 (sub_1800536E8.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800534C8(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  _DWORD **v5; // rbx
  _DWORD *v6; // rbx
  unsigned int v7; // eax
  int v8; // r8d
  int v9; // r9d
  void **v10; // r13
  _DWORD *v11; // rcx
  unsigned int v12; // eax
  int v13; // r8d
  __int64 v14; // r12
  __int64 v15; // r15
  __int64 result; // rax
  __int64 *v17; // rax
  int v18; // xmm0_4
  __int64 v19; // rcx
  void *v20[2]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v21[4]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v22[4]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-19h] BYREF

  v20[1] = a2;
  v4 = *a2;
  v5 = *(_DWORD ***)(v4 + 112);
  if ( v5 )
    v6 = *v5;
  else
    v6 = 0LL;
  if ( !v6 )
  {
    sub_180011CC4(v22, "Attaching an uninitialized device texture.");
    v7 = (unsigned int)sub_180011CC4(
                         v21,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\texture.cpp");
    sub_18006A84C((unsigned int)pExceptionObject, v7, v8, (unsigned int)v22, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v9 = *(_DWORD *)(v4 + 88);
  LODWORD(v20[0]) = 1;
  if ( !*(_QWORD *)(a1 + 120) || *(_DWORD *)(a1 + 120) == 1 && *(_DWORD *)(**(_QWORD **)(a1 + 112) + 32LL) == v9 )
  {
    v10 = (void **)(a1 + 128);
  }
  else
  {
    LOBYTE(v20[0]) = 0;
    v10 = (void **)(a1 + 128);
    v11 = *(_DWORD **)(a1 + 128);
    if ( v11 != v6
      && (*v11 != *v6
       || v11[1] != v6[1]
       || v11[2] != v6[2]
       || v11[3] != v6[3]
       || v11[4] != v6[4]
       || v11[5] != v6[5]
       || v11[6] != v6[6])
      || (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)(v4 + 152), (__m128)*(unsigned __int64 *)(a1 + 144))) & 3) != 3 )
    {
      sub_180011CC4(v21, "Attaching a texture buffer to an incompatible texture");
      v12 = (unsigned int)sub_180011CC4(
                            v22,
                            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source"
                            "\\engine\\texture.cpp");
      sub_18006A84C((unsigned int)pExceptionObject, v12, v13, (unsigned int)v21, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
  }
  v14 = a1;
  v15 = v4;
  v21[0] = v4;
  v21[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  result = sub_1800536E8(a1, v21);
  if ( LOBYTE(v20[0]) )
  {
    v17 = sub_180052CEC((__int64 *)v20, (__int64)v6);
    sub_180052904(v10, (void **)v17);
    sub_1800531F0(v20);
    v18 = *(_DWORD *)(v15 + 156);
    result = *(unsigned int *)(v15 + 152);
    *(_DWORD *)(v14 + 144) = result;
    *(_DWORD *)(v14 + 148) = v18;
  }
  v19 = a2[1];
  if ( v19 )
    return sub_180010EC8(v19);
  return result;
}
