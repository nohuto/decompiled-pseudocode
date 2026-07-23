/*
 * XREFs of IoChangeFileObjectFilterContext @ 0x14046E060
 * Callers:
 *     IopDeleteFile @ 0x140A282F0 (IopDeleteFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoChangeFileObjectFilterContext(__int64 a1, signed __int64 a2, char a3)
{
  __int64 v3; // rcx
  unsigned int v6; // edx

  v3 = *(_QWORD *)(a1 + 208);
  if ( !v3 || (__int64 *)v3 == qword_1400137E0 )
    return 3221225485LL;
  if ( a3 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 32), a2, 0LL) )
      return 3221225505LL;
    else
      return 0LL;
  }
  else
  {
    v6 = 0;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 32), 0LL, a2) != a2 )
      return (unsigned int)-1073741791;
    return v6;
  }
}
