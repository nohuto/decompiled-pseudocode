/*
 * XREFs of PspSetProcessShortName @ 0x140AA711C
 * Callers:
 *     PspInitializeFullProcessImageName @ 0x140AA6F44 (PspInitializeFullProcessImageName.c)
 *     PspSetMinimalProcessName @ 0x140B6C7E4 (PspSetMinimalProcessName.c)
 * Callees:
 *     <none>
 */

char __fastcall PspSetProcessShortName(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int64 v2; // r9
  _BYTE *v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // edx
  _WORD *v6; // rax
  _BYTE *v7; // r8
  _BYTE *v8; // r9

  v2 = *((_QWORD *)a2 + 1);
  v3 = (_BYTE *)(a1 + 824);
  v4 = *a2;
  v5 = 0;
  v6 = (_WORD *)(v2 + v4);
  if ( v2 )
  {
    while ( 1 )
    {
      v7 = v6;
      if ( (unsigned __int64)v6 <= v2 )
        break;
      if ( *--v6 == 92 )
        break;
      ++v5;
    }
    LOBYTE(v6) = 14;
    if ( v5 >= 0xF )
      v5 = 14;
    v8 = &v3[v5];
    while ( v3 < v8 )
    {
      LOBYTE(v6) = *v7;
      v7 += 2;
      *v3++ = (_BYTE)v6;
    }
  }
  *v3 = 0;
  return (char)v6;
}
