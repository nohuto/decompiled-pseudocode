/*
 * XREFs of sub_140095220 @ 0x140095220
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 *     sub_14000DF30 @ 0x14000DF30 (sub_14000DF30.c)
 *     sub_140046BEC @ 0x140046BEC (sub_140046BEC.c)
 *     sub_140095968 @ 0x140095968 (sub_140095968.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140095220(_OWORD *a1)
{
  unsigned __int64 v2; // rax
  int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // r9d
  int v9; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v2 = sub_14000DA4C();
  v4 = sub_14000DF30(0x248uLL, v2, v3);
  v12 = v4;
  if ( v4 )
    v5 = sub_140095968(v4);
  else
    v5 = 0LL;
  v12 = v5;
  if ( !v5 )
  {
    v7 = -2147024882;
    v8 = -2147024882;
    v9 = 20;
    goto LABEL_9;
  }
  sub_1400B6010(v5);
  *(_OWORD *)(v5 + 224) = *a1;
  v6 = sub_1400B6010(v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = v6;
    v9 = 23;
LABEL_9:
    sub_14000C2A8(
      (int)retaddr,
      v9,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\crossprocessendpointcreation.cpp",
      v8);
    goto LABEL_10;
  }
  v7 = 0;
LABEL_10:
  sub_140046BEC(&v12);
  return v7;
}
