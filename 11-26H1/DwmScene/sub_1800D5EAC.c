/*
 * XREFs of sub_1800D5EAC @ 0x1800D5EAC
 * Callers:
 *     sub_1800D6DF0 @ 0x1800D6DF0 (sub_1800D6DF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800D60D8 @ 0x1800D60D8 (sub_1800D60D8.c)
 *     sub_1800D64F4 @ 0x1800D64F4 (sub_1800D64F4.c)
 *     sub_1800D72F8 @ 0x1800D72F8 (sub_1800D72F8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D5EAC(
        int a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  int v12; // r11d
  _QWORD *v13; // r9
  unsigned __int8 v14; // si
  int v15; // r12d
  __int64 v16; // rbx
  unsigned int v17; // r15d
  __int64 result; // rax
  unsigned int v19; // ebp
  unsigned int v20; // r10d
  unsigned int v21; // r13d
  unsigned int v22; // eax
  char v23; // di
  int v24; // ecx
  unsigned int v25; // [rsp+40h] [rbp-D8h]
  unsigned int v26; // [rsp+44h] [rbp-D4h]
  __int64 v28; // [rsp+70h] [rbp-A8h]
  _QWORD v29[4]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+A0h] [rbp-78h] BYREF

  v28 = a3;
  v12 = a5;
  v13 = a7;
  if ( a6 == 1 )
  {
    v14 = 1;
    v15 = 1;
  }
  else
  {
    v14 = 0;
    v15 = 3;
  }
  v16 = 0LL;
  v17 = 0;
  result = 2 * (unsigned int)v14;
  v19 = a4 - result;
  while ( (unsigned int)v16 < v19 )
  {
    v20 = *(_DWORD *)(a3 + 4 * v16);
    v26 = v20;
    v21 = *(_DWORD *)(a3 + 4LL * (unsigned int)(v16 + 1));
    v22 = *(_DWORD *)(a3 + 4LL * (unsigned int)(v16 + 2));
    v25 = v22;
    if ( v20 >= a2 || v21 >= a2 || v22 >= a2 )
    {
      sub_180011CC4(v29, "Index out of range while computing tangents and normals");
      sub_1800D60D8(pExceptionObject, v29);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
    if ( *v13 )
    {
      if ( v17 == 100 * (v17 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 40LL))(*v13);
        v20 = v26;
        v12 = a5;
      }
      v22 = v25;
    }
    v23 = v14 && (v16 & 1) != 0;
    sub_1800D72F8(a1, v12, v20, v21, v22, v23, a9, a10);
    result = sub_1800D64F4(v24, v26, v21, v25, v23, a8);
    v16 = (unsigned int)(v15 + v16);
    ++v17;
    a3 = v28;
    v13 = a7;
    v12 = a5;
  }
  return result;
}
