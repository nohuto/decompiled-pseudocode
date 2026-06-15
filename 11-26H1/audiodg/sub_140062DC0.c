/*
 * XREFs of sub_140062DC0 @ 0x140062DC0
 * Callers:
 *     sub_140062D40 @ 0x140062D40 (sub_140062D40.c)
 * Callees:
 *     sub_14000218C @ 0x14000218C (sub_14000218C.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000DA94 @ 0x14000DA94 (sub_14000DA94.c)
 *     sub_14000DF30 @ 0x14000DF30 (sub_14000DF30.c)
 *     sub_1400176D0 @ 0x1400176D0 (sub_1400176D0.c)
 *     sub_14002813C @ 0x14002813C (sub_14002813C.c)
 *     sub_140062B40 @ 0x140062B40 (sub_140062B40.c)
 *     sub_140062B74 @ 0x140062B74 (sub_140062B74.c)
 *     sub_140062C14 @ 0x140062C14 (sub_140062C14.c)
 *     sub_140062D1C @ 0x140062D1C (sub_140062D1C.c)
 *     sub_140075610 @ 0x140075610 (sub_140075610.c)
 */

__int64 __fastcall sub_140062DC0(__int64 a1, unsigned int a2, int a3, __int64 a4, _QWORD *a5)
{
  unsigned int v8; // eax
  unsigned int v9; // r15d
  __int64 v10; // r13
  __int64 *v11; // r12
  unsigned int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // r8d
  _DWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r8d
  unsigned int v20; // ebx
  int v21; // edx
  __int64 *v22; // rax
  __int64 v23; // rcx
  int v24; // edx
  int v25; // r8d
  __int64 *v26; // rax
  __int64 v27; // rcx
  __int64 v29; // [rsp+40h] [rbp-30h] BYREF
  __int64 v30; // [rsp+48h] [rbp-28h] BYREF
  __int64 v31; // [rsp+50h] [rbp-20h] BYREF
  _DWORD v32[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v33; // [rsp+60h] [rbp-10h] BYREF
  __int64 v34; // [rsp+68h] [rbp-8h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int v36; // [rsp+B8h] [rbp+48h] BYREF
  int v37; // [rsp+C0h] [rbp+50h] BYREF

  v36 = a2;
  *a5 = 0LL;
  v8 = a3 - 1;
  if ( !a3 || (v8 & a3) != 0 )
  {
    v20 = -2147024809;
    v21 = 72;
  }
  else
  {
    v9 = v8 + a2;
    if ( v8 + a2 < a2 )
    {
      v20 = -2147024362;
      v21 = 76;
    }
    else
    {
      v10 = v8;
      v11 = (__int64 *)v32;
      v32[0] = a2;
      v12 = a2;
      v32[1] = v8 + a2;
      while ( 1 )
      {
        v13 = sub_14000DF30(v12, *(_QWORD *)(a1 + 16), a3);
        if ( !v13 )
        {
          sub_140075610(*(_QWORD *)(a1 + 16), 20 * v12);
          v13 = sub_14000DF30(v12, *(_QWORD *)(a1 + 16), v15);
        }
        v31 = v13;
        if ( !v13 )
          break;
        v30 = 0LL;
        if ( (v10 & v13) == 0 )
        {
          v34 = a1;
          v26 = sub_140062B74(&v29, &v34, &v31, &v31, &v36);
          sub_140062B40(&v30, v26);
          v27 = v29;
          if ( v29 )
          {
            v29 = 0LL;
            sub_1400176D0(v27);
          }
          if ( !v30 )
          {
            v24 = 92;
            goto LABEL_20;
          }
          goto LABEL_25;
        }
        if ( v12 == v9 )
        {
          v34 = a1;
          v33 = ~v10 & (v10 + v13);
          v22 = sub_140062B74(&v29, &v34, &v31, &v33, &v36);
          sub_140062B40(&v30, v22);
          v23 = v29;
          if ( v29 )
          {
            v29 = 0LL;
            sub_1400176D0(v23);
          }
          if ( !v30 )
          {
            v24 = 97;
LABEL_20:
            v20 = -2147024882;
            sub_14000C2A8(
              (int)retaddr,
              v24,
              (int)"avcore\\audiocore\\server\\audiodg\\exe\\cpumemorymanager.cpp",
              -2147024882);
            sub_140062D1C(&v30);
            sub_14000DA94(v31, *(_QWORD *)(a1 + 16), v25);
            return v20;
          }
LABEL_25:
          sub_140062C14(&v30, a5);
          sub_140062D1C(&v30);
          return 0LL;
        }
        v16 = (_DWORD *)sub_140006470(v14);
        if ( *v16 > 3u )
        {
          if ( sub_14002813C((__int64)v16, 0x2000LL) )
          {
            v33 = v31;
            v37 = a3;
            LODWORD(v29) = a2;
            sub_14000218C(v18, (int)&unk_1400D232E, v17, v18, (__int64)&v29, (__int64)&v37, (__int64)&v33);
          }
        }
        sub_140062D1C(&v30);
        sub_14000DA94(v31, *(_QWORD *)(a1 + 16), v19);
        v11 = (__int64 *)((char *)v11 + 4);
        if ( v11 == &v33 )
        {
          v20 = -2147418113;
          v21 = 116;
          goto LABEL_29;
        }
        v12 = *(_DWORD *)v11;
      }
      v20 = -2147024882;
      v21 = 84;
    }
  }
LABEL_29:
  sub_14000C2A8((int)retaddr, v21, (int)"avcore\\audiocore\\server\\audiodg\\exe\\cpumemorymanager.cpp", v20);
  return v20;
}
