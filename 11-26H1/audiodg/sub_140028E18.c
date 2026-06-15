/*
 * XREFs of sub_140028E18 @ 0x140028E18
 * Callers:
 *     sub_140040498 @ 0x140040498 (sub_140040498.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006BCC @ 0x140006BCC (sub_140006BCC.c)
 *     sub_1400083DC @ 0x1400083DC (sub_1400083DC.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140029510 @ 0x140029510 (sub_140029510.c)
 *     sub_140029590 @ 0x140029590 (sub_140029590.c)
 *     sub_14002A170 @ 0x14002A170 (sub_14002A170.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_140028E18(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, int a6)
{
  unsigned __int16 *v9; // rax
  int v10; // ebx
  _QWORD *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rcx
  signed __int32 v14; // edi
  int v15; // eax
  __int64 v16; // rbx
  int v17; // eax
  unsigned int v18; // r15d
  int v19; // eax
  unsigned int v20; // r14d
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // edx
  int v26; // eax
  __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  void **v31; // [rsp+50h] [rbp-B0h] BYREF
  void *v32; // [rsp+58h] [rbp-A8h] BYREF
  char v33; // [rsp+60h] [rbp-A0h]
  __int64 v34; // [rsp+68h] [rbp-98h]
  __int64 v35; // [rsp+70h] [rbp-90h]
  int v36; // [rsp+78h] [rbp-88h]
  int v37; // [rsp+7Ch] [rbp-84h]
  __int64 v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]
  _OWORD v40[6]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v41[80]; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v42[6]; // [rsp+140h] [rbp+40h] BYREF
  _UNKNOWN *retaddr; // [rsp+1E8h] [rbp+E8h]

  v31 = (void **)(a1 + 16);
  v32 = 0LL;
  v33 = 1;
  v9 = (unsigned __int16 *)sub_1400B6010(a5);
  v10 = sub_140006BCC(v9, &v32);
  if ( v33 )
    sub_140008C08(v31, v32);
  if ( v10 < 0 )
  {
    v25 = 64;
LABEL_31:
    sub_14000C2A8((int)retaddr, v25, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp", v10);
    return (unsigned int)v10;
  }
  v11 = (_QWORD *)(a1 + 24);
  v12 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( v12 )
    sub_1400B6010(v12);
  v10 = sub_1400B6010(a4);
  if ( v10 < 0 )
  {
    v25 = 65;
    goto LABEL_31;
  }
  v13 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v13 )
    sub_1400B6010(v13);
  v10 = sub_1400B6010(a4);
  if ( v10 < 0 )
  {
    v25 = 66;
    goto LABEL_31;
  }
  do
    v14 = _InterlockedIncrement(&dword_1400E84B4);
  while ( !v14 );
  memset(v40, 0, 0x58uLL);
  v10 = sub_140029590(a3, a4, v40);
  if ( v10 < 0 )
  {
    v25 = 73;
    goto LABEL_31;
  }
  v31 = (void **)v40;
  LOBYTE(v32) = 1;
  v34 = 0LL;
  v37 = 0;
  v39 = 1094927443LL;
  v35 = 0LL;
  v36 = a6;
  v38 = a5;
  v28 = 0LL;
  if ( (int)sub_1400B6010(a4) < 0 )
  {
    v22 = sub_1400B6010(*v11);
    v10 = v22;
    if ( v22 >= 0 )
    {
LABEL_23:
      *(_DWORD *)(a1 + 40) = v14;
      v23 = sub_1400083DC(a4);
      if ( v23 == 1 )
      {
        v24 = 1094930515;
      }
      else
      {
        v24 = 1094930505;
        if ( v23 == 2 )
          v24 = 1094930482;
      }
      *(_DWORD *)(a1 + 44) = v24;
      if ( v28 )
        sub_1400B6010(v28);
      LOBYTE(v32) = 0;
      sub_140029510(&v31);
      return 0LL;
    }
    sub_14000C2A8((int)retaddr, 134, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp", v22);
    sub_140003238(&v28);
    if ( *((_QWORD *)&v40[1] + 1) )
    {
      sub_1400B6010(*((_QWORD *)&v40[1] + 1));
      *((_QWORD *)&v40[1] + 1) = 0LL;
    }
    if ( *(_QWORD *)&v40[2] )
    {
      sub_1400B6010(*(_QWORD *)&v40[2]);
      *(_QWORD *)&v40[2] = 0LL;
    }
    if ( *(_QWORD *)&v40[3] )
      sub_1400B6010(*(_QWORD *)&v40[3]);
    return (unsigned int)v10;
  }
  memset(&v41[4], 0, 0x4CuLL);
  *(_OWORD *)v41 = v40[0];
  *(_DWORD *)&v41[16] = v40[1];
  *(_DWORD *)v41 = 80;
  *(_QWORD *)&v41[24] = *((_QWORD *)&v40[1] + 1);
  *(_OWORD *)&v41[40] = v40[3];
  *(_OWORD *)&v41[56] = v40[4];
  *(_DWORD *)&v41[72] = v40[5];
  v29 = 0LL;
  v15 = sub_14002A170(&v29);
  v10 = v15;
  if ( v15 < 0 )
  {
    sub_14000C2A8((int)retaddr, 103, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp", v15);
    sub_140003238(&v29);
    sub_140003238(&v28);
    if ( *((_QWORD *)&v40[1] + 1) )
    {
      sub_1400B6010(*((_QWORD *)&v40[1] + 1));
      *((_QWORD *)&v40[1] + 1) = 0LL;
    }
    if ( *(_QWORD *)&v40[2] )
    {
      sub_1400B6010(*(_QWORD *)&v40[2]);
      *(_QWORD *)&v40[2] = 0LL;
    }
    if ( *(_QWORD *)&v40[3] )
      sub_1400B6010(*(_QWORD *)&v40[3]);
    return (unsigned int)v10;
  }
  v16 = v29;
  v27 = 0LL;
  v17 = sub_1400B6010(v29);
  v18 = v17;
  if ( v17 >= 0 )
  {
    *(_QWORD *)&v41[32] = v27;
    v30 = 0LL;
    if ( (int)sub_1400B6010(a4) < 0 )
    {
      v19 = sub_1400B6010(*v11);
      v20 = v19;
      if ( v19 < 0 )
      {
        sub_14000C2A8((int)retaddr, 129, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp", v19);
        if ( v30 )
          sub_1400B6010(v30);
        if ( v16 )
          sub_1400B6010(v16);
        LOBYTE(v32) = 0;
        sub_140029510(&v31);
        return v20;
      }
      goto LABEL_63;
    }
    memset((char *)v42 + 4, 0, 0x54uLL);
    v42[0] = *(_OWORD *)v41;
    v42[1] = *(_OWORD *)&v41[16];
    v42[2] = *(_OWORD *)&v41[32];
    v42[3] = *(_OWORD *)&v41[48];
    v42[4] = *(_OWORD *)&v41[64];
    LODWORD(v42[5]) = *a3 == 3;
    v26 = sub_1400B6010(*v11);
    v10 = v26;
    if ( v26 >= 0 )
    {
LABEL_63:
      sub_140003238(&v30);
      sub_140003238(&v27);
      sub_140003238(&v29);
      goto LABEL_23;
    }
    sub_14000C2A8((int)retaddr, 125, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp", v26);
    sub_140003238(&v30);
    sub_140003238(&v27);
    sub_140003238(&v29);
    sub_140003238(&v28);
    if ( *((_QWORD *)&v40[1] + 1) )
    {
      sub_1400B6010(*((_QWORD *)&v40[1] + 1));
      *((_QWORD *)&v40[1] + 1) = 0LL;
    }
    if ( *(_QWORD *)&v40[2] )
    {
      sub_1400B6010(*(_QWORD *)&v40[2]);
      *(_QWORD *)&v40[2] = 0LL;
    }
    if ( *(_QWORD *)&v40[3] )
      sub_1400B6010(*(_QWORD *)&v40[3]);
    return (unsigned int)v10;
  }
  sub_14000C2A8((int)retaddr, 106, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp", v17);
  sub_140003238(&v27);
  sub_140003238(&v29);
  sub_140003238(&v28);
  if ( *((_QWORD *)&v40[1] + 1) )
  {
    sub_1400B6010(*((_QWORD *)&v40[1] + 1));
    *((_QWORD *)&v40[1] + 1) = 0LL;
  }
  if ( *(_QWORD *)&v40[2] )
  {
    sub_1400B6010(*(_QWORD *)&v40[2]);
    *(_QWORD *)&v40[2] = 0LL;
  }
  if ( *(_QWORD *)&v40[3] )
    sub_1400B6010(*(_QWORD *)&v40[3]);
  return v18;
}
