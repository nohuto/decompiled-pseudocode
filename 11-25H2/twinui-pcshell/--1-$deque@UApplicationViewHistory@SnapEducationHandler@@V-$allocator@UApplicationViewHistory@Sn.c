/*
 * XREFs of ??1?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAA@XZ @ 0x180579FB0
 * Callers:
 *     ??1SnapEducationHandler@@UEAA@XZ @ 0x18057A4CC (--1SnapEducationHandler@@UEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@AEAAXXZ @ 0x1805806F0 (-_Tidy@-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewHistor.c)
 */

void __fastcall std::deque<SnapEducationHandler::ApplicationViewHistory>::~deque<SnapEducationHandler::ApplicationViewHistory>(
        void **a1)
{
  void *v2; // rcx

  std::deque<SnapEducationHandler::ApplicationViewHistory>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x10);
}
