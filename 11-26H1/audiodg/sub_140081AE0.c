/*
 * XREFs of sub_140081AE0 @ 0x140081AE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000C2D0 @ 0x14000C2D0 (sub_14000C2D0.c)
 *     sub_14000C330 @ 0x14000C330 (sub_14000C330.c)
 *     sub_14000C448 @ 0x14000C448 (sub_14000C448.c)
 *     sub_14000C4E4 @ 0x14000C4E4 (sub_14000C4E4.c)
 *     sub_14000C544 @ 0x14000C544 (sub_14000C544.c)
 *     sub_140030124 @ 0x140030124 (sub_140030124.c)
 *     sub_140033E34 @ 0x140033E34 (sub_140033E34.c)
 *     sub_140083CA0 @ 0x140083CA0 (sub_140083CA0.c)
 *     sub_140083D0C @ 0x140083D0C (sub_140083D0C.c)
 *     sub_140083DBC @ 0x140083DBC (sub_140083DBC.c)
 *     sub_140083ED8 @ 0x140083ED8 (sub_140083ED8.c)
 *     sub_140085804 @ 0x140085804 (sub_140085804.c)
 *     sub_1400859F0 @ 0x1400859F0 (sub_1400859F0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_140081AE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rsi
  int v8; // edi
  int v9; // edx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  int v19; // ecx
  int v20; // r8d
  int v21; // eax
  int v22; // r14d
  int v23; // eax
  ATL::CAtlException *v24; // rbx
  ATL::CAtlException *v25; // rbx
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+30h] [rbp-B8h]
  __int64 v27; // [rsp+38h] [rbp-B0h] BYREF
  unsigned __int64 v28; // [rsp+40h] [rbp-A8h] BYREF
  _DWORD *v29; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v30[2]; // [rsp+50h] [rbp-98h] BYREF
  char v31; // [rsp+60h] [rbp-88h]
  __int64 v32; // [rsp+68h] [rbp-80h] BYREF
  unsigned __int64 v33; // [rsp+70h] [rbp-78h] BYREF
  __int64 v34; // [rsp+78h] [rbp-70h]
  ATL::CAtlException *v35; // [rsp+80h] [rbp-68h] BYREF
  ATL::CAtlException *v36[3]; // [rsp+88h] [rbp-60h] BYREF
  char v37; // [rsp+A0h] [rbp-48h]
  __int64 *v38; // [rsp+A8h] [rbp-40h]
  unsigned __int64 *v39; // [rsp+B0h] [rbp-38h]
  char v40; // [rsp+B8h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+0h]
  __int64 v43; // [rsp+100h] [rbp+18h] BYREF

  v7 = a1;
  if ( a3 )
  {
    if ( ((a4 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      v9 = 1868;
LABEL_5:
      sub_14000C2A8(
        (int)retaddr,
        v9,
        (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp",
        -2147024890);
      return 2147942406LL;
    }
    if ( ((a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      v9 = 1869;
      goto LABEL_5;
    }
    v29 = 0LL;
    v30[0] = &v29;
    v30[1] = 0LL;
    v31 = 1;
    v8 = sub_1400B6010(a3);
    sub_140033E34((__int64)v30);
    if ( v8 < 0 )
    {
      sub_14000C2A8((int)retaddr, 1872, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v8);
LABEL_41:
      sub_140008C08((void **)&v29, 0LL);
      return (unsigned int)v8;
    }
    sub_14000C2D0((__int64)v30, v7 + 96);
    v11 = sub_1400859F0(v7, a2);
    v8 = v11;
    if ( v11 < 0 )
    {
      sub_14000C2A8((int)retaddr, 1877, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v11);
LABEL_12:
      sub_140030124((__int64)v30);
      goto LABEL_41;
    }
    v34 = 0LL;
    sub_1400B6010(*(_QWORD *)(v7 + 800));
    v43 = 0LL;
    v13 = sub_140083D0C(v12, v34, a3, &v43);
    v27 = v13;
    if ( !v13 )
    {
      v43 = 0LL;
      v13 = sub_140083D0C(v14, v7 + 184, a3, &v43);
      v27 = v13;
      if ( !v13 )
      {
        v15 = 1890;
LABEL_23:
        v8 = -2005139430;
        goto LABEL_18;
      }
    }
    if ( *(_QWORD *)(v13 + 160) == v29[266] )
    {
      v8 = -2005139429;
      v15 = 1894;
    }
    else
    {
      v16 = sub_140083DBC(v7, a4);
      v18 = v16;
      v32 = v16;
      if ( !v16 )
      {
        v15 = 1898;
        goto LABEL_23;
      }
      if ( (int)sub_140083ED8(v17, v27 + 152, v16, &v43) < 0 )
      {
        v21 = sub_140085804(v19, v18, v20, (_DWORD)v29, v27 + 120);
        v22 = v21;
        if ( v21 < 0 )
        {
          sub_14000C2A8((int)retaddr, 1906, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v21);
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          sub_140030124((__int64)v30);
          v8 = v22;
          goto LABEL_41;
        }
        try
        {
          v28 = sub_14000C330((_QWORD *)(v27 + 152), &v32);
        }
        catch ( ATL::CAtlException *v35 )
        {
          v24 = v35;
          if ( *(_DWORD *)v35 == -1073741571 )
            o__resetstkoflw();
          LODWORD(v43) = *(_DWORD *)v24;
          v8 = v43;
          if ( (int)v43 < 0 )
          {
            v15 = 1912;
            goto LABEL_18;
          }
          v7 = a1;
          v18 = v32;
        }
        try
        {
          v36[1] = (ATL::CAtlException *)&v27;
          v36[2] = (ATL::CAtlException *)&v28;
          v37 = 1;
          v33 = 0LL;
          v33 = sub_14000C4E4((_QWORD *)(v27 + 280), (_QWORD *)(v18 + 112));
        }
        catch ( ATL::CAtlException *v36 )
        {
          v25 = v36[0];
          if ( *(_DWORD *)v36[0] == -1073741571 )
            o__resetstkoflw();
          LODWORD(v43) = *(_DWORD *)v25;
          v8 = v43;
          if ( (int)v43 < 0 )
          {
            sub_14000C2A8(
              (int)retaddr,
              1918,
              (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp",
              v43);
            sub_14000C544((_QWORD *)(v27 + 152), v28);
LABEL_19:
            if ( lpCriticalSection )
              LeaveCriticalSection(lpCriticalSection);
            goto LABEL_12;
          }
          v7 = a1;
          v18 = v32;
        }
        v38 = &v27;
        v39 = &v33;
        v40 = 1;
        ++*(_DWORD *)(v18 + 12);
        *(_QWORD *)(v18 + 160) = v7;
        v23 = sub_140083CA0(v7, v18);
        v8 = v23;
        if ( v23 >= 0 )
        {
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          sub_140030124((__int64)v30);
          v8 = 0;
          goto LABEL_41;
        }
        sub_14000C2A8((int)retaddr, 1922, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v23);
        sub_14000C448((_QWORD *)(v27 + 280), v33);
        sub_14000C544((_QWORD *)(v27 + 152), v28);
        goto LABEL_19;
      }
      v8 = -2147024809;
      v15 = 1902;
    }
LABEL_18:
    sub_14000C2A8((int)retaddr, v15, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v8);
    goto LABEL_19;
  }
  v8 = -2147024809;
  sub_14000C2A8((int)retaddr, 1867, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", -2147024809);
  return (unsigned int)v8;
}
