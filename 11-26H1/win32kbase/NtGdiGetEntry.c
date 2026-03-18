/*
 * XREFs of NtGdiGetEntry @ 0x1401433C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreProbeAndWriteToUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x14003DBE0 (-GreProbeAndWriteToUntrustedVa@@YAXPEAX_KPEBX11@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiGetEntry(__int64 a1, void *a2)
{
  unsigned int v3; // ebx
  __int64 SessionState; // rax
  void *v5; // rax

  v3 = a1;
  SessionState = W32GetSessionState(a1);
  v5 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(SessionState + 88) + 8LL) + 16LL))(
                 *(_QWORD *)(*(_QWORD *)(SessionState + 88) + 8LL),
                 v3);
  if ( !v5 )
    return 3221225473LL;
  GreProbeAndWriteToUntrustedVa(a2, 0x18uLL, v5, 0x18uLL, 1uLL);
  return 0LL;
}
