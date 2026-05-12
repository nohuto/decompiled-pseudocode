/*
 * XREFs of sub_140044848 @ 0x140044848
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_14001F350 @ 0x14001F350 (sub_14001F350.c)
 *     sub_1400273F0 @ 0x1400273F0 (sub_1400273F0.c)
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140041308 @ 0x140041308 (sub_140041308.c)
 *     sub_14005A5C4 @ 0x14005A5C4 (sub_14005A5C4.c)
 *     sub_140072410 @ 0x140072410 (sub_140072410.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140044848(__int64 a1, __int64 a2, int a3, const int *a4, int a5, __int64 a6)
{
  char v6; // r12
  unsigned int v7; // ebx
  char v8; // r13
  char v9; // r14
  int *v10; // rsi
  __int64 v11; // r11
  __int64 *v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdi
  int *v15; // r15
  const int *v16; // r9
  int v17; // eax
  const int *v18; // r8
  const int *v19; // rdx
  int v20; // r14d
  unsigned int v21; // r14d
  int *v22; // rcx
  int *v23; // rax
  char v25; // [rsp+90h] [rbp-59h]
  int v26; // [rsp+94h] [rbp-55h]
  int *v28; // [rsp+A0h] [rbp-49h] BYREF
  int *v29; // [rsp+A8h] [rbp-41h] BYREF
  const int *v30; // [rsp+B0h] [rbp-39h]
  __int64 v31; // [rsp+B8h] [rbp-31h]
  __int128 v32; // [rsp+C0h] [rbp-29h] BYREF
  __int128 v33; // [rsp+D0h] [rbp-19h] BYREF
  __int128 v34; // [rsp+E0h] [rbp-9h] BYREF

  v6 = -1;
  v7 = 0;
  v30 = a4;
  v31 = a6;
  v28 = 0LL;
  v8 = -1;
  v29 = 0LL;
  v9 = -1;
  v25 = -1;
  HIBYTE(v26) = -1;
  v32 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  if ( (byte_1401694F4 & 0x10) != 0 )
  {
    sub_1400273F0(a1, &v28, &v29);
    v10 = v28;
    if ( v28 )
    {
      sub_1400403EC(*((_QWORD *)v28 + 2), (__int64)&v32);
      v33 = *(_OWORD *)(v10 + 1266);
      if ( v11 )
      {
        if ( *(_WORD *)v11 != 1 )
          return (unsigned int)-1056964602;
        if ( *(_DWORD *)(v11 + 4) < 4u )
          return (unsigned int)-1056964602;
        v9 = *(_BYTE *)(v11 + 10);
        v6 = *(_BYTE *)(v11 + 8);
        v8 = *(_BYTE *)(v11 + 9);
        LOBYTE(v26) = v6;
        BYTE1(v26) = v8;
        BYTE2(v26) = v9;
        v25 = v9;
        v12 = sub_14001F350((__int64)v10, v26);
        v14 = (__int64)v12;
        if ( !v12 )
          return (unsigned int)-1056964602;
        v34 = *(_OWORD *)(v12 + 263);
      }
      else
      {
        v14 = sub_14005A5C4(v10);
      }
      v15 = (int *)&dword_140149108;
      if ( (byte_1401694F4 & 0x10) != 0 )
      {
        if ( v14 )
        {
          v16 = (const int *)(v14 + 242);
          LOBYTE(v17) = *(_BYTE *)(v14 + 506) & 1;
          v18 = (const int *)(v14 + 177);
          v19 = (const int *)(v14 + 168);
        }
        else
        {
          v16 = &dword_140149108;
          v17 = *((unsigned __int8 *)v10 + 104) >> 7;
          v18 = &dword_140149108;
          v19 = &dword_140149108;
        }
        v20 = sub_140072410(
                a5,
                (_DWORD)v19,
                (_DWORD)v18,
                v10[14],
                v6,
                v8,
                v9,
                (__int64)&v34,
                (__int64)&v33,
                *((__int64 *)&v32 + 1),
                (__int64)v19,
                (__int64)v18,
                (__int64)v16,
                v17,
                a5,
                v31,
                a3,
                (__int64)v30);
      }
      else
      {
        v20 = 0;
      }
      v21 = (v20 >> 31) & 0xC1000001;
      if ( v14 )
      {
        v22 = (int *)(v14 + 242);
        v23 = (int *)(v14 + 177);
        v15 = (int *)(v14 + 168);
      }
      else
      {
        v22 = (int *)&dword_140149108;
        v23 = (int *)&dword_140149108;
      }
      LOBYTE(v13) = v25;
      sub_140041308(
        (unsigned int)v10[14],
        v6,
        v8,
        v13,
        (__int64)&v34,
        (__int64)&v33,
        *((const int **)&v32 + 1),
        v15,
        v23,
        v22,
        a5,
        v31,
        a3,
        v30);
      return v21;
    }
    else if ( !v29 )
    {
      return (unsigned int)-1056964602;
    }
  }
  return v7;
}
