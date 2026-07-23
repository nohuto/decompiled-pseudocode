/*
 * XREFs of RtlComplementAffinityEx @ 0x18013F6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlComplementAffinityEx(__int64 a1, _WORD *a2)
{
  unsigned int v2; // r9d
  __int64 v3; // rax
  unsigned int v5; // r8d
  _QWORD *v6; // rdx
  __int64 v7; // r11
  char *v8; // r10

  v2 = *(unsigned __int16 *)(a1 + 2);
  LOWORD(v3) = v2;
  v5 = 0;
  if ( *a2 <= (unsigned __int16)v2 )
    LOWORD(v3) = *a2;
  if ( (_WORD)v3 )
  {
    v5 = (unsigned __int16)v3;
    v6 = (_QWORD *)(a1 + 8);
    v7 = (unsigned __int16)v3;
    v8 = (char *)a2 - a1;
    do
    {
      v3 = ~*(_QWORD *)&v8[(_QWORD)v6];
      *v6++ = v3;
      --v7;
    }
    while ( v7 );
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_WORD *)a1 = v2;
  *(_WORD *)(a1 + 2) = v2;
  if ( v5 < v2 )
  {
    do
    {
      v3 = v5++;
      *(_QWORD *)(a1 + 8 * v3 + 8) = -1LL;
      LODWORD(v3) = *(unsigned __int16 *)(a1 + 2);
    }
    while ( v5 < (unsigned int)v3 );
  }
  return v3;
}
