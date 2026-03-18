/*
 * XREFs of ?OnEvent@CBasePTPEngine@@UEAAJPEAUPTPEngineEvent@@@Z @ 0x140147470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBasePTPEngine::OnEvent(CBasePTPEngine *this, struct PTPEngineEvent *a2)
{
  if ( *(_DWORD *)a2 )
    return 3221225485LL;
  else
    return (*(__int64 (__fastcall **)(CBasePTPEngine *))(*(_QWORD *)this + 64LL))(this);
}
