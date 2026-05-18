/*
 * XREFs of sub_18007E080 @ 0x18007E080
 * Callers:
 *     sub_180042FF0 @ 0x180042FF0 (sub_180042FF0.c)
 *     sub_180049A20 @ 0x180049A20 (sub_180049A20.c)
 *     sub_18007DD3C @ 0x18007DD3C (sub_18007DD3C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_1800291F0 @ 0x1800291F0 (sub_1800291F0.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18007D290 @ 0x18007D290 (sub_18007D290.c)
 *     sub_18007D35C @ 0x18007D35C (sub_18007D35C.c)
 *     sub_18007D680 @ 0x18007D680 (sub_18007D680.c)
 *     sub_18007E2A0 @ 0x18007E2A0 (sub_18007E2A0.c)
 *     sub_18007E42C @ 0x18007E42C (sub_18007E42C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_18007E080(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // r15d
  __int64 v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // [rsp+38h] [rbp-71h] BYREF
  __int64 v15; // [rsp+40h] [rbp-69h]
  __int64 v16; // [rsp+48h] [rbp-61h] BYREF
  __int64 v17; // [rsp+50h] [rbp-59h]
  _QWORD *v18; // [rsp+58h] [rbp-51h]
  _QWORD v19[4]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v20[4]; // [rsp+80h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A0h] [rbp-9h] BYREF

  v18 = a2;
  if ( !*(_DWORD *)(*a2 + 244LL) || a1[4] == a1[5] )
  {
    v4 = a2[1];
  }
  else
  {
    sub_180029EF8(*a2 + 24LL, (__int64)a2);
    if ( !a1[16] )
    {
      sub_18007D290(*(_QWORD *)(*a2 + 3984LL), &v14);
      v5 = v14;
      v6 = v15;
      v14 = 0LL;
      v15 = 0LL;
      a1[16] = v5;
      v7 = a1[17];
      a1[17] = v6;
      if ( v7 )
      {
        sub_180010EC8(v7);
        if ( v15 )
          sub_180010EC8(v15);
      }
    }
    v8 = *(_DWORD *)(*a2 + 244LL);
    if ( !(unsigned __int8)sub_18007E42C(a1[16], v8) )
    {
      v9 = *a2;
      sub_18007D35C((__int64 *)(*a2 + 496LL), &v16);
      v10 = v16;
      v11 = (_QWORD *)sub_180012BF8(v9 + 8, &v14);
      sub_1800291F0(v10, v11);
      if ( v15 )
        sub_180010EC8(v15);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64))(*(_QWORD *)v16 + 40LL))(
              v16,
              a1[4],
              ((unsigned int)a1[5] - (unsigned int)a1[4]) & 0xFFFFFFFC,
              2LL,
              a1[2] + 16LL) )
      {
        sub_180011CC4(v20, "ShaderPropertyBlock::AttachDevice() -- failed to create constant buffer");
        v12 = sub_180011CC4(
                v19,
                "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\sh"
                "aderpropertyblock.cpp");
        sub_18003A468(pExceptionObject, (__int64)v12, v13, (__int64)v20, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
      }
      sub_18007E2A0(a1[16], &v16);
      LODWORD(v14) = v8;
      *(_DWORD *)(*(_QWORD *)sub_18007D680(a1 + 11, (__int64)v19, (unsigned int *)&v14) + 32LL) = 0;
      if ( v17 )
        sub_180010EC8(v17);
    }
    v4 = a2[1];
  }
  if ( v4 )
    sub_180010EC8(v4);
}
