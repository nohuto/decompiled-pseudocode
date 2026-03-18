/*
 * XREFs of ?SetEnvironment@CBasePTPEngine@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1401317F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBasePTPEngine::SetEnvironment(CBasePTPEngine *this, const struct PTPEnvironment *a2)
{
  __int64 v2; // rax
  __int64 (*v3)(void); // rax

  v2 = *(_QWORD *)this;
  *((_OWORD *)this + 1) = *(_OWORD *)a2;
  v3 = *(__int64 (**)(void))(v2 + 40);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 9) = *((_OWORD *)a2 + 8);
  *((_OWORD *)this + 10) = *((_OWORD *)a2 + 9);
  return v3();
}
