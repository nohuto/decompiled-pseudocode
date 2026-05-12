/*
 * XREFs of sub_1400DD768 @ 0x1400DD768
 * Callers:
 *     sub_1400DD7C4 @ 0x1400DD7C4 (sub_1400DD7C4.c)
 *     sub_1400E4544 @ 0x1400E4544 (sub_1400E4544.c)
 * Callees:
 *     sub_1400E56F0 @ 0x1400E56F0 (sub_1400E56F0.c)
 */

__int64 __fastcall sub_1400DD768(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 result; // rax

  if ( _bittest64((const signed __int64 *)(a1 + 584), 0x2Cu) )
  {
    v3 = 112LL;
    v4 = 4587632LL;
  }
  else
  {
    *(_QWORD *)(a1 + 136) &= ~0x8000uLL;
    v4 = 4587520LL;
    v3 = 0LL;
  }
  if ( *(_DWORD *)(a1 + 572) != 1 )
    v4 = v3;
  result = sub_1400E56F0(a1, a2, v4);
  if ( (int)result < 0 )
    *a2 = 16;
  return result;
}
