/*
 * XREFs of sub_1400909A0 @ 0x1400909A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140016858 @ 0x140016858 (sub_140016858.c)
 *     sub_140016F18 @ 0x140016F18 (sub_140016F18.c)
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14008F860 @ 0x14008F860 (sub_14008F860.c)
 *     sub_140092F04 @ 0x140092F04 (sub_140092F04.c)
 *     sub_1400ADA90 @ 0x1400ADA90 (sub_1400ADA90.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400909A0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // edx
  HANDLE CurrentProcess; // rbx
  HANDLE v11; // rdi
  HANDLE v12; // rax
  __int64 v13; // r9
  __int64 v14; // rcx
  int v15; // eax
  int v16; // edi
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r9d
  int v20; // eax
  HANDLE hSourceHandle; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-31h] BYREF
  __int128 v24; // [rsp+50h] [rbp-29h] BYREF
  __int64 v25; // [rsp+60h] [rbp-19h]
  int v26; // [rsp+68h] [rbp-11h]
  __int128 v27; // [rsp+70h] [rbp-9h] BYREF
  __int64 v28; // [rsp+80h] [rbp+7h]
  __int64 v29; // [rsp+88h] [rbp+Fh]
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+5Fh]

  hSourceHandle = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0;
  v6 = *(_QWORD *)(a1 - 32);
  sub_140016858(&hSourceHandle, 0LL);
  v7 = sub_1400B6010(v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 198;
    goto LABEL_11;
  }
  sub_140016858((void **)(a1 + 48), 0LL);
  CurrentProcess = GetCurrentProcess();
  v11 = hSourceHandle;
  v12 = GetCurrentProcess();
  if ( DuplicateHandle(v12, v11, CurrentProcess, (LPHANDLE)(a1 + 48), 0, 0, 2u) )
  {
    v14 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 40) = 0LL;
    if ( v14 )
      sub_1400B6010(v14);
    v15 = sub_140092F04(&v24, a2, a1 + 40);
    v16 = v15;
    if ( v15 >= 0 )
    {
      v27 = 0LL;
      v28 = 0LL;
      v29 = sub_1400B6010(*(_QWORD *)(a1 + 40));
      v7 = sub_14008F860((_QWORD *)(a1 - 56), (__int64)&v27, v17, v18);
      v8 = v7;
      if ( v7 >= 0 )
      {
        v23 = a2;
        v20 = sub_1400ADA90(a3, &hSourceHandle, &v23);
        v8 = v20;
        if ( v20 >= 0 )
        {
          v8 = 0;
          goto LABEL_16;
        }
        sub_14000C2A8(
          (int)retaddr,
          65,
          (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\crossprocessfileobjectbasedcpservermemory.cpp",
          v20);
        v19 = v8;
        v9 = 208;
        goto LABEL_12;
      }
      v9 = 206;
LABEL_11:
      v19 = v7;
LABEL_12:
      sub_14000C2A8(
        (int)retaddr,
        v9,
        (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspcrossprocessaudioendpoint.cpp",
        v19);
      goto LABEL_16;
    }
    sub_14000C2A8(
      (int)retaddr,
      202,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspcrossprocessaudioendpoint.cpp",
      v15);
    v8 = v16;
  }
  else
  {
    v8 = sub_1400470EC(
           (int)retaddr,
           200,
           (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspcrossprocessaudioendpoint.cpp",
           v13);
  }
LABEL_16:
  sub_140016F18(&hSourceHandle);
  return v8;
}
