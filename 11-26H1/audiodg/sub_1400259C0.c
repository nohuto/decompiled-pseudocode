/*
 * XREFs of sub_1400259C0 @ 0x1400259C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
ULONGLONG __fastcall sub_1400259C0(__int64 a1, __int64 a2, __int64 a3)
{
  ULONGLONG result; // rax
  ULONGLONG v6; // rdi
  __int64 v7; // rcx

  result = GetTickCount64();
  v6 = result;
  if ( *(_BYTE *)(a1 + 32) )
  {
    if ( result - *(_QWORD *)(a1 + 72) > *(_QWORD *)(a1 + 56) )
    {
      *(_BYTE *)(a1 + 32) = 0;
      result -= *(_QWORD *)(a1 + 48);
      if ( result > *(_QWORD *)(a1 + 40) )
      {
        result = sub_1400B6010(a1);
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
    v7 = *(_QWORD *)(a1 + 8);
    if ( v7 )
    {
      sub_1400B6010(v7);
      *(_BYTE *)(a1 + 16) = 1;
    }
    result = v6 - *(_QWORD *)(a1 + 88);
    if ( result > *(_QWORD *)(a1 + 80) )
    {
      result = sub_1400B6010(a1);
      *(_QWORD *)(a1 + 88) = v6;
    }
  }
  return result;
}
