/*
 * XREFs of sub_14000EE40 @ 0x14000EE40
 * Callers:
 *     sub_14000C7BC @ 0x14000C7BC (sub_14000C7BC.c)
 *     sub_14000DA94 @ 0x14000DA94 (sub_14000DA94.c)
 *     sub_14000DF30 @ 0x14000DF30 (sub_14000DF30.c)
 *     sub_140015D9C @ 0x140015D9C (sub_140015D9C.c)
 *     sub_1400165C0 @ 0x1400165C0 (sub_1400165C0.c)
 *     sub_1400168CC @ 0x1400168CC (sub_1400168CC.c)
 *     sub_140016C7C @ 0x140016C7C (sub_140016C7C.c)
 *     sub_140038070 @ 0x140038070 (sub_140038070.c)
 *     sub_140038D28 @ 0x140038D28 (sub_140038D28.c)
 *     sub_140039BB8 @ 0x140039BB8 (sub_140039BB8.c)
 *     sub_140039E2C @ 0x140039E2C (sub_140039E2C.c)
 *     sub_140039EA8 @ 0x140039EA8 (sub_140039EA8.c)
 *     sub_14003D1EC @ 0x14003D1EC (sub_14003D1EC.c)
 *     sub_14003DB4C @ 0x14003DB4C (sub_14003DB4C.c)
 *     InitFn @ 0x14003E530 (InitFn.c)
 *     sub_14003E994 @ 0x14003E994 (sub_14003E994.c)
 *     sub_140075610 @ 0x140075610 (sub_140075610.c)
 *     sub_1400756AC @ 0x1400756AC (sub_1400756AC.c)
 *     sub_14007574C @ 0x14007574C (sub_14007574C.c)
 *     sub_1400757EC @ 0x1400757EC (sub_1400757EC.c)
 * Callees:
 *     sub_14000FEC8 @ 0x14000FEC8 (sub_14000FEC8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14000EE40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        char a10,
        char a11)
{
  int v12; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v13; // [rsp+38h] [rbp-99h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-91h] BYREF
  __int64 *v15; // [rsp+50h] [rbp-81h]
  __int64 v16; // [rsp+58h] [rbp-79h]
  int *v17; // [rsp+60h] [rbp-71h]
  __int64 v18; // [rsp+68h] [rbp-69h]
  char *v19; // [rsp+70h] [rbp-61h]
  __int64 v20; // [rsp+78h] [rbp-59h]
  char *v21; // [rsp+80h] [rbp-51h]
  __int64 v22; // [rsp+88h] [rbp-49h]
  char *v23; // [rsp+90h] [rbp-41h]
  __int64 v24; // [rsp+98h] [rbp-39h]
  char *v25; // [rsp+A0h] [rbp-31h]
  __int64 v26; // [rsp+A8h] [rbp-29h]
  int *v27; // [rsp+B0h] [rbp-21h]
  __int64 v28; // [rsp+B8h] [rbp-19h]
  char *v29; // [rsp+C0h] [rbp-11h]
  __int64 v30; // [rsp+C8h] [rbp-9h]
  char *v31; // [rsp+D0h] [rbp-1h]
  __int64 v32; // [rsp+D8h] [rbp+7h]
  int v33; // [rsp+118h] [rbp+47h] BYREF

  v33 = a4;
  v16 = 8LL;
  v12 = 0;
  v15 = &v13;
  v13 = 0LL;
  v17 = &v33;
  v18 = 4LL;
  v19 = &a5;
  v21 = &a6;
  v23 = &a7;
  v25 = &a8;
  v27 = &v12;
  v29 = &a10;
  v31 = &a11;
  v20 = 8LL;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 4LL;
  return sub_14000FEC8(a1, &unk_1400C5330, 0LL, 10LL, v14);
}
