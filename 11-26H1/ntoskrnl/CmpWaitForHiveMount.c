/*
 * XREFs of CmpWaitForHiveMount @ 0x140B58CE0
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408CCC40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     CmpHashUnicodeComponent @ 0x1408D7A30 (CmpHashUnicodeComponent.c)
 */

char __fastcall CmpWaitForHiveMount(__m128i *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __m128i v4; // xmm0
  char v5; // bl
  __int16 v7; // cx
  _WORD *v8; // r8
  __int16 v9; // ax
  unsigned __int16 v10; // dx
  unsigned int v11; // edi
  int v12; // eax
  unsigned __int16 i; // dx
  __int64 v14; // rsi
  __m128i v16; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  v5 = 0;
  v7 = _mm_cvtsi128_si32(*a1);
  v16 = v4;
  if ( !v7 )
    goto LABEL_17;
  v8 = (_WORD *)v16.m128i_i64[1];
  v9 = v16.m128i_i16[1];
  do
  {
    if ( *v8 != 92 )
      break;
    ++v8;
    v9 -= 2;
    v7 -= 2;
  }
  while ( v7 );
  v16.m128i_i64[1] = (__int64)v8;
  v16.m128i_i16[1] = v9;
  if ( v7 )
  {
    v10 = 0;
    v11 = 1;
    do
    {
      if ( v8[v10] == 92 )
        break;
      ++v10;
      v7 -= 2;
    }
    while ( v7 );
    v16.m128i_i16[0] = 2 * v10;
    v12 = CmpHashUnicodeComponent(&v16);
    for ( i = 0; ; ++i )
    {
      if ( i >= 8u )
      {
        _interlockedbittestandset(dword_140E09E00, 2u);
        return 0;
      }
      v14 = 3LL * i;
      if ( dword_140E09DFC[6 * i] == v12 )
        break;
    }
    _mm_lfence();
    _interlockedbittestandset(&dword_140E09E00[6 * i], 3u);
    _InterlockedAdd(&dword_140E09E04[6 * i], 1u);
    KeSetEvent((struct _KEVENT *)((char *)&stru_140E09870 + 184 * (unsigned int)dword_140E09DF8[6 * i]), 0, 0);
    if ( !*((_DWORD *)&unk_140E098A4 + 46 * (unsigned int)dword_140E09DF8[2 * v14]) )
    {
      v5 = 1;
      *a4 = dword_140E09DF8[2 * v14];
      v11 = 5;
    }
    _interlockedbittestandset(&dword_140E09E00[2 * v14], v11);
    return v5;
  }
  else
  {
LABEL_17:
    _interlockedbittestandset(dword_140E09E00, 0);
    return 0;
  }
}
