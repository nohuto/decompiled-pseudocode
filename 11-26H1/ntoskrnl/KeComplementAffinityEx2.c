/*
 * XREFs of KeComplementAffinityEx2 @ 0x14047A530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeComplementAffinityEx2(__int64 a1, _WORD *a2)
{
  unsigned int v2; // r9d
  __int64 result; // rax
  __int64 v4; // r11
  unsigned int v6; // r8d
  _QWORD *v7; // rdx
  char *v8; // r10
  __int64 v9; // rax

  v2 = *(unsigned __int16 *)(a1 + 2);
  result = (unsigned __int16)*a2;
  LOWORD(v4) = v2;
  v6 = 0;
  if ( (unsigned __int16)result <= (unsigned __int16)v2 )
    LOWORD(v4) = *a2;
  if ( (_WORD)v4 )
  {
    v6 = (unsigned __int16)v4;
    v7 = (_QWORD *)(a1 + 8);
    v4 = (unsigned __int16)v4;
    v8 = (char *)a2 - a1;
    do
    {
      result = ~*(_QWORD *)&v8[(_QWORD)v7];
      *v7++ = result;
      --v4;
    }
    while ( v4 );
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_WORD *)a1 = v2;
  *(_WORD *)(a1 + 2) = v2;
  if ( v6 < v2 )
  {
    do
    {
      v9 = v6++;
      *(_QWORD *)(a1 + 8 * v9 + 8) = -1LL;
      result = *(unsigned __int16 *)(a1 + 2);
    }
    while ( v6 < (unsigned int)result );
  }
  return result;
}
