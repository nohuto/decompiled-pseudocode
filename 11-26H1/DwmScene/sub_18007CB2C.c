/*
 * XREFs of sub_18007CB2C @ 0x18007CB2C
 * Callers:
 *     sub_18007C50C @ 0x18007C50C (sub_18007C50C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C968 @ 0x18001C968 (sub_18001C968.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18007B398 @ 0x18007B398 (sub_18007B398.c)
 *     sub_18007CA38 @ 0x18007CA38 (sub_18007CA38.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18007CB2C(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // r13
  int v15; // ecx
  int v16; // eax
  int v17; // edi
  int v18; // esi
  __int64 *v19; // rax
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // r8
  __int64 *v23; // rax
  __int64 v24; // rbx
  _QWORD *v25; // rax
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v29; // [rsp+40h] [rbp-C0h]
  __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v31[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v32[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 pExceptionObject[7]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v35[7]; // [rsp+D8h] [rbp-28h] BYREF

  v2 = a2;
  v31[1] = (__int64)a2;
  if ( *(_DWORD *)(a1 + 1168) != 1 )
  {
    sub_180011CC4(
      v32,
      "ShaderPropertyLayout::SetMasterLayout() -- layout declaration must be complete before another layout can be connec"
      "ted as a master.");
    v4 = sub_180011CC4(
           v33,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_18003A468(pExceptionObject, (__int64)v4, v5, (__int64)v32, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_180013540((__int64 *)(a1 + 1176), a2);
  v6 = a1 + 1192;
  v7 = *(_QWORD *)(a1 + 1192);
  if ( v7 != *(_QWORD *)(a1 + 1200) )
    *(_QWORD *)(a1 + 1200) = v7;
  v8 = a1 + 1216;
  v9 = *(_QWORD *)(a1 + 1216);
  if ( v9 != *(_QWORD *)(a1 + 1224) )
    *(_QWORD *)(a1 + 1224) = v9;
  v10 = *(_QWORD *)(a1 + 56);
  result = *(_QWORD *)(a1 + 64);
  v29 = result;
  while ( v10 != result )
  {
    if ( *(_DWORD *)(v10 + 48) )
    {
      v12 = *(unsigned __int16 *)(*v2 + 2LL * *(unsigned __int16 *)(v10 + 32) + 128);
      if ( (_WORD)v12 == 0xFFFF )
      {
        v23 = sub_18001C968(
                pExceptionObject,
                (__int64)"ShaderPropertyLayout::SetMasterLayout() -- master layout does not have the property '",
                v10);
        v24 = sub_18001C87C((__int64)v33, (__int64)v23, (__int64)"' required for import by this layout");
        v25 = sub_180011CC4(
                v32,
                "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\sh"
                "aderpropertylayout.cpp");
        sub_18003A468(v35, (__int64)v25, v26, v24, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)v35;
      }
      v13 = 56 * v12;
      v14 = *(_QWORD *)(*v2 + 56LL);
      v15 = *(_DWORD *)(v10 + 36);
      if ( v15 != *(_DWORD *)(v13 + v14 + 36) )
      {
        v19 = sub_18001C968(
                v33,
                (__int64)"ShaderPropertyLayout::SetMasterLayout() -- master layout has different type for property '",
                v10);
        v20 = sub_18001C87C((__int64)pExceptionObject, (__int64)v19, (__int64)"' imported by this layout");
        v21 = sub_180011CC4(
                v32,
                "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\sh"
                "aderpropertylayout.cpp");
        sub_18003A468(v35, (__int64)v21, v22, v20, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)v35;
      }
      if ( v15 == 8 )
      {
        LODWORD(v30) = *(_DWORD *)(v13 + v14 + 40);
        HIDWORD(v30) = *(_DWORD *)(v10 + 40);
        sub_18007B398(v8, &v30);
      }
      else
      {
        v16 = sub_18007CA38(v15);
        v17 = 0;
        if ( v16 > 0 )
        {
          v18 = v16;
          do
          {
            LODWORD(v31[0]) = v17 + *(_DWORD *)(v13 + v14 + 40);
            HIDWORD(v31[0]) = v17 + *(_DWORD *)(v10 + 40);
            sub_18007B398(v6, v31);
            ++v17;
          }
          while ( v17 < v18 );
          v2 = a2;
        }
      }
      result = v29;
    }
    v10 += 56LL;
  }
  v27 = v2[1];
  if ( v27 )
    return sub_180010EC8(v27);
  return result;
}
