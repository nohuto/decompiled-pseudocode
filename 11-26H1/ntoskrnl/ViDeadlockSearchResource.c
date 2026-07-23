/*
 * XREFs of ViDeadlockSearchResource @ 0x140C3E2F8
 * Callers:
 *     ViDeadlockAddResource @ 0x140C3CB00 (ViDeadlockAddResource.c)
 *     VfDeadlockReleaseResource @ 0x140C4A94C (VfDeadlockReleaseResource.c)
 *     VfDeadlockAcquireResource @ 0x140C4D324 (VfDeadlockAcquireResource.c)
 * Callees:
 *     VfUtilAddressRangeFit @ 0x140C27640 (VfUtilAddressRangeFit.c)
 *     ViDeadlockForgetResourceHistory @ 0x140C3D80C (ViDeadlockForgetResourceHistory.c)
 */

_QWORD *__fastcall ViDeadlockSearchResource(unsigned __int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v5; // r9
  _QWORD **v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  _QWORD *i; // rax

  v3 = ((a1 >> 12) * (unsigned __int128)0x40100401004011uLL) >> 64;
  v5 = (a1 >> 12) - 1023 * ((v3 + (((a1 >> 12) - v3) >> 1)) >> 9);
  v6 = (_QWORD **)(*((_QWORD *)ViDeadlockGlobals + 2) + 16 * v5);
  if ( *v6 != v6 && (unsigned int)VfUtilAddressRangeFit((unsigned __int64 *)ViDeadlockGlobals + 2 * v5 + 4, a1, a1 + 1) )
  {
    v9 = ViDeadlockGlobals;
    ++*((_DWORD *)ViDeadlockGlobals + 8212);
    if ( (v9[8212] & 0xF) == 0 )
    {
      v10 = *v6;
      while ( v10 != v6 )
      {
        v11 = (__int64)(v10 - 5);
        v10 = (_QWORD *)*v10;
        ViDeadlockForgetResourceHistory(v11, v7, v8, a2);
      }
    }
    for ( i = *v6; i != v6; i = (_QWORD *)*i )
    {
      if ( *(i - 4) == a1 )
        return i - 5;
    }
  }
  return 0LL;
}
