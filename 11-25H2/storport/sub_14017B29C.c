/*
 * XREFs of sub_14017B29C @ 0x14017B29C
 * Callers:
 *     StorPortInitialize @ 0x14006FFB0 (StorPortInitialize.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_14017B29C(__int64 a1, unsigned int *a2)
{
  char *v4; // rax
  char *v5; // rdi
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax

  v4 = (char *)sub_1400143E0(64LL, 224LL, 1229480274LL, *(_QWORD *)(a1 + 8));
  v5 = v4;
  if ( !v4 )
    return 3221225495LL;
  memmove(v4, a2, *a2);
  if ( (*((_DWORD *)v5 + 46) & 0x40004000) != 0 )
    *(_DWORD *)(a1 + 4) |= 1u;
  v7 = (_QWORD *)(a1 + 96);
  v8 = *(_QWORD *)(a1 + 96);
  v9 = v5 + 208;
  if ( *(_QWORD *)(v8 + 8) != a1 + 96 )
    __fastfail(3u);
  *v9 = v8;
  *((_QWORD *)v5 + 27) = v7;
  *(_QWORD *)(v8 + 8) = v9;
  *v7 = v9;
  return 0LL;
}
