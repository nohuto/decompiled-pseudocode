/*
 * XREFs of sub_14008E414 @ 0x14008E414
 * Callers:
 *     sub_14008D3E4 @ 0x14008D3E4 (sub_14008D3E4.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400118C0 @ 0x1400118C0 (sub_1400118C0.c)
 *     sub_140016858 @ 0x140016858 (sub_140016858.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400499AC @ 0x1400499AC (sub_1400499AC.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14004EF04 @ 0x14004EF04 (sub_14004EF04.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_14005DFF0 @ 0x14005DFF0 (sub_14005DFF0.c)
 *     sub_14008CC5C @ 0x14008CC5C (sub_14008CC5C.c)
 *     sub_14008CE38 @ 0x14008CE38 (sub_14008CE38.c)
 *     sub_14008D508 @ 0x14008D508 (sub_14008D508.c)
 *     sub_14008D61C @ 0x14008D61C (sub_14008D61C.c)
 *     sub_14008D83C @ 0x14008D83C (sub_14008D83C.c)
 *     sub_14008D860 @ 0x14008D860 (sub_14008D860.c)
 *     sub_14008D884 @ 0x14008D884 (sub_14008D884.c)
 *     sub_14008DEA0 @ 0x14008DEA0 (sub_14008DEA0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall sub_14008E414(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        _WORD *Src,
        __int64 a8)
{
  _WORD *v9; // r14
  HRESULT v10; // eax
  int v11; // ebx
  int v12; // eax
  HANDLE FileW; // rbx
  unsigned int v14; // edi
  __int64 v15; // rsi
  __int64 v16; // rdx
  _OWORD *v17; // r13
  __int64 v18; // rdx
  unsigned int v19; // r15d
  int v20; // edx
  _WORD *v21; // rsi
  __int64 *v22; // rdi
  NTSTATUS v23; // eax
  int v24; // eax
  int v25; // edx
  int v26; // edx
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // r8
  int v30; // eax
  _WORD *v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  LPCWSTR lpFileName; // [rsp+70h] [rbp-90h] BYREF
  _OWORD *v35; // [rsp+78h] [rbp-88h] BYREF
  void *v36; // [rsp+80h] [rbp-80h] BYREF
  int v37; // [rsp+88h] [rbp-78h] BYREF
  int v38; // [rsp+8Ch] [rbp-74h]
  __int64 v39; // [rsp+90h] [rbp-70h] BYREF
  size_t Size; // [rsp+98h] [rbp-68h] BYREF
  LPVOID ppv; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-58h]
  __int64 v43; // [rsp+B0h] [rbp-50h]
  void *v44; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v46; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int16 v47; // [rsp+D0h] [rbp-30h] BYREF
  int v48; // [rsp+D2h] [rbp-2Eh]
  __int16 v49; // [rsp+D6h] [rbp-2Ah]
  _WORD *v50; // [rsp+D8h] [rbp-28h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-20h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+110h] [rbp+10h] BYREF
  __int128 v53; // [rsp+120h] [rbp+20h] BYREF
  __int64 v54; // [rsp+130h] [rbp+30h]
  int v55; // [rsp+138h] [rbp+38h]
  int v56; // [rsp+13Ch] [rbp+3Ch]
  __int128 v57; // [rsp+140h] [rbp+40h] BYREF
  __int128 v58; // [rsp+150h] [rbp+50h]
  __int64 v59; // [rsp+160h] [rbp+60h]
  __int128 v60; // [rsp+168h] [rbp+68h]
  __int128 v61; // [rsp+178h] [rbp+78h]
  __int64 v62; // [rsp+188h] [rbp+88h]
  __int64 v63; // [rsp+190h] [rbp+90h]
  __int64 v64; // [rsp+198h] [rbp+98h] BYREF
  __int64 v65; // [rsp+1A0h] [rbp+A0h]
  _BYTE v66[64]; // [rsp+1A8h] [rbp+A8h] BYREF
  _UNKNOWN *retaddr; // [rsp+248h] [rbp+148h]

  v42 = a3;
  v43 = a2;
  v9 = Src;
  v46 = a2;
  v45 = a4;
  v44 = Src;
  v38 = 2;
  ppv = 0LL;
  v10 = CoCreateInstance(&rclsid, 0LL, 0x17u, &riid, &ppv);
  v11 = v10;
  if ( v10 < 0 )
  {
    sub_14000C2A8(
      (int)retaddr,
      227,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
      v10);
LABEL_47:
    sub_140003238((__int64 *)&ppv);
    return (unsigned int)v11;
  }
  v33 = 0LL;
  v12 = sub_1400B6010(ppv);
  v11 = v12;
  if ( v12 < 0 )
  {
    sub_14000C2A8(
      (int)retaddr,
      230,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
      v12);
LABEL_46:
    sub_140003238(&v33);
    goto LABEL_47;
  }
  lpFileName = 0LL;
  v37 = 0;
  sub_1400118C0((void **)&lpFileName, 0LL);
  sub_14008DEA0(v33, (__int64)v9, &lpFileName, &v37);
  if ( !lpFileName )
  {
    v11 = -2147023728;
    sub_14000C2A8(
      (int)retaddr,
      235,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
      -2147023728);
LABEL_45:
    sub_14001D96C((void **)&lpFileName);
    goto LABEL_46;
  }
  FileW = CreateFileW(lpFileName, 0xC0000000, 0, 0LL, 3u, 0x40000080u, 0LL);
  v36 = FileW;
  v14 = (unsigned __int16)v9[8] + 82;
  v15 = v14 + 72LL;
  Size = v15;
  v17 = (_OWORD *)sub_1400499AC(v15, v16);
  v35 = v17;
  memset(v17, 0, v15);
  *v17 = xmmword_1400CC2A0;
  *((_QWORD *)v17 + 2) = 1LL;
  *(_OWORD *)((char *)v17 + 24) = xmmword_1400CC290;
  *((_QWORD *)v17 + 5) = 0LL;
  *((_DWORD *)v17 + 12) = v37;
  *((_QWORD *)v17 + 7) = 0LL;
  *((_DWORD *)v17 + 16) = 0x40000000;
  *((_DWORD *)v17 + 17) = 0x40000000;
  *((_QWORD *)v17 + 9) = v14;
  *((_DWORD *)v17 + 21) = 0;
  *(_OWORD *)((char *)v17 + 88) = xmmword_1400C6A30;
  *(_OWORD *)((char *)v17 + 120) = xmmword_1400C6A40;
  memcpy((char *)v17 + 136, v9, (unsigned __int16)v9[8] + 18LL);
  if ( *v9 == 0xFFFE )
  {
    *(_OWORD *)((char *)v17 + 104) = *(_OWORD *)(v9 + 12);
  }
  else
  {
    *(_OWORD *)((char *)v17 + 104) = xmmword_1400C57E0;
    *((_DWORD *)v17 + 26) = (unsigned __int16)*v9;
  }
  if ( v14 + 150 < v14 + 72 )
  {
    v20 = 301;
    goto LABEL_43;
  }
  if ( v14 == -151 )
  {
    v20 = 306;
    goto LABEL_43;
  }
  v19 = (v14 + 151) & 0xFFFFFFFE;
  if ( v19 > 0xFFFF )
  {
    v20 = 319;
LABEL_43:
    v11 = -2147024809;
    sub_14000C2A8(
      (int)retaddr,
      v20,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
      -2147024809);
    goto LABEL_44;
  }
  v21 = (_WORD *)sub_1400499AC(v19, v18);
  v32 = v21;
  memset(v21, 0, v19);
  o_wcscpy_s(v21, v19, L"{146F1A80-4791-11D0-A5D6-28DB04C10000}");
  v21[38] = 92;
  memcpy(v21 + 39, v17, Size);
  v49 = 0;
  v50 = v21;
  v47 = (v14 + 151) & 0xFFFE;
  v48 = v47;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  ObjectAttributes.RootDirectory = FileW;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v47;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  IoStatusBlock = 0LL;
  v22 = a1 + 8;
  sub_140016858((void **)a1 + 8, 0LL);
  v23 = NtCreateFile((PHANDLE)a1 + 8, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 0, 1u, 0, 0LL, 0);
  if ( v23 < 0 )
  {
    v11 = sub_14004EF04(
            (int)retaddr,
            364,
            (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
            (unsigned int)v23);
LABEL_16:
    sub_14008D83C((__int64 *)&v32);
LABEL_44:
    sub_14008D860((__int64 *)&v35);
    sub_14008D884(&v36);
    goto LABEL_45;
  }
  v39 = 0LL;
  v24 = sub_1400B6010(v33);
  v11 = v24;
  if ( v24 < 0 )
  {
    v25 = 367;
LABEL_19:
    sub_14000C2A8(
      (int)retaddr,
      v25,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
      v24);
    sub_140003238(&v39);
    goto LABEL_16;
  }
  v24 = sub_1400B6010(v39);
  v11 = v24;
  if ( v24 < 0 )
  {
    v25 = 368;
    goto LABEL_19;
  }
  sub_140003238(&v39);
  sub_14008D83C((__int64 *)&v32);
  sub_14008D860((__int64 *)&v35);
  sub_14008D884(&v36);
  sub_14001D96C((void **)&lpFileName);
  sub_140003238(&v33);
  sub_140003238((__int64 *)&ppv);
  if ( v38 )
  {
    if ( v38 != 1 )
      return 0LL;
    v53 = 0LL;
    v56 = 0;
    v57 = 0LL;
    v58 = 0LL;
    v59 = 0LL;
    v60 = 0LL;
    v61 = 0LL;
    v64 = 0LL;
    v65 = 0LL;
    memset(v66, 0, sizeof(v66));
    v55 = 5;
    LODWORD(v53) = 3;
    v54 = 200LL;
    if ( v9[8] > 0x36u )
    {
      v26 = 391;
      goto LABEL_25;
    }
    memcpy(&v57, v9, (unsigned __int16)v9[8] + 18LL);
    v62 = *v22;
    v63 = a8;
    v11 = sub_14008CC5C(a1, v43, v42, (__int64)&v53);
    if ( v11 < 0 )
    {
      v26 = 395;
      goto LABEL_26;
    }
    Size = (size_t)&v64;
    v32 = 0LL;
    v30 = sub_14008D508(&v32, &v46, v29, &v45, &a5, (__int64 *)&Size, &v44, &a8);
    v11 = v30;
    if ( v30 < 0 )
    {
      sub_14000C2A8(
        (int)retaddr,
        398,
        (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
        v30);
      sub_140056130((__int64 *)&v32);
      return (unsigned int)v11;
    }
LABEL_39:
    sub_14005DFF0(a1 + 9, (__int64)v32);
    sub_140056130((__int64 *)&v32);
    return 0LL;
  }
  v53 = 0LL;
  v56 = 0;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  memset(v66, 0, sizeof(v66));
  v55 = 4;
  LODWORD(v53) = 3;
  v54 = 200LL;
  if ( v9[8] <= 0x36u )
  {
    memcpy(&v57, v9, (unsigned __int16)v9[8] + 18LL);
    v62 = *v22;
    v63 = a8;
    v11 = sub_14008CE38(a1, v43, v42, (__int64)&v53);
    if ( v11 < 0 )
    {
      v26 = 380;
      goto LABEL_26;
    }
    Size = (size_t)&v64;
    v32 = 0LL;
    v28 = sub_14008D61C(&v32, &v46, v27, &v45, &a5, (__int64 *)&Size, &v44, &a8);
    v11 = v28;
    if ( v28 < 0 )
    {
      sub_14000C2A8(
        (int)retaddr,
        383,
        (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
        v28);
      sub_140056130((__int64 *)&v32);
      return (unsigned int)v11;
    }
    goto LABEL_39;
  }
  v26 = 376;
LABEL_25:
  v11 = -2147024774;
LABEL_26:
  sub_14000C2A8(
    (int)retaddr,
    v26,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
    v11);
  return (unsigned int)v11;
}
