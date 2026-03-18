/*
 * XREFs of __asan_allocas_unpoison @ 0x1405DDE90
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall _asan_allocas_unpoison(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  ULONG_PTR v2; // rdx
  _BYTE *v3; // rcx
  ULONG_PTR i; // rax
  int v5; // edx

  if ( byte_140FC7BE8 && BugCheckParameter3 && BugCheckParameter3 <= a2 )
  {
    v2 = a2 - BugCheckParameter3;
    if ( BugCheckParameter3 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3, 0LL);
    if ( (BugCheckParameter3 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3, 8uLL);
    v3 = (_BYTE *)(qword_140FBE300 + (BugCheckParameter3 >> 3));
    for ( i = v2 >> 3; i; --i )
      *v3++ = 0;
    v5 = v2 & 7;
    if ( v5 )
      *v3 = v5;
  }
}
