/*
 * XREFs of IsClearDelegationCaptureSupported @ 0x140110F90
 * Callers:
 *     zzzDestroyQueue @ 0x1401667F0 (zzzDestroyQueue.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1401B67CC (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1401B686C (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsClearDelegationCaptureSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 1320LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
