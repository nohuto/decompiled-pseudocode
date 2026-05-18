/*
 * XREFs of sub_18004A3AC @ 0x18004A3AC
 * Callers:
 *     sub_18007A6E0 @ 0x18007A6E0 (sub_18007A6E0.c)
 *     sub_180093040 @ 0x180093040 (sub_180093040.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18004B71C @ 0x18004B71C (sub_18004B71C.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

_QWORD *__fastcall sub_18004A3AC(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  _QWORD *v4; // rcx
  unsigned int v5; // eax
  int v6; // r8d
  __int64 v7; // rax
  _QWORD v9[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  v4 = (_QWORD *)(a1 + 104);
  if ( a3 >= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(v4[1] - *v4) >> 3) )
  {
    sub_180011CC4(v10, "Out of range");
    v5 = (unsigned int)sub_180011CC4(
                         v9,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\meshinstance.cpp");
    sub_18006A84C((unsigned int)pExceptionObject, v5, v6, (unsigned int)v10, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v7 = sub_18004B71C(v4, a3);
  sub_180012C40(a2, (_QWORD *)(v7 + 24));
  return a2;
}
