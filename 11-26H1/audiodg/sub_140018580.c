/*
 * XREFs of sub_140018580 @ 0x140018580
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400101D0 @ 0x1400101D0 (sub_1400101D0.c)
 *     sub_14001821C @ 0x14001821C (sub_14001821C.c)
 *     sub_140018A60 @ 0x140018A60 (sub_140018A60.c)
 *     sub_140018E74 @ 0x140018E74 (sub_140018E74.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140052748 @ 0x140052748 (sub_140052748.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140018580(__int64 a1, __int64 a2, char a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // edx
  int v11; // eax
  __int128 v12; // xmm6
  int v13; // eax
  __int128 v14; // xmm7
  void *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  int v20; // r9d
  int v21; // edx
  void *v22; // rcx
  void *v23; // rcx
  __int64 v24; // rbx
  int v25; // eax
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v27[2]; // [rsp+28h] [rbp-38h] BYREF
  char v28; // [rsp+38h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v30; // [rsp+90h] [rbp+30h] BYREF
  LPVOID pv; // [rsp+A8h] [rbp+48h] BYREF

  if ( *(_BYTE *)(a1 + 313) )
  {
    v8 = -2147418113;
    sub_14000C2A8((int)retaddr, 514, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", -2147418113);
    return v8;
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v26 = v6;
  v30 = 0LL;
  v7 = sub_1400B6010(a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    sub_14000C2A8((int)retaddr, 518, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v7);
    if ( v30 )
      sub_1400B6010(v30);
    goto LABEL_28;
  }
  if ( *(_QWORD *)(a1 + 304) )
  {
    v8 = -2005139410;
    v9 = 523;
LABEL_5:
    sub_14000C2A8((int)retaddr, v9, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v8);
LABEL_6:
    sub_140003238(&v30);
    sub_140018FF0(&v26);
    return v8;
  }
  if ( (a3 & 1) == 0 )
  {
    v24 = *(_QWORD *)(a1 + 232);
    if ( v24 < sub_1400B6010(v30) )
    {
      v8 = -2005139386;
      v9 = 528;
      goto LABEL_5;
    }
  }
  pv = 0LL;
  v27[0] = &pv;
  v27[1] = 0LL;
  v28 = 1;
  v8 = sub_1400B6010(v30);
  sub_140008C08(&pv, 0LL);
  if ( (v8 & 0x80000000) != 0 )
  {
    v20 = v8;
    v21 = 532;
    goto LABEL_25;
  }
  if ( !(unsigned int)sub_140018A60(*(_QWORD *)(a1 + 216), pv) )
  {
    v16 = sub_1400B6010(v30);
    if ( *(_QWORD *)(a1 + 272) && *(_QWORD *)(a1 + 288) == v16 && (unsigned int)sub_140018A60(*(_QWORD *)(a1 + 280), pv) )
      goto LABEL_12;
    v17 = sub_140018E74(a1);
    v8 = v17;
    if ( v17 < 0 )
    {
      v20 = v17;
      v21 = 540;
    }
    else
    {
      v18 = sub_1400B6010(v30);
      v19 = sub_1400101D0(a1, (__int64)pv, v18);
      v8 = v19;
      if ( v19 >= 0 )
        goto LABEL_12;
      v20 = v19;
      v21 = 542;
    }
LABEL_25:
    sub_14000C2A8((int)retaddr, v21, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v20);
LABEL_50:
    sub_140008C08(&pv, 0LL);
    goto LABEL_6;
  }
  v11 = sub_140018E74(a1);
  v8 = v11;
  if ( v11 < 0 )
  {
    sub_14000C2A8((int)retaddr, 547, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v11);
    v23 = pv;
    pv = 0LL;
    if ( v23 )
      CoTaskMemFree(v23);
    if ( v30 )
      sub_1400B6010(v30);
    goto LABEL_28;
  }
LABEL_12:
  v12 = *(_OWORD *)sub_140052748(v27, a1, &v30);
  v13 = sub_1400B6010(a1);
  v8 = v13;
  if ( v13 < 0 )
  {
    sub_14000C2A8((int)retaddr, 557, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v13);
    sub_1400B6010(v12);
    v22 = pv;
    pv = 0LL;
    if ( v22 )
      CoTaskMemFree(v22);
    if ( v30 )
      sub_1400B6010(v30);
LABEL_28:
    if ( v6 )
      LeaveCriticalSection(v6);
    return v8;
  }
  sub_1400B6010(v30);
  v14 = *(_OWORD *)sub_140052748(v27, &v30, a1);
  if ( (unsigned __int8)sub_1400B6010(a1) )
  {
    v25 = sub_1400B6010(v30);
    v8 = v25;
    if ( v25 < 0 )
    {
      sub_14000C2A8((int)retaddr, 571, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v25);
      sub_1400B6010(*(_QWORD *)v14);
      sub_1400B6010(v12);
      goto LABEL_50;
    }
  }
  sub_14001821C((__int64 *)(a1 + 304), a2);
  sub_140007CC0();
  v15 = pv;
  pv = 0LL;
  if ( v15 )
    CoTaskMemFree(v15);
  if ( v30 )
    sub_1400B6010(v30);
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
