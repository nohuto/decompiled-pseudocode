/*
 * XREFs of sub_140070EE0 @ 0x140070EE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140027630 @ 0x140027630 (sub_140027630.c)
 *     sub_140043B74 @ 0x140043B74 (sub_140043B74.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005A010 @ 0x14005A010 (sub_14005A010.c)
 *     sub_14006EBB4 @ 0x14006EBB4 (sub_14006EBB4.c)
 *     sub_140072820 @ 0x140072820 (sub_140072820.c)
 *     sub_1400B501C @ 0x1400B501C (sub_1400B501C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140070EE0(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int128 v9; // xmm0
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rbx
  int v17; // eax
  unsigned int v18; // r14d
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v24; // eax
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  struct _RTL_CRITICAL_SECTION *v53; // [rsp+30h] [rbp-48h] BYREF
  __int64 v54[2]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v55; // [rsp+48h] [rbp-30h]
  __int128 v56; // [rsp+58h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+40h]

  v9 = *(_OWORD *)(a2 + 148);
  *(_OWORD *)(a1 + 104) = v9;
  v55 = v9;
  v56 = v9;
  EtwEventActivityIdControl(4LL, &v56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v53 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  *(_DWORD *)(a1 + 80) = a5;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 136);
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14005A010(*((_QWORD *)off_1400E73D8 + 2), 0xAu, (__int64)&unk_1400CA7E8);
  }
  v10 = sub_140043B74(a1, a2);
  v11 = v10;
  if ( v10 == -2005139389 || (unsigned int)(v10 + 2005139364) <= 4 )
  {
    v11 = -2005139370;
    sub_14000C2A8(
      (int)retaddr,
      71,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
      -2005139370);
    sub_140018FF0(&v53);
    EtwEventActivityIdControl(4LL, &v56);
    sub_140027630(a1);
    LOBYTE(v49) = 10;
    sub_1400B501C(v51, v50, v52, v49);
    sub_140007CC0();
    return v11;
  }
  if ( v10 < 0 )
  {
    sub_14000C2A8(
      (int)retaddr,
      72,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
      v10);
    sub_140018FF0(&v53);
    EtwEventActivityIdControl(4LL, &v56);
    sub_140027630(a1);
    LOBYTE(v12) = 10;
    sub_1400B501C(v14, v13, v15, v12);
    sub_140007CC0();
    return v11;
  }
  v16 = (_QWORD *)(a1 + 88);
  v17 = sub_1400B6010(*(_QWORD *)(a1 + 88));
  v18 = v17;
  if ( v17 < 0 )
  {
    sub_14000C2A8(
      (int)retaddr,
      76,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
      v17);
    sub_140018FF0(&v53);
    EtwEventActivityIdControl(4LL, &v56);
    sub_140027630(a1);
    LOBYTE(v19) = 10;
    sub_1400B501C(v21, v20, v22, v19);
    sub_140007CC0();
    return v18;
  }
  v24 = sub_1400B6010(*v16);
  v18 = v24;
  if ( v24 < 0 )
  {
    sub_14000C2A8(
      (int)retaddr,
      78,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
      v24);
    sub_140018FF0(&v53);
    EtwEventActivityIdControl(4LL, &v56);
    sub_140027630(a1);
    LOBYTE(v25) = 10;
    sub_1400B501C(v27, v26, v28, v25);
    sub_140007CC0();
    return v18;
  }
  v29 = sub_1400B6010(*v16);
  v18 = v29;
  if ( v29 < 0 )
  {
    sub_14000C2A8(
      (int)retaddr,
      80,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
      v29);
    sub_140018FF0(&v53);
    EtwEventActivityIdControl(4LL, &v56);
    sub_140027630(a1);
    LOBYTE(v30) = 10;
    sub_1400B501C(v32, v31, v33, v30);
    sub_140007CC0();
    return v18;
  }
  v34 = sub_14006EBB4((_QWORD *)(a1 + 88));
  v18 = v34;
  if ( v34 < 0 )
  {
    sub_14000C2A8(
      (int)retaddr,
      82,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
      v34);
    sub_140018FF0(&v53);
    EtwEventActivityIdControl(4LL, &v56);
    sub_140027630(a1);
    LOBYTE(v35) = 10;
    sub_1400B501C(v37, v36, v38, v35);
    sub_140007CC0();
    return v18;
  }
  v39 = *v16;
  *v16 = 0LL;
  *(_QWORD *)(a2 + 64) = v39;
  v40 = sub_140072820(a1, a2, a3, a4, a5);
  v11 = v40;
  if ( v40 >= 0 )
  {
    v54[0] = *(_QWORD *)(a2 + 64);
    sub_140003238(v54);
    sub_140018FF0(&v53);
    EtwEventActivityIdControl(4LL, &v56);
    LOBYTE(v45) = 10;
    sub_1400B501C(v47, v46, v48, v45);
    sub_140007CC0();
    return 0LL;
  }
  sub_14000C2A8(
    (int)retaddr,
    95,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
    v40);
  v54[0] = *(_QWORD *)(a2 + 64);
  sub_140003238(v54);
  sub_140018FF0(&v53);
  EtwEventActivityIdControl(4LL, &v56);
  sub_140027630(a1);
  LOBYTE(v41) = 10;
  sub_1400B501C(v43, v42, v44, v41);
  sub_140007CC0();
  return v11;
}
