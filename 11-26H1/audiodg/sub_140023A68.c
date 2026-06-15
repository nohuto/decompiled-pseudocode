/*
 * XREFs of sub_140023A68 @ 0x140023A68
 * Callers:
 *     sub_1400228C0 @ 0x1400228C0 (sub_1400228C0.c)
 * Callees:
 *     sub_140007394 @ 0x140007394 (sub_140007394.c)
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140023BD0 @ 0x140023BD0 (sub_140023BD0.c)
 *     sub_140023C54 @ 0x140023C54 (sub_140023C54.c)
 *     sub_1400253A8 @ 0x1400253A8 (sub_1400253A8.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140023A68(int a1, _QWORD *a2, struct _RTL_CRITICAL_SECTION *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rdi
  int v8; // ebx
  int v10; // edx
  void *v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v6 = sub_140049338(72LL, &unk_1400C75FC);
  sub_140023BD0(&v11, v6, 0LL);
  v7 = v11;
  if ( v11 )
  {
    memset(v11, 0, 0x48uLL);
    *(_DWORD *)v7 = a1;
    if ( a1 == 1 )
    {
      v8 = sub_1400B6010(*a2);
      if ( v8 < 0 )
      {
        v10 = 384;
      }
      else
      {
        v8 = sub_140023C54(v7[1], v7 + 2);
        if ( v8 >= 0 )
        {
LABEL_5:
          sub_140007394(a3, (__int64 *)&v11);
          if ( v12 )
            sub_140007588(v12);
          return 0LL;
        }
        v10 = 385;
      }
    }
    else
    {
      if ( a1 != 4 )
        goto LABEL_5;
      v8 = sub_1400B6010(*a2);
      if ( v8 < 0 )
      {
        v10 = 389;
      }
      else
      {
        v8 = sub_1400253A8(v7[1], v7 + 2);
        if ( v8 >= 0 )
          goto LABEL_5;
        v10 = 390;
      }
    }
  }
  else
  {
    v8 = -2147024882;
    v10 = 377;
  }
  sub_14000C2A8((int)retaddr, v10, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v8);
  if ( v12 )
    sub_140007588(v12);
  return (unsigned int)v8;
}
