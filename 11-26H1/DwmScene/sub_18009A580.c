/*
 * XREFs of sub_18009A580 @ 0x18009A580
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180026804 @ 0x180026804 (sub_180026804.c)
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 *     sub_180099290 @ 0x180099290 (sub_180099290.c)
 *     sub_180099318 @ 0x180099318 (sub_180099318.c)
 *     sub_180099374 @ 0x180099374 (sub_180099374.c)
 *     sub_1800994C4 @ 0x1800994C4 (sub_1800994C4.c)
 *     sub_180099564 @ 0x180099564 (sub_180099564.c)
 *     sub_1800995FC @ 0x1800995FC (sub_1800995FC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18009A580(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rax
  _QWORD v11[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v12[22]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+118h] [rbp+10h] BYREF
  __int64 v14; // [rsp+120h] [rbp+18h]
  _QWORD pExceptionObject[7]; // [rsp+138h] [rbp+30h] BYREF

  v2 = a1 + 8;
  sub_180029674(a1 + 8);
  if ( *(_DWORD *)(a1 + 16) != 1 )
  {
    sub_180011CC4(&v13, "Attempt to call EndTimeSpan() on a query marker that wasn't a timespan.");
    v3 = sub_180011CC4(
           v11,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\gpuprof"
           "iler\\gpuprofilerframe.cpp");
    sub_18006A84C(pExceptionObject, (__int64)v3, v4, (__int64)&v13, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v5 = a1 + 32;
  if ( sub_1800994C4(a1 + 32) )
  {
    v6 = (_QWORD *)sub_1800995FC(a1 + 32, &v13);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 72LL))(*v6);
    if ( v14 )
      sub_180010EC8(v14);
    v7 = (__int64 *)sub_180026804(*(_QWORD *)(a1 + 24), (__int64)v12, 1u);
    v8 = a1 + 216;
    sub_180099374(v8, v7);
    sub_180099318(v12);
    if ( sub_1800994C4(v8) )
    {
      sub_180012C40(&v13, (_QWORD *)(v5 + 160));
      v9 = (_QWORD *)sub_1800995FC(v5, v11);
      sub_180099564(v8, v9, &v13);
    }
    else
    {
      sub_180099290((__int64)v12);
      sub_180099374(v5, v12);
      sub_180099318(v12);
    }
  }
  return sub_1800297F4(v2);
}
