/*
 * XREFs of sub_1800C7F00 @ 0x1800C7F00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 *     sub_1800820A4 @ 0x1800820A4 (sub_1800820A4.c)
 *     sub_1800C5C14 @ 0x1800C5C14 (sub_1800C5C14.c)
 *     sub_1800C8CD8 @ 0x1800C8CD8 (sub_1800C8CD8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C7F00(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 *v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rbx
  __int64 result; // rax
  __int64 v14; // [rsp+30h] [rbp-69h] BYREF
  __int64 v15; // [rsp+38h] [rbp-61h] BYREF
  __int64 v16; // [rsp+40h] [rbp-59h] BYREF
  __int64 v17; // [rsp+48h] [rbp-51h]
  _QWORD v18[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v19[4]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-9h] BYREF

  _InterlockedIncrement64((volatile signed __int64 *)&unk_1801C8630 + 20 * *(int *)(*a2 + 48));
  sub_1800820A4(*a2, &v16, *(_DWORD *)(a1 + 88));
  if ( *(_DWORD *)(*a2 + 44) == 8 )
  {
    v10 = sub_1800C5C14(v16, &v14);
    v11 = &v14;
  }
  else
  {
    if ( *(_DWORD *)(*a2 + 44) != 11 )
    {
      sub_180011CC4(v19, "Invalid buffer type");
      v8 = sub_180011CC4(
             v18,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
      sub_18006A84C(pExceptionObject, (__int64)v8, v9, (__int64)v19, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    v10 = sub_1800C5C14(v16, &v15);
    v11 = &v15;
  }
  v12 = *v10;
  sub_18000F938(v11);
  result = sub_1800C8CD8(a1, v12, a3, a4);
  if ( v17 )
    return sub_180010EC8(v17);
  return result;
}
