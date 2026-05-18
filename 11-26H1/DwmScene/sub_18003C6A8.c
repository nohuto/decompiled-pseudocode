/*
 * XREFs of sub_18003C6A8 @ 0x18003C6A8
 * Callers:
 *     sub_18001552C @ 0x18001552C (sub_18001552C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180032460 @ 0x180032460 (sub_180032460.c)
 *     unknown_libname_7 @ 0x18003A064 (unknown_libname_7.c)
 *     sub_18003D758 @ 0x18003D758 (sub_18003D758.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003C6A8(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rdx
  __int64 *v5; // r8
  __int64 *v6; // rcx
  unsigned int v7; // eax
  int v8; // r8d
  __int64 result; // rax
  __int64 v10; // rcx
  _QWORD v11[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v12[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  sub_18003D758();
  v4 = *(__int64 **)(a1 + 384);
  v5 = *(__int64 **)(a1 + 376);
  if ( v5 == v4 )
  {
LABEL_4:
    sub_180011CC4(v12, "Attempt to remove component that has not been added to scene node.");
    v7 = (unsigned int)sub_180011CC4(
                         v11,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\scenenode.cpp");
    sub_18006A84C((unsigned int)pExceptionObject, v7, v8, (unsigned int)v12, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  while ( 1 )
  {
    v6 = v5 + 2;
    if ( *v5 == *a2 )
      break;
    v5 += 2;
    if ( v6 == v4 )
      goto LABEL_4;
  }
  unknown_libname_7(v6, v4, v5);
  sub_180032460(*(_QWORD *)(a1 + 384) - 16LL);
  *(_QWORD *)(a1 + 384) -= 16LL;
  if ( *(_BYTE *)(a1 + 104) )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 128LL))(*a2);
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 112LL))(*a2);
  v10 = a2[1];
  if ( v10 )
    return sub_180010EC8(v10);
  return result;
}
