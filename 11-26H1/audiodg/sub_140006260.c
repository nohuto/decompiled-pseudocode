/*
 * XREFs of sub_140006260 @ 0x140006260
 * Callers:
 *     sub_140005E68 @ 0x140005E68 (sub_140005E68.c)
 *     sub_140006060 @ 0x140006060 (sub_140006060.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_140006260(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rbx
  __int64 result; // rax
  unsigned int v8; // ecx
  __int64 v9; // rbx
  int v10; // r8d

  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 40);
    if ( v5 == 2 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 40LL);
      if ( v6 )
        sub_1400B6010(v6);
      sub_1400B6010(a2);
      if ( v6 )
        sub_1400B6010(v6);
    }
    else if ( ((v5 - 1) & 0xFFFFFFFD) == 0 )
    {
      result = sub_1400B6010(**(_QWORD **)(v4 + 32));
      if ( (int)result < 0 )
        return result;
      sub_1400B6010(a2);
    }
  }
  result = *(_QWORD *)(a1 + 24);
  if ( result )
  {
    v8 = *(_DWORD *)(result + 40);
    if ( v8 == 2 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(result + 32) + 40LL);
      if ( v9 )
        sub_1400B6010(v9);
      result = sub_1400B6010(a2);
      if ( v9 )
        return sub_1400B6010(v9);
    }
    else if ( v8 <= 6 )
    {
      v10 = 74;
      if ( _bittest(&v10, v8) )
      {
        result = sub_1400B6010(**(_QWORD **)(result + 32));
        if ( (int)result >= 0 )
          return sub_1400B6010(a2);
      }
    }
  }
  return result;
}
