/*
 * XREFs of wcsnlen @ 0x14053A6E0
 * Callers:
 *     _wcslwr_s @ 0x140538AB0 (_wcslwr_s.c)
 *     wcsncat @ 0x14053A5B0 (wcsncat.c)
 *     wcsncpy @ 0x14053A660 (wcsncpy.c)
 *     EmonAddProfileSource @ 0x140597230 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1405A5810 (Amd64AddProfileSource.c)
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x14080ABE0 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x14080AC68 (RtlpSetTimeZoneInformationWorker.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x14082CBF8 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     SiIsValidWindowsBootEntry @ 0x14089B8B0 (SiIsValidWindowsBootEntry.c)
 *     BiIsWindowsEfiEntry @ 0x1409A5348 (BiIsWindowsEfiEntry.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     <none>
 */

size_t __cdecl wcsnlen(const wchar_t *Src, size_t MaxCount)
{
  const wchar_t *v3; // rax
  const wchar_t *i; // rdx
  const wchar_t *v5; // rdx
  size_t v6; // rbx
  const wchar_t *v7; // rax
  size_t v8; // rdx
  __m128i *v9; // r8
  const wchar_t *v10; // rdx

  if ( ((unsigned __int8)Src & 1) != 0 )
  {
    v3 = &Src[MaxCount];
    for ( i = Src; i != v3; ++i )
    {
      if ( !*i )
        break;
    }
    return i - Src;
  }
  v5 = Src;
  v6 = ((16LL - ((unsigned __int8)Src & 0xF)) & ((unsigned __int128)-(__int128)((unsigned __int8)Src & 0xF) >> 64)) >> 1;
  if ( MaxCount < v6 )
    v6 = MaxCount;
  v7 = &Src[v6];
  if ( Src != v7 )
  {
    do
    {
      if ( !*v5 )
        break;
      ++v5;
    }
    while ( v5 != v7 );
  }
  v8 = v5 - Src;
  if ( v8 == v6 )
  {
    v9 = (__m128i *)&Src[v8];
    v10 = &Src[v8 + MaxCount - v6 - (((_BYTE)MaxCount - (_BYTE)v6) & 0xF)];
    while ( v9 != (__m128i *)v10 && !_mm_movemask_epi8(_mm_cmpeq_epi16((__m128i)0LL, *v9)) )
      ++v9;
    while ( v9 != (__m128i *)&Src[MaxCount] && v9->m128i_i16[0] )
      v9 = (__m128i *)((char *)v9 + 2);
    i = (const wchar_t *)v9;
    return i - Src;
  }
  return v8;
}
