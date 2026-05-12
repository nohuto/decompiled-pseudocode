/*
 * XREFs of sub_14003738C @ 0x14003738C
 * Callers:
 *     sub_140037250 @ 0x140037250 (sub_140037250.c)
 * Callees:
 *     sub_140037630 @ 0x140037630 (sub_140037630.c)
 */

char __fastcall sub_14003738C(_BYTE *a1)
{
  char v1; // bl
  int v2; // eax
  unsigned int v3; // ecx
  __int64 v4; // rax
  char v5; // r10
  unsigned __int8 i; // dl
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+34h] [rbp-14h]

  v10 = 0;
  v1 = 0;
  if ( !a1 )
    return 0;
  if ( a1[1] != 0x83 )
    return 0;
  v2 = (unsigned __int8)a1[3];
  v8[1] = 0LL;
  v8[0] = a1;
  v3 = (v2 | ((unsigned __int8)a1[2] << 8)) + 4;
  if ( v3 > 0xFFFF )
    v3 = 0xFFFF;
  v9 = v3;
  while ( 1 )
  {
    v4 = sub_140037630(v8);
    if ( !v4 )
      break;
    v1 = v5;
    for ( i = 0; i < *(_BYTE *)(v4 + 3); i += v5 )
    {
      if ( (*(_BYTE *)(i + v4 + 4) & 0xDF) != 0 )
        return 0;
    }
  }
  if ( !v1 )
    return 0;
  return v5;
}
