/*
 * XREFs of sub_140085AA0 @ 0x140085AA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006C48 @ 0x140006C48 (sub_140006C48.c)
 *     sub_140006FD8 @ 0x140006FD8 (sub_140006FD8.c)
 *     sub_14000A760 @ 0x14000A760 (sub_14000A760.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000C2D0 @ 0x14000C2D0 (sub_14000C2D0.c)
 *     sub_14000C3C4 @ 0x14000C3C4 (sub_14000C3C4.c)
 *     sub_14000DD04 @ 0x14000DD04 (sub_14000DD04.c)
 *     sub_14000E81C @ 0x14000E81C (sub_14000E81C.c)
 *     sub_14000FFB0 @ 0x14000FFB0 (sub_14000FFB0.c)
 *     sub_14001EB30 @ 0x14001EB30 (sub_14001EB30.c)
 *     sub_140025C58 @ 0x140025C58 (sub_140025C58.c)
 *     sub_140026664 @ 0x140026664 (sub_140026664.c)
 *     sub_14002722C @ 0x14002722C (sub_14002722C.c)
 *     sub_14002C694 @ 0x14002C694 (sub_14002C694.c)
 *     sub_140030124 @ 0x140030124 (sub_140030124.c)
 *     sub_140047144 @ 0x140047144 (sub_140047144.c)
 *     sub_140047B38 @ 0x140047B38 (sub_140047B38.c)
 *     sub_140048384 @ 0x140048384 (sub_140048384.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400840C8 @ 0x1400840C8 (sub_1400840C8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140085AA0(__int64 a1, __int64 a2, __int64 a3, _QWORD **a4, unsigned int a5)
{
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
  __int64 v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int16 *v25; // rsi
  __int64 v26; // rcx
  unsigned __int16 *v27; // rdi
  int v28; // edx
  int v29; // edx
  _QWORD *v30; // rdx
  __int64 *v31; // rdx
  __int64 v33; // [rsp+20h] [rbp-558h]
  __int64 v34; // [rsp+28h] [rbp-550h]
  __int64 v35; // [rsp+30h] [rbp-548h]
  _QWORD *v36; // [rsp+40h] [rbp-538h] BYREF
  _QWORD *v37; // [rsp+48h] [rbp-530h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-528h]
  __int64 ***v39; // [rsp+58h] [rbp-520h] BYREF
  __int64 **v40; // [rsp+60h] [rbp-518h]
  __int64 v41; // [rsp+68h] [rbp-510h] BYREF
  _QWORD **v42; // [rsp+70h] [rbp-508h] BYREF
  __int64 v43; // [rsp+78h] [rbp-500h] BYREF
  __int64 v44; // [rsp+80h] [rbp-4F8h]
  __int64 v45; // [rsp+88h] [rbp-4F0h]
  int v46; // [rsp+90h] [rbp-4E8h]
  __int64 v47; // [rsp+98h] [rbp-4E0h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-4D8h]
  __int64 v49; // [rsp+A8h] [rbp-4D0h]
  int v50; // [rsp+B0h] [rbp-4C8h]
  __int64 v51; // [rsp+B8h] [rbp-4C0h]
  __int64 *v52; // [rsp+C0h] [rbp-4B8h] BYREF
  _QWORD **v53; // [rsp+D0h] [rbp-4A8h]
  char v54; // [rsp+D8h] [rbp-4A0h]
  _BYTE v55[56]; // [rsp+E0h] [rbp-498h] BYREF
  __int64 ****v56; // [rsp+118h] [rbp-460h]
  _QWORD **v57; // [rsp+120h] [rbp-458h]
  char v58; // [rsp+128h] [rbp-450h]
  wchar_t v59[256]; // [rsp+130h] [rbp-448h] BYREF
  wchar_t v60[256]; // [rsp+330h] [rbp-248h] BYREF
  _UNKNOWN *retaddr; // [rsp+578h] [rbp+0h]

  v53 = a4;
  v51 = a1;
  v42 = a4;
  if ( !a3 )
  {
    v8 = -2147024809;
    v9 = 1978;
LABEL_59:
    sub_14000C2A8((int)retaddr, v9, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v8);
    return v8;
  }
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v8 = -2147024890;
    v9 = 1979;
    goto LABEL_59;
  }
  if ( a5 > 1 )
  {
    v8 = -2147024809;
    v9 = 1980;
    goto LABEL_59;
  }
  sub_14000C2D0((__int64)v55, a1 + 88);
  v10 = sub_14000A760(a1, a2);
  v11 = v10;
  if ( v10 < 0 )
  {
    sub_14000C2A8((int)retaddr, 1986, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v10);
LABEL_57:
    sub_140030124((__int64)v55);
    return v11;
  }
  v40 = 0LL;
  sub_1400B6010(*(_QWORD *)(a1 + 792));
  v52 = 0LL;
  v37 = sub_140026664(v12, 0LL, a3, &v52);
  if ( !v37 )
  {
    v11 = -2005139430;
    sub_14000C2A8(
      (int)retaddr,
      1997,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      -2005139430);
    goto LABEL_55;
  }
  v13 = 0LL;
  v47 = 0LL;
  v14 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0;
  v15 = 0LL;
  v43 = 0LL;
  v16 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0;
  v17 = v37;
  v18 = v37[16];
  v41 = v18;
  v19 = 0LL;
  while ( v19 < v18 )
  {
    v36 = (_QWORD *)(*(_QWORD *)sub_14000FFB0(v17 + 15, v19) + 64LL);
    sub_140025C58(&v47, v19++, (unsigned __int64 *)&v36);
    v17 = v37;
    v14 = v48;
    v13 = v47;
    v18 = v41;
  }
  v20 = (_QWORD *)v17[20];
  v36 = v20;
  v21 = 0LL;
  while ( v21 < (unsigned __int64)v20 )
  {
    v41 = *(_QWORD *)sub_14000FFB0(v17 + 19, v21) + 64LL;
    sub_140025C58(&v43, v21++, (unsigned __int64 *)&v41);
    v17 = v37;
    v16 = v44;
    v15 = v43;
    v20 = v36;
  }
  v22 = (__int64)v53;
  if ( !v14 || !v16 )
  {
    sub_140047B38((__int64)"Audioeng.dll", 0, 0);
    v17 = v37;
  }
  HIDWORD(v33) = HIDWORD(v15);
  LODWORD(v36) = sub_140006FD8((__int64)v17);
  if ( (int)v36 < 0 )
  {
    if ( v14 && (v24 = *(_QWORD *)(*(_QWORD *)v13 + 24LL)) != 0 )
      v25 = (unsigned __int16 *)sub_1400B6010(v24);
    else
      v25 = 0LL;
    if ( v16 && (v26 = *(_QWORD *)(*(_QWORD *)v15 + 24LL)) != 0 )
      v27 = (unsigned __int16 *)sub_1400B6010(v26);
    else
      v27 = 0LL;
    memset(v60, 0, sizeof(v60));
    memset(v59, 0, sizeof(v59));
    if ( v25 )
    {
      if ( *v25 == 0xFFFE )
        v28 = *((_DWORD *)v25 + 6);
      else
        v28 = *v25;
      LODWORD(v33) = v25[1];
      sub_14001EB30(
        v60,
        256LL,
        (__int64)L"Input #0 {%dHz/%dch/%dbits/Format:%d}",
        *((unsigned int *)v25 + 1),
        v33,
        v25[7],
        v28);
    }
    else
    {
      sub_14001EB30(v60, 256LL, (__int64)L"Input #0 {null}");
    }
    if ( v27 )
    {
      if ( *v27 == 0xFFFE )
        v29 = *((_DWORD *)v27 + 6);
      else
        v29 = *v27;
      LODWORD(v35) = v29;
      LODWORD(v34) = v27[7];
      LODWORD(v33) = v27[1];
      sub_14001EB30(
        v59,
        256LL,
        (__int64)L"Output #0 {%dHz/%dch/%dbits/Format:%d}",
        *((unsigned int *)v27 + 1),
        v33,
        v34,
        v35);
    }
    else
    {
      sub_14001EB30(v59, 256LL, (__int64)L"Output #0 {null}");
    }
    v11 = (unsigned int)v36;
    sub_140048384(
      (int)retaddr,
      2061,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (unsigned int)v36,
      "LockForProcess failed:%ls, %ls",
      v60,
      v59);
    goto LABEL_54;
  }
  v53 = &v37;
  v54 = 1;
  v36 = 0LL;
  v30 = 0LL;
  if ( v22 )
  {
    v42 = 0LL;
    v30 = sub_140026664(v23, **(_QWORD ****)(a1 + 768), v22, &v42);
    v36 = v30;
    if ( !v30 )
    {
      v11 = -2005139430;
      sub_14000C2A8(
        (int)retaddr,
        2072,
        (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
        -2005139430);
      sub_140006C48((__int64)v37);
LABEL_54:
      sub_14002722C(&v43);
      sub_14002722C(&v47);
LABEL_55:
      if ( lpCriticalSection )
      {
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection = 0LL;
      }
      goto LABEL_57;
    }
  }
  v39 = **(__int64 *****)(a1 + 768);
  if ( v30 )
  {
    v31 = (__int64 *)sub_14002C694(v39, &v36);
    if ( a5 )
      sub_140047144((__int64 **)v39, (__int64)v31, (__int64 *)&v37);
    else
      sub_1400840C8(v39, v31, (__int64 *)&v37);
  }
  else if ( a5 )
  {
    sub_14000E81C(v39, &v37);
  }
  else
  {
    sub_14000DD04(v39, &v37);
  }
  v56 = &v39;
  v57 = &v37;
  v58 = 1;
  sub_14000E81C((_QWORD *)(a1 + 128), &v37);
  sub_14000C3C4(v40, v52);
  sub_14002722C(&v43);
  sub_14002722C(&v47);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  sub_140030124((__int64)v55);
  return 0LL;
}
