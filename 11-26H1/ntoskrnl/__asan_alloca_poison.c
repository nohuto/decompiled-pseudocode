/*
 * XREFs of __asan_alloca_poison @ 0x1405E0550
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall _asan_alloca_poison(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  ULONG_PTR v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx
  _BYTE *v8; // rax
  __int64 v9; // r11
  unsigned __int64 v10; // r9
  _BYTE *v11; // rax
  ULONG_PTR i; // r9
  unsigned __int64 j; // rcx
  ULONG_PTR v14; // r8
  unsigned __int64 v15; // rcx
  _BYTE *v16; // rcx

  if ( byte_140FC8BD8 )
  {
    v4 = BugCheckParameter3 - 32;
    if ( BugCheckParameter3 - 32 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3 - 32, 0LL);
    if ( (v4 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3 - 32, 8uLL);
    if ( BugCheckParameter3 < v4 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3 - 32, 0x20uLL);
    v5 = 4LL;
    v6 = qword_140FBF2F8;
    v7 = 4LL;
    v8 = (_BYTE *)(qword_140FBF2F8 + (v4 >> 3));
    do
    {
      *v8++ = -127;
      --v7;
    }
    while ( v7 );
    v9 = ((_BYTE)a2 - 1) & 0x1F;
    v10 = a2 - v9 + 31;
    if ( BugCheckParameter3 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3, 0LL);
    if ( (BugCheckParameter3 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3, 8uLL);
    if ( a2 > v10 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, a2, a2 - v9 + 31);
    if ( v10 + BugCheckParameter3 < BugCheckParameter3 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3, a2 - v9 + 31);
    v11 = (_BYTE *)(v6 + (BugCheckParameter3 >> 3));
    for ( i = a2 >> 3; i; --i )
      *v11++ = 0;
    if ( (a2 & 7) != 0 )
      *v11++ = a2 & 7;
    for ( j = (31 - v9 + (((_BYTE)a2 - 1) & 7) - (unsigned __int64)(((_BYTE)a2 - (_BYTE)v9 + 30) & 7)) >> 3; j; --j )
      *v11++ = -126;
    v14 = BugCheckParameter3 - v9;
    v15 = v14 + a2 + 31;
    if ( v15 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v14 + a2 + 31, 0LL);
    if ( (v15 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v14 + a2 + 31, 8uLL);
    if ( v15 + 32 < v15 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v14 + a2 + 31, 0x20uLL);
    v16 = (_BYTE *)(v6 + (v15 >> 3));
    do
    {
      *v16++ = -125;
      --v5;
    }
    while ( v5 );
  }
}
