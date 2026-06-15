/*
 * XREFs of sub_1400574A0 @ 0x1400574A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140004140 @ 0x140004140 (sub_140004140.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_140009D00 @ 0x140009D00 (sub_140009D00.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140010010 @ 0x140010010 (sub_140010010.c)
 *     sub_1400103B0 @ 0x1400103B0 (sub_1400103B0.c)
 *     sub_1400118C0 @ 0x1400118C0 (sub_1400118C0.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140023608 @ 0x140023608 (sub_140023608.c)
 *     sub_140024510 @ 0x140024510 (sub_140024510.c)
 *     sub_14002813C @ 0x14002813C (sub_14002813C.c)
 *     sub_14002C780 @ 0x14002C780 (sub_14002C780.c)
 *     sub_140032FAC @ 0x140032FAC (sub_140032FAC.c)
 *     sub_140033AE4 @ 0x140033AE4 (sub_140033AE4.c)
 *     sub_1400352DC @ 0x1400352DC (sub_1400352DC.c)
 *     sub_140038C6C @ 0x140038C6C (sub_140038C6C.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_140056334 @ 0x140056334 (sub_140056334.c)
 *     sub_140056830 @ 0x140056830 (sub_140056830.c)
 *     sub_140058AB4 @ 0x140058AB4 (sub_140058AB4.c)
 *     sub_140069B3C @ 0x140069B3C (sub_140069B3C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall sub_1400574A0(char *a1, __int64 a2, struct _RTL_CRITICAL_SECTION *a3, __int64 a4, int a5)
{
  __int64 v6; // r13
  char *v7; // r15
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  int v9; // ebx
  int v10; // edx
  int v11; // r9d
  int v12; // eax
  __int64 v13; // rax
  unsigned __int16 *v14; // r12
  int v15; // eax
  int v16; // edx
  __int64 v17; // rbx
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // r14
  _QWORD *v23; // r8
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 *v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rcx
  HRESULT Instance; // eax
  __int64 v52; // rcx
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rax
  int v65; // ebx
  unsigned int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rcx
  _DWORD *v69; // rcx
  int v70; // ecx
  __int64 v71; // r9
  __int64 v72; // rcx
  int *v74; // rbx
  __int64 v75; // [rsp+80h] [rbp-118h] BYREF
  __int64 v76; // [rsp+88h] [rbp-110h] BYREF
  unsigned __int8 v77; // [rsp+90h] [rbp-108h]
  __int64 v78; // [rsp+98h] [rbp-100h] BYREF
  struct _RTL_CRITICAL_SECTION *v79; // [rsp+A0h] [rbp-F8h] BYREF
  int v80; // [rsp+A8h] [rbp-F0h] BYREF
  __int64 v81; // [rsp+B0h] [rbp-E8h] BYREF
  char **v82; // [rsp+B8h] [rbp-E0h] BYREF
  __int64 *v83; // [rsp+C0h] [rbp-D8h] BYREF
  unsigned __int16 *v84; // [rsp+C8h] [rbp-D0h] BYREF
  __int64 v85; // [rsp+D0h] [rbp-C8h] BYREF
  char *v86; // [rsp+D8h] [rbp-C0h] BYREF
  __int128 *v87; // [rsp+E0h] [rbp-B8h] BYREF
  void **v88; // [rsp+E8h] [rbp-B0h] BYREF
  double v89; // [rsp+F0h] [rbp-A8h] BYREF
  char *v90; // [rsp+F8h] [rbp-A0h] BYREF
  _DWORD *v91; // [rsp+100h] [rbp-98h]
  char *v92; // [rsp+108h] [rbp-90h]
  struct _RTL_CRITICAL_SECTION *v93[2]; // [rsp+110h] [rbp-88h] BYREF
  char v94; // [rsp+120h] [rbp-78h]
  ATL::CAtlException *v95[2]; // [rsp+128h] [rbp-70h] BYREF
  float v96; // [rsp+138h] [rbp-60h]
  int v97; // [rsp+13Ch] [rbp-5Ch]
  BOOL v98; // [rsp+140h] [rbp-58h]
  int v99; // [rsp+144h] [rbp-54h]
  __int128 v100; // [rsp+148h] [rbp-50h] BYREF
  _UNKNOWN *retaddr; // [rsp+198h] [rbp+0h]

  v81 = a4;
  v79 = a3;
  v6 = a2;
  v7 = a1;
  v86 = a1;
  v85 = a2;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 264));
  v93[0] = v8;
  if ( !a4 )
  {
    v9 = -2147467261;
    v10 = 126;
LABEL_5:
    v11 = v9;
LABEL_6:
    sub_14000C2A8((int)retaddr, v10, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v11);
    goto LABEL_123;
  }
  v87 = (__int128 *)(v7 + 256);
  if ( *((_DWORD *)v7 + 64) )
  {
    v9 = -2005139440;
    v10 = 129;
    goto LABEL_5;
  }
  v12 = sub_1400352DC(v6);
  v9 = v12;
  if ( v12 < 0 )
  {
    v11 = v12;
    v10 = 132;
    goto LABEL_6;
  }
  v13 = *(_QWORD *)(v6 + 32);
  if ( (double)(int)v13 > 25000000.0 )
  {
    v9 = -2147024809;
    v10 = 135;
    goto LABEL_5;
  }
  *(_QWORD *)&v89 = v7 + 128;
  *((_QWORD *)v7 + 16) = v13;
  v91 = v7 + 140;
  *((_DWORD *)v7 + 35) = *(_DWORD *)(v6 + 72);
  *((_DWORD *)v7 + 76) = *(_DWORD *)(v6 + 136);
  v90 = v7 + 344;
  v92 = v7 + 344;
  *(_OWORD *)(v7 + 344) = *(_OWORD *)(v6 + 148);
  v84 = *(unsigned __int16 **)(v6 + 8);
  v14 = v84;
  *((_DWORD *)v7 + 77) = *(_DWORD *)(v6 + 100);
  *((float *)v7 + 34) = (float)*((int *)v14 + 1);
  v76 = 0LL;
  v15 = sub_140033AE4(&v76);
  v9 = v15;
  if ( v15 < 0 )
  {
    v16 = 156;
LABEL_13:
    sub_14000C2A8((int)retaddr, v16, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v15);
LABEL_14:
    sub_140003238(&v76);
    goto LABEL_123;
  }
  v78 = 0LL;
  sub_1400B6010(v76);
  v17 = v78;
  sub_140006470(v18);
  sub_1400B6010(v17);
  sub_140003238(&v78);
  v99 = 0;
  v95[1] = *(ATL::CAtlException **)(v6 + 32);
  v96 = (float)*((int *)v14 + 1);
  v97 = v14[1];
  v98 = *(_DWORD *)(v6 + 100) == 1;
  v82 = (char **)(v6 + 56);
  v15 = sub_1400B6010(v76);
  v9 = v15;
  if ( v15 < 0 )
  {
    v16 = 170;
    goto LABEL_13;
  }
  v19 = sub_140058AB4(&unk_1400E9848);
  v22 = v7 + 144;
  v23 = v7 + 144;
  if ( v19 )
  {
    v15 = sub_140056830(v21, v20, v23);
    v9 = v15;
    if ( v15 < 0 )
    {
      v16 = 175;
      goto LABEL_13;
    }
  }
  else
  {
    v15 = sub_140032FAC(v21, v20, v23);
    v9 = v15;
    if ( v15 < 0 )
    {
      v16 = 179;
      goto LABEL_13;
    }
  }
  v83 = (__int64 *)(v7 + 144);
  v93[1] = (struct _RTL_CRITICAL_SECTION *)v7;
  v94 = 1;
  v24 = sub_1400B6010(*v22);
  v9 = v24;
  if ( v24 < 0 )
  {
    sub_14000C2A8((int)retaddr, 184, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v24);
    v25 = *v22;
    if ( *v22 )
    {
      *v22 = 0LL;
      sub_1400B6010(v25);
    }
    goto LABEL_14;
  }
  v78 = 0LL;
  sub_1400B6010(*v22);
  v26 = v78;
  sub_140006470(v27);
  sub_1400B6010(v26);
  sub_140003238(&v78);
  v75 = 0LL;
  v9 = sub_140069B3C(*v22, *((_QWORD *)v7 + 42), v6, (_DWORD)v79, (__int64)&v75);
  if ( v9 < 0 )
  {
    v28 = v75;
    v75 = 0LL;
    if ( v28 )
      sub_140010010(v28);
    v29 = *v22;
    if ( *v22 )
    {
      *v22 = 0LL;
      sub_1400B6010(v29);
    }
    goto LABEL_14;
  }
  v30 = sub_14002C780(v75);
  v9 = v30;
  if ( v30 < 0 )
  {
    sub_14000C2A8((int)retaddr, 202, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v30);
    v31 = v75;
    v75 = 0LL;
    if ( v31 )
      sub_140010010(v31);
    v32 = *v22;
    if ( *v22 )
    {
      *v22 = 0LL;
      sub_1400B6010(v32);
    }
    goto LABEL_14;
  }
  v33 = sub_140004140(v75, v81);
  v9 = v33;
  if ( v33 < 0 )
  {
    sub_14000C2A8((int)retaddr, 204, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v33);
    v35 = v75;
    v75 = 0LL;
    if ( v35 )
      sub_140010010(v35);
    v36 = *v22;
    if ( *v22 )
    {
      *v22 = 0LL;
      sub_1400B6010(v36);
    }
    goto LABEL_14;
  }
  v37 = *(_QWORD *)(*(_QWORD *)sub_140024510(v75 + 16, v34) + 32LL);
  v38 = (__int64 *)(v7 + 376);
  v39 = *((_QWORD *)v7 + 47);
  *((_QWORD *)v7 + 47) = 0LL;
  if ( v39 )
    sub_1400B6010(v39);
  if ( v7 == (char *)-376LL )
  {
    v9 = -2147467261;
  }
  else
  {
    *v38 = *(_QWORD *)(v37 + 16);
    v40 = *(_QWORD *)(v37 + 16);
    if ( v40 )
      sub_1400B6010(v40);
    v9 = 0;
  }
  if ( v9 < 0 )
  {
    sub_14000C2A8((int)retaddr, 207, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v9);
    v41 = v75;
    v75 = 0LL;
    if ( v41 )
      sub_140010010(v41);
    v42 = *v22;
    if ( *v22 )
    {
      *v22 = 0LL;
      sub_1400B6010(v42);
    }
    goto LABEL_14;
  }
  v43 = sub_140009D00(v75, *v38);
  v9 = v43;
  if ( v43 < 0 )
  {
    sub_14000C2A8((int)retaddr, 209, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v43);
    v44 = v75;
    v75 = 0LL;
    if ( v44 )
      sub_140010010(v44);
    v45 = *v22;
    if ( *v22 )
    {
      *v22 = 0LL;
      sub_1400B6010(v45);
    }
    goto LABEL_14;
  }
  v77 = (a5 & 0x400001) != 0;
  v88 = (void **)(v7 + 384);
  sub_1400118C0((void **)v7 + 48, 0LL);
  MMDevAPI_29(*v82, v7 + 384);
  v46 = *(_QWORD *)(v6 + 164);
  if ( !v46 )
    v46 = *(_QWORD *)(v6 + 172);
  v47 = *((_QWORD *)v7 + 49);
  *((_QWORD *)v7 + 49) = 0LL;
  if ( v46 )
  {
    if ( v47 )
      sub_1400B6010(v47);
    Instance = CoCreateInstance((const IID *const)(v6 + 164), 0LL, 0x17u, &stru_1400C6FE8, (LPVOID *)v7 + 49);
    v9 = Instance;
    if ( Instance < 0 )
    {
      sub_14000C2A8((int)retaddr, 227, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", Instance);
      v52 = v75;
      v75 = 0LL;
      if ( v52 )
        sub_140010010(v52);
      v53 = *v22;
      if ( *v22 )
      {
        *v22 = 0LL;
        sub_1400B6010(v53);
      }
      goto LABEL_14;
    }
    v54 = sub_1400B6010(*((_QWORD *)v7 + 49));
    v9 = v54;
    if ( v54 < 0 )
    {
      sub_14000C2A8((int)retaddr, 228, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v54);
      v55 = v75;
      v75 = 0LL;
      if ( v55 )
        sub_140010010(v55);
      v56 = *v22;
      if ( *v22 )
      {
        *v22 = 0LL;
        sub_1400B6010(v56);
      }
      goto LABEL_14;
    }
  }
  else
  {
    if ( v47 )
      sub_1400B6010(v47);
    v48 = sub_140038C6C((_QWORD *)v7 + 49);
    v9 = v48;
    if ( v48 < 0 )
    {
      sub_14000C2A8((int)retaddr, 223, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v48);
      v49 = v75;
      v75 = 0LL;
      if ( v49 )
        sub_140010010(v49);
      v50 = *v22;
      if ( *v22 )
      {
        *v22 = 0LL;
        sub_1400B6010(v50);
      }
      goto LABEL_14;
    }
  }
  v78 = 0LL;
  v57 = sub_140056334((__int64)v7, &v78, v75, v6, v77, (__int64)v79);
  v9 = v57;
  if ( v57 < 0 )
  {
    sub_14000C2A8((int)retaddr, 233, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v57);
    sub_140056130(&v78);
    v58 = v75;
    v75 = 0LL;
    if ( v58 )
      sub_140010010(v58);
    v59 = *v22;
    if ( *v22 )
    {
      *v22 = 0LL;
      sub_1400B6010(v59);
    }
    goto LABEL_14;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 216));
  try
  {
    v79 = (struct _RTL_CRITICAL_SECTION *)(v7 + 216);
    v81 = v75;
    v61 = sub_1400103B0((__int64)(v7 + 168), &v81, v60, *((_QWORD *)v7 + 21));
    if ( *((_QWORD *)v7 + 21) )
      *(_QWORD *)(*((_QWORD *)v7 + 21) + 8LL) = v61;
    else
      *((_QWORD *)v7 + 22) = v61;
    *((_QWORD *)v7 + 21) = v61;
  }
  catch ( ATL::CAtlException *v95 )
  {
    v74 = (int *)v95[0];
    if ( *(_DWORD *)v95[0] == -1073741571 )
      o__resetstkoflw();
    v80 = *v74;
    v9 = v80;
    if ( v80 < 0 )
    {
      sub_14000C2A8((int)retaddr, 240, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v80);
      sub_140018FF0(&v79);
      sub_140056130(&v78);
      v62 = v75;
      v75 = 0LL;
      if ( v62 )
        sub_140010010(v62);
      v63 = *v83;
      if ( *v83 )
      {
        *v83 = 0LL;
        sub_1400B6010(v63);
      }
      goto LABEL_14;
    }
    v14 = v84;
    v6 = v85;
    v7 = v86;
  }
  sub_140018FF0(&v79);
  v64 = v75;
  v75 = 0LL;
  *((_QWORD *)v7 + 20) = v64;
  *(_DWORD *)v87 = 1;
  *((_DWORD *)v7 + 28) = 0;
  v100 = 0LL;
  if ( *v14 == 0xFFFE )
  {
    v100 = *(_OWORD *)(v14 + 12);
  }
  else
  {
    v100 = xmmword_1400C57E0;
    LODWORD(v100) = *v14;
  }
  v65 = 0;
  v66 = 0;
  if ( *(_DWORD *)(v6 + 96) )
  {
    while ( *(_QWORD *)(v6 + 16LL * v66 + 216) != 0x46AF53170FA53099LL
         || *(_QWORD *)(v6 + 16LL * v66 + 224) != 0xF950B5A4049A7693uLL )
    {
      if ( ++v66 >= *(_DWORD *)(v6 + 96) )
        goto LABEL_115;
    }
    v65 = 1;
  }
LABEL_115:
  v94 = 0;
  v67 = v78;
  v78 = 0LL;
  v68 = *((_QWORD *)v7 + 19);
  *((_QWORD *)v7 + 19) = v67;
  if ( v68 )
    sub_1400B6010(v68);
  v69 = (_DWORD *)sub_140006470(v68);
  if ( *v69 > 4u && sub_14002813C((__int64)v69, 0x400000000001LL) )
  {
    v80 = v65;
    v87 = &v100;
    v88 = (void **)*v88;
    v86 = *v82;
    v85 = v6 + 120;
    v84 = (unsigned __int16 *)(v6 + 104);
    LODWORD(v81) = v98;
    LODWORD(v82) = v97;
    *(float *)&v83 = v96;
    LODWORD(v79) = *v91;
    v89 = (double)(int)**(_QWORD **)&v89 / 10000000.0;
    sub_140023608(
      v70,
      (int)&unk_1400D1AF8,
      (int)v92,
      v71,
      (__int64 *)&v90,
      (__int64)&v89,
      (__int64)&v79,
      (__int64)&v83,
      (__int64)&v82,
      (__int64)&v81,
      (__int64 *)&v84,
      &v85,
      (void **)&v86,
      (void **)&v88,
      (__int64 *)&v87,
      (__int64)&v80);
  }
  sub_140056130(&v78);
  v72 = v75;
  v75 = 0LL;
  if ( v72 )
    sub_140010010(v72);
  sub_140003238(&v76);
  v9 = 0;
LABEL_123:
  sub_140018FF0(v93);
  return (unsigned int)v9;
}
