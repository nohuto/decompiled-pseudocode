/*
 * XREFs of MiImageGetRawRvaState @ 0x140A507A0
 * Callers:
 *     MiImageRvaRawEnumFirst @ 0x140A506F0 (MiImageRvaRawEnumFirst.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiImageGetRawRvaState(__int64 a1, int a2)
{
  __int64 v2; // r11
  _DWORD *v3; // rax
  unsigned int v4; // r10d
  int v5; // r8d
  __int64 v6; // r9
  int v7; // edx
  __int64 v8; // r9
  int v9; // ecx

  v2 = *(unsigned int *)(a1 + 128);
  v3 = (_DWORD *)(a1 + 136);
  v4 = 0;
  v5 = 0;
  if ( (_DWORD)v2 )
  {
    v6 = (unsigned int)v2;
    do
    {
      if ( *v3 == a2 )
        v5 |= v3[1];
      v3 += 10;
      --v6;
    }
    while ( v6 );
    v7 = 1;
    v8 = a1 + 112;
    do
    {
      v8 += 4LL;
      v9 = v4 | v7;
      if ( (*(_DWORD *)(v8 - 4) & v5) == 0 )
        v9 = v4;
      v7 = __ROL4__(v7, 1);
      v4 = v9;
      --v2;
    }
    while ( v2 );
  }
  return v4;
}
