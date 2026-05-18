/*
 * XREFs of sub_180052FF0 @ 0x180052FF0
 * Callers:
 *     sub_180052F54 @ 0x180052F54 (sub_180052F54.c)
 *     sub_180053D44 @ 0x180053D44 (sub_180053D44.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180050314 @ 0x180050314 (sub_180050314.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180052FF0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ecx
  __int64 v11; // r8
  unsigned int v12; // eax
  int v13; // r8d
  unsigned int v14; // eax
  int v15; // r8d
  unsigned int v17; // eax
  int v18; // r8d
  _QWORD v19[4]; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v20[4]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+88h] [rbp+Fh] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::TextureImageSetView::`vftable';
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  v6 = a2[2];
  a2[2] = 0LL;
  v7 = a2[1];
  a2[1] = 0LL;
  v8 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 24) = v8;
  *(_QWORD *)(a1 + 32) = v7;
  *(_QWORD *)(a1 + 40) = v6;
  *(_DWORD *)(a1 + 48) = -1;
  v9 = 0;
  v10 = 0;
  v11 = *(_QWORD *)(a1 + 32);
  while ( v8 != v11 )
  {
    if ( *(_DWORD *)(v8 + 28) == v9 )
    {
      ++v9;
    }
    else
    {
      if ( *(_DWORD *)(v8 + 28) )
      {
        sub_180011CC4(v19, "TextureImageSetView: texture image mip levels are not consecutive ascending integers");
        v14 = (unsigned int)sub_180011CC4(
                              v20,
                              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\sour"
                              "ce\\engine\\texture.cpp");
        sub_18006A84C((unsigned int)pExceptionObject, v14, v15, (unsigned int)v19, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      if ( v10 )
      {
        if ( v9 != *(_DWORD *)(a1 + 48) )
        {
          sub_180011CC4(
            v20,
            "TextureImageSetView: texture array elements must all have the same number of mip levels defined");
          v12 = (unsigned int)sub_180011CC4(
                                v19,
                                "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\so"
                                "urce\\engine\\texture.cpp");
          sub_18006A84C((unsigned int)pExceptionObject, v12, v13, (unsigned int)v20, 0);
          throw (Spectre::Engine::EngineException *)pExceptionObject;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 48) = v9;
      }
      ++v10;
      v9 = 1;
    }
    v8 += 32LL;
  }
  if ( v10 )
  {
    if ( v9 != *(_DWORD *)(a1 + 48) )
    {
      sub_180011CC4(
        v19,
        "TextureImageSetView: texture array elements must all have the same number of mip levels defined");
      v17 = (unsigned int)sub_180011CC4(
                            v20,
                            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source"
                            "\\engine\\texture.cpp");
      sub_18006A84C((unsigned int)pExceptionObject, v17, v18, (unsigned int)v19, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 48) = v9;
  }
  sub_180050314((__int64)a2);
  return a1;
}
