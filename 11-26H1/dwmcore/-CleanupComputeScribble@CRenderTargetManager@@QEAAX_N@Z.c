/*
 * XREFs of ?CleanupComputeScribble@CRenderTargetManager@@QEAAX_N@Z @ 0x18022DB98
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x18002E4D0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetManager::CleanupComputeScribble(CRenderTargetManager *this, __int64 a2)
{
  char v2; // bp
  _QWORD *v3; // rbx
  _QWORD *v5; // rdi

  *((_BYTE *)this + 744) = 1;
  v2 = a2;
  v3 = (_QWORD *)*((_QWORD *)this + 3);
  v5 = (_QWORD *)*((_QWORD *)this + 4);
  while ( v3 != v5 )
  {
    LOBYTE(a2) = v2;
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v3 + 248LL))(*v3, a2);
    ++v3;
  }
  CRenderTargetManager::EndTargetEnumeration(this);
}
