/*
 * XREFs of sub_1400E8D80 @ 0x1400E8D80
 * Callers:
 *     sub_140130818 @ 0x140130818 (sub_140130818.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400E8D80(__int64 a1)
{
  _DWORD *v1; // r14
  unsigned int v3; // edi
  unsigned int i; // esi
  __int64 v5; // rdx
  __int64 result; // rax

  v1 = qword_140168E40;
  if ( *(_QWORD *)(a1 + 864) )
  {
    v3 = 0;
    if ( *(_WORD *)(a1 + 26) )
    {
      do
      {
        for ( i = 0; i < v1[3]; ++i )
        {
          v5 = *(_QWORD *)(*(_QWORD *)(a1 + 864) + ((unsigned __int64)v3 << 7) + 64);
          if ( v5 )
            KeRemoveQueueDpc((PRKDPC)(v5 + ((unsigned __int64)i << 6)));
        }
        result = *(unsigned __int16 *)(a1 + 26);
        ++v3;
      }
      while ( v3 < (unsigned int)result );
    }
  }
  return result;
}
