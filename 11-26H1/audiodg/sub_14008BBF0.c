/*
 * XREFs of sub_14008BBF0 @ 0x14008BBF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000EE10 @ 0x14000EE10 (sub_14000EE10.c)
 *     sub_140089A7C @ 0x140089A7C (sub_140089A7C.c)
 *     sub_14008B568 @ 0x14008B568 (sub_14008B568.c)
 *     sub_14008B6E8 @ 0x14008B6E8 (sub_14008B6E8.c)
 *     sub_14008B71C @ 0x14008B71C (sub_14008B71C.c)
 *     sub_14008CBC0 @ 0x14008CBC0 (sub_14008CBC0.c)
 *     sub_140093730 @ 0x140093730 (sub_140093730.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14008BBF0(__int64 a1, int a2, char a3, int a4, __int64 *a5, _BYTE *a6, _QWORD *a7)
{
  _BYTE *v10; // r12
  int v11; // r15d
  unsigned int i; // edx
  __int64 v13; // rax
  __int64 result; // rax
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rbx
  __int64 v18; // rdi
  int v19; // eax
  unsigned int v20; // ebx
  unsigned int j; // eax
  __int64 v22; // rcx
  _DWORD *k; // r8
  unsigned int m; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // [rsp+20h] [rbp-58h]
  int v28; // [rsp+28h] [rbp-50h]
  int v29; // [rsp+30h] [rbp-48h]
  int v30; // [rsp+38h] [rbp-40h]
  _BYTE v31[16]; // [rsp+40h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  int v33; // [rsp+88h] [rbp+10h] BYREF

  v33 = a2;
  v10 = a6;
  *a6 = 0;
  v11 = a3 & 2;
  if ( (a3 & 2) == 0 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
    {
      v13 = *(_QWORD *)(a1 + 48);
      if ( *(_DWORD *)(v13 + 16LL * i) == a2 )
      {
        sub_14000C2A8(
          (int)retaddr,
          254,
          (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp",
          -2147022882);
        return 2147944414LL;
      }
    }
  }
  try
  {
    a6 = 0LL;
    if ( (a3 & 1) != 0 )
    {
      sub_14000EE10((__int64 *)&a6);
      v15 = sub_140093730(
              (unsigned int)&qword_1400E88D0,
              *(_QWORD *)(a1 - 40),
              *(_QWORD *)(a1 + 88),
              a2,
              a4,
              (__int64)&a6,
              (__int64)v10);
      v16 = v15;
      if ( v15 < 0 )
      {
        sub_14000C2A8((int)retaddr, 261, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp", v15);
        sub_140003238((__int64 *)&a6);
        return v16;
      }
LABEL_13:
      if ( v11 )
      {
        for ( j = 0; j < *(_DWORD *)(a1 + 40); ++j )
        {
          v22 = *(_QWORD *)(a1 + 48);
          if ( *(_DWORD *)(v22 + 16LL * j) == a2 )
          {
            *(_DWORD *)(v22 + 16LL * j) = a2;
            *(_DWORD *)(*(_QWORD *)(a1 + 48) + 16LL * j + 4) = a4;
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL * j + 8) = sub_1400B6010(a6);
            for ( k = *(_DWORD **)(a1 + 104); k != *(_DWORD **)(a1 + 112); k += 4 )
            {
              if ( *k == a2 )
              {
                sub_14008CBC0(a1 + 104, v31);
                break;
              }
            }
LABEL_27:
            if ( *(_QWORD *)(a1 + 112) == *(_QWORD *)(a1 + 120) )
            {
              sub_14008B568((__int64 *)(a1 + 104), *(_QWORD *)(a1 + 112), (unsigned int *)&v33, (__int64)&a6);
            }
            else
            {
              sub_14008B71C(*(_QWORD *)(a1 + 112), a2, (__int64 *)&a6);
              *(_QWORD *)(a1 + 112) += 16LL;
            }
            v26 = sub_1400B6010(a6);
            *a5 = v26;
            if ( a7 )
              sub_14008B6E8((__int64 *)&a6, a7);
            sub_140003238((__int64 *)&a6);
            return 0LL;
          }
        }
      }
      for ( m = 0; m < *(_DWORD *)(a1 + 40); ++m )
      {
        v25 = *(_QWORD *)(a1 + 48);
        if ( !*(_DWORD *)(v25 + 16LL * m) )
        {
          *(_DWORD *)(v25 + 16LL * m) = a2;
          *(_DWORD *)(*(_QWORD *)(a1 + 48) + 16LL * m + 4) = a4;
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL * m + 8) = sub_1400B6010(a6);
          goto LABEL_27;
        }
      }
      sub_14000C2A8(
        (int)retaddr,
        312,
        (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp",
        -2147023446);
      sub_140003238((__int64 *)&a6);
      return 2147943850LL;
    }
    v17 = *(_QWORD *)(a1 + 88);
    v18 = *(_QWORD *)(a1 - 40);
    sub_14000EE10((__int64 *)&a6);
    v30 = 2;
    v29 = 1;
    v28 = a4;
    v27 = 0;
    v19 = sub_140089A7C((__int64 *)&a6, v18, v17, 0LL, v27, v28, v29, v30);
    v20 = v19;
    if ( v19 >= 0 )
    {
      *v10 = 1;
      goto LABEL_13;
    }
    sub_14000C2A8((int)retaddr, 265, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp", v19);
    sub_140003238((__int64 *)&a6);
    result = v20;
  }
  catch ( ... )
  {
    return (unsigned int)sub_14004EEE4(
                           (int)retaddr,
                           324,
                           (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp");
  }
  return result;
}
