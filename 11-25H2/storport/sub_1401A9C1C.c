/*
 * XREFs of sub_1401A9C1C @ 0x1401A9C1C
 * Callers:
 *     sub_140086178 @ 0x140086178 (sub_140086178.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1401A9C1C(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 i; // rsi

  _InterlockedDecrement((volatile signed __int32 *)(a1 + 84));
  v1 = (_DWORD *)(a1 + 80);
  if ( *(_QWORD *)(a1 + 56) )
  {
    for ( i = 0LL; (unsigned int)i < *v1; i = (unsigned int)(i + 1) )
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 56) + 8 * i), 0);
    ExFreePoolWithTag(*(PVOID *)(a1 + 56), 0);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  *v1 = 0;
}
