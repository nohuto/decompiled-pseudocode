/*
 * XREFs of sub_140019AE0 @ 0x140019AE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_140019AE0(__int64 a1, int a2)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rax

  if ( a2 )
  {
    v3 = *(_QWORD **)(a1 + 808);
    if ( v3[8] )
    {
      if ( *(_DWORD *)(a1 + 72) )
      {
        v8 = (_QWORD *)v3[12];
        while ( v8 )
        {
          v9 = v8[2];
          v8 = (_QWORD *)*v8;
          sub_1400B6010(*(_QWORD *)(v9 + 136));
        }
      }
      else
      {
        v4 = (_QWORD *)v3[6];
        while ( v4 )
        {
          v5 = v4[2];
          v4 = (_QWORD *)*v4;
          sub_1400B6010(*(_QWORD *)(v5 + 128));
        }
        v6 = (_QWORD *)v3[12];
        while ( v6 )
        {
          v7 = v6[2];
          v6 = (_QWORD *)*v6;
          if ( *(_QWORD *)(v7 + 144) )
            sub_1400B6010(*(_QWORD *)(v7 + 136));
        }
      }
    }
  }
  _InterlockedExchange64((volatile __int64 *)(a1 + 664), *(_QWORD *)(a1 + 672));
  *(_QWORD *)(a1 + 672) = 0LL;
  WakeByAddressAll((PVOID)(a1 + 664));
  *(_QWORD *)(a1 + 808) = 0LL;
}
