/*
 * XREFs of ?OnInput@CBasePTPEngine@@UEAAJPEAUPTPInput@@@Z @ 0x1401002E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBasePTPEngine::OnInput(CBasePTPEngine *this, struct PTPInput *a2)
{
  return (*(__int64 (__fastcall **)(CBasePTPEngine *, struct PTPInput *))(*(_QWORD *)this + 48LL))(this, a2);
}
