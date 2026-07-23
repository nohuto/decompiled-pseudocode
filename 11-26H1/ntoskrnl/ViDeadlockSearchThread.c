/*
 * XREFs of ViDeadlockSearchThread @ 0x140C3E3DC
 * Callers:
 *     ViIsThreadInsidePagingCodePaths @ 0x140C3E500 (ViIsThreadInsidePagingCodePaths.c)
 *     VfDeadlockReleaseResource @ 0x140C4A94C (VfDeadlockReleaseResource.c)
 *     VfDeadlockAcquireResource @ 0x140C4D324 (VfDeadlockAcquireResource.c)
 * Callees:
 *     VfUtilAddressRangeFit @ 0x140C27640 (VfUtilAddressRangeFit.c)
 */

_QWORD *__fastcall ViDeadlockSearchThread(unsigned __int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r9
  __int64 v3; // r10
  _QWORD **v4; // r11
  _QWORD *i; // rax

  v1 = ((a1 >> 12) * (unsigned __int128)0x40100401004011uLL) >> 64;
  v2 = (a1 >> 12) - 1023 * ((v1 + (((a1 >> 12) - v1) >> 1)) >> 9);
  if ( *(_QWORD *)(16 * v2 + *((_QWORD *)ViDeadlockGlobals + 2050)) != 16 * v2 + *((_QWORD *)ViDeadlockGlobals + 2050)
    && (unsigned int)VfUtilAddressRangeFit((unsigned __int64 *)ViDeadlockGlobals + 2 * v2 + 2052, a1, a1 + 1) )
  {
    for ( i = *v4; i != v4; i = (_QWORD *)*i )
    {
      if ( *(i - 3) == v3 )
        return i - 3;
    }
  }
  return 0LL;
}
