/*
 * XREFs of ?bRectl@RGNOBJ@@QEBAHXZ @ 0x140012140
 * Callers:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x140012210 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140037910 (-bCompute@DC@@QEAAHXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::bRectl(RGNOBJ *this)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx

  v1 = 0;
  v2 = (*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL);
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
    LOBYTE(v1) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 24LL))(v2) != 0;
  else
    LOBYTE(v1) = *(_DWORD *)(v2 + 16) == 56;
  return v1;
}
