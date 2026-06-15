/*
 * XREFs of sub_140010230 @ 0x140010230
 * Callers:
 *     sub_1400101D0 @ 0x1400101D0 (sub_1400101D0.c)
 * Callees:
 *     sub_140004140 @ 0x140004140 (sub_140004140.c)
 *     sub_140006BCC @ 0x140006BCC (sub_140006BCC.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000FFE4 @ 0x14000FFE4 (sub_14000FFE4.c)
 *     sub_140010010 @ 0x140010010 (sub_140010010.c)
 *     sub_1400100C4 @ 0x1400100C4 (sub_1400100C4.c)
 *     sub_140010BA4 @ 0x140010BA4 (sub_140010BA4.c)
 *     sub_14002C780 @ 0x14002C780 (sub_14002C780.c)
 *     sub_140033E34 @ 0x140033E34 (sub_140033E34.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140010230(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4)
{
  int v8; // eax
  int v9; // ebx
  __int64 v11; // rdi
  int v12; // eax
  int v13; // edx
  void *v14; // rdx
  void *v15; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+28h] [rbp-28h] BYREF
  void **v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  char v19; // [rsp+40h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+18h]

  sub_1400100C4(a1);
  v16 = 0LL;
  v8 = sub_140010BA4(a2, a4, &v16);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = v16;
    v12 = sub_14002C780(v16);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v12 = sub_140004140(v11, 0LL);
      v9 = v12;
      if ( v12 >= 0 )
      {
        v15 = 0LL;
        v17 = &v15;
        v18 = 0LL;
        v19 = 1;
        v9 = sub_140006BCC(a3, &v18);
        sub_140033E34(&v17);
        if ( v9 >= 0 )
        {
          v16 = 0LL;
          *(_QWORD *)a1 = v11;
          v14 = v15;
          v15 = 0LL;
          sub_140008C08((void **)(a1 + 8), v14);
          *(_QWORD *)(a1 + 16) = *(_QWORD *)(a4 + 24);
          *(_BYTE *)(a1 + 24) = 0;
          sub_140008C08(&v15, 0LL);
          v9 = 0;
        }
        else
        {
          sub_14000C2A8((int)retaddr, 51, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v9);
          sub_140008C08(&v15, 0LL);
        }
        goto LABEL_13;
      }
      v13 = 48;
    }
    else
    {
      v13 = 47;
    }
    sub_14000C2A8((int)retaddr, v13, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v12);
LABEL_13:
    sub_14000FFE4(&v16);
    return (unsigned int)v9;
  }
  sub_14000C2A8((int)retaddr, 46, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v8);
  if ( v16 )
    sub_140010010(v16);
  return (unsigned int)v9;
}
