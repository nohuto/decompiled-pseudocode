/*
 * XREFs of sub_1400E94A4 @ 0x1400E94A4
 * Callers:
 *     sub_1400ED47C @ 0x1400ED47C (sub_1400ED47C.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall sub_1400E94A4(__int64 a1)
{
  _BYTE *result; // rax
  _DWORD *v2; // rbx
  unsigned int v3; // r8d
  __int64 v4; // rsi
  __int64 v5; // r10
  unsigned __int64 v6; // rdi
  unsigned int i; // r9d
  __int64 v8; // r11

  result = *(_BYTE **)(a1 + 1736);
  v2 = qword_140168E40;
  if ( *result )
  {
    v3 = 0;
    if ( *(_WORD *)(a1 + 22) )
    {
      do
      {
        v4 = *(_QWORD *)(a1 + 864);
        v5 = *(_QWORD *)(a1 + 728) + 192LL * v3;
        v6 = (unsigned __int64)*(unsigned __int16 *)(v5 + 138) << 7;
        if ( *(_BYTE *)(v6 + v4 - 48) )
        {
          for ( i = 0; i < v2[2]; ++i )
          {
            v8 = *(_QWORD *)(*(_QWORD *)(v6 + v4 - 40) + 8LL * i);
            if ( v8 )
              *(_QWORD *)(v8 + 8) = v5;
          }
        }
        result = (_BYTE *)*(unsigned __int16 *)(a1 + 22);
        ++v3;
      }
      while ( v3 < (unsigned int)result );
    }
  }
  return result;
}
