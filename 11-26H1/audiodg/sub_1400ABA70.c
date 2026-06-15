/*
 * XREFs of sub_1400ABA70 @ 0x1400ABA70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400ABA30 @ 0x1400ABA30 (sub_1400ABA30.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1400ABA70(__int64 a1, __int64 a2, __int64 a3)
{
  ULONGLONG TickCount64; // rax
  ULONGLONG v6; // rdi

  TickCount64 = GetTickCount64();
  v6 = TickCount64;
  if ( *(_BYTE *)(a1 + 32) )
  {
    if ( TickCount64 - *(_QWORD *)(a1 + 72) > *(_QWORD *)(a1 + 56) )
    {
      *(_BYTE *)(a1 + 32) = 0;
      if ( TickCount64 - *(_QWORD *)(a1 + 48) > *(_QWORD *)(a1 + 40) )
      {
        sub_1400B6010(a1);
        *(_QWORD *)(a1 + 48) = v6;
      }
    }
  }
  if ( a3 )
  {
    if ( !*(_BYTE *)(a1 + 32) )
    {
      *(_BYTE *)(a1 + 32) = 1;
      *(_QWORD *)(a1 + 64) = v6;
      *(_QWORD *)(a1 + 88) = v6;
    }
    *(_QWORD *)(a1 + 72) = v6;
    sub_1400ABA30(a1);
    if ( v6 - *(_QWORD *)(a1 + 88) > *(_QWORD *)(a1 + 80) )
    {
      sub_1400B6010(a1);
      *(_QWORD *)(a1 + 88) = v6;
    }
  }
}
