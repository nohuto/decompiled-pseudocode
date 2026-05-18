/*
 * XREFs of sub_180046FD4 @ 0x180046FD4
 * Callers:
 *     sub_180014A50 @ 0x180014A50 (sub_180014A50.c)
 *     sub_180077D20 @ 0x180077D20 (sub_180077D20.c)
 *     sub_180085798 @ 0x180085798 (sub_180085798.c)
 *     sub_180085A18 @ 0x180085A18 (sub_180085A18.c)
 *     sub_180093000 @ 0x180093000 (sub_180093000.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_180029310 @ 0x180029310 (sub_180029310.c)
 *     sub_180046C1C @ 0x180046C1C (sub_180046C1C.c)
 *     sub_180046DDC @ 0x180046DDC (sub_180046DDC.c)
 *     sub_180047120 @ 0x180047120 (sub_180047120.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180046FD4(__int64 a1)
{
  unsigned int v2; // eax
  int v3; // r8d
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // r9d
  char v8; // di
  char v9; // si
  bool v10; // cl
  _QWORD v11[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v12[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_180011CC4(
      v12,
      "Mesh::ComputeRequiredData() -- Modification of a mesh that while it is mapped is not supported.");
    v2 = (unsigned int)sub_180011CC4(
                         v11,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_18006A84C((unsigned int)pExceptionObject, v2, v3, (unsigned int)v12, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_180029310(a1, 4, 1);
  if ( v5[18] )
  {
    v8 = v6 & (v7 >> 2);
    v9 = 0;
    if ( !v5[20] )
      v9 = v6 & v7;
    v10 = (v7 & 2) != 0 && v5[24] == 0LL;
    if ( v10 && !*(_QWORD *)(a1 + 240) )
    {
      sub_18001DCFC(&qword_1801BD2E8, 3);
      v10 = 0;
    }
    if ( v9 )
    {
      if ( v10 )
        sub_180046DDC((_DWORD *)a1, v4, v8);
      else
        sub_180046C1C((_DWORD *)a1, v4);
    }
    else if ( v10 )
    {
      LOBYTE(v6) = v8;
      sub_180047120(a1, v4, v6);
    }
  }
}
