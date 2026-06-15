/*
 * XREFs of sub_14008C6C4 @ 0x14008C6C4
 * Callers:
 *     sub_14008A8DC @ 0x14008A8DC (sub_14008A8DC.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000EE10 @ 0x14000EE10 (sub_14000EE10.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005DFF0 @ 0x14005DFF0 (sub_14005DFF0.c)
 *     sub_140089A7C @ 0x140089A7C (sub_140089A7C.c)
 *     sub_14008A660 @ 0x14008A660 (sub_14008A660.c)
 *     sub_14008B568 @ 0x14008B568 (sub_14008B568.c)
 *     sub_14008B71C @ 0x14008B71C (sub_14008B71C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14008C6C4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int128 *a6, int a7)
{
  int v10; // eax
  unsigned int v11; // ebx
  __int64 result; // rax
  unsigned int v13; // eax
  unsigned __int64 v14; // rsi
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // esi
  __int64 v19; // rbx
  int v20; // eax
  unsigned int v21; // ebx
  unsigned int i; // eax
  __int64 v23; // rcx
  __int64 v24; // [rsp+20h] [rbp-B8h]
  __int64 v25; // [rsp+20h] [rbp-B8h]
  __int64 v26; // [rsp+28h] [rbp-B0h]
  __int64 v27; // [rsp+30h] [rbp-A8h]
  __int64 v28; // [rsp+38h] [rbp-A0h]
  __int64 v29[2]; // [rsp+40h] [rbp-98h] BYREF
  __int128 v30; // [rsp+50h] [rbp-88h] BYREF
  __int64 v31; // [rsp+60h] [rbp-78h]
  __int64 v32; // [rsp+68h] [rbp-70h]
  __int128 v33; // [rsp+70h] [rbp-68h]
  BOOL v34; // [rsp+80h] [rbp-58h]
  __int64 v35; // [rsp+84h] [rbp-54h]
  unsigned int v36; // [rsp+8Ch] [rbp-4Ch]
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h]

  v30 = 0LL;
  v31 = 0LL;
  v32 = 1LL;
  v35 = 0LL;
  v36 = 0;
  v33 = *a6;
  try
  {
    v34 = (a7 & 1) != 0;
    v10 = sub_14008A660((_QWORD *)a1, a2, a4, a5, &v30);
    v11 = v10;
    if ( v10 < 0 )
    {
      sub_14000C2A8((int)retaddr, 122, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp", v10);
      return v11;
    }
    *(_QWORD *)(a1 + 88) = v35;
    v13 = v36;
    *(_DWORD *)(a1 + 96) = v36;
    *(_DWORD *)(a1 + 184) = a7;
    if ( v13 )
    {
      v14 = 16LL * v13;
      if ( v14 > 0xFFFFFFFF )
      {
        sub_14000C2A8(
          (int)retaddr,
          132,
          (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp",
          -2147024362);
        return 2147942934LL;
      }
      v15 = *(_QWORD *)(a1 + 16);
      sub_14000EE10((__int64 *)(a1 + 136));
      LODWORD(v24) = a5;
      v16 = sub_140089A7C((__int64 *)(a1 + 136), v15, a3, a4, v24, v14, 1, 2);
      v17 = v16;
      if ( v16 < 0 )
      {
        sub_14000C2A8((int)retaddr, 134, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp", v16);
        return v17;
      }
      *(_QWORD *)(a1 + 104) = sub_1400B6010(*(_QWORD *)(a1 + 136));
      v18 = *(_DWORD *)(a1 + 92);
      if ( v18 )
      {
        v29[0] = 0LL;
        v19 = *(_QWORD *)(a1 + 16);
        sub_14000EE10(v29);
        LODWORD(v28) = 2;
        LODWORD(v27) = 1;
        LODWORD(v26) = v18;
        LODWORD(v25) = a5;
        v20 = sub_140089A7C(v29, v19, a3, a4, v25, v26, v27, v28);
        v21 = v20;
        if ( v20 < 0 )
        {
          sub_14000C2A8(
            (int)retaddr,
            141,
            (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp",
            v20);
          sub_140003238(v29);
          return v21;
        }
        if ( *(_QWORD *)(a1 + 168) == *(_QWORD *)(a1 + 176) )
        {
          sub_14008B568((__int64 *)(a1 + 160), *(_QWORD *)(a1 + 168), (unsigned int *)&unk_1400CC1A8, (__int64)v29);
        }
        else
        {
          sub_14008B71C(*(_QWORD *)(a1 + 168), -1, v29);
          *(_QWORD *)(a1 + 168) += 16LL;
        }
        for ( i = 0; i < *(_DWORD *)(a1 + 96); ++i )
        {
          v23 = *(_QWORD *)(a1 + 104);
          if ( !*(_DWORD *)(v23 + 16LL * i) )
          {
            *(_DWORD *)(v23 + 16LL * i) = -1;
            *(_DWORD *)(*(_QWORD *)(a1 + 104) + 16LL * i + 4) = *(_DWORD *)(a1 + 92);
            *(_QWORD *)(*(_QWORD *)(a1 + 104) + 16LL * i + 8) = sub_1400B6010(v29[0]);
            break;
          }
        }
        sub_140003238(v29);
      }
      sub_14005DFF0((__int64 *)(a1 + 144), a3);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)sub_14004EEE4(
                           (int)retaddr,
                           161,
                           (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp");
  }
  return result;
}
