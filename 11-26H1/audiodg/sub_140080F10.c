/*
 * XREFs of sub_140080F10 @ 0x140080F10
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006C48 @ 0x140006C48 (sub_140006C48.c)
 *     sub_140006FD8 @ 0x140006FD8 (sub_140006FD8.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000C2D0 @ 0x14000C2D0 (sub_14000C2D0.c)
 *     sub_14000C3C4 @ 0x14000C3C4 (sub_14000C3C4.c)
 *     sub_14000DD04 @ 0x14000DD04 (sub_14000DD04.c)
 *     sub_14000E81C @ 0x14000E81C (sub_14000E81C.c)
 *     sub_14000FFB0 @ 0x14000FFB0 (sub_14000FFB0.c)
 *     sub_14001EB30 @ 0x14001EB30 (sub_14001EB30.c)
 *     sub_140025C58 @ 0x140025C58 (sub_140025C58.c)
 *     sub_14002722C @ 0x14002722C (sub_14002722C.c)
 *     sub_14002C694 @ 0x14002C694 (sub_14002C694.c)
 *     sub_140030124 @ 0x140030124 (sub_140030124.c)
 *     sub_140047144 @ 0x140047144 (sub_140047144.c)
 *     sub_140047B38 @ 0x140047B38 (sub_140047B38.c)
 *     sub_140048384 @ 0x140048384 (sub_140048384.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_140083D0C @ 0x140083D0C (sub_140083D0C.c)
 *     sub_1400840C8 @ 0x1400840C8 (sub_1400840C8.c)
 *     sub_1400859F0 @ 0x1400859F0 (sub_1400859F0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
__int64 __fastcall sub_140080F10(__int64 a1, __int64 a2, __int64 a3, _QWORD **a4, unsigned int a5)
{
  __int64 v7; // rsi
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 v16; // r14
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r15
  _QWORD *v20; // rax
  unsigned __int64 v21; // r15
  _QWORD **v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int16 *v25; // rsi
  __int64 v26; // rcx
  unsigned __int16 *v27; // rdi
  int v28; // edx
  int v29; // edx
  _QWORD *v30; // rdx
  __int64 **v31; // rdx
  __int64 **v32; // rax
  __int64 *v34; // rax
  ATL::CAtlException *v35; // rbx
  ATL::CAtlException *v36; // rbx
  ATL::CAtlException *v37; // rbx
  ATL::CAtlException *v38; // rbx
  __int64 v39; // [rsp+20h] [rbp-558h]
  __int64 v40; // [rsp+28h] [rbp-550h]
  __int64 v41; // [rsp+30h] [rbp-548h]
  _QWORD *v42; // [rsp+40h] [rbp-538h] BYREF
  _QWORD *v43; // [rsp+48h] [rbp-530h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-528h]
  __int64 ***v45; // [rsp+58h] [rbp-520h] BYREF
  __int64 **v46; // [rsp+60h] [rbp-518h]
  __int64 v47; // [rsp+68h] [rbp-510h] BYREF
  _QWORD **v48; // [rsp+70h] [rbp-508h] BYREF
  __int64 v49; // [rsp+78h] [rbp-500h] BYREF
  __int64 v50; // [rsp+80h] [rbp-4F8h]
  __int64 v51; // [rsp+88h] [rbp-4F0h]
  int v52; // [rsp+90h] [rbp-4E8h]
  __int64 v53; // [rsp+98h] [rbp-4E0h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-4D8h]
  __int64 v55; // [rsp+A8h] [rbp-4D0h]
  int v56; // [rsp+B0h] [rbp-4C8h]
  __int64 v57; // [rsp+B8h] [rbp-4C0h]
  __int64 *v58; // [rsp+C0h] [rbp-4B8h] BYREF
  int v59; // [rsp+C8h] [rbp-4B0h] BYREF
  _QWORD **v60; // [rsp+D0h] [rbp-4A8h]
  char v61; // [rsp+D8h] [rbp-4A0h]
  _BYTE v62[16]; // [rsp+E0h] [rbp-498h] BYREF
  ATL::CAtlException *v63; // [rsp+F0h] [rbp-488h] BYREF
  ATL::CAtlException *v64; // [rsp+F8h] [rbp-480h] BYREF
  ATL::CAtlException *v65; // [rsp+108h] [rbp-470h] BYREF
  ATL::CAtlException *v66[3]; // [rsp+110h] [rbp-468h] BYREF
  char v67; // [rsp+128h] [rbp-450h]
  wchar_t v68[256]; // [rsp+130h] [rbp-448h] BYREF
  wchar_t v69[256]; // [rsp+330h] [rbp-248h] BYREF
  _UNKNOWN *retaddr; // [rsp+578h] [rbp+0h]

  v60 = a4;
  v7 = a1;
  v57 = a1;
  v48 = a4;
  if ( !a3 )
  {
    v8 = -2147024809;
    v9 = 1257;
LABEL_67:
    sub_14000C2A8((int)retaddr, v9, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v8);
    return v8;
  }
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v8 = -2147024890;
    v9 = 1258;
    goto LABEL_67;
  }
  if ( a5 > 1 )
  {
    v8 = -2147024809;
    v9 = 1259;
    goto LABEL_67;
  }
  sub_14000C2D0((__int64)v62, a1 + 96);
  v10 = sub_1400859F0(v7, a2);
  v11 = v10;
  if ( v10 < 0 )
  {
    sub_14000C2A8((int)retaddr, 1265, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v10);
LABEL_65:
    sub_140030124((__int64)v62);
    return v11;
  }
  v46 = 0LL;
  sub_1400B6010(*(_QWORD *)(v7 + 800));
  v58 = 0LL;
  v43 = (_QWORD *)sub_140083D0C(v12, 0LL, a3, &v58);
  if ( !v43 )
  {
    v11 = -2005139430;
    sub_14000C2A8(
      (int)retaddr,
      1276,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp",
      -2005139430);
    goto LABEL_63;
  }
  v13 = 0LL;
  v53 = 0LL;
  v14 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0;
  v15 = 0LL;
  v49 = 0LL;
  v16 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0;
  v17 = v43;
  v18 = v43[16];
  v47 = v18;
  v19 = 0LL;
  try
  {
    while ( v19 < v18 )
    {
      v42 = (_QWORD *)(*(_QWORD *)sub_14000FFB0(v17 + 15, v19) + 64LL);
      sub_140025C58(&v53, v19++, (unsigned __int64 *)&v42);
      v17 = v43;
      v14 = v54;
      v13 = v53;
      v18 = v47;
    }
    v20 = (_QWORD *)v17[20];
    v42 = v20;
    v21 = 0LL;
    while ( v21 < (unsigned __int64)v20 )
    {
      v47 = *(_QWORD *)sub_14000FFB0(v17 + 19, v21) + 64LL;
      sub_140025C58(&v49, v21++, (unsigned __int64 *)&v47);
      v17 = v43;
      v16 = v50;
      v15 = v49;
      v20 = v42;
    }
  }
  catch ( ATL::CAtlException v59 )
  {
    LODWORD(v42) = v59;
    v11 = (unsigned int)v42;
    if ( (int)v42 < 0 )
    {
      sub_14000C2A8(
        (int)retaddr,
        1300,
        (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp",
        (int)v42);
LABEL_62:
      sub_14002722C(&v49);
      sub_14002722C(&v53);
LABEL_63:
      if ( lpCriticalSection )
      {
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection = 0LL;
      }
      goto LABEL_65;
    }
    v17 = v43;
    v14 = v54;
    v13 = v53;
    v16 = v50;
    v15 = v49;
    v7 = v57;
    v22 = v48;
LABEL_20:
    if ( !v14 || !v16 )
    {
      sub_140047B38((__int64)"Audioeng.dll", 0, 0);
      v17 = v43;
    }
    HIDWORD(v39) = HIDWORD(v15);
    LODWORD(v42) = sub_140006FD8((__int64)v17);
    if ( (int)v42 < 0 )
    {
      if ( v14 && (v24 = *(_QWORD *)(*(_QWORD *)v13 + 24LL)) != 0 )
        v25 = (unsigned __int16 *)sub_1400B6010(v24);
      else
        v25 = 0LL;
      if ( v16 && (v26 = *(_QWORD *)(*(_QWORD *)v15 + 24LL)) != 0 )
        v27 = (unsigned __int16 *)sub_1400B6010(v26);
      else
        v27 = 0LL;
      memset(v69, 0, sizeof(v69));
      memset(v68, 0, sizeof(v68));
      if ( v25 )
      {
        if ( *v25 == 0xFFFE )
          v28 = *((_DWORD *)v25 + 6);
        else
          v28 = *v25;
        LODWORD(v39) = v25[1];
        sub_14001EB30(
          v69,
          256LL,
          (__int64)L"Input #0 {%dHz/%dch/%dbits/Format:%d}",
          *((unsigned int *)v25 + 1),
          v39,
          v25[7],
          v28);
      }
      else
      {
        sub_14001EB30(v69, 256LL, (__int64)L"Input #0 {null}");
      }
      if ( v27 )
      {
        if ( *v27 == 0xFFFE )
          v29 = *((_DWORD *)v27 + 6);
        else
          v29 = *v27;
        LODWORD(v41) = v29;
        LODWORD(v40) = v27[7];
        LODWORD(v39) = v27[1];
        sub_14001EB30(
          v68,
          256LL,
          (__int64)L"Output #0 {%dHz/%dch/%dbits/Format:%d}",
          *((unsigned int *)v27 + 1),
          v39,
          v40,
          v41);
      }
      else
      {
        sub_14001EB30(v68, 256LL, (__int64)L"Output #0 {null}");
      }
      v11 = (unsigned int)v42;
      sub_140048384(
        (int)retaddr,
        1340,
        (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp",
        (unsigned int)v42,
        "LockForProcess failed:%ls, %ls",
        v69,
        v68);
      goto LABEL_62;
    }
    v60 = &v43;
    v61 = 1;
    v42 = 0LL;
    v30 = 0LL;
    if ( v22 )
    {
      v48 = 0LL;
      v30 = (_QWORD *)sub_140083D0C(v23, **(_QWORD **)(v7 + 776), v22, &v48);
      v42 = v30;
      if ( !v30 )
      {
        v11 = -2005139430;
        sub_14000C2A8(
          (int)retaddr,
          1351,
          (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp",
          -2005139430);
        sub_140006C48((__int64)v43);
        goto LABEL_62;
      }
    }
    v45 = **(__int64 *****)(v7 + 776);
    if ( v30 )
    {
      if ( a5 )
      {
        v32 = sub_14002C694(v45, &v42);
        try
        {
          sub_140047144((__int64 **)v45, (__int64)v32, (__int64 *)&v43);
        }
        catch ( ATL::CAtlException *v65 )
        {
          v37 = v65;
          if ( *(_DWORD *)v65 == -1073741571 )
            o__resetstkoflw();
          LODWORD(v42) = *(_DWORD *)v37;
LABEL_51:
          v11 = (unsigned int)v42;
          if ( (int)v42 < 0 )
          {
            sub_14000C2A8(
              (int)retaddr,
              1382,
              (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp",
              (int)v42);
            sub_140006C48((__int64)v43);
            goto LABEL_62;
          }
          v7 = v57;
        }
      }
      else
      {
        v31 = sub_14002C694(v45, &v42);
        sub_1400840C8(v45, v31, &v43);
      }
    }
    else if ( a5 )
    {
      try
      {
        sub_14000E81C(v45, &v43);
      }
      catch ( ATL::CAtlException *v64 )
      {
        v36 = v64;
        if ( *(_DWORD *)v64 == -1073741571 )
          o__resetstkoflw();
        LODWORD(v42) = *(_DWORD *)v36;
        goto LABEL_51;
      }
    }
    else
    {
      try
      {
        sub_14000DD04(v45, &v43);
      }
      catch ( ATL::CAtlException *v63 )
      {
        v35 = v63;
        if ( *(_DWORD *)v63 == -1073741571 )
          o__resetstkoflw();
        LODWORD(v42) = *(_DWORD *)v35;
        goto LABEL_51;
      }
    }
    try
    {
      v66[1] = (ATL::CAtlException *)&v45;
      v66[2] = (ATL::CAtlException *)&v43;
      v67 = 1;
      sub_14000E81C((_QWORD *)(v7 + 136), &v43);
    }
    catch ( ATL::CAtlException *v66 )
    {
      v38 = v66[0];
      if ( *(_DWORD *)v66[0] == -1073741571 )
        o__resetstkoflw();
      LODWORD(v42) = *(_DWORD *)v38;
      v11 = (unsigned int)v42;
      if ( (int)v42 < 0 )
      {
        sub_14000C2A8(
          (int)retaddr,
          1390,
          (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp",
          (int)v42);
        v34 = (__int64 *)sub_14002C694(v45, &v43);
        sub_14000C3C4((__int64 **)v45, v34);
        sub_140006C48((__int64)v43);
        goto LABEL_62;
      }
    }
    sub_14000C3C4(v46, v58);
    sub_14002722C(&v49);
    sub_14002722C(&v53);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    sub_140030124((__int64)v62);
    return 0LL;
  }
  v22 = v60;
  goto LABEL_20;
}
