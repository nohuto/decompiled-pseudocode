/*
 * XREFs of ?GetPlaybackManager@UwpWindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIHostedApplicationNotification@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1801C3DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall UwpWindowEventDispatcher::GetPlaybackManager(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 320);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
