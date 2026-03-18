/*
 * XREFs of ?_DisposeThis@AUTO_TGO@@CAXPEAX@Z @ 0x1401CCBB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall AUTO_TGO::_DisposeThis(_DWORD *a1)
{
  void (__fastcall **v1)(_DWORD *, _QWORD); // rax

  v1 = *(void (__fastcall ***)(_DWORD *, _QWORD))a1;
  a1[2] = 0;
  (*v1)(a1, 0LL);
}
