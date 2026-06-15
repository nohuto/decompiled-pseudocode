/*
 * XREFs of sub_140093730 @ 0x140093730
 * Callers:
 *     sub_14008BBF0 @ 0x14008BBF0 (sub_14008BBF0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000EE10 @ 0x14000EE10 (sub_14000EE10.c)
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_140089A7C @ 0x140089A7C (sub_140089A7C.c)
 *     sub_14008B6E8 @ 0x14008B6E8 (sub_14008B6E8.c)
 *     sub_140093194 @ 0x140093194 (sub_140093194.c)
 *     sub_140093458 @ 0x140093458 (sub_140093458.c)
 *     sub_1400934A0 @ 0x1400934A0 (sub_1400934A0.c)
 *     sub_1400939D0 @ 0x1400939D0 (sub_1400939D0.c)
 *     sub_140093E30 @ 0x140093E30 (sub_140093E30.c)
 *     sub_140093ED0 @ 0x140093ED0 (sub_140093ED0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140093730(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, _QWORD *a6, _BYTE *a7)
{
  _BYTE *v10; // rsi
  __int64 result; // rax
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 *v15; // rdi
  __int64 *v16; // rbx
  __int64 **v17; // rax
  __int64 v18; // rax
  __int64 *v19; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v20[64]; // [rsp+48h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]
  RTL_SRWLOCK *v22; // [rsp+90h] [rbp+8h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+20h] BYREF

  v24 = a4;
  v23 = a3;
  v10 = a7;
  *a7 = 0;
  try
  {
    if ( (int)sub_1400B6010(a1) < 0 )
    {
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
      v22 = (RTL_SRWLOCK *)(a1 + 8);
      if ( (int)sub_1400939D0(a1, v23, a4, a6) < 0 )
      {
        a7 = 0LL;
        v12 = v23;
        sub_14000EE10((__int64 *)&a7);
        v13 = sub_140089A7C((__int64 *)&a7, a2, v12, 0LL, 0, a5, 1, 2);
        v14 = v13;
        if ( v13 >= 0 )
        {
          sub_140093ED0(a1 + 16, &v19, &v23);
          if ( v19 == *(__int64 **)(a1 + 24) )
          {
            v18 = sub_140093194((float *)(a1 + 16), (__int64)v20, &v23);
            sub_140093458((__int64 *)(*(_QWORD *)v18 + 24LL), &v24, (__int64 *)&a7);
          }
          else
          {
            v15 = v19 + 3;
            v16 = (__int64 *)v19[4];
            v17 = sub_1400934A0(&v19, (__int64 *)v19[3], v16, a4);
            sub_140093E30(v15, v20, *v17, v16);
            sub_140093458(v15, &v24, (__int64 *)&a7);
          }
          sub_14008B6E8((__int64 *)&a7, a6);
          sub_140003238((__int64 *)&a7);
          sub_14003A998(&v22);
          result = 0LL;
        }
        else
        {
          sub_14000C2A8(
            (int)retaddr,
            95,
            (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspglobalallocations.cpp",
            v13);
          sub_140003238((__int64 *)&a7);
          sub_14003A998(&v22);
          result = v14;
        }
      }
      else
      {
        *v10 = 1;
        sub_14003A998(&v22);
        result = 0LL;
      }
    }
    else
    {
      *v10 = 1;
      result = 0LL;
    }
  }
  catch ( ... )
  {
    LODWORD(a7) = sub_14004EEE4(
                    (int)retaddr,
                    115,
                    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspglobalallocations.cpp");
    return (unsigned int)a7;
  }
  return result;
}
