/*
 * XREFs of IsClearDelegationCaptureSupported @ 0x1400B93EC
 * Callers:
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1400B8E08 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 *     zzzDestroyQueue @ 0x1400B8EC0 (zzzDestroyQueue.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1401D9420 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsClearDelegationCaptureSupported(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 1096LL);
  if ( v1 )
    return v1();
  else
    return 3221225659LL;
}
