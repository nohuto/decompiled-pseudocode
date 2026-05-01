/*
 * XREFs of ?GetRegistration@WindowWrapperBase@@UEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@XZ @ 0x1804303C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall WindowWrapperBase::GetRegistration(__int64 a1, _QWORD *a2)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 224LL))(*(_QWORD *)(a1 + 264));
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(a2, (_QWORD *)(a1 + 320));
  return a2;
}
