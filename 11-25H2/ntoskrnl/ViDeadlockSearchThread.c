/*
 * XREFs of ViDeadlockSearchThread @ 0x140B8A1DC
 * Callers:
 *     ViIsThreadInsidePagingCodePaths @ 0x140B8A304 (ViIsThreadInsidePagingCodePaths.c)
 *     VfDeadlockReleaseResource @ 0x140B975CC (VfDeadlockReleaseResource.c)
 *     VfDeadlockAcquireResource @ 0x140B983E4 (VfDeadlockAcquireResource.c)
 * Callees:
 *     VfUtilAddressRangeFit @ 0x140B73168 (VfUtilAddressRangeFit.c)
 */

_QWORD *__fastcall ViDeadlockSearchThread(unsigned __int64 a1)
{
  unsigned __int64 v2; // rcx
  _QWORD *v3; // rdi
  _QWORD *v4; // r11
  _QWORD *result; // rax

  v2 = (a1 >> 12) % 0x3FF;
  v3 = (_QWORD *)(*((_QWORD *)ViDeadlockGlobals + 2050) + 16 * v2);
  if ( (_QWORD *)*v3 != v3
    && (unsigned int)VfUtilAddressRangeFit((unsigned __int64 *)ViDeadlockGlobals + 2 * v2 + 2052, a1, a1 + 1) )
  {
    while ( v4 != v3 )
    {
      result = v4 - 3;
      if ( *(v4 - 3) == a1 )
        return result;
      v4 = (_QWORD *)*v4;
    }
  }
  return 0LL;
}
