/*
 * XREFs of sub_140082034 @ 0x140082034
 * Callers:
 *     sub_140082240 @ 0x140082240 (sub_140082240.c)
 *     sub_140082410 @ 0x140082410 (sub_140082410.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000A628 @ 0x14000A628 (sub_14000A628.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000C428 @ 0x14000C428 (sub_14000C428.c)
 *     sub_14000EAC8 @ 0x14000EAC8 (sub_14000EAC8.c)
 *     sub_1400115FC @ 0x1400115FC (sub_1400115FC.c)
 *     sub_140038A08 @ 0x140038A08 (sub_140038A08.c)
 *     sub_140083D64 @ 0x140083D64 (sub_140083D64.c)
 *     sub_140083D90 @ 0x140083D90 (sub_140083D90.c)
 *     sub_140083DBC @ 0x140083DBC (sub_140083DBC.c)
 *     sub_140085904 @ 0x140085904 (sub_140085904.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140082034(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _QWORD *a5)
{
  __int64 v8; // rcx
  __int64 v9; // r10
  unsigned int v10; // ebx
  __int64 v11; // r11
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r14
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // edi
  _QWORD *v23; // rax
  _QWORD *v24; // rdi
  __int64 v25; // rax
  ATL::CAtlException *v26; // rbx
  _QWORD *v27; // [rsp+20h] [rbp-38h]
  ATL::CAtlException *v28; // [rsp+30h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v30; // [rsp+60h] [rbp+8h] BYREF

  v10 = 0;
  if ( sub_140083D64(a1, **(_QWORD **)(a1 + 776) + 48LL) || sub_140083D64(v8, v9 + 96) )
  {
    v15 = 2105;
    goto LABEL_24;
  }
  v12 = sub_140083DBC(a1, v11);
  v14 = v12;
  if ( !v12 )
  {
    v10 = -2005139430;
    v15 = 2109;
LABEL_25:
    sub_14000C2A8((int)retaddr, v15, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v10);
    return v10;
  }
  if ( sub_140083D90(v13, **(_QWORD **)(a1 + 776) + 48LL, *(_QWORD *)(v12 + 16)) || sub_140083D90(v16, v18 + 96, v17) )
  {
    v15 = 2113;
LABEL_24:
    v10 = -2005139416;
    goto LABEL_25;
  }
  v20 = sub_140085904(v19, v14, a3);
  v21 = v20;
  if ( v20 < 0 )
  {
    sub_14000C2A8((int)retaddr, 2116, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v20);
    return v21;
  }
  v23 = (_QWORD *)sub_14000C428();
  v30 = v23;
  if ( v23 )
    v24 = sub_14000A628(v23, v14);
  else
    v24 = 0LL;
  v27 = v24;
  if ( v24 )
  {
    if ( v24[15] != a3 )
      sub_1400115FC(v24 + 15, a3);
    sub_140038A08(&v30, a3);
    v25 = (__int64)v30;
    v30 = 0LL;
    v24[18] = v25;
    sub_140003238((__int64 *)&v30);
    try
    {
      v30 = v24;
      sub_14000EAC8(a4, &v30);
    }
    catch ( ATL::CAtlException *v28 )
    {
      v26 = v28;
      if ( *(_DWORD *)v28 == -1073741571 )
        o__resetstkoflw();
      LODWORD(v30) = *(_DWORD *)v26;
      v21 = (unsigned int)v30;
      v10 = 0;
      if ( (int)v30 < 0 )
      {
        sub_14000C2A8(
          (int)retaddr,
          2136,
          (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp",
          (int)v30);
        sub_1400B6010(v27);
        return v21;
      }
      v24 = v27;
    }
    *a5 = v24;
  }
  else
  {
    v10 = -2147024882;
    sub_14000C2A8(
      (int)retaddr,
      2122,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp",
      -2147024882);
  }
  return v10;
}
