/*
 * XREFs of ?vRemovePFF@PFF@@QEAAXXZ @ 0x140327A04
 * Callers:
 *     vCleanupPrivateFonts @ 0x1400FD9B0 (vCleanupPrivateFonts.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x14020EAF0 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z @ 0x14028B4D4 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z.c)
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x14028F80C (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PFF::vRemovePFF(PFF *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    *(_QWORD *)(v2 + 8) = *((_QWORD *)this + 1);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    *(_QWORD *)(v3 + 16) = *((_QWORD *)this + 2);
}
