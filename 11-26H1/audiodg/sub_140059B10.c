/*
 * XREFs of sub_140059B10 @ 0x140059B10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140059B10(__int64 a1, _QWORD *a2)
{
  HRESULT Instance; // ebx
  _QWORD *v5; // rdi

  if ( !a2 )
    return 2147500035LL;
  Instance = 0;
  v5 = (_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(a1 + 64)
    || (Instance = CoCreateInstance(&stru_1400C8128, 0LL, 1u, &stru_1400C8B00, (LPVOID *)(a1 + 64)), Instance >= 0) )
  {
    *a2 = *v5;
    sub_1400B6010(*v5);
  }
  return (unsigned int)Instance;
}
