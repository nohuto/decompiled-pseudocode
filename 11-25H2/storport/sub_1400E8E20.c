/*
 * XREFs of sub_1400E8E20 @ 0x1400E8E20
 * Callers:
 *     sub_1400EE8C0 @ 0x1400EE8C0 (sub_1400EE8C0.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall sub_1400E8E20(__int64 a1, unsigned __int16 a2)
{
  _BYTE *result; // rax
  _DWORD *v3; // rbp
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx

  result = *(_BYTE **)(a1 + 1736);
  v3 = qword_140168E40;
  v4 = *(_QWORD *)(a1 + 864);
  v5 = (unsigned __int64)a2 << 7;
  if ( *result )
  {
    if ( *(_BYTE *)(v5 + v4 - 48) )
    {
      if ( *(_QWORD *)(v5 + v4 - 40) )
      {
        v6 = 0LL;
        if ( *((_DWORD *)qword_140168E40 + 2) )
        {
          do
          {
            result = *(_BYTE **)(v5 + v4 - 40);
            v7 = *(_QWORD *)&result[8 * v6];
            if ( v7 )
            {
              v8 = *(_QWORD *)(v7 + 16);
              if ( v8 )
                result = (_BYTE *)ExCancelTimer(v8, 0LL);
            }
            v6 = (unsigned int)(v6 + 1);
          }
          while ( (unsigned int)v6 < v3[2] );
        }
      }
    }
  }
  return result;
}
