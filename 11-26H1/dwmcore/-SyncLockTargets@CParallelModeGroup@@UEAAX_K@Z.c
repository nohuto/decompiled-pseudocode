/*
 * XREFs of ?SyncLockTargets@CParallelModeGroup@@UEAAX_K@Z @ 0x1801CFDC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CParallelModeGroup::SyncLockTargets(CParallelModeGroup *this, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // rsi

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  v4 = (_QWORD *)*((_QWORD *)this + 3);
  while ( v2 != v4 )
  {
    v5 = *v2;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v2 + 104LL))(*v2, a2, 1LL) )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 112LL))(v5, 1LL);
    ++v2;
  }
}
