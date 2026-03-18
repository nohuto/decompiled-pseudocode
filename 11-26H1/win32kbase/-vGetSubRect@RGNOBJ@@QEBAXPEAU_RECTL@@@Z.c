/*
 * XREFs of ?vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z @ 0x140106CE0
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x140037910 (-bCompute@DC@@QEAAHXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall RGNOBJ::vGetSubRect(RGNOBJ *this, struct _RECTL *a2)
{
  __int64 v3; // rcx
  struct _RECTL v4; // xmm0

  v3 = *(_QWORD *)this;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    (*(void (__fastcall **)(__int64, struct _RECTL *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 40LL))(
      (v3 + 24) & -(__int64)(v3 != 0),
      a2);
  }
  else
  {
    if ( *(_DWORD *)(v3 + 40) > 0x38u )
      v4 = (struct _RECTL)xmmword_140265508;
    else
      v4 = *(struct _RECTL *)(*(_QWORD *)this + 52LL);
    *a2 = v4;
  }
}
