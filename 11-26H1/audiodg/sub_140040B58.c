/*
 * XREFs of sub_140040B58 @ 0x140040B58
 * Callers:
 *     sub_140069748 @ 0x140069748 (sub_140069748.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140004C9C @ 0x140004C9C (sub_140004C9C.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_14004B6D4 @ 0x14004B6D4 (sub_14004B6D4.c)
 *     sub_140064A88 @ 0x140064A88 (sub_140064A88.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_140040B58(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // esi
  __int64 *v11; // rax
  char v12; // bl
  __int64 v13; // rdi
  __int64 *v14; // rax
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rbx
  BOOL v18; // ecx
  __int64 v20; // [rsp+20h] [rbp-40h] BYREF
  __int64 v21; // [rsp+28h] [rbp-38h] BYREF
  __int64 v22; // [rsp+30h] [rbp-30h] BYREF
  __int64 v23; // [rsp+38h] [rbp-28h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h] BYREF
  __int64 v26[2]; // [rsp+50h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v28; // [rsp+98h] [rbp+38h] BYREF

  LODWORD(v28) = 0;
  v22 = 0LL;
  v7 = sub_1400B6010(a2);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v21 = 0LL;
    v9 = sub_14004B6D4(a3, (unsigned int)*(unsigned __int16 *)(a3 + 16) + 18, &v21);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v28 = 0LL;
      v10 = sub_1400B6010(v22);
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v14 = (__int64 *)sub_140064A88(&v25, &v28);
          v13 = *v14;
          v12 = 10;
        }
        else
        {
          v14 = &v24;
          v13 = 0LL;
          v12 = 12;
        }
        *v14 = 0LL;
        v11 = &v23;
      }
      else
      {
        v11 = (__int64 *)sub_140064A88(v26, &v21);
        v12 = 1;
        v13 = *v11;
      }
      *v11 = 0LL;
      v20 = v13;
      if ( (v12 & 8) != 0 )
      {
        v12 &= ~8u;
        sub_140003238(&v23);
      }
      if ( (v12 & 4) != 0 )
      {
        v12 &= ~4u;
        sub_140003238(&v24);
      }
      if ( (v12 & 2) != 0 )
      {
        v12 &= ~2u;
        sub_140003238(&v25);
      }
      if ( (v12 & 1) != 0 )
        sub_140003238(v26);
      if ( v10 >= 0 )
      {
        if ( v13 )
        {
          v16 = sub_140049338(72LL, &unk_1400C75FC);
          v17 = v16;
          v26[0] = v16;
          if ( v16 )
          {
            v18 = *(_DWORD *)a1 != 0;
            *(_QWORD *)(v16 + 8) = 0LL;
            *(_QWORD *)(v16 + 16) = 0LL;
            *(_DWORD *)(v16 + 24) = v18;
            *(_QWORD *)(v16 + 32) = 0LL;
            *(_DWORD *)(v16 + 40) = 5;
            *(_QWORD *)(v16 + 48) = 0LL;
            *(_DWORD *)(v16 + 56) = 0;
            *(_QWORD *)(v16 + 64) = 0LL;
            *(_QWORD *)v16 = off_1400BC750;
            *(_DWORD *)(v16 + 60) = *(_DWORD *)a1;
            sub_140004C9C((_QWORD *)(v16 + 48), v13);
            sub_140004C9C((_QWORD *)(v17 + 8), v13);
            sub_140004C9C((_QWORD *)(v17 + 16), v13);
            *(_DWORD *)(v17 + 56) = *(_DWORD *)(a1 + 16);
            *(_QWORD *)(v17 + 64) = *(_QWORD *)(a1 + 24);
            *a4 = v17;
            sub_140003238(&v20);
            sub_140003238(&v28);
            v8 = 0;
            goto LABEL_27;
          }
          v8 = -2147024882;
          v15 = 856;
        }
        else
        {
          v8 = -2005073917;
          v15 = 851;
        }
        sub_14000C2A8((int)retaddr, v15, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", v8);
        sub_140003238(&v20);
        sub_140003238(&v28);
        goto LABEL_27;
      }
      sub_14000C2A8((int)retaddr, 850, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", v10);
      sub_140003238(&v20);
      sub_140003238(&v28);
      v8 = v10;
    }
    else
    {
      sub_14000C2A8((int)retaddr, 844, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", v9);
    }
LABEL_27:
    sub_140003238(&v21);
    sub_140003238(&v22);
    return v8;
  }
  sub_14000C2A8((int)retaddr, 841, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", v7);
  return v8;
}
