/*
 * XREFs of sub_1400A50F0 @ 0x1400A50F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140046BEC @ 0x140046BEC (sub_140046BEC.c)
 *     sub_140096CA8 @ 0x140096CA8 (sub_140096CA8.c)
 *     sub_1400A5424 @ 0x1400A5424 (sub_1400A5424.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400A50F0(_OWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // r9d
  int v7; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v2 = sub_140096CA8(0x618uLL);
  v10 = v2;
  if ( v2 )
    v3 = sub_1400A5424(v2);
  else
    v3 = 0LL;
  v10 = v3;
  if ( !v3 )
  {
    v5 = -2147024882;
    v6 = -2147024882;
    v7 = 23;
    goto LABEL_9;
  }
  sub_1400B6010(v3);
  *(_OWORD *)(v3 + 800) = *a1;
  sub_1400B6010(v3);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = v4;
    v7 = 26;
LABEL_9:
    sub_14000C2A8(
      (int)retaddr,
      v7,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpendpointcreation.cpp",
      v6);
    goto LABEL_10;
  }
  v5 = 0;
LABEL_10:
  sub_140046BEC(&v10);
  return v5;
}
