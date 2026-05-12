/*
 * XREFs of sub_14008F190 @ 0x14008F190
 * Callers:
 *     sub_140068E10 @ 0x140068E10 (sub_140068E10.c)
 *     sub_1400BEB50 @ 0x1400BEB50 (sub_1400BEB50.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_14008F190(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5)
{
  size_t v8; // rbx
  void *v9; // rax

  if ( (_DWORD)a3 == -1 )
  {
    a3 = -1LL;
    do
      ++a3;
    while ( a2[a3] );
  }
  if ( (unsigned int)a3 > 0xFFFE )
    return 3221225621LL;
  v8 = (unsigned __int16)a3;
  v9 = (void *)sub_1400143E0(64LL, (unsigned __int16)a3 + 1LL, 1396990290LL, a5);
  *(_QWORD *)(a1 + 8) = v9;
  if ( !v9 )
    return 3221225495LL;
  memmove(v9, a2, v8);
  *(_WORD *)a1 = v8;
  *(_WORD *)(a1 + 2) = v8 + 1;
  return 0LL;
}
