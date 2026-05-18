/*
 * XREFs of sub_18007CDA4 @ 0x18007CDA4
 * Callers:
 *     sub_18007BE98 @ 0x18007BE98 (sub_18007BE98.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001BD20 @ 0x18001BD20 (sub_18001BD20.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18007B494 @ 0x18007B494 (sub_18007B494.c)
 *     sub_18007B8E4 @ 0x18007B8E4 (sub_18007B8E4.c)
 *     sub_18007C7AC @ 0x18007C7AC (sub_18007C7AC.c)
 *     sub_18007D058 @ 0x18007D058 (sub_18007D058.c)
 *     sub_18007D08C @ 0x18007D08C (sub_18007D08C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18007CDA4(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  char v5; // r14
  int *v6; // r15
  __int64 *v7; // rax
  int v8; // ebx
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int128 v11; // xmm6
  int v12; // xmm6_4
  int v13; // xmm7_4
  int v14; // xmm8_4
  _DWORD *v15; // rax
  int v16; // xmm6_4
  int v17; // xmm7_4
  _DWORD *v18; // rax
  int v19; // xmm6_4
  int v20; // ebx
  _QWORD v22[3]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v23[3]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v24[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v25[3]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v26[4]; // [rsp+90h] [rbp-78h] BYREF
  _OWORD pExceptionObject[4]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v28[4]; // [rsp+F0h] [rbp-18h] BYREF

  v5 = 0;
  LODWORD(v22[1]) = 0;
  v6 = (int *)(a3 + 32);
  if ( *(_QWORD *)(a3 + 40) == *(_QWORD *)(a3 + 48) )
  {
    v7 = sub_18007C7AC(v24, *v6, a3);
    v8 = 2;
  }
  else
  {
    v7 = sub_18007B494(v25, (void **)(a3 + 40));
    v8 = 1;
  }
  LODWORD(v22[1]) = v8;
  sub_18007B494(v23, (void **)v7);
  if ( (v8 & 2) != 0 )
  {
    LOBYTE(v8) = v8 & 0xFD;
    sub_18001BD20((__int64)v24);
  }
  if ( (v8 & 1) != 0 )
    sub_18001BD20((__int64)v25);
  if ( *v6 )
  {
    switch ( *v6 )
    {
      case 1:
        v20 = (int)*(float *)v23[0];
        *(_DWORD *)sub_18007B8E4(a1, a2) = v20;
        break;
      case 2:
        v19 = *(_DWORD *)v23[0];
        *(_DWORD *)sub_18007B8E4(a1, a2) = v19;
        break;
      case 3:
        v16 = *(_DWORD *)v23[0];
        v17 = *(_DWORD *)(v23[0] + 4);
        v18 = (_DWORD *)sub_18007B8E4(a1, a2);
        *v18 = v16;
        v18[1] = v17;
        break;
      case 4:
        v12 = *(_DWORD *)v23[0];
        v13 = *(_DWORD *)(v23[0] + 4);
        v14 = *(_DWORD *)(v23[0] + 8);
        v15 = (_DWORD *)sub_18007B8E4(a1, a2);
        *v15 = v12;
        v15[1] = v13;
        v15[2] = v14;
        break;
      case 5:
        *(_OWORD *)&v22[1] = *(_OWORD *)v23[0];
        sub_18007D08C(a1, a2, &v22[1]);
        break;
      case 6:
        v11 = *(_OWORD *)v23[0];
        *(_OWORD *)sub_18007B8E4(a1, a2) = v11;
        break;
      case 7:
        pExceptionObject[0] = *(_OWORD *)v23[0];
        pExceptionObject[1] = *(_OWORD *)(v23[0] + 16);
        pExceptionObject[2] = *(_OWORD *)(v23[0] + 32);
        pExceptionObject[3] = *(_OWORD *)(v23[0] + 48);
        sub_18007D058(a1, a2, pExceptionObject);
        break;
      case 8:
        break;
      default:
        sub_180011CC4(v28, "ShaderPropertyLayout::AddProperties() -- unsupported property type");
        v9 = sub_180011CC4(
               v26,
               "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\sha"
               "derpropertylayout.cpp");
        sub_18003A468(pExceptionObject, (__int64)v9, v10, (__int64)v28, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  else
  {
    if ( *(float *)v23[0] != 0.0 )
      v5 = 1;
    *(_DWORD *)sub_18007B8E4(a1, a2) = -(v5 != 0);
  }
  return sub_18001BD20((__int64)v23);
}
