/*
 * XREFs of sub_140056C60 @ 0x140056C60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400561E4 @ 0x1400561E4 (sub_1400561E4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140056C60(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  _OWORD *v4; // rsi
  _OWORD *v5; // r14
  unsigned int v7; // ebx
  __int64 v8; // rdi
  int v9; // eax
  int v10; // edx
  int v11; // eax
  _OWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  _OWORD *v15; // rax
  __int64 v17; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-D8h] BYREF
  char v19; // [rsp+40h] [rbp-C8h]
  _BYTE v20[304]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v21[304]; // [rsp+178h] [rbp+70h] BYREF
  _UNKNOWN *retaddr; // [rsp+2C0h] [rbp+1B8h]
  __int64 v23; // [rsp+2C8h] [rbp+1C0h] BYREF

  v4 = a4;
  v5 = a3;
  if ( *(_QWORD *)(a1 + 152) )
  {
    *a3 = 0;
    *a4 = 0;
    v17 = 0LL;
    v23 = 0LL;
    v8 = *(_QWORD *)(a1 + 152);
    sub_140019444(&v23);
    sub_140019444(&v17);
    v9 = sub_1400B6010(v8);
    v7 = v9;
    if ( v9 >= 0 )
    {
      memset(v20, 0, 0x128uLL);
      if ( !v17 || (v9 = sub_1400B6010(v17), v7 = v9, v9 >= 0) )
      {
        v18[0] = a1;
        v18[1] = v20;
        memset(v21, 0, 0x128uLL);
        if ( v23 && (v11 = sub_1400B6010(v23), v7 = v11, v11 < 0) )
        {
          sub_14000C2A8((int)retaddr, 583, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v11);
          v19 = 0;
          sub_1400561E4((__int64)v18);
        }
        else
        {
          v12 = v20;
          v13 = 2LL;
          v14 = 2LL;
          do
          {
            *v5 = *v12;
            v5[1] = v12[1];
            v5[2] = v12[2];
            v5[3] = v12[3];
            v5[4] = v12[4];
            v5[5] = v12[5];
            v5[6] = v12[6];
            v5 += 8;
            *(v5 - 1) = v12[7];
            v12 += 8;
            --v14;
          }
          while ( v14 );
          *v5 = *v12;
          v5[1] = v12[1];
          *((_QWORD *)v5 + 4) = *((_QWORD *)v12 + 4);
          v15 = v21;
          do
          {
            *v4 = *v15;
            v4[1] = v15[1];
            v4[2] = v15[2];
            v4[3] = v15[3];
            v4[4] = v15[4];
            v4[5] = v15[5];
            v4[6] = v15[6];
            v4 += 8;
            *(v4 - 1) = v15[7];
            v15 += 8;
            --v13;
          }
          while ( v13 );
          *v4 = *v15;
          v4[1] = v15[1];
          *((_QWORD *)v4 + 4) = *((_QWORD *)v15 + 4);
          v7 = 0;
        }
        goto LABEL_17;
      }
      v10 = 572;
    }
    else
    {
      v10 = 566;
    }
    sub_14000C2A8((int)retaddr, v10, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v9);
LABEL_17:
    sub_140003238(&v23);
    sub_140003238(&v17);
    return v7;
  }
  v7 = -2005139437;
  sub_14000C2A8((int)retaddr, 560, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", -2005139437);
  return v7;
}
