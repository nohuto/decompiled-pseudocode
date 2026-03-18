/*
 * XREFs of ?ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x14010EBE0
 * Callers:
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::ResetCleanupCounters(VIDMM_GLOBAL *this, char a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r9

  v2 = (_QWORD *)((char *)this + 4568);
  v3 = (_QWORD *)((char *)this + 7128);
  if ( a2 || *v2 - *v3 > qword_14008A4E0 )
  {
    *v3 = *v2;
    *((_QWORD *)this + 889) = 0LL;
    *((_DWORD *)this + 1780) = 0;
  }
}
